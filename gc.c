/**********************************************************************

  gc.c -

  $Author: akr $
  created at: Tue Oct  5 09:44:46 JST 1993

  Copyright (C) 1993-2007 Yukihiro Matsumoto
  Copyright (C) 2000  Network Applied Communication Laboratory, Inc.
  Copyright (C) 2000  Information-technology Promotion Agency, Japan

**********************************************************************/

#include "ruby/ruby.h"
#include "ruby/signal.h"
#include "ruby/st.h"
#include "ruby/node.h"
#include "ruby/re.h"
#include "ruby/io.h"
#include "ruby/util.h"
#include "eval_intern.h"
#include "vm_core.h"
#include "gc.h"
#include <stdio.h>
#include <setjmp.h>
#include <sys/types.h>

#ifdef HAVE_SYS_TIME_H
#include <sys/time.h>
#endif

#ifdef HAVE_SYS_RESOURCE_H
#include <sys/resource.h>
#endif

#if defined _WIN32 || defined __CYGWIN__
#include <windows.h>
#endif

#ifdef HAVE_VALGRIND_MEMCHECK_H
# include <valgrind/memcheck.h>
# ifndef VALGRIND_MAKE_MEM_DEFINED
#  define VALGRIND_MAKE_MEM_DEFINED(p, n) VALGRIND_MAKE_READABLE(p, n)
# endif
# ifndef VALGRIND_MAKE_MEM_UNDEFINED
#  define VALGRIND_MAKE_MEM_UNDEFINED(p, n) VALGRIND_MAKE_WRITABLE(p, n)
# endif
#else
# define VALGRIND_MAKE_MEM_DEFINED(p, n) /* empty */
# define VALGRIND_MAKE_MEM_UNDEFINED(p, n) /* empty */
#endif

int rb_io_fptr_finalize(struct rb_io_t*);

#define rb_setjmp(env) RUBY_SETJMP(env)
#define rb_jmp_buf rb_jmpbuf_t

/* Make alloca work the best possible way.  */
#ifdef __GNUC__
# ifndef atarist
#  ifndef alloca
#   define alloca __builtin_alloca
#  endif
# endif /* atarist */
#else
# ifdef HAVE_ALLOCA_H
#  include <alloca.h>
# else
#  ifdef _AIX
 #pragma alloca
#  else
#   ifndef alloca /* predefined by HP cc +Olibcalls */
void *alloca ();
#   endif
#  endif /* AIX */
# endif /* HAVE_ALLOCA_H */
#endif /* __GNUC__ */

#ifndef GC_MALLOC_LIMIT
#if defined(MSDOS) || defined(__human68k__)
#define GC_MALLOC_LIMIT 200000
#else
#define GC_MALLOC_LIMIT 8000000
#endif
#endif

#define nomem_error GET_VM()->special_exceptions[ruby_error_nomemory]

#define MARK_STACK_MAX 1024

int ruby_gc_debug_indent = 0;

#undef GC_DEBUG

#if defined(_MSC_VER) || defined(__BORLANDC__) || defined(__CYGWIN__)
#pragma pack(push, 1) /* magic for reducing sizeof(RVALUE): 24 -> 20 */
#endif

typedef struct RVALUE {
    union {
	struct {
	    VALUE flags;		/* always 0 for freed obj */
	    struct RVALUE *next;
	} free;
	struct RBasic  basic;
	struct RObject object;
	struct RClass  klass;
	struct RFloat  flonum;
	struct RString string;
	struct RArray  array;
	struct RRegexp regexp;
	struct RHash   hash;
	struct RData   data;
	struct RStruct rstruct;
	struct RBignum bignum;
	struct RFile   file;
	struct RNode   node;
	struct RMatch  match;
	struct RRational rational;
	struct RComplex complex;
    } as;
#ifdef GC_DEBUG
    char *file;
    int   line;
#endif
} RVALUE;

#if defined(_MSC_VER) || defined(__BORLANDC__) || defined(__CYGWIN__)
#pragma pack(pop)
#endif

struct heaps_slot {
    void *membase;
    RVALUE *slot;
    int limit;
};

#define HEAP_MIN_SLOTS 10000
#define FREE_MIN  4096

struct gc_list {
    VALUE *varptr;
    struct gc_list *next;
};

#define CALC_EXACT_MALLOC_SIZE 0

typedef struct rb_objspace {
    struct {
	size_t limit;
	size_t increase;
#if CALC_EXACT_MALLOC_SIZE
	size_t allocated_size;
	size_t allocations;
#endif
    } malloc_params;
    struct {
	size_t increment;
	struct heaps_slot *ptr;
	size_t length;
	size_t used;
	RVALUE *freelist;
	RVALUE *range[2];
	RVALUE *freed;
    } heap;
    struct {
	int dont_gc;
	int during_gc;
    } flags;
    struct {
	int need_call;
	st_table *table;
	RVALUE *deferred;
    } final;
    struct {
	VALUE buffer[MARK_STACK_MAX];
	VALUE *ptr;
	int overflow;
    } markstack;
    struct gc_list *global_list;
    unsigned int count;
    int gc_stress;
} rb_objspace_t;

#if defined(ENABLE_VM_OBJSPACE) && ENABLE_VM_OBJSPACE
#define rb_objspace (*GET_VM()->objspace)
static int ruby_initial_gc_stress = 0;
int *ruby_initial_gc_stress_ptr = &ruby_initial_gc_stress;
#else
static rb_objspace_t rb_objspace = {{GC_MALLOC_LIMIT}, {HEAP_MIN_SLOTS}};
int *ruby_initial_gc_stress_ptr = &rb_objspace.gc_stress;
#endif
#define malloc_limit		objspace->malloc_params.limit
#define malloc_increase 	objspace->malloc_params.increase
#define heap_slots		objspace->heap.slots
#define heaps			objspace->heap.ptr
#define heaps_length		objspace->heap.length
#define heaps_used		objspace->heap.used
#define freelist		objspace->heap.freelist
#define lomem			objspace->heap.range[0]
#define himem			objspace->heap.range[1]
#define heaps_inc		objspace->heap.increment
#define heaps_freed		objspace->heap.freed
#define dont_gc 		objspace->flags.dont_gc
#define during_gc		objspace->flags.during_gc
#define need_call_final 	objspace->final.need_call
#define finalizer_table 	objspace->final.table
#define deferred_final_list	objspace->final.deferred
#define mark_stack		objspace->markstack.buffer
#define mark_stack_ptr		objspace->markstack.ptr
#define mark_stack_overflow	objspace->markstack.overflow
#define global_List		objspace->global_list
#define ruby_gc_stress		objspace->gc_stress

#if defined(ENABLE_VM_OBJSPACE) && ENABLE_VM_OBJSPACE
rb_objspace_t *
rb_objspace_alloc(void)
{
    rb_objspace_t *objspace = malloc(sizeof(rb_objspace_t));
    memset(objspace, 0, sizeof(*objspace));
    malloc_limit = GC_MALLOC_LIMIT;
    ruby_gc_stress = ruby_initial_gc_stress;

    return objspace;
}
#endif

/* tiny heap size */
/* 32KB */
/*#define HEAP_SIZE 0x8000 */
/* 128KB */
/*#define HEAP_SIZE 0x20000 */
/* 64KB */
/*#define HEAP_SIZE 0x10000 */
/* 16KB */
#define HEAP_SIZE 0x4000
/* 8KB */
/*#define HEAP_SIZE 0x2000 */
/* 4KB */
/*#define HEAP_SIZE 0x1000 */
/* 2KB */
/*#define HEAP_SIZE 0x800 */

#define HEAP_OBJ_LIMIT (HEAP_SIZE / sizeof(struct RVALUE))

extern st_table *rb_class_tbl;

int ruby_disable_gc_stress = 0;

static void run_final(rb_objspace_t *objspace, VALUE obj);
static int garbage_collect(rb_objspace_t *objspace);

void
rb_global_variable(VALUE *var)
{
    rb_gc_register_address(var);
}

void
rb_memerror(void)
{
    rb_thread_t *th = GET_THREAD();
    if (!nomem_error ||
	(rb_thread_raised_p(th, RAISED_NOMEMORY) && rb_safe_level() < 4)) {
	fprintf(stderr, "[FATAL] failed to allocate memory\n");
	exit(EXIT_FAILURE);
    }
    if (rb_thread_raised_p(th, RAISED_NOMEMORY)) {
	rb_thread_raised_clear(th);
	GET_THREAD()->errinfo = nomem_error;
	JUMP_TAG(TAG_RAISE);
    }
    rb_thread_raised_set(th, RAISED_NOMEMORY);
    rb_exc_raise(nomem_error);
}

/*
 *  call-seq:
 *    GC.stress                 => true or false
 *
 *  returns current status of GC stress mode.
 */

static VALUE
gc_stress_get(VALUE self)
{
    rb_objspace_t *objspace = &rb_objspace;
    return ruby_gc_stress ? Qtrue : Qfalse;
}

/*
 *  call-seq:
 *    GC.stress = bool          => bool
 *
 *  updates GC stress mode.
 *
 *  When GC.stress = true, GC is invoked for all GC opportunity:
 *  all memory and object allocation.
 *
 *  Since it makes Ruby very slow, it is only for debugging.
 */

static VALUE
gc_stress_set(VALUE self, VALUE bool)
{
    rb_objspace_t *objspace = &rb_objspace;
    rb_secure(2);
    ruby_gc_stress = RTEST(bool);
    return bool;
}

static void *
vm_xmalloc(rb_objspace_t *objspace, size_t size)
{
    void *mem;

    if (size < 0) {
	rb_raise(rb_eNoMemError, "negative allocation size (or too big)");
    }
    if (size == 0) size = 1;

#if CALC_EXACT_MALLOC_SIZE
    size += sizeof(size_t);
#endif

    if ((ruby_gc_stress && !ruby_disable_gc_stress) ||
	(malloc_increase+size) > malloc_limit) {
	garbage_collect(objspace);
    }
    RUBY_CRITICAL(mem = malloc(size));
    if (!mem) {
	if (garbage_collect(objspace)) {
	    RUBY_CRITICAL(mem = malloc(size));
	}
	if (!mem) {
	    rb_memerror();
	}
    }
    malloc_increase += size;

#if CALC_EXACT_MALLOC_SIZE
    objspace->malloc_params.allocated_size += size;
    objspace->malloc_params.allocations++;
    ((size_t *)mem)[0] = size;
    mem = (size_t *)mem + 1;
#endif

    return mem;
}

static void *
vm_xrealloc(rb_objspace_t *objspace, void *ptr, size_t size)
{
    void *mem;

    if (size < 0) {
	rb_raise(rb_eArgError, "negative re-allocation size");
    }
    if (!ptr) return ruby_xmalloc(size);
    if (size == 0) size = 1;
    if (ruby_gc_stress && !ruby_disable_gc_stress) garbage_collect(objspace);

#if CALC_EXACT_MALLOC_SIZE
    size += sizeof(size_t);
    objspace->malloc_params.allocated_size -= size;
    ptr = (size_t *)ptr - 1;
#endif

    RUBY_CRITICAL(mem = realloc(ptr, size));
    if (!mem) {
	if (garbage_collect(objspace)) {
	    RUBY_CRITICAL(mem = realloc(ptr, size));
	}
	if (!mem) {
	    rb_memerror();
        }
    }
    malloc_increase += size;

#if CALC_EXACT_MALLOC_SIZE
    objspace->malloc_params.allocated_size += size;
    ((size_t *)mem)[0] = size;
    mem = (size_t *)mem + 1;
#endif

    return mem;
}

static void
vm_xfree(rb_objspace_t *objspace, void *ptr)
{
#if CALC_EXACT_MALLOC_SIZE
    size_t size;
    ptr = ((size_t *)ptr) - 1;
    size = ((size_t*)ptr)[0];
    objspace->malloc_params.allocated_size -= size;
    objspace->malloc_params.allocations--;
#endif

    RUBY_CRITICAL(free(ptr));
}

void *
ruby_xmalloc(size_t size)
{
    return vm_xmalloc(&rb_objspace, size);
}

void *
ruby_xmalloc2(size_t n, size_t size)
{
    size_t len = size * n;
    if (n != 0 && size != len / n) {
	rb_raise(rb_eArgError, "malloc: possible integer overflow");
    }
    return vm_xmalloc(&rb_objspace, len);
}

void *
ruby_xcalloc(size_t n, size_t size)
{
    void *mem = ruby_xmalloc2(n, size);
    memset(mem, 0, n * size);

    return mem;
}

void *
ruby_xrealloc(void *ptr, size_t size)
{
    return vm_xrealloc(&rb_objspace, ptr, size);
}

void *
ruby_xrealloc2(void *ptr, size_t n, size_t size)
{
    size_t len = size * n;
    if (n != 0 && size != len / n) {
	rb_raise(rb_eArgError, "realloc: possible integer overflow");
    }
    return ruby_xrealloc(ptr, len);
}

void
ruby_xfree(void *x)
{
    if (x)
      vm_xfree(&rb_objspace, x);
}


/*
 *  call-seq:
 *     GC.enable    => true or false
 *
 *  Enables garbage collection, returning <code>true</code> if garbage
 *  collection was previously disabled.
 *
 *     GC.disable   #=> false
 *     GC.enable    #=> true
 *     GC.enable    #=> false
 *
 */

VALUE
rb_gc_enable(void)
{
    rb_objspace_t *objspace = &rb_objspace;
    int old = dont_gc;

    dont_gc = Qfalse;
    return old;
}

/*
 *  call-seq:
 *     GC.disable    => true or false
 *
 *  Disables garbage collection, returning <code>true</code> if garbage
 *  collection was already disabled.
 *
 *     GC.disable   #=> false
 *     GC.disable   #=> true
 *
 */

VALUE
rb_gc_disable(void)
{
    rb_objspace_t *objspace = &rb_objspace;
    int old = dont_gc;

    dont_gc = Qtrue;
    return old;
}

VALUE rb_mGC;

void
rb_register_mark_object(VALUE obj)
{
    VALUE ary = GET_THREAD()->vm->mark_object_ary;
    rb_ary_push(ary, obj);
}

void
rb_gc_register_address(VALUE *addr)
{
    rb_objspace_t *objspace = &rb_objspace;
    struct gc_list *tmp;

    tmp = ALLOC(struct gc_list);
    tmp->next = global_List;
    tmp->varptr = addr;
    global_List = tmp;
}

void
rb_gc_unregister_address(VALUE *addr)
{
    rb_objspace_t *objspace = &rb_objspace;
    struct gc_list *tmp = global_List;

    if (tmp->varptr == addr) {
	global_List = tmp->next;
	xfree(tmp);
	return;
    }
    while (tmp->next) {
	if (tmp->next->varptr == addr) {
	    struct gc_list *t = tmp->next;

	    tmp->next = tmp->next->next;
	    xfree(t);
	    break;
	}
	tmp = tmp->next;
    }
}


static void
allocate_heaps(rb_objspace_t *objspace, size_t next_heaps_length)
{
    struct heaps_slot *p;
    size_t size;

    size = next_heaps_length*sizeof(struct heaps_slot);
    RUBY_CRITICAL(
		  if (heaps_used > 0) {
		      p = (struct heaps_slot *)realloc(heaps, size);
		      if (p) heaps = p;
		  }
		  else {
		      p = heaps = (struct heaps_slot *)malloc(size);
		  }
		  );
    if (p == 0) rb_memerror();
    heaps_length = next_heaps_length;
}

static void
assign_heap_slot(rb_objspace_t *objspace)
{
    RVALUE *p, *pend, *membase;
    size_t hi, lo, mid;
    int objs;
	
    objs = HEAP_OBJ_LIMIT;
    RUBY_CRITICAL(p = (RVALUE*)malloc(HEAP_SIZE));
    if (p == 0)
	rb_memerror();

    membase = p;
    if ((VALUE)p % sizeof(RVALUE) != 0) {
	p = (RVALUE*)((VALUE)p + sizeof(RVALUE) - ((VALUE)p % sizeof(RVALUE)));
	if ((HEAP_SIZE - HEAP_OBJ_LIMIT * sizeof(RVALUE)) < ((char*)p - (char*)membase)) {
	    objs--;
	}
    }
    	

    lo = 0;
    hi = heaps_used;
    while (lo < hi) {
	register RVALUE *mid_membase;
	mid = (lo + hi) / 2;
	mid_membase = heaps[mid].membase;
	if (mid_membase < membase) {
	    lo = mid + 1;
	}
	else if (mid_membase > membase) {
	    hi = mid;
	}
	else {
	    rb_bug("same heap slot is allocated: %p at %"PRIuVALUE, membase, (VALUE)mid);
	}
    }
    if (hi < heaps_used) {
	MEMMOVE(&heaps[hi+1], &heaps[hi], struct heaps_slot, heaps_used - hi);
    }
    heaps[hi].membase = membase;
    heaps[hi].slot = p;
    heaps[hi].limit = objs;
    pend = p + objs;
    if (lomem == 0 || lomem > p) lomem = p;
    if (himem < pend) himem = pend;
    heaps_used++;

    while (p < pend) {
	p->as.free.flags = 0;
	p->as.free.next = freelist;
	freelist = p;
	p++;
    }
}

static void
init_heap(rb_objspace_t *objspace)
{
    size_t add, i;

    add = HEAP_MIN_SLOTS / HEAP_OBJ_LIMIT;

    if ((heaps_used + add) > heaps_length) {
    	allocate_heaps(objspace, heaps_used + add);
    }

    for (i = 0; i < add; i++) {
    	assign_heap_slot(objspace);
    }
    heaps_inc = 0;
}


static void
set_heaps_increment(rb_objspace_t *objspace)
{
    size_t next_heaps_length = heaps_used * 1.8;
    heaps_inc = next_heaps_length - heaps_used;

    if (next_heaps_length > heaps_length) {
	allocate_heaps(objspace, next_heaps_length);
    }
}

static int
heaps_increment(rb_objspace_t *objspace)
{
    if (heaps_inc > 0) {
	assign_heap_slot(objspace);
	heaps_inc--;
	return Qtrue;
    }
    return Qfalse;
}

#define RANY(o) ((RVALUE*)(o))

static VALUE
rb_newobj_from_heap(rb_objspace_t *objspace)
{
    VALUE obj;
	
    if ((ruby_gc_stress && !ruby_disable_gc_stress) || !freelist) {
    	if (!heaps_increment(objspace) && !garbage_collect(objspace)) {
	    rb_memerror();
	}
    }

    obj = (VALUE)freelist;
    freelist = freelist->as.free.next;

    MEMZERO((void*)obj, RVALUE, 1);
#ifdef GC_DEBUG
    RANY(obj)->file = rb_sourcefile();
    RANY(obj)->line = rb_sourceline();
#endif

    return obj;
}

#if USE_VALUE_CACHE
static VALUE
rb_fill_value_cache(rb_thread_t *th)
{
    rb_objspace_t *objspace = &rb_objspace;
    int i;
    VALUE rv;

    /* LOCK */
    for (i=0; i<RUBY_VM_VALUE_CACHE_SIZE; i++) {
	VALUE v = rb_newobj_from_heap(objspace);

	th->value_cache[i] = v;
	RBASIC(v)->flags = FL_MARK;
    }
    th->value_cache_ptr = &th->value_cache[0];
    rv = rb_newobj_from_heap(objspace);
    /* UNLOCK */
    return rv;
}
#endif

VALUE
rb_newobj(void)
{
#if USE_VALUE_CACHE
    rb_thread_t *th = GET_THREAD();
    VALUE v = *th->value_cache_ptr;
#if defined(ENABLE_VM_OBJSPACE) && ENABLE_VM_OBJSPACE
    rb_objspace_t *objspace = th->vm->objspace;
#else
    rb_objspace_t *objspace = &rb_objspace;
#endif

    if (during_gc)
        rb_bug("object allocation during garbage collection phase");

    if (v) {
	RBASIC(v)->flags = 0;
	th->value_cache_ptr++;
    }
    else {
	v = rb_fill_value_cache(th);
    }

#if defined(GC_DEBUG)
    printf("cache index: %d, v: %p, th: %p\n",
	   th->value_cache_ptr - th->value_cache, v, th);
#endif
    return v;
#else
    rb_objspace_t *objspace = &rb_objspace;
    return rb_newobj_from_heap(objspace);
#endif
}

NODE*
rb_node_newnode(enum node_type type, VALUE a0, VALUE a1, VALUE a2)
{
    NODE *n = (NODE*)rb_newobj();

    n->flags |= T_NODE;
    nd_set_type(n, type);

    n->u1.value = a0;
    n->u2.value = a1;
    n->u3.value = a2;

    return n;
}

VALUE
rb_data_object_alloc(VALUE klass, void *datap, RUBY_DATA_FUNC dmark, RUBY_DATA_FUNC dfree)
{
    NEWOBJ(data, struct RData);
    if (klass) Check_Type(klass, T_CLASS);
    OBJSETUP(data, klass, T_DATA);
    data->data = datap;
    data->dfree = dfree;
    data->dmark = dmark;

    return (VALUE)data;
}

#ifdef __ia64
#define SET_STACK_END (SET_MACHINE_STACK_END(&th->machine_stack_end), th->machine_register_stack_end = rb_ia64_bsp())
#else
#define SET_STACK_END SET_MACHINE_STACK_END(&th->machine_stack_end)
#endif

#define STACK_START (th->machine_stack_start)
#define STACK_END (th->machine_stack_end)
#define STACK_LEVEL_MAX (th->machine_stack_maxsize/sizeof(VALUE))

#if STACK_GROW_DIRECTION < 0
# define STACK_LENGTH  (STACK_START - STACK_END)
#elif STACK_GROW_DIRECTION > 0
# define STACK_LENGTH  (STACK_END - STACK_START + 1)
#else
# define STACK_LENGTH  ((STACK_END < STACK_START) ? STACK_START - STACK_END\
                                           : STACK_END - STACK_START + 1)
#endif
#if !STACK_GROW_DIRECTION
int ruby_stack_grow_direction;
int
ruby_get_stack_grow_direction(VALUE *addr)
{
    rb_thread_t *th = GET_THREAD();
    SET_STACK_END;

    if (STACK_END > addr) return ruby_stack_grow_direction = 1;
    return ruby_stack_grow_direction = -1;
}
#endif

#define GC_WATER_MARK 512

int
ruby_stack_length(VALUE **p)
{
    rb_thread_t *th = GET_THREAD();
    SET_STACK_END;
    if (p) *p = STACK_UPPER(STACK_END, STACK_START, STACK_END);
    return STACK_LENGTH;
}

int
ruby_stack_check(void)
{
    int ret;
    rb_thread_t *th = GET_THREAD();
    SET_STACK_END;
    ret = STACK_LENGTH > STACK_LEVEL_MAX - GC_WATER_MARK;
#ifdef __ia64
    if (!ret) {
        ret = (VALUE*)rb_ia64_bsp() - th->machine_register_stack_start >
              th->machine_register_stack_maxsize/sizeof(VALUE) - GC_WATER_MARK;
    }
#endif
    return ret;
}

static void
init_mark_stack(rb_objspace_t *objspace)
{
    mark_stack_overflow = 0;
    mark_stack_ptr = mark_stack;
}

#define MARK_STACK_EMPTY (mark_stack_ptr == mark_stack)

static void gc_mark(rb_objspace_t *objspace, VALUE ptr, int lev);
static void gc_mark_children(rb_objspace_t *objspace, VALUE ptr, int lev);

static void
gc_mark_all(rb_objspace_t *objspace)
{
    RVALUE *p, *pend;
    size_t i;

    init_mark_stack(objspace);
    for (i = 0; i < heaps_used; i++) {
	p = heaps[i].slot; pend = p + heaps[i].limit;
	while (p < pend) {
	    if ((p->as.basic.flags & FL_MARK) &&
		(p->as.basic.flags != FL_MARK)) {
		gc_mark_children(objspace, (VALUE)p, 0);
	    }
	    p++;
	}
    }
}

static void
gc_mark_rest(rb_objspace_t *objspace)
{
    VALUE tmp_arry[MARK_STACK_MAX];
    VALUE *p;

    p = (mark_stack_ptr - mark_stack) + tmp_arry;
    MEMCPY(tmp_arry, mark_stack, VALUE, p - tmp_arry);

    init_mark_stack(objspace);
    while (p != tmp_arry) {
	p--;
	gc_mark_children(objspace, *p, 0);
    }
}

static inline int
is_pointer_to_heap(rb_objspace_t *objspace, void *ptr)
{
    register RVALUE *p = RANY(ptr);
    register struct heaps_slot *heap;
    register size_t hi, lo, mid;

    if (p < lomem || p > himem) return Qfalse;
    if ((VALUE)p % sizeof(RVALUE) != 0) return Qfalse;

    /* check if p looks like a pointer using bsearch*/
    lo = 0;
    hi = heaps_used;
    while (lo < hi) {
	mid = (lo + hi) / 2;
	heap = &heaps[mid];
	if (heap->slot <= p) {
	    if (p < heap->slot + heap->limit)
		return Qtrue;
	    lo = mid + 1;
	}
	else {
	    hi = mid;
	}
    }
    return Qfalse;
}

static void
mark_locations_array(rb_objspace_t *objspace, register VALUE *x, register long n)
{
    VALUE v;
    while (n--) {
        v = *x;
        VALGRIND_MAKE_MEM_DEFINED(&v, sizeof(v));
	if (is_pointer_to_heap(objspace, (void *)v)) {
	    gc_mark(objspace, v, 0);
	}
	x++;
    }
}

static void
gc_mark_locations(rb_objspace_t *objspace, VALUE *start, VALUE *end)
{
    long n;

    if (end <= start) return;
    n = end - start;
    mark_locations_array(&rb_objspace, start,n);
}

void
rb_gc_mark_locations(VALUE *start, VALUE *end)
{
    gc_mark_locations(&rb_objspace, start, end);
}

#define rb_gc_mark_locations(start, end) gc_mark_locations(objspace, start, end)

struct mark_tbl_arg {
    rb_objspace_t *objspace;
    int lev;
};

static int
mark_entry(ID key, VALUE value, st_data_t data)
{
    struct mark_tbl_arg *arg = (void*)data;
    gc_mark(arg->objspace, value, arg->lev);
    return ST_CONTINUE;
}

static void
mark_tbl(rb_objspace_t *objspace, st_table *tbl, int lev)
{
    struct mark_tbl_arg arg;
    if (!tbl) return;
    arg.objspace = objspace;
    arg.lev = lev;
    st_foreach(tbl, mark_entry, (st_data_t)&arg);
}

void
rb_mark_tbl(st_table *tbl)
{
    mark_tbl(&rb_objspace, tbl, 0);
}

static int
mark_key(VALUE key, VALUE value, st_data_t data)
{
    struct mark_tbl_arg *arg = (void*)data;
    gc_mark(arg->objspace, key, arg->lev);
    return ST_CONTINUE;
}

static void
mark_set(rb_objspace_t *objspace, st_table *tbl, int lev)
{
    struct mark_tbl_arg arg;
    if (!tbl) return;
    arg.objspace = objspace;
    arg.lev = lev;
    st_foreach(tbl, mark_key, (st_data_t)&arg);
}

void
rb_mark_set(st_table *tbl)
{
    mark_set(&rb_objspace, tbl, 0);
}

static int
mark_keyvalue(VALUE key, VALUE value, st_data_t data)
{
    struct mark_tbl_arg *arg = (void*)data;
    gc_mark(arg->objspace, key, arg->lev);
    gc_mark(arg->objspace, value, arg->lev);
    return ST_CONTINUE;
}

static void
mark_hash(rb_objspace_t *objspace, st_table *tbl, int lev)
{
    struct mark_tbl_arg arg;
    if (!tbl) return;
    arg.objspace = objspace;
    arg.lev = lev;
    st_foreach(tbl, mark_keyvalue, (st_data_t)&arg);
}

void
rb_mark_hash(st_table *tbl)
{
    mark_hash(&rb_objspace, tbl, 0);
}

void
rb_gc_mark_maybe(VALUE obj)
{
    if (is_pointer_to_heap(&rb_objspace, (void *)obj)) {
	gc_mark(&rb_objspace, obj, 0);
    }
}

#define GC_LEVEL_MAX 250

static void
gc_mark(rb_objspace_t *objspace, VALUE ptr, int lev)
{
    register RVALUE *obj;

    obj = RANY(ptr);
    if (rb_special_const_p(ptr)) return; /* special const not marked */
    if (obj->as.basic.flags == 0) return;       /* free cell */
    if (obj->as.basic.flags & FL_MARK) return;  /* already marked */
    obj->as.basic.flags |= FL_MARK;

    if (lev > GC_LEVEL_MAX || (lev == 0 && ruby_stack_check())) {
	if (!mark_stack_overflow) {
	    if (mark_stack_ptr - mark_stack < MARK_STACK_MAX) {
		*mark_stack_ptr = ptr;
		mark_stack_ptr++;
	    }
	    else {
		mark_stack_overflow = 1;
	    }
	}
	return;
    }
    gc_mark_children(objspace, ptr, lev+1);
}

void
rb_gc_mark(VALUE ptr)
{
    gc_mark(&rb_objspace, ptr, 0);
}

static void
gc_mark_children(rb_objspace_t *objspace, VALUE ptr, int lev)
{
    register RVALUE *obj = RANY(ptr);

    goto marking;		/* skip */

  again:
    obj = RANY(ptr);
    if (rb_special_const_p(ptr)) return; /* special const not marked */
    if (obj->as.basic.flags == 0) return;       /* free cell */
    if (obj->as.basic.flags & FL_MARK) return;  /* already marked */
    obj->as.basic.flags |= FL_MARK;

  marking:
    if (FL_TEST(obj, FL_EXIVAR)) {
	rb_mark_generic_ivar(ptr);
    }

    switch (obj->as.basic.flags & T_MASK) {
      case T_NIL:
      case T_FIXNUM:
	rb_bug("rb_gc_mark() called for broken object");
	break;

      case T_NODE:
	switch (nd_type(obj)) {
	  case NODE_IF:		/* 1,2,3 */
	  case NODE_FOR:
	  case NODE_ITER:
	  case NODE_WHEN:
	  case NODE_MASGN:
	  case NODE_RESCUE:
	  case NODE_RESBODY:
	  case NODE_CLASS:
	  case NODE_BLOCK_PASS:
	    gc_mark(objspace, (VALUE)obj->as.node.u2.node, lev);
	    /* fall through */
	  case NODE_BLOCK:	/* 1,3 */
	  case NODE_OPTBLOCK:
	  case NODE_ARRAY:
	  case NODE_DSTR:
	  case NODE_DXSTR:
	  case NODE_DREGX:
	  case NODE_DREGX_ONCE:
	  case NODE_ENSURE:
	  case NODE_CALL:
	  case NODE_DEFS:
	  case NODE_OP_ASGN1:
	  case NODE_ARGS:
	    gc_mark(objspace, (VALUE)obj->as.node.u1.node, lev);
	    /* fall through */
	  case NODE_SUPER:	/* 3 */
	  case NODE_FCALL:
	  case NODE_DEFN:
	  case NODE_ARGS_AUX:
	    ptr = (VALUE)obj->as.node.u3.node;
	    goto again;

	  case NODE_METHOD:	/* 1,2 */
	  case NODE_WHILE:
	  case NODE_UNTIL:
	  case NODE_AND:
	  case NODE_OR:
	  case NODE_CASE:
	  case NODE_SCLASS:
	  case NODE_DOT2:
	  case NODE_DOT3:
	  case NODE_FLIP2:
	  case NODE_FLIP3:
	  case NODE_MATCH2:
	  case NODE_MATCH3:
	  case NODE_OP_ASGN_OR:
	  case NODE_OP_ASGN_AND:
	  case NODE_MODULE:
	  case NODE_ALIAS:
	  case NODE_VALIAS:
	  case NODE_ARGSCAT:
	    gc_mark(objspace, (VALUE)obj->as.node.u1.node, lev);
	    /* fall through */
	  case NODE_FBODY:	/* 2 */
	  case NODE_GASGN:
	  case NODE_LASGN:
	  case NODE_DASGN:
	  case NODE_DASGN_CURR:
	  case NODE_IASGN:
	  case NODE_IASGN2:
	  case NODE_CVASGN:
	  case NODE_COLON3:
	  case NODE_OPT_N:
	  case NODE_EVSTR:
	  case NODE_UNDEF:
	  case NODE_POSTEXE:
	    ptr = (VALUE)obj->as.node.u2.node;
	    goto again;

	  case NODE_HASH:	/* 1 */
	  case NODE_LIT:
	  case NODE_STR:
	  case NODE_XSTR:
	  case NODE_DEFINED:
	  case NODE_MATCH:
	  case NODE_RETURN:
	  case NODE_BREAK:
	  case NODE_NEXT:
	  case NODE_YIELD:
	  case NODE_COLON2:
	  case NODE_SPLAT:
	  case NODE_TO_ARY:
	    ptr = (VALUE)obj->as.node.u1.node;
	    goto again;

	  case NODE_SCOPE:	/* 2,3 */
	  case NODE_CDECL:
	  case NODE_OPT_ARG:
	    gc_mark(objspace, (VALUE)obj->as.node.u3.node, lev);
	    ptr = (VALUE)obj->as.node.u2.node;
	    goto again;

	  case NODE_ZARRAY:	/* - */
	  case NODE_ZSUPER:
	  case NODE_CFUNC:
	  case NODE_VCALL:
	  case NODE_GVAR:
	  case NODE_LVAR:
	  case NODE_DVAR:
	  case NODE_IVAR:
	  case NODE_CVAR:
	  case NODE_NTH_REF:
	  case NODE_BACK_REF:
	  case NODE_REDO:
	  case NODE_RETRY:
	  case NODE_SELF:
	  case NODE_NIL:
	  case NODE_TRUE:
	  case NODE_FALSE:
	  case NODE_ERRINFO:
	  case NODE_ATTRSET:
	  case NODE_BLOCK_ARG:
	    break;
	  case NODE_ALLOCA:
	    mark_locations_array(objspace,
				 (VALUE*)obj->as.node.u1.value,
				 obj->as.node.u3.cnt);
	    ptr = (VALUE)obj->as.node.u2.node;
	    goto again;

	  default:		/* unlisted NODE */
	    if (is_pointer_to_heap(objspace, obj->as.node.u1.node)) {
		gc_mark(objspace, (VALUE)obj->as.node.u1.node, lev);
	    }
	    if (is_pointer_to_heap(objspace, obj->as.node.u2.node)) {
		gc_mark(objspace, (VALUE)obj->as.node.u2.node, lev);
	    }
	    if (is_pointer_to_heap(objspace, obj->as.node.u3.node)) {
		gc_mark(objspace, (VALUE)obj->as.node.u3.node, lev);
	    }
	}
	return;			/* no need to mark class. */
    }

    gc_mark(objspace, obj->as.basic.klass, lev);
    switch (obj->as.basic.flags & T_MASK) {
      case T_ICLASS:
      case T_CLASS:
      case T_MODULE:
	mark_tbl(objspace, RCLASS_M_TBL(obj), lev);
	mark_tbl(objspace, RCLASS_IV_TBL(obj), lev);
	ptr = RCLASS_SUPER(obj);
	goto again;

      case T_ARRAY:
	if (FL_TEST(obj, ELTS_SHARED)) {
	    ptr = obj->as.array.aux.shared;
	    goto again;
	}
	else {
	    long i, len = RARRAY_LEN(obj);
	    VALUE *ptr = RARRAY_PTR(obj);
	    for (i=0; i < len; i++) {
		gc_mark(objspace, *ptr++, lev);
	    }
	}
	break;

      case T_HASH:
	mark_hash(objspace, obj->as.hash.ntbl, lev);
	ptr = obj->as.hash.ifnone;
	goto again;

      case T_STRING:
#define STR_ASSOC FL_USER3   /* copied from string.c */
	if (FL_TEST(obj, RSTRING_NOEMBED) && FL_ANY(obj, ELTS_SHARED|STR_ASSOC)) {
	    ptr = obj->as.string.as.heap.aux.shared;
	    goto again;
	}
	break;

      case T_DATA:
	if (obj->as.data.dmark) (*obj->as.data.dmark)(DATA_PTR(obj));
	break;

      case T_OBJECT:
        {
            long i, len = ROBJECT_NUMIV(obj);
	    VALUE *ptr = ROBJECT_IVPTR(obj);
            for (i  = 0; i < len; i++) {
		gc_mark(objspace, *ptr++, lev);
            }
        }
	break;

      case T_FILE:
        if (obj->as.file.fptr)
            gc_mark(objspace, obj->as.file.fptr->tied_io_for_writing, lev);
        break;

      case T_REGEXP:
        gc_mark(objspace, obj->as.regexp.src, lev);
        break;

      case T_FLOAT:
      case T_BIGNUM:
	break;

      case T_MATCH:
	gc_mark(objspace, obj->as.match.regexp, lev);
	if (obj->as.match.str) {
	    ptr = obj->as.match.str;
	    goto again;
	}
	break;

      case T_RATIONAL:
	gc_mark(objspace, obj->as.rational.num, lev);
	gc_mark(objspace, obj->as.rational.den, lev);
	break;

      case T_COMPLEX:
	gc_mark(objspace, obj->as.complex.real, lev);
	gc_mark(objspace, obj->as.complex.image, lev);
	break;

      case T_STRUCT:
	{
	    long len = RSTRUCT_LEN(obj);
	    VALUE *ptr = RSTRUCT_PTR(obj);

	    while (len--) {
		gc_mark(objspace, *ptr++, lev);
	    }
	}
	break;

      default:
	rb_bug("rb_gc_mark(): unknown data type 0x%lx(%p) %s",
	       obj->as.basic.flags & T_MASK, obj,
	       is_pointer_to_heap(objspace, obj) ? "corrupted object" : "non object");
    }
}

static void obj_free(rb_objspace_t *, VALUE);

static void
finalize_list(rb_objspace_t *objspace, RVALUE *p)
{
    while (p) {
	RVALUE *tmp = p->as.free.next;
	run_final(objspace, (VALUE)p);
	if (!FL_TEST(p, FL_SINGLETON)) { /* not freeing page */
            VALGRIND_MAKE_MEM_UNDEFINED((void*)p, sizeof(RVALUE));
	    p->as.free.flags = 0;
	    p->as.free.next = freelist;
	    freelist = p;
	}
	p = tmp;
    }
}

static void
free_unused_heaps(rb_objspace_t *objspace)
{
    size_t i, j;
    RVALUE *last = 0;

    for (i = j = 1; j < heaps_used; i++) {
	if (heaps[i].limit == 0) {
	    if (!last) {
		last = heaps[i].membase;
	    }
	    else {
		free(heaps[i].membase);
	    }
	    heaps_used--;
	}
	else {
	    if (i != j) {
		heaps[j] = heaps[i];
	    }
	    j++;
	}
    }
    if (last) {
	if (last < heaps_freed) {
	    free(heaps_freed);
	    heaps_freed = last;
	}
	else {
	    free(last);
	}
    }
}

void rb_gc_abort_threads(void);

static void
gc_sweep(rb_objspace_t *objspace)
{
    RVALUE *p, *pend, *final_list;
    size_t freed = 0;
    size_t i;
    size_t live = 0, free_min = 0, do_heap_free = 0;

    do_heap_free = (heaps_used * HEAP_OBJ_LIMIT) * 0.65;
    free_min = (heaps_used * HEAP_OBJ_LIMIT)  * 0.2;
    if (free_min < FREE_MIN) {
	do_heap_free = heaps_used * HEAP_OBJ_LIMIT;
        free_min = FREE_MIN;
    }

    freelist = 0;
    final_list = deferred_final_list;
    deferred_final_list = 0;
    for (i = 0; i < heaps_used; i++) {
	int n = 0;
	RVALUE *free = freelist;
	RVALUE *final = final_list;

	p = heaps[i].slot; pend = p + heaps[i].limit;
	while (p < pend) {
	    if (!(p->as.basic.flags & FL_MARK)) {
		if (p->as.basic.flags) {
		    obj_free(objspace, (VALUE)p);
		}
		if (need_call_final && FL_TEST(p, FL_FINALIZE)) {
		    p->as.free.flags = FL_MARK; /* remain marked */
		    p->as.free.next = final_list;
		    final_list = p;
		}
		else {
                    VALGRIND_MAKE_MEM_UNDEFINED((void*)p, sizeof(RVALUE));
		    p->as.free.flags = 0;
		    p->as.free.next = freelist;
		    freelist = p;
		}
		n++;
	    }
	    else if (RBASIC(p)->flags == FL_MARK) {
		/* objects to be finalized */
		/* do nothing remain marked */
	    }
	    else {
		RBASIC(p)->flags &= ~FL_MARK;
		live++;
	    }
	    p++;
	}
	if (n == heaps[i].limit && freed > do_heap_free) {
	    RVALUE *pp;

	    heaps[i].limit = 0;
	    for (pp = final_list; pp != final; pp = pp->as.free.next) {
		p->as.free.flags |= FL_SINGLETON; /* freeing page mark */
	    }
	    freelist = free;	/* cancel this page from freelist */
	}
	else {
	    freed += n;
	}
    }
    if (malloc_increase > malloc_limit) {
	malloc_limit += (malloc_increase - malloc_limit) * (double)live / (live + freed);
	if (malloc_limit < GC_MALLOC_LIMIT) malloc_limit = GC_MALLOC_LIMIT;
    }
    malloc_increase = 0;
    if (freed < free_min) {
    	set_heaps_increment(objspace);
	heaps_increment(objspace);
    }
    during_gc = 0;

    /* clear finalization list */
    if (final_list) {
	deferred_final_list = final_list;
	return;
    }
    free_unused_heaps(objspace);
}

void
rb_gc_force_recycle(VALUE p)
{
    rb_objspace_t *objspace = &rb_objspace;
    VALGRIND_MAKE_MEM_UNDEFINED((void*)p, sizeof(RVALUE));
    RANY(p)->as.free.flags = 0;
    RANY(p)->as.free.next = freelist;
    freelist = RANY(p);
}

static void
obj_free(rb_objspace_t *objspace, VALUE obj)
{
    switch (RANY(obj)->as.basic.flags & T_MASK) {
      case T_NIL:
      case T_FIXNUM:
      case T_TRUE:
      case T_FALSE:
	rb_bug("obj_free() called for broken object");
	break;
    }

    if (FL_TEST(obj, FL_EXIVAR)) {
	rb_free_generic_ivar((VALUE)obj);
    }

    switch (RANY(obj)->as.basic.flags & T_MASK) {
      case T_OBJECT:
	if (!(RANY(obj)->as.basic.flags & ROBJECT_EMBED) &&
            RANY(obj)->as.object.as.heap.ivptr) {
	    xfree(RANY(obj)->as.object.as.heap.ivptr);
	}
	break;
      case T_MODULE:
      case T_CLASS:
	rb_clear_cache_by_class((VALUE)obj);
	st_free_table(RCLASS_M_TBL(obj));
	if (RCLASS_IV_TBL(obj)) {
	    st_free_table(RCLASS_IV_TBL(obj));
	}
	if (RCLASS_IV_INDEX_TBL(obj)) {
	    st_free_table(RCLASS_IV_INDEX_TBL(obj));
	}
        xfree(RANY(obj)->as.klass.ptr);
	break;
      case T_STRING:
	rb_str_free(obj);
	break;
      case T_ARRAY:
	rb_ary_free(obj);
	break;
      case T_HASH:
	if (RANY(obj)->as.hash.ntbl) {
	    st_free_table(RANY(obj)->as.hash.ntbl);
	}
	break;
      case T_REGEXP:
	if (RANY(obj)->as.regexp.ptr) {
	    onig_free(RANY(obj)->as.regexp.ptr);
	}
	break;
      case T_DATA:
	if (DATA_PTR(obj)) {
	    if ((long)RANY(obj)->as.data.dfree == -1) {
		xfree(DATA_PTR(obj));
	    }
	    else if (RANY(obj)->as.data.dfree) {
		(*RANY(obj)->as.data.dfree)(DATA_PTR(obj));
	    }
	}
	break;
      case T_MATCH:
	if (RANY(obj)->as.match.rmatch) {
            struct rmatch *rm = RANY(obj)->as.match.rmatch;
	    onig_region_free(&rm->regs, 0);
            if (rm->char_offset)
	      xfree(rm->char_offset);
	    xfree(rm);
	}
	break;
      case T_FILE:
	if (RANY(obj)->as.file.fptr) {
	    rb_io_fptr_finalize(RANY(obj)->as.file.fptr);
	}
	break;
      case T_RATIONAL:
      case T_COMPLEX:
	break;
      case T_ICLASS:
	/* iClass shares table with the module */
	break;

      case T_FLOAT:
	break;

      case T_BIGNUM:
	if (!(RBASIC(obj)->flags & RBIGNUM_EMBED_FLAG) && RBIGNUM_DIGITS(obj)) {
	    xfree(RBIGNUM_DIGITS(obj));
	}
	break;
      case T_NODE:
	switch (nd_type(obj)) {
	  case NODE_SCOPE:
	    if (RANY(obj)->as.node.u1.tbl) {
		xfree(RANY(obj)->as.node.u1.tbl);
	    }
	    break;
	  case NODE_ALLOCA:
	    xfree(RANY(obj)->as.node.u1.node);
	    break;
	}
	return;			/* no need to free iv_tbl */

      case T_STRUCT:
	if ((RBASIC(obj)->flags & RSTRUCT_EMBED_LEN_MASK) == 0 &&
	    RANY(obj)->as.rstruct.as.heap.ptr) {
	    xfree(RANY(obj)->as.rstruct.as.heap.ptr);
	}
	break;

      default:
	rb_bug("gc_sweep(): unknown data type 0x%lx(%p)",
	       RANY(obj)->as.basic.flags & T_MASK, (void*)obj);
    }
}

#ifdef __GNUC__
#if defined(__human68k__) || defined(DJGPP)
#undef rb_setjmp
#undef rb_jmp_buf
#if defined(__human68k__)
typedef unsigned long rb_jmp_buf[8];
__asm__ (".even\n\
_rb_setjmp:\n\
	move.l	4(sp),a0\n\
	movem.l	d3-d7/a3-a5,(a0)\n\
	moveq.l	#0,d0\n\
	rts");
#else
#if defined(DJGPP)
typedef unsigned long rb_jmp_buf[6];
__asm__ (".align 4\n\
_rb_setjmp:\n\
	pushl	%ebp\n\
	movl	%esp,%ebp\n\
	movl	8(%ebp),%ebp\n\
	movl	%eax,(%ebp)\n\
	movl	%ebx,4(%ebp)\n\
	movl	%ecx,8(%ebp)\n\
	movl	%edx,12(%ebp)\n\
	movl	%esi,16(%ebp)\n\
	movl	%edi,20(%ebp)\n\
	popl	%ebp\n\
	xorl	%eax,%eax\n\
	ret");
#endif
#endif
int rb_setjmp (rb_jmp_buf);
#endif /* __human68k__ or DJGPP */
#endif /* __GNUC__ */

#define GC_NOTIFY 0

void rb_vm_mark(void *ptr);

static void
mark_current_machine_context(rb_objspace_t *objspace, rb_thread_t *th)
{
    rb_jmp_buf save_regs_gc_mark;
    VALUE *stack_start, *stack_end;

    SET_STACK_END;
#if STACK_GROW_DIRECTION < 0
    stack_start = th->machine_stack_end;
    stack_end = th->machine_stack_start;
#elif STACK_GROW_DIRECTION > 0
    stack_start = th->machine_stack_start;
    stack_end = th->machine_stack_end + 1;
#else
    if (th->machine_stack_end < th->machine_stack_start) {
        stack_start = th->machine_stack_end;
        stack_end = th->machine_stack_start;
    }
    else {
        stack_start = th->machine_stack_start;
        stack_end = th->machine_stack_end + 1;
    }
#endif

    FLUSH_REGISTER_WINDOWS;
    /* This assumes that all registers are saved into the jmp_buf (and stack) */
    rb_setjmp(save_regs_gc_mark);
    mark_locations_array(objspace,
			 (VALUE*)save_regs_gc_mark,
			 sizeof(save_regs_gc_mark) / sizeof(VALUE));

    rb_gc_mark_locations(stack_start, stack_end);
#ifdef __ia64
    rb_gc_mark_locations(th->machine_register_stack_start, th->machine_register_stack_end);
#endif
#if defined(__human68k__) || defined(__mc68000__)
    mark_locations_array((VALUE*)((char*)STACK_END + 2),
			 (STACK_START - STACK_END));
#endif
}

void rb_gc_mark_encodings(void);

static int
garbage_collect(rb_objspace_t *objspace)
{
    struct gc_list *list;
    rb_thread_t *th = GET_THREAD();

    if (GC_NOTIFY) printf("start garbage_collect()\n");

    if (!heaps) {
	return Qfalse;
    }

    if (dont_gc || during_gc) {
	if (!freelist) {
            if (!heaps_increment(objspace)) {
                set_heaps_increment(objspace);
                heaps_increment(objspace);
            }
	}
	return Qtrue;
    }
    during_gc++;
    objspace->count++;

    SET_STACK_END;

    init_mark_stack(objspace);

    th->vm->self ? rb_gc_mark(th->vm->self) : rb_vm_mark(th->vm);

    if (finalizer_table) {
	mark_tbl(objspace, finalizer_table, 0);
    }

    mark_current_machine_context(objspace, th);

    rb_gc_mark_threads();
    rb_gc_mark_symbols();
    rb_gc_mark_encodings();

    /* mark protected global variables */
    for (list = global_List; list; list = list->next) {
	rb_gc_mark_maybe(*list->varptr);
    }
    rb_mark_end_proc();
    rb_gc_mark_global_tbl();

    mark_tbl(objspace, rb_class_tbl, 0);
    rb_gc_mark_trap_list();

    /* mark generic instance variables for special constants */
    rb_mark_generic_ivar_tbl();

    rb_gc_mark_parser();

    /* gc_mark objects whose marking are not completed*/
    while (!MARK_STACK_EMPTY) {
	if (mark_stack_overflow) {
	    gc_mark_all(objspace);
	}
	else {
	    gc_mark_rest(objspace);
	}
    }

    gc_sweep(objspace);

    if (GC_NOTIFY) printf("end garbage_collect()\n");
    return Qtrue;
}

int
rb_garbage_collect(void)
{
    return garbage_collect(&rb_objspace);
}

void
rb_gc_mark_machine_stack(rb_thread_t *th)
{
    rb_objspace_t *objspace = &rb_objspace;
#if STACK_GROW_DIRECTION < 0
    rb_gc_mark_locations(th->machine_stack_end, th->machine_stack_start);
#elif STACK_GROW_DIRECTION > 0
    rb_gc_mark_locations(th->machine_stack_start, th->machine_stack_end);
#else
    if (th->machine_stack_start < th->machine_stack_end) {
	rb_gc_mark_locations(th->machine_stack_start, th->machine_stack_end);
    }
    else {
	rb_gc_mark_locations(th->machine_stack_end, th->machine_stack_start);
    }
#endif
#ifdef __ia64
    rb_gc_mark_locations(th->machine_register_stack_start, th->machine_register_stack_end);
#endif
}


/*
 *  call-seq:
 *     GC.start                     => nil
 *     gc.garbage_collect           => nil
 *     ObjectSpace.garbage_collect  => nil
 *
 *  Initiates garbage collection, unless manually disabled.
 *
 */

VALUE
rb_gc_start(void)
{
    rb_gc();
    return Qnil;
}

#undef Init_stack

void
Init_stack(VALUE *addr)
{
    ruby_init_stack(addr);
}

/*
 * Document-class: ObjectSpace
 *
 *  The <code>ObjectSpace</code> module contains a number of routines
 *  that interact with the garbage collection facility and allow you to
 *  traverse all living objects with an iterator.
 *
 *  <code>ObjectSpace</code> also provides support for object
 *  finalizers, procs that will be called when a specific object is
 *  about to be destroyed by garbage collection.
 *
 *     include ObjectSpace
 *
 *
 *     a = "A"
 *     b = "B"
 *     c = "C"
 *
 *
 *     define_finalizer(a, proc {|id| puts "Finalizer one on #{id}" })
 *     define_finalizer(a, proc {|id| puts "Finalizer two on #{id}" })
 *     define_finalizer(b, proc {|id| puts "Finalizer three on #{id}" })
 *
 *  <em>produces:</em>
 *
 *     Finalizer three on 537763470
 *     Finalizer one on 537763480
 *     Finalizer two on 537763480
 *
 */

void
Init_heap(void)
{
    init_heap(&rb_objspace);
}

static VALUE
os_obj_of(rb_objspace_t *objspace, VALUE of)
{
    size_t i;
    size_t n = 0;
    RVALUE *membase = 0;
    RVALUE *p, *pend;
    volatile VALUE v;

    i = 0;
    while (i < heaps_used) {
        while (0 < i && (uintptr_t)membase < (uintptr_t)heaps[i-1].membase)
            i--;
        while (i < heaps_used && (uintptr_t)heaps[i].membase <= (uintptr_t)membase )
            i++;
        if (heaps_used <= i)
            break;
        membase = heaps[i].membase;

	p = heaps[i].slot; pend = p + heaps[i].limit;
	for (;p < pend; p++) {
	    if (p->as.basic.flags) {
		switch (BUILTIN_TYPE(p)) {
		  case T_NONE:
		  case T_ICLASS:
		  case T_NODE:
		    continue;
		  case T_CLASS:
		    if (FL_TEST(p, FL_SINGLETON)) continue;
		  default:
		    if (!p->as.basic.klass) continue;
                    v = (VALUE)p;
		    if (!of || rb_obj_is_kind_of(v, of)) {
			rb_yield(v);
			n++;
		    }
		}
	    }
	}
    }

    return SIZET2NUM(n);
}

/*
 *  call-seq:
 *     ObjectSpace.each_object([module]) {|obj| ... } => fixnum
 *
 *  Calls the block once for each living, nonimmediate object in this
 *  Ruby process. If <i>module</i> is specified, calls the block
 *  for only those classes or modules that match (or are a subclass of)
 *  <i>module</i>. Returns the number of objects found. Immediate
 *  objects (<code>Fixnum</code>s, <code>Symbol</code>s
 *  <code>true</code>, <code>false</code>, and <code>nil</code>) are
 *  never returned. In the example below, <code>each_object</code>
 *  returns both the numbers we defined and several constants defined in
 *  the <code>Math</code> module.
 *
 *     a = 102.7
 *     b = 95       # Won't be returned
 *     c = 12345678987654321
 *     count = ObjectSpace.each_object(Numeric) {|x| p x }
 *     puts "Total count: #{count}"
 *
 *  <em>produces:</em>
 *
 *     12345678987654321
 *     102.7
 *     2.71828182845905
 *     3.14159265358979
 *     2.22044604925031e-16
 *     1.7976931348623157e+308
 *     2.2250738585072e-308
 *     Total count: 7
 *
 */

static VALUE
os_each_obj(int argc, VALUE *argv, VALUE os)
{
    VALUE of;

    rb_secure(4);
    if (argc == 0) {
	of = 0;
    }
    else {
	rb_scan_args(argc, argv, "01", &of);
    }
    RETURN_ENUMERATOR(os, 1, &of);
    return os_obj_of(&rb_objspace, of);
}

/*
 *  call-seq:
 *     ObjectSpace.undefine_finalizer(obj)
 *
 *  Removes all finalizers for <i>obj</i>.
 *
 */

static VALUE
undefine_final(VALUE os, VALUE obj)
{
    rb_objspace_t *objspace = &rb_objspace;
    if (finalizer_table) {
	st_delete(finalizer_table, (st_data_t*)&obj, 0);
    }
    return obj;
}

/*
 *  call-seq:
 *     ObjectSpace.define_finalizer(obj, aProc=proc())
 *
 *  Adds <i>aProc</i> as a finalizer, to be called after <i>obj</i>
 *  was destroyed.
 *
 */

static VALUE
define_final(int argc, VALUE *argv, VALUE os)
{
    rb_objspace_t *objspace = &rb_objspace;
    VALUE obj, block, table;

    rb_scan_args(argc, argv, "11", &obj, &block);
    if (argc == 1) {
	block = rb_block_proc();
    }
    else if (!rb_respond_to(block, rb_intern("call"))) {
	rb_raise(rb_eArgError, "wrong type argument %s (should be callable)",
		 rb_obj_classname(block));
    }
    need_call_final = 1;
    FL_SET(obj, FL_FINALIZE);

    block = rb_ary_new3(2, INT2FIX(rb_safe_level()), block);

    if (!finalizer_table) {
	finalizer_table = st_init_numtable();
    }
    if (st_lookup(finalizer_table, obj, &table)) {
	rb_ary_push(table, block);
    }
    else {
	st_add_direct(finalizer_table, obj, rb_ary_new3(1, block));
    }
    return block;
}

void
rb_gc_copy_finalizer(VALUE dest, VALUE obj)
{
    rb_objspace_t *objspace = &rb_objspace;
    VALUE table;

    if (!finalizer_table) return;
    if (!FL_TEST(obj, FL_FINALIZE)) return;
    if (st_lookup(finalizer_table, obj, &table)) {
	st_insert(finalizer_table, dest, table);
    }
    FL_SET(dest, FL_FINALIZE);
}

static VALUE
run_single_final(VALUE arg)
{
    VALUE *args = (VALUE *)arg;
    rb_eval_cmd(args[0], args[1], (int)args[2]);
    return Qnil;
}

static void
run_final(rb_objspace_t *objspace, VALUE obj)
{
    long i;
    int status, critical_save = rb_thread_critical;
    VALUE args[3], table, objid;

    objid = rb_obj_id(obj);	/* make obj into id */
    rb_thread_critical = Qtrue;
    args[1] = 0;
    args[2] = (VALUE)rb_safe_level();
    if (finalizer_table && st_delete(finalizer_table, (st_data_t*)&obj, &table)) {
	if (!args[1] && RARRAY_LEN(table) > 0) {
	    args[1] = rb_obj_freeze(rb_ary_new3(1, objid));
	}
	for (i=0; i<RARRAY_LEN(table); i++) {
	    VALUE final = RARRAY_PTR(table)[i];
	    args[0] = RARRAY_PTR(final)[1];
	    args[2] = FIX2INT(RARRAY_PTR(final)[0]);
	    rb_protect(run_single_final, (VALUE)args, &status);
	}
    }
    rb_thread_critical = critical_save;
}

static void
gc_finalize_deferred(rb_objspace_t *objspace)
{
    RVALUE *p = deferred_final_list;

    during_gc++;
    deferred_final_list = 0;
    if (p) {
	finalize_list(objspace, p);
    }
    free_unused_heaps(objspace);
    during_gc = 0;
}

void
rb_gc_finalize_deferred(void)
{
    gc_finalize_deferred(&rb_objspace);
}

void
rb_gc_call_finalizer_at_exit(void)
{
    rb_objspace_t *objspace = &rb_objspace;
    RVALUE *p, *pend;
    size_t i;

    /* finalizers are part of garbage collection */
    during_gc++;
    /* run finalizers */
    if (need_call_final) {
	p = deferred_final_list;
	deferred_final_list = 0;
	finalize_list(objspace, p);
	for (i = 0; i < heaps_used; i++) {
	    p = heaps[i].slot; pend = p + heaps[i].limit;
	    while (p < pend) {
		if (FL_TEST(p, FL_FINALIZE)) {
		    FL_UNSET(p, FL_FINALIZE);
		    p->as.basic.klass = 0;
		    run_final(objspace, (VALUE)p);
		}
		p++;
	    }
	}
    }
    /* run data object's finalizers */
    for (i = 0; i < heaps_used; i++) {
	p = heaps[i].slot; pend = p + heaps[i].limit;
	while (p < pend) {
	    if (BUILTIN_TYPE(p) == T_DATA &&
		DATA_PTR(p) && RANY(p)->as.data.dfree &&
		RANY(p)->as.basic.klass != rb_cThread) {
		p->as.free.flags = 0;
		if ((long)RANY(p)->as.data.dfree == -1) {
		    xfree(DATA_PTR(p));
		}
		else if (RANY(p)->as.data.dfree) {
		    (*RANY(p)->as.data.dfree)(DATA_PTR(p));
		}
                VALGRIND_MAKE_MEM_UNDEFINED((void*)p, sizeof(RVALUE));
	    }
	    else if (BUILTIN_TYPE(p) == T_FILE) {
		if (rb_io_fptr_finalize(RANY(p)->as.file.fptr)) {
		    p->as.free.flags = 0;
                    VALGRIND_MAKE_MEM_UNDEFINED((void*)p, sizeof(RVALUE));
		}
	    }
	    p++;
	}
    }
    during_gc = 0;
}

void
rb_gc(void)
{
    rb_objspace_t *objspace = &rb_objspace;
    garbage_collect(objspace);
    gc_finalize_deferred(objspace);
}

/*
 *  call-seq:
 *     ObjectSpace._id2ref(object_id) -> an_object
 *
 *  Converts an object id to a reference to the object. May not be
 *  called on an object id passed as a parameter to a finalizer.
 *
 *     s = "I am a string"                    #=> "I am a string"
 *     r = ObjectSpace._id2ref(s.object_id)   #=> "I am a string"
 *     r == s                                 #=> true
 *
 */

static VALUE
id2ref(VALUE obj, VALUE objid)
{
#if SIZEOF_LONG == SIZEOF_VOIDP
#define NUM2PTR(x) NUM2ULONG(x)
#elif SIZEOF_LONG_LONG == SIZEOF_VOIDP
#define NUM2PTR(x) NUM2ULL(x)
#endif
    rb_objspace_t *objspace = &rb_objspace;
    VALUE ptr;
    void *p0;

    rb_secure(4);
    ptr = NUM2PTR(objid);
    p0 = (void *)ptr;

    if (ptr == Qtrue) return Qtrue;
    if (ptr == Qfalse) return Qfalse;
    if (ptr == Qnil) return Qnil;
    if (FIXNUM_P(ptr)) return (VALUE)ptr;
    ptr = objid ^ FIXNUM_FLAG;	/* unset FIXNUM_FLAG */

    if ((ptr % sizeof(RVALUE)) == (4 << 2)) {
        ID symid = ptr / sizeof(RVALUE);
        if (rb_id2name(symid) == 0)
	    rb_raise(rb_eRangeError, "%p is not symbol id value", p0);
	return ID2SYM(symid);
    }

    if (!is_pointer_to_heap(objspace, (void *)ptr) ||
	BUILTIN_TYPE(ptr) > T_FIXNUM || BUILTIN_TYPE(ptr) == T_ICLASS) {
	rb_raise(rb_eRangeError, "%p is not id value", p0);
    }
    if (BUILTIN_TYPE(ptr) == 0 || RBASIC(ptr)->klass == 0) {
	rb_raise(rb_eRangeError, "%p is recycled object", p0);
    }
    return (VALUE)ptr;
}

/*
 *  Document-method: __id__
 *  Document-method: object_id
 *
 *  call-seq:
 *     obj.__id__       => fixnum
 *     obj.object_id    => fixnum
 *
 *  Returns an integer identifier for <i>obj</i>. The same number will
 *  be returned on all calls to <code>id</code> for a given object, and
 *  no two active objects will share an id.
 *  <code>Object#object_id</code> is a different concept from the
 *  <code>:name</code> notation, which returns the symbol id of
 *  <code>name</code>. Replaces the deprecated <code>Object#id</code>.
 */

/*
 *  call-seq:
 *     obj.hash    => fixnum
 *
 *  Generates a <code>Fixnum</code> hash value for this object. This
 *  function must have the property that <code>a.eql?(b)</code> implies
 *  <code>a.hash == b.hash</code>. The hash value is used by class
 *  <code>Hash</code>. Any hash value that exceeds the capacity of a
 *  <code>Fixnum</code> will be truncated before being used.
 */

VALUE
rb_obj_id(VALUE obj)
{
    /*
     *                32-bit VALUE space
     *          MSB ------------------------ LSB
     *  false   00000000000000000000000000000000
     *  true    00000000000000000000000000000010
     *  nil     00000000000000000000000000000100
     *  undef   00000000000000000000000000000110
     *  symbol  ssssssssssssssssssssssss00001110
     *  object  oooooooooooooooooooooooooooooo00        = 0 (mod sizeof(RVALUE))
     *  fixnum  fffffffffffffffffffffffffffffff1
     *
     *                    object_id space
     *                                       LSB
     *  false   00000000000000000000000000000000
     *  true    00000000000000000000000000000010
     *  nil     00000000000000000000000000000100
     *  undef   00000000000000000000000000000110
     *  symbol   000SSSSSSSSSSSSSSSSSSSSSSSSSSS0        S...S % A = 4 (S...S = s...s * A + 4)
     *  object   oooooooooooooooooooooooooooooo0        o...o % A = 0
     *  fixnum  fffffffffffffffffffffffffffffff1        bignum if required
     *
     *  where A = sizeof(RVALUE)/4
     *
     *  sizeof(RVALUE) is
     *  20 if 32-bit, double is 4-byte aligned
     *  24 if 32-bit, double is 8-byte aligned
     *  40 if 64-bit
     */
    if (TYPE(obj) == T_SYMBOL) {
        return (SYM2ID(obj) * sizeof(RVALUE) + (4 << 2)) | FIXNUM_FLAG;
    }
    if (SPECIAL_CONST_P(obj)) {
        return LONG2NUM((SIGNED_VALUE)obj);
    }
    return (VALUE)((SIGNED_VALUE)obj|FIXNUM_FLAG);
}

static int
set_zero(st_data_t key, st_data_t val, st_data_t arg)
{
    VALUE k = (VALUE)key;
    VALUE hash = (VALUE)arg;
    rb_hash_aset(hash, k, INT2FIX(0));
    return ST_CONTINUE;
}

/*
 *  call-seq:
 *     ObjectSpace.count_objects([result_hash]) -> hash
 *
 *  Counts objects for each type.
 *
 *  It returns a hash as:
 *  {:TOTAL=>10000, :FREE=>3011, :T_OBJECT=>6, :T_CLASS=>404, ...}
 *
 *  If the optional argument, result_hash, is given,
 *  it is overwritten and returned.
 *  This is intended to avoid probe effect.
 *
 *  The contents of the returned hash is implementation defined.
 *  It may be changed in future.
 *
 *  This method is not expected to work except C Ruby.
 *
 */

static VALUE
count_objects(int argc, VALUE *argv, VALUE os)
{
    rb_objspace_t *objspace = &rb_objspace;
    size_t counts[T_MASK+1];
    size_t freed = 0;
    size_t total = 0;
    size_t i;
    VALUE hash;

    if (rb_scan_args(argc, argv, "01", &hash) == 1) {
        if (TYPE(hash) != T_HASH)
            rb_raise(rb_eTypeError, "non-hash given");
    }

    for (i = 0; i <= T_MASK; i++) {
        counts[i] = 0;
    }

    for (i = 0; i < heaps_used; i++) {
        RVALUE *p, *pend;

        p = heaps[i].slot; pend = p + heaps[i].limit;
        for (;p < pend; p++) {
            if (p->as.basic.flags) {
                counts[BUILTIN_TYPE(p)]++;
            }
            else {
                freed++;
            }
        }
        total += heaps[i].limit;
    }

    if (hash == Qnil) {
        hash = rb_hash_new();
    }
    else if (!RHASH_EMPTY_P(hash)) {
        st_foreach(RHASH_TBL(hash), set_zero, hash);
    }
    rb_hash_aset(hash, ID2SYM(rb_intern("TOTAL")), SIZET2NUM(total));
    rb_hash_aset(hash, ID2SYM(rb_intern("FREE")), SIZET2NUM(freed));
    for (i = 0; i <= T_MASK; i++) {
        VALUE type;
        switch (i) {
#define COUNT_TYPE(t) case t: type = ID2SYM(rb_intern(#t)); break;
	    COUNT_TYPE(T_NONE);
	    COUNT_TYPE(T_OBJECT);
	    COUNT_TYPE(T_CLASS);
	    COUNT_TYPE(T_MODULE);
	    COUNT_TYPE(T_FLOAT);
	    COUNT_TYPE(T_STRING);
	    COUNT_TYPE(T_REGEXP);
	    COUNT_TYPE(T_ARRAY);
	    COUNT_TYPE(T_HASH);
	    COUNT_TYPE(T_STRUCT);
	    COUNT_TYPE(T_BIGNUM);
	    COUNT_TYPE(T_FILE);
	    COUNT_TYPE(T_DATA);
	    COUNT_TYPE(T_MATCH);
	    COUNT_TYPE(T_COMPLEX);
	    COUNT_TYPE(T_RATIONAL);
	    COUNT_TYPE(T_NIL);
	    COUNT_TYPE(T_TRUE);
	    COUNT_TYPE(T_FALSE);
	    COUNT_TYPE(T_SYMBOL);
	    COUNT_TYPE(T_FIXNUM);
	    COUNT_TYPE(T_UNDEF);
	    COUNT_TYPE(T_NODE);
	    COUNT_TYPE(T_ICLASS);
#undef COUNT_TYPE
          default:              type = INT2NUM(i); break;
        }
        if (counts[i])
            rb_hash_aset(hash, type, SIZET2NUM(counts[i]));
    }

    return hash;
}

/*
 *  call-seq:
 *     GC.count -> Integer
 *
 *  The number of times GC occured.
 *
 *  It returns the number of times GC occured since the process started.
 *
 */

static VALUE
gc_count(VALUE self)
{
    return UINT2NUM((&rb_objspace)->count);
}

#if CALC_EXACT_MALLOC_SIZE
/*
 *  call-seq:
 *     GC.malloc_allocated_size -> Integer
 *
 *  The allocated size by malloc().
 *
 *  It returns the allocated size by malloc().
 */

static VALUE
gc_malloc_allocated_size(VALUE self)
{
    return UINT2NUM((&rb_objspace)->malloc_params.allocated_size);
}

/*
 *  call-seq:
 *     GC.malloc_allocations -> Integer
 *
 *  The number of allocated memory object by malloc().
 *
 *  It returns the number of allocated memory object by malloc().
 */

static VALUE
gc_malloc_allocations(VALUE self)
{
    return UINT2NUM((&rb_objspace)->malloc_params.allocations);
}
#endif

/*
 *  The <code>GC</code> module provides an interface to Ruby's mark and
 *  sweep garbage collection mechanism. Some of the underlying methods
 *  are also available via the <code>ObjectSpace</code> module.
 */

void
Init_GC(void)
{
    VALUE rb_mObSpace;

    rb_mGC = rb_define_module("GC");
    rb_define_singleton_method(rb_mGC, "start", rb_gc_start, 0);
    rb_define_singleton_method(rb_mGC, "enable", rb_gc_enable, 0);
    rb_define_singleton_method(rb_mGC, "disable", rb_gc_disable, 0);
    rb_define_singleton_method(rb_mGC, "stress", gc_stress_get, 0);
    rb_define_singleton_method(rb_mGC, "stress=", gc_stress_set, 1);
    rb_define_singleton_method(rb_mGC, "count", gc_count, 0);
    rb_define_method(rb_mGC, "garbage_collect", rb_gc_start, 0);

    rb_mObSpace = rb_define_module("ObjectSpace");
    rb_define_module_function(rb_mObSpace, "each_object", os_each_obj, -1);
    rb_define_module_function(rb_mObSpace, "garbage_collect", rb_gc_start, 0);

    rb_define_module_function(rb_mObSpace, "define_finalizer", define_final, -1);
    rb_define_module_function(rb_mObSpace, "undefine_finalizer", undefine_final, 1);

    rb_define_module_function(rb_mObSpace, "_id2ref", id2ref, 1);

    nomem_error = rb_exc_new2(rb_eNoMemError, "failed to allocate memory");
    OBJ_TAINT(nomem_error);
    OBJ_FREEZE(nomem_error);

    rb_define_method(rb_mKernel, "hash", rb_obj_id, 0);
    rb_define_method(rb_mKernel, "__id__", rb_obj_id, 0);
    rb_define_method(rb_mKernel, "object_id", rb_obj_id, 0);

    rb_define_module_function(rb_mObSpace, "count_objects", count_objects, -1);

#if CALC_EXACT_MALLOC_SIZE
    rb_define_singleton_method(rb_mGC, "malloc_allocated_size", gc_malloc_allocated_size, 0);
    rb_define_singleton_method(rb_mGC, "malloc_allocations", gc_malloc_allocations, 0);
#endif
}
