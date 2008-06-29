/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     keyword_class = 258,
     keyword_module = 259,
     keyword_def = 260,
     keyword_undef = 261,
     keyword_begin = 262,
     keyword_rescue = 263,
     keyword_ensure = 264,
     keyword_end = 265,
     keyword_if = 266,
     keyword_unless = 267,
     keyword_then = 268,
     keyword_elsif = 269,
     keyword_else = 270,
     keyword_case = 271,
     keyword_when = 272,
     keyword_while = 273,
     keyword_until = 274,
     keyword_for = 275,
     keyword_break = 276,
     keyword_next = 277,
     keyword_redo = 278,
     keyword_retry = 279,
     keyword_in = 280,
     keyword_do = 281,
     keyword_do_cond = 282,
     keyword_do_block = 283,
     keyword_do_LAMBDA = 284,
     keyword_return = 285,
     keyword_yield = 286,
     keyword_super = 287,
     keyword_self = 288,
     keyword_nil = 289,
     keyword_true = 290,
     keyword_false = 291,
     keyword_and = 292,
     keyword_or = 293,
     keyword_not = 294,
     modifier_if = 295,
     modifier_unless = 296,
     modifier_while = 297,
     modifier_until = 298,
     modifier_rescue = 299,
     keyword_alias = 300,
     keyword_defined = 301,
     keyword_BEGIN = 302,
     keyword_END = 303,
     keyword__LINE__ = 304,
     keyword__FILE__ = 305,
     keyword__ENCODING__ = 306,
     tIDENTIFIER = 307,
     tFID = 308,
     tGVAR = 309,
     tIVAR = 310,
     tCONSTANT = 311,
     tCVAR = 312,
     tLABEL = 313,
     tINTEGER = 314,
     tFLOAT = 315,
     tSTRING_CONTENT = 316,
     tCHAR = 317,
     tNTH_REF = 318,
     tBACK_REF = 319,
     tREGEXP_END = 320,
     tUPLUS = 321,
     tUMINUS = 322,
     tPOW = 323,
     tCMP = 324,
     tEQ = 325,
     tEQQ = 326,
     tNEQ = 327,
     tGEQ = 328,
     tLEQ = 329,
     tANDOP = 330,
     tOROP = 331,
     tMATCH = 332,
     tNMATCH = 333,
     tDOT2 = 334,
     tDOT3 = 335,
     tAREF = 336,
     tASET = 337,
     tLSHFT = 338,
     tRSHFT = 339,
     tCOLON2 = 340,
     tCOLON3 = 341,
     tOP_ASGN = 342,
     tASSOC = 343,
     tLPAREN = 344,
     tLPAREN_ARG = 345,
     tRPAREN = 346,
     tLBRACK = 347,
     tLBRACE = 348,
     tLBRACE_ARG = 349,
     tSTAR = 350,
     tAMPER = 351,
     tLAMBDA = 352,
     tSYMBEG = 353,
     tSTRING_BEG = 354,
     tXSTRING_BEG = 355,
     tREGEXP_BEG = 356,
     tWORDS_BEG = 357,
     tQWORDS_BEG = 358,
     tSTRING_DBEG = 359,
     tSTRING_DVAR = 360,
     tSTRING_END = 361,
     tLAMBEG = 362,
     tLOWEST = 363,
     tUMINUS_NUM = 364,
     tLAST_TOKEN = 365
   };
#endif
/* Tokens.  */
#define keyword_class 258
#define keyword_module 259
#define keyword_def 260
#define keyword_undef 261
#define keyword_begin 262
#define keyword_rescue 263
#define keyword_ensure 264
#define keyword_end 265
#define keyword_if 266
#define keyword_unless 267
#define keyword_then 268
#define keyword_elsif 269
#define keyword_else 270
#define keyword_case 271
#define keyword_when 272
#define keyword_while 273
#define keyword_until 274
#define keyword_for 275
#define keyword_break 276
#define keyword_next 277
#define keyword_redo 278
#define keyword_retry 279
#define keyword_in 280
#define keyword_do 281
#define keyword_do_cond 282
#define keyword_do_block 283
#define keyword_do_LAMBDA 284
#define keyword_return 285
#define keyword_yield 286
#define keyword_super 287
#define keyword_self 288
#define keyword_nil 289
#define keyword_true 290
#define keyword_false 291
#define keyword_and 292
#define keyword_or 293
#define keyword_not 294
#define modifier_if 295
#define modifier_unless 296
#define modifier_while 297
#define modifier_until 298
#define modifier_rescue 299
#define keyword_alias 300
#define keyword_defined 301
#define keyword_BEGIN 302
#define keyword_END 303
#define keyword__LINE__ 304
#define keyword__FILE__ 305
#define keyword__ENCODING__ 306
#define tIDENTIFIER 307
#define tFID 308
#define tGVAR 309
#define tIVAR 310
#define tCONSTANT 311
#define tCVAR 312
#define tLABEL 313
#define tINTEGER 314
#define tFLOAT 315
#define tSTRING_CONTENT 316
#define tCHAR 317
#define tNTH_REF 318
#define tBACK_REF 319
#define tREGEXP_END 320
#define tUPLUS 321
#define tUMINUS 322
#define tPOW 323
#define tCMP 324
#define tEQ 325
#define tEQQ 326
#define tNEQ 327
#define tGEQ 328
#define tLEQ 329
#define tANDOP 330
#define tOROP 331
#define tMATCH 332
#define tNMATCH 333
#define tDOT2 334
#define tDOT3 335
#define tAREF 336
#define tASET 337
#define tLSHFT 338
#define tRSHFT 339
#define tCOLON2 340
#define tCOLON3 341
#define tOP_ASGN 342
#define tASSOC 343
#define tLPAREN 344
#define tLPAREN_ARG 345
#define tRPAREN 346
#define tLBRACK 347
#define tLBRACE 348
#define tLBRACE_ARG 349
#define tSTAR 350
#define tAMPER 351
#define tLAMBDA 352
#define tSYMBEG 353
#define tSTRING_BEG 354
#define tXSTRING_BEG 355
#define tREGEXP_BEG 356
#define tWORDS_BEG 357
#define tQWORDS_BEG 358
#define tSTRING_DBEG 359
#define tSTRING_DVAR 360
#define tSTRING_END 361
#define tLAMBEG 362
#define tLOWEST 363
#define tUMINUS_NUM 364
#define tLAST_TOKEN 365




/* Copy the first part of user declarations.  */
#line 12 "ripper.y"


#define YYDEBUG 1
#define YYERROR_VERBOSE 1
#define YYSTACK_USE_ALLOCA 0

#include "ruby/ruby.h"
#include "ruby/intern.h"
#include "ruby/node.h"
#include "ruby/st.h"
#include "ruby/encoding.h"
#include "id.h"
#include "regenc.h"
#include <stdio.h>
#include <errno.h>
#include <ctype.h>

#define YYMALLOC(size)		rb_parser_malloc(parser, size)
#define YYREALLOC(ptr, size)	rb_parser_realloc(parser, ptr, size)
#define YYCALLOC(nelem, size)	rb_parser_calloc(parser, nelem, size)
#define YYFREE(ptr)		rb_parser_free(parser, ptr)
#define malloc	YYMALLOC
#define realloc	YYREALLOC
#define calloc	YYCALLOC
#define free	YYFREE

#define ID_SCOPE_SHIFT 3
#define ID_SCOPE_MASK 0x07
#define ID_LOCAL      0x00
#define ID_INSTANCE   0x01
#define ID_GLOBAL     0x03
#define ID_ATTRSET    0x04
#define ID_CONST      0x05
#define ID_CLASS      0x06
#define ID_JUNK       0x07
#define ID_INTERNAL   ID_JUNK

#define is_notop_id(id) ((id)>tLAST_TOKEN)
#define is_local_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_LOCAL)
#define is_global_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_GLOBAL)
#define is_instance_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_INSTANCE)
#define is_attrset_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_ATTRSET)
#define is_const_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_CONST)
#define is_class_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_CLASS)
#define is_junk_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_JUNK)

#define is_asgn_or_id(id) ((is_notop_id(id)) && \
	(((id)&ID_SCOPE_MASK) == ID_GLOBAL || \
	 ((id)&ID_SCOPE_MASK) == ID_INSTANCE || \
	 ((id)&ID_SCOPE_MASK) == ID_CLASS))

enum lex_state_e {
    EXPR_BEG,			/* ignore newline, +/- is a sign. */
    EXPR_END,			/* newline significant, +/- is a operator. */
    EXPR_ENDARG,		/* ditto, and unbound braces. */
    EXPR_ARG,			/* newline significant, +/- is a operator. */
    EXPR_CMDARG,		/* newline significant, +/- is a operator. */
    EXPR_MID,			/* newline significant, +/- is a operator. */
    EXPR_FNAME,			/* ignore newline, no reserved words. */
    EXPR_DOT,			/* right after `.' or `::', no reserved words. */
    EXPR_CLASS,			/* immediate after `class', no here document. */
    EXPR_VALUE,			/* alike EXPR_BEG but label is disallowed. */
};

# ifdef HAVE_LONG_LONG
typedef unsigned LONG_LONG stack_type;
# else
typedef unsigned long stack_type;
# endif

# define BITSTACK_PUSH(stack, n)	(stack = (stack<<1)|((n)&1))
# define BITSTACK_POP(stack)	(stack = stack >> 1)
# define BITSTACK_LEXPOP(stack)	(stack = (stack >> 1) | (stack & 1))
# define BITSTACK_SET_P(stack)	(stack&1)

#define COND_PUSH(n)	BITSTACK_PUSH(cond_stack, n)
#define COND_POP()	BITSTACK_POP(cond_stack)
#define COND_LEXPOP()	BITSTACK_LEXPOP(cond_stack)
#define COND_P()	BITSTACK_SET_P(cond_stack)

#define CMDARG_PUSH(n)	BITSTACK_PUSH(cmdarg_stack, n)
#define CMDARG_POP()	BITSTACK_POP(cmdarg_stack)
#define CMDARG_LEXPOP()	BITSTACK_LEXPOP(cmdarg_stack)
#define CMDARG_P()	BITSTACK_SET_P(cmdarg_stack)

/* must sync with real YYSTYPE */
union tmpyystype {
    VALUE val;
    NODE *node;
    unsigned long id;
    int num;
    struct RVarmap *vars;
};

struct vtable {
    ID *tbl;
    int pos;
    int capa;
    struct vtable *prev;
};

struct local_vars {
    struct vtable *args;
    struct vtable *vars;
    struct local_vars *prev;
};

#define DVARS_INHERIT ((void*)1)
#define DVARS_TOPSCOPE NULL
#define DVARS_SPECIAL_P(tbl) (!POINTER_P(tbl))
#define POINTER_P(val) ((VALUE)(val) & ~(VALUE)3)

#ifndef RIPPER
static int
vtable_size(const struct vtable *tbl)
{
    if (POINTER_P(tbl)) {
        return tbl->pos;
    }
    else {
        return 0;
    }
}

#define VTBL_DEBUG 0

static struct vtable *
vtable_alloc(struct vtable *prev)
{
    struct vtable *tbl = ALLOC(struct vtable);
    tbl->pos = 0;
    tbl->capa = 8;
    tbl->tbl = ALLOC_N(ID, tbl->capa);
    tbl->prev = prev;
    if (VTBL_DEBUG) printf("vtable_alloc: %p\n", tbl);
    return tbl;
}

static void
vtable_free(struct vtable *tbl)
{
    if (VTBL_DEBUG)printf("vtable_free: %p\n", tbl);
    if (POINTER_P(tbl)) {
        if (tbl->tbl) {
            xfree(tbl->tbl);
        }
        if (tbl) {
            xfree(tbl);
        }
    }
}

static void
vtable_add(struct vtable *tbl, ID id)
{
    if (!POINTER_P(tbl)) {
        rb_bug("vtable_add: vtable is not allocated (%p)", tbl);
    }
    if (VTBL_DEBUG) printf("vtable_add: %p, %s\n", tbl, rb_id2name(id));

    if (tbl->pos == tbl->capa) {
        tbl->capa = tbl->capa * 2;
        REALLOC_N(tbl->tbl, ID, tbl->capa);
    }
    tbl->tbl[tbl->pos++] = id;
}

static int
vtable_included(const struct vtable * tbl, ID id)
{
    int i;

    if (POINTER_P(tbl)) {
        for (i = 0; i < tbl->pos; i++) {
            if (tbl->tbl[i] == id) {
                return 1;
            }
        }
    }
    return 0;
}
#endif

/*
    Structure of Lexer Buffer:

 lex_pbeg      tokp         lex_p        lex_pend
    |           |              |            |
    |-----------+--------------+------------|
                |<------------>|
                     token
*/
struct parser_params {
    int is_ripper;
    NODE *heap;

    union tmpyystype *parser_yylval;   /* YYSTYPE not defined yet */
    VALUE eofp;

    NODE *parser_lex_strterm;
    enum lex_state_e parser_lex_state;
    stack_type parser_cond_stack;
    stack_type parser_cmdarg_stack;
    int parser_class_nest;
    int parser_paren_nest;
    int parser_lpar_beg;
    int parser_in_single;
    int parser_in_def;
    int parser_compile_for_eval;
    VALUE parser_cur_mid;
    int parser_in_defined;
    char *parser_tokenbuf;
    int parser_tokidx;
    int parser_toksiz;
    VALUE parser_lex_input;
    VALUE parser_lex_lastline;
    VALUE parser_lex_nextline;
    const char *parser_lex_pbeg;
    const char *parser_lex_p;
    const char *parser_lex_pend;
    int parser_heredoc_end;
    int parser_command_start;
    int parser_lex_gets_ptr;
    VALUE (*parser_lex_gets)(struct parser_params*,VALUE);
    struct local_vars *parser_lvtbl;
    int parser_ruby__end__seen;
    int line_count;
    int has_shebang;
    char *parser_ruby_sourcefile; /* current source file */
    int parser_ruby_sourceline;	/* current line no. */
    rb_encoding *enc;
    rb_encoding *utf8;

    int parser_yydebug;

#ifndef RIPPER
    /* Ruby core only */
    NODE *parser_eval_tree_begin;
    NODE *parser_eval_tree;
    VALUE debug_lines;
    int nerr;
#else
    /* Ripper only */
    VALUE parser_ruby_sourcefile_string;
    const char *tokp;
    VALUE delayed;
    int delayed_line;
    int delayed_col;

    VALUE value;
    VALUE result;
    VALUE parsing_thread;
    int toplevel_p;
#endif
};

#define UTF8_ENC() (parser->utf8 ? parser->utf8 : \
		    (parser->utf8 = rb_utf8_encoding()))
#define STR_NEW(p,n) rb_enc_str_new((p),(n),parser->enc)
#define STR_NEW0() rb_usascii_str_new(0,0)
#define STR_NEW2(p) rb_enc_str_new((p),strlen(p),parser->enc)
#define STR_NEW3(p,n,e,func) parser_str_new((p),(n),(e),(func),parser->enc)
#define STR_ENC(m) ((m)?parser->enc:rb_usascii_encoding())
#define ENC_SINGLE(cr) ((cr)==ENC_CODERANGE_7BIT)
#define TOK_INTERN(mb) rb_intern3(tok(), toklen(), STR_ENC(mb))

#ifdef YYMALLOC
void *rb_parser_malloc(struct parser_params *, size_t);
void *rb_parser_realloc(struct parser_params *, void *, size_t);
void *rb_parser_calloc(struct parser_params *, size_t, size_t);
void rb_parser_free(struct parser_params *, void *);
#endif

static int parser_yyerror(struct parser_params*, const char*);
#define yyerror(msg) parser_yyerror(parser, msg)

#define YYLEX_PARAM parser

#define lex_strterm		(parser->parser_lex_strterm)
#define lex_state		(parser->parser_lex_state)
#define cond_stack		(parser->parser_cond_stack)
#define cmdarg_stack		(parser->parser_cmdarg_stack)
#define class_nest		(parser->parser_class_nest)
#define paren_nest		(parser->parser_paren_nest)
#define lpar_beg		(parser->parser_lpar_beg)
#define in_single		(parser->parser_in_single)
#define in_def			(parser->parser_in_def)
#define compile_for_eval	(parser->parser_compile_for_eval)
#define cur_mid			(parser->parser_cur_mid)
#define in_defined		(parser->parser_in_defined)
#define tokenbuf		(parser->parser_tokenbuf)
#define tokidx			(parser->parser_tokidx)
#define toksiz			(parser->parser_toksiz)
#define lex_input		(parser->parser_lex_input)
#define lex_lastline		(parser->parser_lex_lastline)
#define lex_nextline		(parser->parser_lex_nextline)
#define lex_pbeg		(parser->parser_lex_pbeg)
#define lex_p			(parser->parser_lex_p)
#define lex_pend		(parser->parser_lex_pend)
#define heredoc_end		(parser->parser_heredoc_end)
#define command_start		(parser->parser_command_start)
#define lex_gets_ptr		(parser->parser_lex_gets_ptr)
#define lex_gets		(parser->parser_lex_gets)
#define lvtbl			(parser->parser_lvtbl)
#define ruby__end__seen		(parser->parser_ruby__end__seen)
#define ruby_sourceline		(parser->parser_ruby_sourceline)
#define ruby_sourcefile		(parser->parser_ruby_sourcefile)
#define yydebug			(parser->parser_yydebug)
#ifdef RIPPER
#else
#define ruby_eval_tree		(parser->parser_eval_tree)
#define ruby_eval_tree_begin	(parser->parser_eval_tree_begin)
#define ruby_debug_lines	(parser->debug_lines)
#endif

static int yylex(void*, void*);

#ifndef RIPPER
#define yyparse ruby_yyparse

static NODE* node_newnode(struct parser_params *, enum node_type, VALUE, VALUE, VALUE);
#define rb_node_newnode(type, a1, a2, a3) node_newnode(parser, type, a1, a2, a3)

static NODE *cond_gen(struct parser_params*,NODE*);
#define cond(node) cond_gen(parser, node)
static NODE *logop_gen(struct parser_params*,enum node_type,NODE*,NODE*);
#define logop(type,node1,node2) logop_gen(parser, type, node1, node2)

static NODE *newline_node(NODE*);
static void fixpos(NODE*,NODE*);

static int value_expr_gen(struct parser_params*,NODE*);
static void void_expr_gen(struct parser_params*,NODE*);
static NODE *remove_begin(NODE*);
#define value_expr(node) value_expr_gen(parser, (node) = remove_begin(node))
#define void_expr0(node) void_expr_gen(parser, (node))
#define void_expr(node) void_expr0((node) = remove_begin(node))
static void void_stmts_gen(struct parser_params*,NODE*);
#define void_stmts(node) void_stmts_gen(parser, node)
static void reduce_nodes_gen(struct parser_params*,NODE**);
#define reduce_nodes(n) reduce_nodes_gen(parser,n)
static void block_dup_check_gen(struct parser_params*,NODE*,NODE*);
#define block_dup_check(n1,n2) block_dup_check_gen(parser,n1,n2)

static NODE *block_append_gen(struct parser_params*,NODE*,NODE*);
#define block_append(h,t) block_append_gen(parser,h,t)
static NODE *list_append_gen(struct parser_params*,NODE*,NODE*);
#define list_append(l,i) list_append_gen(parser,l,i)
static NODE *list_concat_gen(struct parser_params*,NODE*,NODE*);
#define list_concat(h,t) list_concat_gen(parser,h,t)
static NODE *arg_append_gen(struct parser_params*,NODE*,NODE*);
#define arg_append(h,t) arg_append_gen(parser,h,t)
static NODE *arg_concat_gen(struct parser_params*,NODE*,NODE*);
#define arg_concat(h,t) arg_concat_gen(parser,h,t)
static NODE *literal_concat_gen(struct parser_params*,NODE*,NODE*);
#define literal_concat(h,t) literal_concat_gen(parser,h,t)
static NODE *new_evstr_gen(struct parser_params*,NODE*);
#define new_evstr(n) new_evstr_gen(parser,n)
static NODE *evstr2dstr_gen(struct parser_params*,NODE*);
#define evstr2dstr(n) evstr2dstr_gen(parser,n)
static NODE *splat_array(NODE*);

static NODE *call_bin_op_gen(struct parser_params*,NODE*,ID,NODE*);
#define call_bin_op(recv,id,arg1) call_bin_op_gen(parser, recv,id,arg1)
static NODE *call_uni_op_gen(struct parser_params*,NODE*,ID);
#define call_uni_op(recv,id) call_uni_op_gen(parser, recv,id)

static NODE *new_args_gen(struct parser_params*,NODE*,NODE*,ID,NODE*,ID);
#define new_args(f,o,r,p,b) new_args_gen(parser, f,o,r,p,b)
static void shadowing_lvar_gen(struct parser_params*,ID);
#define shadowing_lvar(name) shadowing_lvar_gen(parser, name)

static NODE *negate_lit(NODE*);
static NODE *ret_args_gen(struct parser_params*,NODE*);
#define ret_args(node) ret_args_gen(parser, node)
static NODE *arg_blk_pass(NODE*,NODE*);
static NODE *new_yield_gen(struct parser_params*,NODE*);
#define new_yield(node) new_yield_gen(parser, node)

static NODE *gettable_gen(struct parser_params*,ID);
#define gettable(id) gettable_gen(parser,id)
static NODE *assignable_gen(struct parser_params*,ID,NODE*);
#define assignable(id,node) assignable_gen(parser, id, node)
static void new_bv_gen(struct parser_params*,ID);
#define new_bv(id) new_bv_gen(parser, id)
static NODE *aryset_gen(struct parser_params*,NODE*,NODE*);
#define aryset(node1,node2) aryset_gen(parser, node1, node2)
static NODE *attrset_gen(struct parser_params*,NODE*,ID);
#define attrset(node,id) attrset_gen(parser, node, id)

static void rb_backref_error_gen(struct parser_params*,NODE*);
#define rb_backref_error(n) rb_backref_error_gen(parser,n)
static NODE *node_assign_gen(struct parser_params*,NODE*,NODE*);
#define node_assign(node1, node2) node_assign_gen(parser, node1, node2)

static NODE *match_op_gen(struct parser_params*,NODE*,NODE*);
#define match_op(node1,node2) match_op_gen(parser, node1, node2)

static void local_push_gen(struct parser_params*,int);
#define local_push(top) local_push_gen(parser,top)
static void local_pop_gen(struct parser_params*);
#define local_pop() local_pop_gen(parser)
static int local_var_gen(struct parser_params*, ID);
#define local_var(id) local_var_gen(parser, id);
static int arg_var_gen(struct parser_params*, ID);
#define arg_var(id) arg_var_gen(parser, id)
static int  local_id_gen(struct parser_params*, ID);
#define local_id(id) local_id_gen(parser, id)
static ID  *local_tbl_gen(struct parser_params*);
#define local_tbl() local_tbl_gen(parser)
static ID   internal_id_gen(struct parser_params*);
#define internal_id() internal_id_gen(parser)

static void dyna_push_gen(struct parser_params*);
#define dyna_push() dyna_push_gen(parser)
static void dyna_pop_gen(struct parser_params*);
#define dyna_pop() dyna_pop_gen(parser)
static int dyna_in_block_gen(struct parser_params*);
#define dyna_in_block() dyna_in_block_gen(parser)
#define dyna_var(id) local_var(id)
static int dvar_defined_gen(struct parser_params*,ID);
#define dvar_defined(id) dvar_defined_gen(parser, id)
static int dvar_curr_gen(struct parser_params*,ID);
#define dvar_curr(id) dvar_curr_gen(parser, id)

extern int rb_dvar_defined(ID);
extern int rb_local_defined(ID);
extern int rb_parse_in_eval(void);

static VALUE reg_compile_gen(struct parser_params*, VALUE, int);
#define reg_compile(str,options) reg_compile_gen(parser, str, options)
static void reg_fragment_setenc_gen(struct parser_params*, VALUE, int);
#define reg_fragment_setenc(str,options) reg_fragment_setenc_gen(parser, str, options)
static void reg_fragment_check_gen(struct parser_params*, VALUE, int);
#define reg_fragment_check(str,options) reg_fragment_check_gen(parser, str, options)
static NODE *reg_named_capture_assign_gen(struct parser_params* parser, VALUE regexp, NODE *match);
#define reg_named_capture_assign(regexp,match) reg_named_capture_assign_gen(parser,regexp,match)
int rb_enc_symname2_p(const char *, int, rb_encoding *);
#else
#define remove_begin(node) (node)
#endif /* !RIPPER */
static int lvar_defined_gen(struct parser_params*, ID);
#define lvar_defined(id) lvar_defined_gen(parser, id)

#define RE_OPTION_ONCE (1<<16)
#define RE_OPTION_ENCODING_SHIFT 8
#define RE_OPTION_ENCODING(e) (((e)&0xff)<<RE_OPTION_ENCODING_SHIFT)
#define RE_OPTION_ENCODING_IDX(o) (((o)>>RE_OPTION_ENCODING_SHIFT)&0xff)
#define RE_OPTION_ENCODING_NONE(o) ((o)&RE_OPTION_ARG_ENCODING_NONE)
#define RE_OPTION_MASK  0xff
#define RE_OPTION_ARG_ENCODING_NONE 32

#define NODE_STRTERM NODE_ZARRAY	/* nothing to gc */
#define NODE_HEREDOC NODE_ARRAY 	/* 1, 3 to gc */
#define SIGN_EXTEND(x,n) (((1<<(n)-1)^((x)&~(~0<<(n))))-(1<<(n)-1))
#define nd_func u1.id
#if SIZEOF_SHORT == 2
#define nd_term(node) ((signed short)(node)->u2.id)
#else
#define nd_term(node) SIGN_EXTEND((node)->u2.id, CHAR_BIT*2)
#endif
#define nd_paren(node) (char)((node)->u2.id >> CHAR_BIT*2)
#define nd_nest u3.cnt

/****** Ripper *******/

#ifdef RIPPER
#define RIPPER_VERSION "0.1.0"

#include "eventids1.c"
#include "eventids2.c"
static ID ripper_id_gets;

static VALUE ripper_dispatch0(struct parser_params*,ID);
static VALUE ripper_dispatch1(struct parser_params*,ID,VALUE);
static VALUE ripper_dispatch2(struct parser_params*,ID,VALUE,VALUE);
static VALUE ripper_dispatch3(struct parser_params*,ID,VALUE,VALUE,VALUE);
static VALUE ripper_dispatch4(struct parser_params*,ID,VALUE,VALUE,VALUE,VALUE);
static VALUE ripper_dispatch5(struct parser_params*,ID,VALUE,VALUE,VALUE,VALUE,VALUE);

#define dispatch0(n)            ripper_dispatch0(parser, TOKEN_PASTE(ripper_id_, n))
#define dispatch1(n,a)          ripper_dispatch1(parser, TOKEN_PASTE(ripper_id_, n), a)
#define dispatch2(n,a,b)        ripper_dispatch2(parser, TOKEN_PASTE(ripper_id_, n), a, b)
#define dispatch3(n,a,b,c)      ripper_dispatch3(parser, TOKEN_PASTE(ripper_id_, n), a, b, c)
#define dispatch4(n,a,b,c,d)    ripper_dispatch4(parser, TOKEN_PASTE(ripper_id_, n), a, b, c, d)
#define dispatch5(n,a,b,c,d,e)  ripper_dispatch5(parser, TOKEN_PASTE(ripper_id_, n), a, b, c, d, e)

#define yyparse ripper_yyparse

static VALUE ripper_intern(const char*);
static VALUE ripper_id2sym(ID);

#define arg_new() dispatch0(args_new)
#define arg_add(l,a) dispatch2(args_add, l, a)
#define arg_prepend(l,a) dispatch2(args_prepend, l, a)
#define arg_add_star(l,a) dispatch2(args_add_star, l, a)
#define arg_add_block(l,b) dispatch2(args_add_block, l, b)
#define arg_add_optblock(l,b) ((b)==Qundef? l : dispatch2(args_add_block, l, b))
#define bare_assoc(v) dispatch1(bare_assoc_hash, v)
#define arg_add_assocs(l,b) arg_add(l, bare_assoc(b))

#define args2mrhs(a) dispatch1(mrhs_new_from_args, a)
#define mrhs_new() dispatch0(mrhs_new)
#define mrhs_add(l,a) dispatch2(mrhs_add, l, a)
#define mrhs_add_star(l,a) dispatch2(mrhs_add_star, l, a)

#define mlhs_new() dispatch0(mlhs_new)
#define mlhs_add(l,a) dispatch2(mlhs_add, l, a)
#define mlhs_add_star(l,a) dispatch2(mlhs_add_star, l, a)

#define params_new(pars, opts, rest, pars2, blk) \
        dispatch5(params, pars, opts, rest, pars2, blk)

#define blockvar_new(p,v) dispatch2(block_var, p, v)
#define blockvar_add_star(l,a) dispatch2(block_var_add_star, l, a)
#define blockvar_add_block(l,a) dispatch2(block_var_add_block, l, a)

#define method_optarg(m,a) ((a)==Qundef ? m : dispatch2(method_add_arg,m,a))
#define method_arg(m,a) dispatch2(method_add_arg,m,a)
#define method_add_block(m,b) dispatch2(method_add_block, m, b)

#define escape_Qundef(x) ((x)==Qundef ? Qnil : (x))

#define FIXME 0

#endif /* RIPPER */

#ifndef RIPPER
# define ifndef_ripper(x) x
#else
# define ifndef_ripper(x)
#endif

#ifndef RIPPER
# define rb_warn0(fmt)    rb_compile_warn(ruby_sourcefile, ruby_sourceline, fmt)
# define rb_warnI(fmt,a)  rb_compile_warn(ruby_sourcefile, ruby_sourceline, fmt, a)
# define rb_warnS(fmt,a)  rb_compile_warn(ruby_sourcefile, ruby_sourceline, fmt, a)
# define rb_warning0(fmt) rb_compile_warning(ruby_sourcefile, ruby_sourceline, fmt)
# define rb_warningS(fmt,a) rb_compile_warning(ruby_sourcefile, ruby_sourceline, fmt, a)
#else
# define rb_warn0(fmt)    ripper_warn0(parser, fmt)
# define rb_warnI(fmt,a)  ripper_warnI(parser, fmt, a)
# define rb_warnS(fmt,a)  ripper_warnS(parser, fmt, a)
# define rb_warning0(fmt) ripper_warning0(parser, fmt)
# define rb_warningS(fmt,a) ripper_warningS(parser, fmt, a)
static void ripper_warn0(struct parser_params*, const char*);
static void ripper_warnI(struct parser_params*, const char*, int);
#if 0
static void ripper_warnS(struct parser_params*, const char*, const char*);
#endif
static void ripper_warning0(struct parser_params*, const char*);
static void ripper_warningS(struct parser_params*, const char*, const char*);
#endif

#ifdef RIPPER
static void ripper_compile_error(struct parser_params*, const char *fmt, ...);
# define rb_compile_error ripper_compile_error
# define compile_error ripper_compile_error
# define PARSER_ARG parser,
#else
# define compile_error parser->nerr++,rb_compile_error
# define PARSER_ARG ruby_sourcefile, ruby_sourceline,
#endif

/* Older versions of Yacc set YYMAXDEPTH to a very low value by default (150,
   for instance).  This is too low for Ruby to parse some files, such as
   date/format.rb, therefore bump the value up to at least Bison's default. */
#ifdef OLD_YACC
#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif
#endif



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 590 "ripper.y"
{
    VALUE val;
    NODE *node;
    ID id;
    int num;
    struct RVarmap *vars;
}
/* Line 193 of yacc.c.  */
#line 899 "parse.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 912 "parse.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   9597

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  138
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  153
/* YYNRULES -- Number of rules.  */
#define YYNRULES  531
/* YYNRULES -- Number of states.  */
#define YYNSTATES  920

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   365

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     137,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,   136,   123,     2,     2,     2,   121,   116,     2,
     132,   133,   119,   117,   130,   118,   129,   120,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   111,   135,
     113,   109,   112,   110,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   128,     2,   134,   115,     2,   131,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   126,   114,   127,   124,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   122,   125
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    12,    15,    17,    19,    23,
      26,    27,    32,    36,    40,    44,    47,    51,    55,    59,
      63,    67,    68,    74,    79,    83,    87,    91,    98,   104,
     110,   116,   120,   124,   128,   132,   134,   136,   140,   144,
     147,   150,   152,   154,   156,   158,   161,   164,   167,   169,
     174,   179,   180,   186,   189,   193,   198,   204,   209,   215,
     218,   221,   223,   227,   229,   233,   235,   238,   242,   248,
     251,   256,   259,   264,   266,   270,   272,   276,   279,   283,
     285,   289,   291,   296,   300,   304,   308,   312,   315,   317,
     319,   324,   328,   332,   336,   340,   343,   345,   347,   349,
     352,   354,   358,   360,   362,   364,   366,   368,   370,   372,
     374,   376,   378,   379,   384,   386,   388,   390,   392,   394,
     396,   398,   400,   402,   404,   406,   408,   410,   412,   414,
     416,   418,   420,   422,   424,   426,   428,   430,   432,   434,
     436,   438,   440,   442,   444,   446,   448,   450,   452,   454,
     456,   458,   460,   462,   464,   466,   468,   470,   472,   474,
     476,   478,   480,   482,   484,   486,   488,   490,   492,   494,
     496,   498,   500,   502,   504,   506,   508,   510,   512,   514,
     516,   518,   520,   522,   524,   528,   534,   538,   544,   551,
     557,   563,   569,   575,   580,   584,   588,   592,   596,   600,
     604,   608,   612,   616,   621,   626,   629,   632,   636,   640,
     644,   648,   652,   656,   660,   664,   668,   672,   676,   680,
     684,   687,   690,   694,   698,   702,   706,   707,   712,   719,
     721,   723,   725,   728,   733,   736,   740,   742,   744,   746,
     748,   750,   753,   756,   761,   763,   764,   767,   770,   773,
     775,   777,   780,   784,   789,   793,   798,   801,   803,   805,
     807,   809,   811,   813,   815,   817,   819,   820,   825,   826,
     831,   835,   839,   842,   846,   850,   852,   857,   861,   863,
     864,   871,   876,   880,   883,   885,   888,   891,   898,   905,
     906,   907,   915,   916,   917,   925,   931,   936,   937,   938,
     948,   949,   956,   957,   958,   967,   968,   974,   975,   982,
     983,   984,   994,   996,   998,  1000,  1002,  1004,  1006,  1008,
    1011,  1013,  1015,  1017,  1023,  1025,  1028,  1030,  1032,  1034,
    1038,  1040,  1044,  1046,  1051,  1058,  1062,  1068,  1071,  1076,
    1078,  1082,  1087,  1090,  1097,  1100,  1103,  1108,  1110,  1112,
    1114,  1118,  1120,  1125,  1127,  1130,  1132,  1136,  1138,  1140,
    1141,  1145,  1150,  1153,  1157,  1161,  1162,  1168,  1171,  1176,
    1181,  1184,  1189,  1194,  1198,  1202,  1206,  1209,  1211,  1216,
    1217,  1223,  1224,  1230,  1236,  1238,  1240,  1247,  1249,  1251,
    1253,  1255,  1258,  1260,  1263,  1265,  1267,  1269,  1271,  1273,
    1275,  1277,  1280,  1284,  1288,  1292,  1296,  1300,  1301,  1305,
    1307,  1310,  1314,  1318,  1319,  1323,  1324,  1327,  1328,  1331,
    1333,  1334,  1338,  1339,  1344,  1346,  1348,  1350,  1352,  1355,
    1357,  1359,  1361,  1363,  1367,  1369,  1371,  1374,  1377,  1379,
    1381,  1383,  1385,  1387,  1389,  1391,  1393,  1395,  1397,  1399,
    1401,  1403,  1405,  1407,  1409,  1411,  1412,  1417,  1420,  1424,
    1427,  1434,  1443,  1448,  1455,  1460,  1467,  1470,  1475,  1482,
    1485,  1490,  1493,  1498,  1500,  1501,  1503,  1505,  1507,  1509,
    1511,  1513,  1515,  1519,  1521,  1525,  1529,  1531,  1535,  1537,
    1539,  1542,  1544,  1546,  1548,  1551,  1554,  1556,  1558,  1559,
    1564,  1566,  1569,  1571,  1575,  1579,  1582,  1584,  1586,  1588,
    1590,  1592,  1594,  1596,  1598,  1600,  1602,  1604,  1606,  1607,
    1609,  1610,  1612,  1615,  1618,  1619,  1621,  1623,  1625,  1627,
    1629,  1632
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     139,     0,    -1,    -1,   140,   142,    -1,   142,   230,   206,
     233,    -1,   143,   283,    -1,   290,    -1,   144,    -1,   143,
     289,   144,    -1,     1,   144,    -1,    -1,    45,   166,   145,
     166,    -1,    45,    54,    54,    -1,    45,    54,    64,    -1,
      45,    54,    63,    -1,     6,   167,    -1,   144,    40,   148,
      -1,   144,    41,   148,    -1,   144,    42,   148,    -1,   144,
      43,   148,    -1,   144,    44,   144,    -1,    -1,    47,   146,
     126,   142,   127,    -1,    48,   126,   142,   127,    -1,   161,
     109,   149,    -1,   154,   109,   149,    -1,   257,    87,   149,
      -1,   202,   128,   177,   286,    87,   149,    -1,   202,   129,
      52,    87,   149,    -1,   202,   129,    56,    87,   149,    -1,
     202,    85,    52,    87,   149,    -1,   258,    87,   149,    -1,
     161,   109,   184,    -1,   154,   109,   173,    -1,   154,   109,
     184,    -1,   147,    -1,   149,    -1,   147,    37,   147,    -1,
     147,    38,   147,    -1,    39,   147,    -1,   123,   149,    -1,
     171,    -1,   147,    -1,   153,    -1,   150,    -1,    30,   178,
      -1,    21,   178,    -1,    22,   178,    -1,   223,    -1,   223,
     129,   280,   179,    -1,   223,    85,   280,   179,    -1,    -1,
      94,   152,   212,   142,   127,    -1,   279,   179,    -1,   279,
     179,   151,    -1,   202,   129,   280,   179,    -1,   202,   129,
     280,   179,   151,    -1,   202,    85,   280,   179,    -1,   202,
      85,   280,   179,   151,    -1,    32,   179,    -1,    31,   179,
      -1,   156,    -1,    89,   155,   285,    -1,   156,    -1,    89,
     155,   285,    -1,   158,    -1,   158,   157,    -1,   158,    95,
     160,    -1,   158,    95,   160,   130,   159,    -1,   158,    95,
      -1,   158,    95,   130,   159,    -1,    95,   160,    -1,    95,
     160,   130,   159,    -1,    95,    -1,    95,   130,   159,    -1,
     160,    -1,    89,   155,   285,    -1,   157,   130,    -1,   158,
     157,   130,    -1,   157,    -1,   159,   130,   157,    -1,   255,
      -1,   202,   128,   177,   286,    -1,   202,   129,    52,    -1,
     202,    85,    52,    -1,   202,   129,    56,    -1,   202,    85,
      56,    -1,    86,    56,    -1,   258,    -1,   255,    -1,   202,
     128,   177,   286,    -1,   202,   129,    52,    -1,   202,    85,
      52,    -1,   202,   129,    56,    -1,   202,    85,    56,    -1,
      86,    56,    -1,   258,    -1,    52,    -1,    56,    -1,    86,
     162,    -1,   162,    -1,   202,    85,   162,    -1,    52,    -1,
      56,    -1,    53,    -1,   169,    -1,   170,    -1,   164,    -1,
     251,    -1,   165,    -1,   253,    -1,   166,    -1,    -1,   167,
     130,   168,   166,    -1,   114,    -1,   115,    -1,   116,    -1,
      69,    -1,    70,    -1,    71,    -1,    77,    -1,    78,    -1,
     112,    -1,    73,    -1,   113,    -1,    74,    -1,    72,    -1,
      83,    -1,    84,    -1,   117,    -1,   118,    -1,   119,    -1,
      95,    -1,   120,    -1,   121,    -1,    68,    -1,   123,    -1,
     124,    -1,    66,    -1,    67,    -1,    81,    -1,    82,    -1,
     131,    -1,    49,    -1,    50,    -1,    51,    -1,    47,    -1,
      48,    -1,    45,    -1,    37,    -1,     7,    -1,    21,    -1,
      16,    -1,     3,    -1,     5,    -1,    46,    -1,    26,    -1,
      15,    -1,    14,    -1,    10,    -1,     9,    -1,    36,    -1,
      20,    -1,    25,    -1,     4,    -1,    22,    -1,    34,    -1,
      39,    -1,    38,    -1,    23,    -1,     8,    -1,    24,    -1,
      30,    -1,    33,    -1,    32,    -1,    13,    -1,    35,    -1,
       6,    -1,    17,    -1,    31,    -1,    11,    -1,    12,    -1,
      18,    -1,    19,    -1,   161,   109,   171,    -1,   161,   109,
     171,    44,   171,    -1,   257,    87,   171,    -1,   257,    87,
     171,    44,   171,    -1,   202,   128,   177,   286,    87,   171,
      -1,   202,   129,    52,    87,   171,    -1,   202,   129,    56,
      87,   171,    -1,   202,    85,    52,    87,   171,    -1,   202,
      85,    56,    87,   171,    -1,    86,    56,    87,   171,    -1,
     258,    87,   171,    -1,   171,    79,   171,    -1,   171,    80,
     171,    -1,   171,   117,   171,    -1,   171,   118,   171,    -1,
     171,   119,   171,    -1,   171,   120,   171,    -1,   171,   121,
     171,    -1,   171,    68,   171,    -1,   122,    59,    68,   171,
      -1,   122,    60,    68,   171,    -1,    66,   171,    -1,    67,
     171,    -1,   171,   114,   171,    -1,   171,   115,   171,    -1,
     171,   116,   171,    -1,   171,    69,   171,    -1,   171,   112,
     171,    -1,   171,    73,   171,    -1,   171,   113,   171,    -1,
     171,    74,   171,    -1,   171,    70,   171,    -1,   171,    71,
     171,    -1,   171,    72,   171,    -1,   171,    77,   171,    -1,
     171,    78,   171,    -1,   123,   171,    -1,   124,   171,    -1,
     171,    83,   171,    -1,   171,    84,   171,    -1,   171,    75,
     171,    -1,   171,    76,   171,    -1,    -1,    46,   284,   172,
     171,    -1,   171,   110,   171,   284,   111,   171,    -1,   185,
      -1,   171,    -1,   290,    -1,   183,   287,    -1,   183,   130,
     277,   287,    -1,   277,   287,    -1,   132,   177,   285,    -1,
     290,    -1,   175,    -1,   290,    -1,   178,    -1,   153,    -1,
     183,   182,    -1,   277,   182,    -1,   183,   130,   277,   182,
      -1,   181,    -1,    -1,   180,   178,    -1,    96,   173,    -1,
     130,   181,    -1,   290,    -1,   173,    -1,    95,   173,    -1,
     183,   130,   173,    -1,   183,   130,    95,   173,    -1,   183,
     130,   173,    -1,   183,   130,    95,   173,    -1,    95,   173,
      -1,   234,    -1,   235,    -1,   238,    -1,   239,    -1,   240,
      -1,   243,    -1,   256,    -1,   258,    -1,    53,    -1,    -1,
       7,   186,   141,    10,    -1,    -1,    90,   147,   187,   285,
      -1,    89,   142,   133,    -1,   202,    85,    56,    -1,    86,
      56,    -1,    92,   174,   134,    -1,    93,   276,   127,    -1,
      30,    -1,    31,   132,   178,   285,    -1,    31,   132,   285,
      -1,    31,    -1,    -1,    46,   284,   132,   188,   147,   285,
      -1,    39,   132,   147,   285,    -1,    39,   132,   285,    -1,
     279,   225,    -1,   224,    -1,   224,   225,    -1,    97,   217,
      -1,    11,   148,   203,   142,   205,    10,    -1,    12,   148,
     203,   142,   206,    10,    -1,    -1,    -1,    18,   189,   148,
     204,   190,   142,    10,    -1,    -1,    -1,    19,   191,   148,
     204,   192,   142,    10,    -1,    16,   148,   283,   228,    10,
      -1,    16,   283,   228,    10,    -1,    -1,    -1,    20,   207,
      25,   193,   148,   204,   194,   142,    10,    -1,    -1,     3,
     163,   259,   195,   141,    10,    -1,    -1,    -1,     3,    83,
     147,   196,   288,   197,   141,    10,    -1,    -1,     4,   163,
     198,   141,    10,    -1,    -1,     5,   164,   199,   261,   141,
      10,    -1,    -1,    -1,     5,   274,   282,   200,   164,   201,
     261,   141,    10,    -1,    21,    -1,    22,    -1,    23,    -1,
      24,    -1,   185,    -1,   288,    -1,    13,    -1,   288,    13,
      -1,   288,    -1,    27,    -1,   206,    -1,    14,   148,   203,
     142,   205,    -1,   290,    -1,    15,   142,    -1,   161,    -1,
     154,    -1,   264,    -1,    89,   210,   285,    -1,   208,    -1,
     209,   130,   208,    -1,   209,    -1,   209,   130,    95,   264,
      -1,   209,   130,    95,   264,   130,   209,    -1,   209,   130,
      95,    -1,   209,   130,    95,   130,   209,    -1,    95,   264,
      -1,    95,   264,   130,   209,    -1,    95,    -1,    95,   130,
     209,    -1,   266,   130,   270,   273,    -1,   266,   130,    -1,
     266,   130,   270,   130,   266,   273,    -1,   266,   273,    -1,
     270,   273,    -1,   270,   130,   266,   273,    -1,   272,    -1,
     290,    -1,   213,    -1,   114,   214,   114,    -1,    76,    -1,
     114,   211,   214,   114,    -1,   290,    -1,   135,   215,    -1,
     216,    -1,   215,   130,   216,    -1,    52,    -1,   263,    -1,
      -1,   218,   219,   220,    -1,   132,   262,   214,   285,    -1,
     262,   214,    -1,   107,   142,   127,    -1,    29,   142,    10,
      -1,    -1,    28,   222,   212,   142,    10,    -1,   153,   221,
      -1,   223,   129,   280,   176,    -1,   223,    85,   280,   176,
      -1,   279,   175,    -1,   202,   129,   280,   176,    -1,   202,
      85,   280,   175,    -1,   202,    85,   281,    -1,   202,   129,
     175,    -1,   202,    85,   175,    -1,    32,   175,    -1,    32,
      -1,   202,   128,   177,   286,    -1,    -1,   126,   226,   212,
     142,   127,    -1,    -1,    26,   227,   212,   142,    10,    -1,
      17,   183,   203,   142,   229,    -1,   206,    -1,   228,    -1,
       8,   231,   232,   203,   142,   230,    -1,   290,    -1,   173,
      -1,   184,    -1,   290,    -1,    88,   161,    -1,   290,    -1,
       9,   142,    -1,   290,    -1,   254,    -1,   251,    -1,   253,
      -1,   236,    -1,    62,    -1,   237,    -1,   236,   237,    -1,
      99,   245,   106,    -1,   100,   246,   106,    -1,   101,   246,
      65,    -1,   102,   136,   106,    -1,   102,   241,   106,    -1,
      -1,   241,   242,   136,    -1,   247,    -1,   242,   247,    -1,
     103,   136,   106,    -1,   103,   244,   106,    -1,    -1,   244,
      61,   136,    -1,    -1,   245,   247,    -1,    -1,   246,   247,
      -1,    61,    -1,    -1,   105,   248,   250,    -1,    -1,   104,
     249,   142,   127,    -1,    54,    -1,    55,    -1,    57,    -1,
     258,    -1,    98,   252,    -1,   164,    -1,    55,    -1,    54,
      -1,    57,    -1,    98,   246,   106,    -1,    59,    -1,    60,
      -1,   122,    59,    -1,   122,    60,    -1,    52,    -1,    55,
      -1,    54,    -1,    56,    -1,    57,    -1,    34,    -1,    33,
      -1,    35,    -1,    36,    -1,    50,    -1,    49,    -1,    51,
      -1,   255,    -1,   255,    -1,    63,    -1,    64,    -1,   288,
      -1,    -1,   113,   260,   148,   288,    -1,     1,   288,    -1,
     132,   262,   285,    -1,   262,   288,    -1,   266,   130,   268,
     130,   270,   273,    -1,   266,   130,   268,   130,   270,   130,
     266,   273,    -1,   266,   130,   268,   273,    -1,   266,   130,
     268,   130,   266,   273,    -1,   266,   130,   270,   273,    -1,
     266,   130,   270,   130,   266,   273,    -1,   266,   273,    -1,
     268,   130,   270,   273,    -1,   268,   130,   270,   130,   266,
     273,    -1,   268,   273,    -1,   268,   130,   266,   273,    -1,
     270,   273,    -1,   270,   130,   266,   273,    -1,   272,    -1,
      -1,    56,    -1,    55,    -1,    54,    -1,    57,    -1,   263,
      -1,    52,    -1,   264,    -1,    89,   210,   285,    -1,   265,
      -1,   266,   130,   265,    -1,    52,   109,   173,    -1,   267,
      -1,   268,   130,   267,    -1,   119,    -1,    95,    -1,   269,
      52,    -1,   269,    -1,   116,    -1,    96,    -1,   271,    52,
      -1,   130,   272,    -1,   290,    -1,   256,    -1,    -1,   132,
     275,   147,   285,    -1,   290,    -1,   277,   287,    -1,   278,
      -1,   277,   130,   278,    -1,   173,    88,   173,    -1,    58,
     173,    -1,    52,    -1,    56,    -1,    53,    -1,    52,    -1,
      56,    -1,    53,    -1,   169,    -1,    52,    -1,    53,    -1,
     169,    -1,   129,    -1,    85,    -1,    -1,   289,    -1,    -1,
     137,    -1,   284,   133,    -1,   284,   134,    -1,    -1,   137,
      -1,   130,    -1,   135,    -1,   137,    -1,   288,    -1,   289,
     135,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   743,   743,   743,   773,   806,   816,   825,   833,   841,
     847,   847,   855,   863,   874,   884,   892,   901,   910,   923,
     936,   946,   945,   967,   979,   988,   998,  1027,  1048,  1065,
    1082,  1099,  1109,  1118,  1127,  1136,  1139,  1140,  1148,  1156,
    1164,  1172,  1175,  1187,  1188,  1189,  1197,  1205,  1215,  1216,
    1225,  1237,  1236,  1258,  1267,  1279,  1288,  1300,  1309,  1321,
    1330,  1341,  1342,  1352,  1353,  1363,  1371,  1379,  1387,  1395,
    1403,  1411,  1419,  1427,  1435,  1445,  1446,  1456,  1464,  1474,
    1482,  1492,  1500,  1508,  1516,  1524,  1532,  1544,  1554,  1566,
    1574,  1582,  1590,  1598,  1606,  1619,  1632,  1643,  1651,  1654,
    1662,  1670,  1680,  1681,  1682,  1683,  1693,  1705,  1706,  1709,
    1717,  1720,  1728,  1728,  1738,  1739,  1740,  1741,  1742,  1743,
    1744,  1745,  1746,  1747,  1748,  1749,  1750,  1751,  1752,  1753,
    1754,  1755,  1756,  1757,  1758,  1759,  1760,  1761,  1762,  1763,
    1764,  1765,  1766,  1769,  1769,  1769,  1770,  1770,  1771,  1771,
    1771,  1772,  1772,  1772,  1772,  1773,  1773,  1773,  1773,  1774,
    1774,  1774,  1775,  1775,  1775,  1775,  1776,  1776,  1776,  1776,
    1777,  1777,  1777,  1777,  1778,  1778,  1778,  1778,  1779,  1779,
    1779,  1779,  1780,  1780,  1783,  1792,  1802,  1831,  1862,  1883,
    1900,  1917,  1934,  1945,  1956,  1967,  1984,  2001,  2009,  2017,
    2025,  2033,  2041,  2049,  2058,  2067,  2075,  2083,  2091,  2099,
    2107,  2115,  2123,  2131,  2139,  2147,  2155,  2163,  2171,  2182,
    2190,  2198,  2206,  2214,  2222,  2230,  2238,  2238,  2248,  2258,
    2264,  2276,  2277,  2281,  2289,  2299,  2309,  2310,  2313,  2314,
    2317,  2325,  2333,  2343,  2352,  2361,  2361,  2373,  2383,  2387,
    2393,  2401,  2409,  2423,  2440,  2454,  2469,  2479,  2480,  2481,
    2482,  2483,  2484,  2485,  2486,  2487,  2496,  2495,  2520,  2520,
    2529,  2537,  2545,  2553,  2566,  2574,  2582,  2590,  2598,  2606,
    2606,  2616,  2624,  2632,  2643,  2644,  2655,  2659,  2671,  2683,
    2683,  2683,  2694,  2694,  2694,  2705,  2716,  2725,  2727,  2724,
    2780,  2779,  2801,  2810,  2800,  2836,  2835,  2857,  2856,  2884,
    2885,  2884,  2909,  2917,  2925,  2933,  2943,  2955,  2960,  2961,
    2968,  2973,  2976,  2977,  2990,  2991,  3001,  3002,  3005,  3013,
    3023,  3031,  3041,  3049,  3057,  3065,  3073,  3081,  3089,  3100,
    3108,  3118,  3126,  3135,  3143,  3151,  3159,  3167,  3177,  3178,
    3184,  3193,  3202,  3213,  3214,  3224,  3231,  3240,  3248,  3254,
    3254,  3276,  3284,  3294,  3298,  3305,  3304,  3325,  3336,  3345,
    3356,  3365,  3375,  3385,  3393,  3404,  3415,  3423,  3431,  3446,
    3445,  3465,  3464,  3485,  3497,  3498,  3501,  3520,  3523,  3531,
    3539,  3542,  3546,  3549,  3557,  3560,  3561,  3569,  3572,  3589,
    3590,  3591,  3601,  3611,  3638,  3680,  3688,  3695,  3702,  3712,
    3720,  3730,  3738,  3745,  3752,  3763,  3770,  3781,  3788,  3798,
    3800,  3799,  3816,  3815,  3837,  3845,  3853,  3861,  3864,  3876,
    3877,  3878,  3879,  3882,  3913,  3914,  3915,  3923,  3933,  3934,
    3935,  3936,  3937,  3938,  3939,  3940,  3941,  3942,  3943,  3944,
    3947,  3957,  3967,  3968,  3971,  3980,  3979,  3987,  3999,  4011,
    4017,  4025,  4033,  4041,  4049,  4057,  4065,  4073,  4081,  4089,
    4097,  4105,  4113,  4121,  4130,  4139,  4148,  4157,  4166,  4177,
    4178,  4190,  4198,  4217,  4224,  4237,  4251,  4259,  4275,  4276,
    4279,  4291,  4302,  4303,  4306,  4322,  4326,  4336,  4346,  4346,
    4375,  4376,  4386,  4393,  4403,  4411,  4421,  4422,  4423,  4426,
    4427,  4428,  4429,  4432,  4433,  4434,  4437,  4442,  4449,  4450,
    4453,  4454,  4457,  4460,  4463,  4464,  4465,  4468,  4469,  4472,
    4473,  4477
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "keyword_class", "keyword_module",
  "keyword_def", "keyword_undef", "keyword_begin", "keyword_rescue",
  "keyword_ensure", "keyword_end", "keyword_if", "keyword_unless",
  "keyword_then", "keyword_elsif", "keyword_else", "keyword_case",
  "keyword_when", "keyword_while", "keyword_until", "keyword_for",
  "keyword_break", "keyword_next", "keyword_redo", "keyword_retry",
  "keyword_in", "keyword_do", "keyword_do_cond", "keyword_do_block",
  "keyword_do_LAMBDA", "keyword_return", "keyword_yield", "keyword_super",
  "keyword_self", "keyword_nil", "keyword_true", "keyword_false",
  "keyword_and", "keyword_or", "keyword_not", "modifier_if",
  "modifier_unless", "modifier_while", "modifier_until", "modifier_rescue",
  "keyword_alias", "keyword_defined", "keyword_BEGIN", "keyword_END",
  "keyword__LINE__", "keyword__FILE__", "keyword__ENCODING__",
  "tIDENTIFIER", "tFID", "tGVAR", "tIVAR", "tCONSTANT", "tCVAR", "tLABEL",
  "tINTEGER", "tFLOAT", "tSTRING_CONTENT", "tCHAR", "tNTH_REF",
  "tBACK_REF", "tREGEXP_END", "tUPLUS", "tUMINUS", "tPOW", "tCMP", "tEQ",
  "tEQQ", "tNEQ", "tGEQ", "tLEQ", "tANDOP", "tOROP", "tMATCH", "tNMATCH",
  "tDOT2", "tDOT3", "tAREF", "tASET", "tLSHFT", "tRSHFT", "tCOLON2",
  "tCOLON3", "tOP_ASGN", "tASSOC", "tLPAREN", "tLPAREN_ARG", "tRPAREN",
  "tLBRACK", "tLBRACE", "tLBRACE_ARG", "tSTAR", "tAMPER", "tLAMBDA",
  "tSYMBEG", "tSTRING_BEG", "tXSTRING_BEG", "tREGEXP_BEG", "tWORDS_BEG",
  "tQWORDS_BEG", "tSTRING_DBEG", "tSTRING_DVAR", "tSTRING_END", "tLAMBEG",
  "tLOWEST", "'='", "'?'", "':'", "'>'", "'<'", "'|'", "'^'", "'&'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "tUMINUS_NUM", "'!'", "'~'", "tLAST_TOKEN",
  "'{'", "'}'", "'['", "'.'", "','", "'`'", "'('", "')'", "']'", "';'",
  "' '", "'\\n'", "$accept", "program", "@1", "bodystmt", "compstmt",
  "stmts", "stmt", "@2", "@3", "expr", "expr_value", "command_call",
  "block_command", "cmd_brace_block", "@4", "command", "mlhs",
  "mlhs_inner", "mlhs_basic", "mlhs_item", "mlhs_head", "mlhs_post",
  "mlhs_node", "lhs", "cname", "cpath", "fname", "fsym", "fitem",
  "undef_list", "@5", "op", "reswords", "arg", "@6", "arg_value",
  "aref_args", "paren_args", "opt_paren_args", "opt_call_args",
  "call_args", "command_args", "@7", "block_arg", "opt_block_arg", "args",
  "mrhs", "primary", "@8", "@9", "@10", "@11", "@12", "@13", "@14", "@15",
  "@16", "@17", "@18", "@19", "@20", "@21", "@22", "@23", "primary_value",
  "then", "do", "if_tail", "opt_else", "for_var", "f_marg", "f_marg_list",
  "f_margs", "block_param", "opt_block_param", "block_param_def",
  "opt_bv_decl", "bv_decls", "bvar", "lambda", "@24", "f_larglist",
  "lambda_body", "do_block", "@25", "block_call", "method_call",
  "brace_block", "@26", "@27", "case_body", "cases", "opt_rescue",
  "exc_list", "exc_var", "opt_ensure", "literal", "strings", "string",
  "string1", "xstring", "regexp", "words", "word_list", "word", "qwords",
  "qword_list", "string_contents", "xstring_contents", "string_content",
  "@28", "@29", "string_dvar", "symbol", "sym", "dsym", "numeric",
  "variable", "var_ref", "var_lhs", "backref", "superclass", "@30",
  "f_arglist", "f_args", "f_bad_arg", "f_norm_arg", "f_arg_item", "f_arg",
  "f_opt", "f_optarg", "restarg_mark", "f_rest_arg", "blkarg_mark",
  "f_block_arg", "opt_f_block_arg", "singleton", "@31", "assoc_list",
  "assocs", "assoc", "operation", "operation2", "operation3",
  "dot_or_colon", "opt_terms", "opt_nl", "rparen", "rbracket", "trailer",
  "term", "terms", "none", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,    61,
      63,    58,    62,    60,   124,    94,    38,    43,    45,    42,
      47,    37,   364,    33,   126,   365,   123,   125,    91,    46,
      44,    96,    40,    41,    93,    59,    32,    10
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   138,   140,   139,   141,   142,   143,   143,   143,   143,
     145,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   146,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   147,   147,   147,   147,
     147,   147,   148,   149,   149,   149,   149,   149,   150,   150,
     150,   152,   151,   153,   153,   153,   153,   153,   153,   153,
     153,   154,   154,   155,   155,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   157,   157,   158,   158,   159,
     159,   160,   160,   160,   160,   160,   160,   160,   160,   161,
     161,   161,   161,   161,   161,   161,   161,   162,   162,   163,
     163,   163,   164,   164,   164,   164,   164,   165,   165,   166,
     166,   167,   168,   167,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   172,   171,   171,   171,
     173,   174,   174,   174,   174,   175,   176,   176,   177,   177,
     178,   178,   178,   178,   178,   180,   179,   181,   182,   182,
     183,   183,   183,   183,   184,   184,   184,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   186,   185,   187,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   188,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   189,
     190,   185,   191,   192,   185,   185,   185,   193,   194,   185,
     195,   185,   196,   197,   185,   198,   185,   199,   185,   200,
     201,   185,   185,   185,   185,   185,   202,   203,   203,   203,
     204,   204,   205,   205,   206,   206,   207,   207,   208,   208,
     209,   209,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   211,   211,   211,   211,   211,   211,   211,   212,   212,
     213,   213,   213,   214,   214,   215,   215,   216,   216,   218,
     217,   219,   219,   220,   220,   222,   221,   223,   223,   223,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   226,
     225,   227,   225,   228,   229,   229,   230,   230,   231,   231,
     231,   232,   232,   233,   233,   234,   234,   234,   235,   236,
     236,   236,   237,   238,   239,   240,   240,   241,   241,   242,
     242,   243,   243,   244,   244,   245,   245,   246,   246,   247,
     248,   247,   249,   247,   250,   250,   250,   250,   251,   252,
     252,   252,   252,   253,   254,   254,   254,   254,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     256,   257,   258,   258,   259,   260,   259,   259,   261,   261,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   263,   263,   263,   263,   264,
     264,   265,   265,   266,   266,   267,   268,   268,   269,   269,
     270,   270,   271,   271,   272,   273,   273,   274,   275,   274,
     276,   276,   277,   277,   278,   278,   279,   279,   279,   280,
     280,   280,   280,   281,   281,   281,   282,   282,   283,   283,
     284,   284,   285,   286,   287,   287,   287,   288,   288,   289,
     289,   290
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     4,     2,     1,     1,     3,     2,
       0,     4,     3,     3,     3,     2,     3,     3,     3,     3,
       3,     0,     5,     4,     3,     3,     3,     6,     5,     5,
       5,     3,     3,     3,     3,     1,     1,     3,     3,     2,
       2,     1,     1,     1,     1,     2,     2,     2,     1,     4,
       4,     0,     5,     2,     3,     4,     5,     4,     5,     2,
       2,     1,     3,     1,     3,     1,     2,     3,     5,     2,
       4,     2,     4,     1,     3,     1,     3,     2,     3,     1,
       3,     1,     4,     3,     3,     3,     3,     2,     1,     1,
       4,     3,     3,     3,     3,     2,     1,     1,     1,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     5,     3,     5,     6,     5,
       5,     5,     5,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     4,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     3,     3,     3,     3,     0,     4,     6,     1,
       1,     1,     2,     4,     2,     3,     1,     1,     1,     1,
       1,     2,     2,     4,     1,     0,     2,     2,     2,     1,
       1,     2,     3,     4,     3,     4,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     0,     4,
       3,     3,     2,     3,     3,     1,     4,     3,     1,     0,
       6,     4,     3,     2,     1,     2,     2,     6,     6,     0,
       0,     7,     0,     0,     7,     5,     4,     0,     0,     9,
       0,     6,     0,     0,     8,     0,     5,     0,     6,     0,
       0,     9,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     5,     1,     2,     1,     1,     1,     3,
       1,     3,     1,     4,     6,     3,     5,     2,     4,     1,
       3,     4,     2,     6,     2,     2,     4,     1,     1,     1,
       3,     1,     4,     1,     2,     1,     3,     1,     1,     0,
       3,     4,     2,     3,     3,     0,     5,     2,     4,     4,
       2,     4,     4,     3,     3,     3,     2,     1,     4,     0,
       5,     0,     5,     5,     1,     1,     6,     1,     1,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     3,     3,     3,     0,     3,     1,
       2,     3,     3,     0,     3,     0,     2,     0,     2,     1,
       0,     3,     0,     4,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     3,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     2,     3,     2,
       6,     8,     4,     6,     4,     6,     2,     4,     6,     2,
       4,     2,     4,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     3,     1,     3,     1,     1,
       2,     1,     1,     1,     2,     2,     1,     1,     0,     4,
       1,     2,     1,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       0,     1,     2,     2,     0,     1,     1,     1,     1,     1,
       2,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     1,     0,     0,     0,     0,     0,   266,
       0,     0,   518,   289,   292,     0,   312,   313,   314,   315,
     275,   245,   245,   444,   443,   445,   446,     0,     0,   520,
      21,     0,   448,   447,   449,   438,   508,   440,   439,   441,
     442,   434,   435,   399,   452,   453,     0,     0,     0,     0,
       0,   531,   531,    73,   359,   417,   415,   417,   417,   407,
     413,     0,     0,     0,     3,   518,     7,    35,    36,    44,
      43,     0,    61,     0,    65,    75,     0,    41,   229,     0,
      48,   284,   257,   258,   398,   400,   259,   260,   261,   262,
     396,   397,   395,   450,   263,     0,   264,   245,     6,     9,
     312,   313,   275,   278,   377,     0,   520,    97,    98,     0,
       0,     0,     0,   100,     0,   316,     0,   450,   264,     0,
     305,   153,   164,   154,   177,   150,   170,   160,   159,   180,
     181,   175,   158,   157,   152,   178,   182,   183,   162,   151,
     165,   169,   171,   163,   156,   172,   179,   174,   173,   166,
     176,   161,   149,   168,   167,   148,   155,   146,   147,   143,
     144,   145,   102,   104,   103,   138,   139,   135,   117,   118,
     119,   126,   123,   125,   120,   121,   140,   141,   127,   128,
     132,   122,   124,   114,   115,   116,   129,   130,   131,   133,
     134,   136,   137,   142,   498,   307,   105,   106,   497,     0,
     173,   166,   176,   161,   143,   144,   145,   102,   103,   107,
     109,   111,    15,   108,   110,     0,     0,    42,     0,     0,
       0,   450,     0,   264,     0,   527,   528,   518,     0,   529,
     519,     0,     0,     0,   327,   326,     0,     0,   450,   264,
       0,     0,     0,     0,   240,   230,   250,    46,   244,   531,
     531,   502,    47,    45,   520,    60,     0,   531,   376,    59,
     520,    39,     0,    10,   521,   226,     0,     0,   205,     0,
     206,   272,     0,     0,   520,    63,   268,     0,   524,   524,
     231,     0,     0,   524,   500,     0,     0,    71,     0,    81,
      88,   286,   474,   431,   430,   432,   429,     0,   428,     0,
       0,     0,     0,     0,     0,     0,   436,   437,    40,   220,
     221,     5,   519,     0,     0,     0,     0,     0,     0,     0,
     365,   367,     0,    77,     0,    69,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   531,     0,     0,     0,   381,
     379,   285,   401,     0,     0,   370,    53,   283,     0,   302,
      97,    98,    99,   436,   437,     0,   455,   300,   454,     0,
     531,     0,     0,     0,   474,   517,   516,   309,   112,     0,
     531,   272,   318,     0,   317,     0,     0,   531,     0,     0,
       0,     0,     0,     0,     0,   530,     0,     0,   272,     0,
     531,     0,   297,   505,   251,   247,     0,     0,   241,   249,
       0,   242,   520,     0,   277,   246,   520,   239,   238,   520,
     282,    12,    14,    13,     0,   279,     0,     0,     0,     0,
       0,     0,   520,   270,    62,   520,   273,   526,   525,   232,
     526,   234,   274,   501,    87,    79,    74,     0,     0,   531,
       0,   480,   477,   476,   475,   478,     0,   489,   493,   492,
     488,   474,     0,   531,   479,   481,   483,   531,   486,   531,
     491,   531,     0,   473,   419,   422,   420,   433,   418,   402,
     416,   403,   404,   405,   406,     0,   409,   411,     0,   412,
       0,     0,     8,    16,    17,    18,    19,    20,    37,    38,
     531,     0,    25,    33,     0,    34,   520,     0,    67,    78,
      24,   184,   250,    32,   202,   210,   215,   216,   217,   212,
     214,   224,   225,   218,   219,   195,   196,   222,   223,   520,
     211,   213,   207,   208,   209,   197,   198,   199,   200,   201,
     509,   514,   510,   515,   375,   245,   373,   520,   509,   511,
     510,   512,   374,   245,   509,   510,   245,   245,   531,   531,
      26,   186,    31,   194,    51,    54,     0,   457,     0,     0,
      97,    98,   101,     0,   520,   531,     0,   520,   474,     0,
       0,     0,     0,   267,   531,   531,   387,   531,   319,   184,
     513,   510,   520,   509,   510,   531,     0,     0,   296,   321,
     290,   320,   293,   513,   271,   520,   509,   510,     0,   504,
       0,   252,   248,   531,   503,   276,   522,   235,   281,    11,
       0,   227,     0,    23,   193,    64,   269,   524,     0,    72,
      84,    86,   520,   509,   510,     0,   480,     0,   339,   330,
     332,   520,   328,   531,     0,     0,   360,     0,   362,   353,
       0,   466,   496,     0,   469,   490,     0,   471,   494,     0,
       0,   408,   410,   414,   203,   204,   351,   531,     0,   349,
     348,   256,     0,    76,    70,     0,     0,     0,     0,     0,
     372,    57,     0,   378,     0,     0,   237,   371,    55,   236,
     369,    50,   368,    49,     0,     0,     0,   531,   303,     0,
       0,   378,   306,   499,   520,     0,   459,   310,   113,   388,
     389,   531,   390,     0,   531,   324,     0,     0,   322,     0,
     378,     0,     0,     0,   295,     0,     0,     0,     0,   378,
       0,   253,   243,   520,    22,   233,    80,    82,   485,   520,
       0,   337,     0,   482,   520,     0,     0,   357,   354,   355,
     358,   484,   531,   531,   495,   531,   487,   531,   531,     0,
     424,   425,   426,   421,   427,   531,     0,   531,   531,   347,
       0,     0,   254,    68,   185,     0,    30,   191,   192,    58,
     523,     0,    28,   189,    29,   190,    56,     0,     0,   187,
       0,     0,   456,   301,   458,   308,   474,     0,     0,   392,
     325,     0,     4,   394,     0,   287,     0,   288,   252,   531,
       0,     0,   298,   280,   329,   340,     0,   335,   331,   361,
     364,   363,     0,     0,   462,     0,   464,     0,   470,     0,
     467,   472,   423,     0,   350,   342,   344,     0,   345,   366,
     255,   228,    27,   188,   382,   380,     0,     0,     0,     0,
     391,     0,    89,    96,     0,   393,     0,   384,   385,   383,
     291,   294,     0,     0,   338,     0,   333,   356,   531,   531,
     531,   531,   352,   531,   531,    52,   304,     0,    95,     0,
     531,     0,   531,   531,     0,   336,     0,   463,     0,   460,
     465,   468,     0,   341,   346,   311,   513,    94,   520,   509,
     510,   386,   323,   299,   334,   531,   531,   378,   461,   343
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   389,   390,    65,    66,   434,   266,    67,
     218,    68,    69,   575,   707,    70,    71,   274,    72,    73,
      74,   456,    75,   219,   113,   114,   209,   210,   211,   212,
     592,   561,   197,    77,   436,   246,   277,   554,   697,   426,
     427,   255,   256,   248,   418,   249,   515,    78,   215,   445,
     630,   231,   737,   232,   738,   618,   872,   579,   576,   801,
     382,   384,   591,   806,   269,   393,   610,   727,   728,   237,
     649,   650,   651,   775,   678,   679,   658,   758,   759,   291,
     292,   472,   656,   321,   510,    80,    81,   367,   569,   568,
     404,   869,   595,   721,   808,   812,    82,    83,    84,    85,
      86,    87,    88,   303,   495,    89,   305,   299,   297,   488,
     670,   669,   773,    90,   298,    91,    92,   221,    94,   222,
     223,   377,   578,   589,   590,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   764,   661,   199,   383,   282,   250,
     251,   119,   583,   556,   387,   228,   423,   424,   693,   449,
     394,   230,    98
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -678
static const yytype_int16 yypact[] =
{
    -678,   130,  2188,  -678,  6264,  7899,  8214,  4679,  5803,  -678,
    7572,  7572,  4328,  -678,  -678,  8004,  6373,  6373,  -678,  -678,
    6373,  2685,  2292,  -678,  -678,  -678,  -678,  5415,  5674,   -48,
    -678,    32,  -678,  -678,  -678,  4801,  2423,  -678,  -678,  4925,
    -678,  -678,  -678,  -678,  -678,  -678,  7681,  7681,   132,  3705,
    7572,  6591,  6918,  6054,  -678,  5545,  -678,  -678,  -678,    40,
      68,   346,  7790,  7681,  -678,   163,   654,   299,  -678,  -678,
     194,   138,  -678,   147,  8109,  -678,   174,  2275,   427,   434,
      23,    75,  -678,  -678,   161,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,   372,  -678,   199,   378,    71,  -678,   654,
    -678,  -678,  -678,   200,   209,   253,   -48,   418,   425,  7572,
      97,  3840,   458,  -678,    72,  -678,   460,  -678,  -678,    71,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,    46,    61,
     156,   189,  -678,  -678,  -678,  -678,  -678,  -678,  -678,   206,
     217,   234,   267,  -678,   304,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,   316,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,   196,  -678,  -678,  3082,   332,   299,    63,   300,
     473,   185,   330,   262,    63,  -678,  -678,   163,   402,  -678,
     311,  7572,  7572,   393,  -678,  -678,   556,   436,    62,    85,
    7681,  7681,  7681,  7681,  -678,  2275,   364,  -678,  -678,   334,
     374,  -678,  -678,  -678,  4219,  -678,  6373,  6373,  -678,  -678,
    4437,  -678,   226,  -678,  -678,   382,   412,  3975,  -678,   585,
     475,   499,  3705,   419,   -48,   459,   299,   470,   -17,    47,
    -678,   364,   466,    47,  -678,   538,  8319,   467,   603,   631,
     634,  -678,  1021,  -678,  -678,  -678,  -678,   306,  -678,   559,
     569,   289,   500,   601,   506,    31,   549,   550,  -678,  -678,
    -678,  -678,  4546,  7572,  7572,  7572,  7572,  6264,  7572,  7572,
    -678,  -678,  7027,  -678,  3705,  6159,   491,  7027,  7681,  7681,
    7681,  7681,  7681,  7681,  7681,  7681,  7681,  7681,  7681,  7681,
    7681,  7681,  7681,  7681,  7681,  7681,  7681,  7681,  7681,  7681,
    7681,  7681,  7681,  7681,  8481,  6373,  8554,  9357,  9357,  -678,
    -678,  -678,  -678,  7790,  7790,  -678,   528,  -678,   382,   299,
    -678,   641,  -678,  -678,  -678,   163,  -678,  -678,  -678,  8627,
    6373,  8700,  3082,  7572,  1116,  -678,  -678,  -678,  -678,   614,
     617,   277,  -678,  3217,   619,  7681,  8773,  6373,  8846,  7681,
    7681,  3487,   402,  7136,   623,  -678,   109,   109,   110,  8919,
    6373,  8992,  -678,  -678,  -678,  -678,  7681,  6482,  -678,  -678,
    6700,  -678,   -48,   509,  -678,  -678,   -48,  -678,  -678,    96,
    -678,  -678,  -678,  -678,  5803,  -678,  7681,  3975,   529,  8773,
    8846,  7681,   -48,  -678,   527,   -48,  -678,  6809,  -678,  -678,
    6918,  -678,  -678,  -678,   641,  -678,   541,  8319,  9065,  6373,
    9138,   568,  -678,  -678,  -678,  -678,   873,  -678,  -678,  -678,
    -678,   803,    56,   523,  -678,  -678,  -678,   548,  -678,   551,
     607,   552,   616,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,   192,  -678,  -678,   544,  -678,
    7681,  7681,   654,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
      42,  7681,  -678,   570,   574,  -678,   -48,  8319,   580,  -678,
    -678,  1418,  -678,  -678,   475,  2668,  2668,  2668,  2668,   657,
     657,  9476,  2537,  2668,  2668,  2406,  2406,   406,   406,  9421,
     657,   657,   530,   530,   256,   369,   369,   475,   475,   475,
    2816,  5171,  2947,  5293,  -678,   209,  -678,   -48,   557,  -678,
     678,  -678,  -678,  2554,  -678,  -678,  1796,  1796,    42,    42,
    -678,  2794,  -678,  2275,  -678,  -678,   163,  -678,  7572,  3082,
     446,   408,  -678,   209,   -48,   209,   679,    96,   803,  3082,
     163,  5932,  5803,  -678,  7245,   700,  -678,   463,  -678,  2925,
    5049,  2004,   -48,   295,   392,   700,   707,    81,  -678,  -678,
    -678,  -678,  -678,    59,    80,   -48,   118,   120,  7572,  -678,
    7681,   364,  -678,   374,  -678,  -678,  -678,  -678,  -678,  -678,
    7572,  2275,   591,  -678,  2275,    29,  -678,    47,  8319,   541,
     446,   408,   -48,   162,   323,  7681,  -678,   873,   115,  -678,
     590,   -48,  -678,   523,  4110,  3975,  -678,   811,  -678,  -678,
     803,  -678,  -678,   803,  -678,  -678,   583,  -678,  -678,  3975,
     478,  -678,  -678,  -678,   475,   475,  -678,   696,  4110,  -678,
    -678,   592,  7354,  -678,   541,  8319,  7681,   612,  7790,  7681,
    -678,   528,   593,   695,  7790,  7790,  -678,  -678,   528,  -678,
    -678,  -678,  -678,  -678,  4110,  3975,  7681,    42,  -678,   163,
     718,  -678,  -678,  -678,   -48,   719,  -678,  -678,  -678,   570,
    -678,   645,  -678,  3596,   728,  -678,  7572,   735,  -678,  7681,
     397,  7681,  7681,   736,  -678,  7463,  3352,  4110,  4110,   129,
     109,  -678,  -678,    96,  -678,  -678,  -678,   454,  -678,   -48,
     790,   626,   909,  -678,   -48,   737,   622,  -678,   638,  -678,
    -678,  -678,   650,   653,  -678,   656,  -678,   663,   656,   637,
    -678,  -678,  -678,  -678,  -678,   523,   680,   665,   666,  -678,
     787,  7681,   672,   541,  2275,  7681,  -678,  2275,  2275,  -678,
    -678,  7790,  -678,  2275,  -678,  2275,  -678,   793,   683,  2275,
    3975,  3082,  -678,  -678,  -678,  -678,  1116,  8424,    63,  -678,
    -678,  4110,  -678,  -678,    63,  -678,  7681,  -678,  -678,   151,
     801,   804,  -678,  -678,  -678,   688,   790,   126,  -678,  -678,
    -678,  -678,   811,   803,  -678,   583,  -678,   583,  -678,   583,
    -678,  -678,  -678,   699,  -678,  1171,  -678,   583,  -678,  -678,
     690,  2275,  -678,  2275,  -678,  -678,   697,   816,  3082,   765,
    -678,   694,   631,   634,  3082,  -678,  3217,  -678,  -678,  -678,
    -678,  -678,  4110,   790,   688,   790,   698,  -678,   656,   702,
     656,   656,  -678,   703,   656,  -678,  -678,   820,   641,  9211,
    6373,  9284,   617,   463,   824,   688,   790,  -678,   583,  -678,
    -678,  -678,   583,  -678,  -678,  -678,    99,   408,   -48,    89,
     102,  -678,  -678,  -678,   688,   656,   656,   114,  -678,  -678
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -678,  -678,  -678,  -351,  1008,  -678,    39,  -678,  -678,   251,
     183,   -34,  -678,  -225,  -678,    10,   821,  -151,   -15,   -54,
    -678,  -417,     9,   892,   -71,   831,    -6,  -678,   -11,  -678,
    -678,     4,  -678,   692,  -678,   732,  -678,    60,   -38,  -317,
      51,    44,  -678,  -215,  -226,   -46,  -290,    73,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,    -2,  -205,  -385,   -53,  -550,  -678,
    -677,  -676,   204,  -678,  -499,  -678,  -558,  -678,     7,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,   762,  -678,  -678,
    -379,  -678,   -40,  -678,  -678,  -678,  -678,  -678,  -678,   769,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,   502,  -213,
    -678,  -678,  -678,     8,  -678,    13,  -678,   871,   847,  1198,
    1047,  -678,  -678,    55,  -257,  -607,  -405,  -618,  -560,  -598,
     211,  -678,  -512,  -678,  -285,   477,  -678,  -678,  -678,     1,
    -295,   112,  -300,  -678,  -678,   -21,   -23,   567,  -538,  -250,
      79,   807,  1383
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -532
static const yytype_int16 yytable[] =
{
      79,   195,    79,   116,   116,   278,   265,   483,   220,   220,
     220,   196,   196,   236,   220,   220,   213,   263,   220,   401,
     326,   214,   612,   606,   421,   220,   244,   244,   308,   451,
     244,   586,   196,   453,   275,   473,   213,   523,   557,   372,
     639,   214,   761,    99,   311,   724,   711,    79,   220,   296,
     760,   288,   279,   283,   555,   733,   563,   566,   567,   196,
     220,   652,   287,   584,   730,   766,   259,   247,   252,   704,
     705,   253,   288,   375,   825,   828,   392,   739,   115,   115,
     602,   585,   258,   368,   -92,   654,   490,   -89,   115,   264,
     496,   229,   498,   615,   392,   754,   555,   359,   563,   483,
     684,   359,   -91,   765,   747,   -94,   768,   220,   357,    79,
     -96,   585,   -92,   447,    97,   -93,    97,   777,   676,   776,
     448,   442,    97,    97,    97,   624,   115,   -90,    97,    97,
       3,  -444,    97,   318,   319,   -95,   609,   499,   -62,    97,
     585,   366,   642,   -91,   229,   -93,  -443,   115,   763,   370,
     874,   767,   358,   371,   -90,   624,   677,   365,   267,   -76,
     585,    97,    97,   655,   258,   778,   723,   646,   403,   462,
     463,   464,   465,   516,    97,  -444,   302,   450,   646,   365,
     462,   463,   464,   465,   448,   376,   483,   -83,   271,   -84,
    -443,  -509,   -81,   378,   224,   227,   828,   360,   225,   895,
     226,   360,   622,   257,   304,   622,   402,   225,   800,   226,
     -86,   735,  -510,    79,   653,   -88,   225,   843,   226,   761,
     914,    97,   320,    97,   -91,   760,   -91,   761,   710,   220,
     220,  -509,   455,   264,   -92,   766,   -92,   -93,   715,   -93,
     -87,  -445,   652,   751,   225,   750,   226,   322,   -83,   -90,
     -85,   -90,   220,   484,   220,   220,   875,   275,   220,   -82,
      56,   217,   217,   217,   244,    79,   244,   244,   783,   867,
      79,   -83,  -451,   878,  -446,   880,   514,   323,   261,   881,
     431,   514,   672,   327,   288,  -445,   363,   884,   512,   432,
     433,  -448,   -83,   520,   -89,   -83,   485,   486,   225,   -83,
     226,   276,  -447,   483,   720,   422,   229,   425,   582,   275,
      79,   220,   220,   220,   220,    79,   220,   220,  -446,  -449,
     220,   879,    79,   288,   328,   220,   388,    97,   671,   570,
     572,   714,   254,   883,   518,  -448,   318,   319,   915,   341,
     342,   257,   916,    97,    97,   652,  -447,   652,   -85,   400,
     484,   502,  -438,   220,   492,   822,   507,   607,   553,   115,
     369,   220,   220,  -449,   441,   244,    97,   484,    97,    97,
     917,   -96,    97,   349,   350,   351,   352,   353,   220,    97,
      79,   220,   731,   553,    97,   260,   -95,   745,   391,  -441,
     244,    79,   779,   485,   486,   220,  -438,   742,   115,    79,
     553,   385,   736,   455,   -91,   306,   307,   244,   220,   395,
     485,   486,   487,   553,   406,   407,   562,   399,   623,   403,
     244,   652,   876,   629,    97,    97,    97,    97,    97,    97,
      97,    97,   -85,  -441,    97,    79,    97,   328,   196,    97,
     868,   562,   213,   553,  -506,   386,   405,   214,   637,   408,
     857,  -507,   416,   -85,   577,   288,   -85,   220,   562,  -451,
     -85,   412,   553,   455,   417,   364,   789,    97,   652,   244,
     652,   562,  -513,   796,   328,    97,    97,   726,   723,   732,
    -378,   -89,   217,   217,   816,   611,   611,   -96,   351,   352,
     353,   652,    97,  -271,    97,    97,   503,   504,   505,   506,
     562,   -93,   -81,  -438,   420,    97,   -90,   887,   -88,    97,
    -441,   429,  -316,    97,   435,   288,   687,   373,   374,   354,
     562,   483,    97,   349,   350,   351,   352,   353,   700,   702,
     115,  -513,   770,   771,   692,   772,  -271,  -271,   437,  -378,
    -510,    44,    45,   328,  -506,   379,  -438,  -438,   514,    97,
    -506,  -507,   443,  -441,  -441,  -316,  -316,  -507,   396,   300,
     301,   692,   355,   356,   217,   217,   217,   217,   -61,   508,
     509,    97,  -513,   908,  -513,  -513,   220,    79,  -509,   692,
    -378,   718,  -378,  -378,   746,   717,   441,    79,   380,   381,
     115,   585,   692,   452,   454,   196,   196,   457,   328,   691,
     213,   397,   398,   864,   446,   214,   493,   698,   -95,   866,
     701,   703,   497,   341,   342,   690,   220,   500,   501,   692,
     484,   519,   574,   696,   593,   594,   696,   696,   220,   -87,
     484,   455,   598,   608,   587,   646,   288,   462,   463,   464,
     465,   409,   626,   690,   694,   696,   348,   349,   350,   351,
     352,   353,    79,    79,   786,   708,   633,   -76,   657,   665,
     792,   794,   484,   485,   486,   489,   -91,    79,   668,   716,
     439,   638,   466,   485,   486,   491,    79,   645,   660,   468,
     673,   663,   666,   288,   410,   411,   220,   -83,   458,   712,
      97,    97,   220,   220,   313,   314,   315,   316,   317,   469,
    -250,    97,    79,    79,   682,   485,   486,   494,   245,   245,
     685,   115,   245,   397,   440,   723,  -450,   734,   744,  -264,
     752,    79,  -251,   785,   220,   328,  -272,   790,   803,   805,
      97,   459,   460,   807,    79,    79,    79,   811,   268,   270,
     341,   342,    97,   245,   245,   815,   817,   830,   646,   831,
     462,   463,   464,   465,   309,   310,   826,   852,   115,  -450,
    -450,   709,  -264,  -264,   842,   695,    97,    97,   832,  -272,
    -272,   346,   347,   348,   349,   350,   351,   352,   353,   889,
     833,    97,   791,   835,   281,   466,   837,   -93,   802,   220,
      97,   467,   468,   839,   844,   845,   847,   849,    79,    79,
      97,   740,  -252,   854,   -90,   861,    97,    97,   -85,    79,
     855,   870,   469,   882,   871,   470,    97,    97,   873,   611,
    -253,   888,   890,   891,   885,   -82,   886,   430,   896,   217,
     905,   657,   898,   902,   913,    97,   234,   120,    97,   877,
     912,   444,   646,   361,   462,   463,   464,   465,    97,    97,
      97,   749,   911,   362,   198,   461,    79,   462,   463,   464,
     465,   858,    79,   757,    79,   462,   463,   464,   465,   217,
      79,   762,   312,    93,     0,    93,   117,   117,   117,   647,
     115,   743,     0,     0,     0,   692,   238,     0,   220,     0,
       0,     0,   466,   553,    76,     0,    76,     0,   467,   468,
     244,     0,     0,    97,     0,     0,     0,   235,     0,   814,
       0,     0,    97,    97,     0,     0,     0,     0,     0,   469,
      93,     0,   470,    97,   289,   646,     0,   462,   463,   464,
     465,     0,   245,   245,   245,   309,     0,     0,     0,     0,
       0,    76,     0,     0,     0,   289,   245,     0,   245,   245,
       0,   562,     0,     0,     0,     0,   664,     0,   667,     0,
       0,   646,   647,   462,   463,   464,   465,     0,   648,     0,
      97,     0,   413,   414,   415,     0,    97,   217,    97,     0,
       0,     0,    93,     0,    97,     0,     0,     0,     0,   625,
       0,     0,     0,   627,     0,     0,   628,     0,   647,     0,
       0,     0,    97,    76,   827,     0,     0,     0,     0,   635,
      64,     0,   636,     0,   245,     0,     0,     0,     0,   521,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,     0,   245,     0,    96,
       0,    96,   118,   118,   513,   571,   573,   273,     0,   522,
       0,     0,   239,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   245,   461,     0,   462,   463,   464,   465,     0,
       0,     0,     0,   683,     0,     0,    93,   599,     0,   245,
       0,   571,   573,     0,     0,   245,    96,     0,     0,     0,
     290,     0,   245,     0,     0,     0,     0,    76,   245,   245,
     466,     0,   245,     0,     0,     0,   467,   468,     0,   273,
       0,   290,     0,     0,     0,     0,     0,     0,   631,     0,
       0,     0,     0,   634,     0,   522,     0,   469,    93,   245,
     470,     0,   245,    93,     0,     0,     0,     0,   619,   621,
       0,   245,   281,   471,   713,     0,     0,   289,    96,    76,
       0,     0,     0,     0,    76,     0,     0,     0,   461,     0,
     462,   463,   464,   465,     0,     0,     0,     0,     0,   621,
       0,     0,   281,    93,     0,     0,     0,     0,    93,     0,
       0,     0,   674,   675,     0,    93,   289,     0,     0,     0,
      95,     0,    95,   245,    76,   466,     0,     0,     0,    76,
       0,   467,   468,     0,     0,     0,    76,     0,   753,     0,
       0,     0,     0,   646,     0,   462,   463,   464,   465,     0,
       0,     0,   469,     0,     0,   470,     0,     0,     0,   834,
     836,     0,   838,   681,   840,   841,     0,    95,   588,     0,
       0,     0,     0,    93,   846,   848,     0,     0,     0,     0,
     466,     0,    96,     0,    93,     0,   467,   468,     0,     0,
       0,     0,    93,     0,    76,   438,     0,     0,     0,     0,
     273,   804,     0,     0,     0,    76,   245,   469,     0,     0,
     470,     0,     0,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,    95,
     823,     0,   245,     0,    96,     0,   824,     0,     0,    96,
       0,   829,     0,     0,     0,     0,   719,     0,   289,    76,
       0,     0,   273,   290,     0,     0,     0,   245,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   741,     0,     0,   897,   899,   900,   901,    96,
     903,   904,     0,     0,    96,     0,     0,     0,     0,     0,
       0,    96,   290,     0,   245,     0,     0,   748,   784,     0,
     787,   788,     0,     0,     0,     0,   793,   795,   289,     0,
       0,     0,   918,   919,     0,     0,     0,     0,   799,     0,
       0,   597,     0,     0,     0,     0,     0,     0,     0,   605,
       0,     0,     0,    95,   782,     0,     0,     0,     0,     0,
       0,   787,     0,   793,   795,     0,     0,   245,     0,    96,
       0,     0,     0,     0,   280,   284,     0,     0,     0,     0,
      96,     0,     0,     0,     0,   632,     0,     0,    96,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,   686,     0,     0,    95,     0,   818,     0,     0,
      95,    76,     0,   245,     0,     0,     0,   851,     0,     0,
       0,    76,     0,   853,    96,     0,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,     0,
       0,   341,   342,     0,   290,     0,     0,     0,   853,   289,
      95,     0,     0,   850,     0,    95,     0,     0,     0,     0,
       0,     0,    95,     0,     0,    93,    93,     0,   343,     0,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
      93,     0,     0,     0,     0,     0,    76,    76,  -230,    93,
       0,     0,     0,     0,     0,     0,   289,     0,     0,     0,
       0,    76,     0,     0,   290,     0,     0,     0,     0,     0,
      76,     0,     0,     0,     0,    93,    93,     0,     0,     0,
      95,     0,   245,     0,     0,     0,     0,     0,     0,     0,
       0,    95,     0,     0,    93,     0,    76,    76,     0,    95,
       0,     0,     0,     0,     0,     0,     0,    93,    93,    93,
       0,     0,     0,     0,     0,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    96,     0,    76,    76,
      76,     0,   419,   419,     0,    95,    96,     0,     0,     0,
     428,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   755,   756,     0,     0,     0,     0,     0,     0,
       0,    93,    93,     0,     0,     0,     0,   769,   862,     0,
       0,     0,    93,     0,     0,   290,   780,     0,     0,     0,
       0,     0,    76,    76,     0,     0,     0,     0,     0,   860,
       0,    96,    96,    76,     0,     0,     0,     0,     0,     0,
       0,     0,   797,   798,     0,     0,    96,   774,     0,     0,
       0,     0,     0,     0,     0,    96,     0,     0,     0,    93,
       0,   810,   290,     0,     0,    93,     0,    93,   428,     0,
       0,     0,     0,    93,   819,   820,   821,     0,     0,     0,
      76,    96,    96,     0,     0,     0,    76,     0,    76,     0,
       0,     0,     0,   428,    76,     0,     0,     0,     0,     0,
      96,     0,     0,   596,     0,     0,     0,    95,     0,     0,
     428,     0,     0,    96,    96,    96,     0,    95,     0,     0,
       0,     0,     0,   428,     0,     0,  -531,     0,     0,     0,
       0,     0,     0,     0,  -531,  -531,  -531,     0,   856,  -531,
    -531,  -531,     0,  -531,     0,     0,     0,     0,     0,   865,
       0,     0,     0,  -531,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -531,  -531,     0,  -531,  -531,  -531,  -531,
    -531,     0,   428,     0,     0,     0,     0,    96,    96,     0,
       0,     0,    95,    95,   863,     0,   659,     0,    96,     0,
     662,     0,   662,     0,   662,     0,     0,    95,     0,     0,
       0,     0,   892,     0,   893,     0,    95,     0,     0,     0,
     894,  -531,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   680,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    95,     0,    96,     0,     0,     0,     0,
       0,    96,     0,    96,     0,     0,     0,     0,     0,    96,
       0,    95,     0,  -531,     0,  -531,     0,     0,   257,  -531,
       0,  -531,     0,  -531,    95,    95,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   699,     0,     0,   699,
     699,   680,   680,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   699,     0,
       0,     0,     0,     0,     0,     0,     0,   722,   725,     0,
     725,     0,     0,     0,     0,     0,     0,     0,   725,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    95,
       0,     0,     0,     0,  -271,     0,   419,     0,     0,    95,
       0,     0,  -271,  -271,  -271,     0,     0,  -271,  -271,  -271,
       0,  -271,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -271,  -271,  -271,     0,     0,   659,     0,     0,     0,
       0,  -271,  -271,     0,  -271,  -271,  -271,  -271,  -271,     0,
       0,     0,     0,     0,     0,     0,    95,     0,     0,     0,
     659,     0,    95,     0,    95,     0,     0,     0,     0,     0,
      95,     0,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,     0,     0,  -271,  -271,  -271,
     680,   689,  -271,     0,     0,     0,     0,     0,  -271,     0,
       0,     0,     0,     0,   809,     0,     0,   813,     0,     0,
       0,  -271,     0,   -94,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,     0,     0,     0,     0,
       0,  -271,  -271,  -271,  -271,     0,     0,  -271,  -271,  -271,
       0,  -271,     0,     0,     0,   662,   662,     0,   662,     0,
     662,   662,     0,     0,     0,     0,     0,     0,   659,     0,
     662,   662,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -531,     4,
       0,     5,     6,     7,     8,     9,     0,     0,     0,    10,
      11,     0,   725,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,     0,     0,    20,    21,
      22,    23,    24,    25,    26,     0,     0,    27,     0,     0,
       0,     0,     0,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,    41,    42,     0,
      43,    44,    45,     0,    46,    47,     0,     0,     0,     0,
       0,   662,   662,   662,   662,     0,   662,   662,     0,     0,
       0,     0,     0,   428,    48,   596,   725,    49,    50,     0,
      51,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,    60,  -377,     0,     0,     0,     0,     0,   662,   662,
    -377,  -377,  -377,     0,     0,  -377,  -377,  -377,     0,  -377,
      61,    62,    63,     0,     0,     0,     0,     0,  -377,  -377,
    -377,     0,     0,  -531,     0,  -531,     0,     0,     0,  -377,
    -377,     0,  -377,  -377,  -377,  -377,  -377,     0,     0,     0,
       0,     0,     0,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,     0,     0,   341,   342,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,
    -377,  -377,  -377,     0,     0,  -377,  -377,  -377,     0,     0,
    -377,     0,     0,     0,     0,   343,  -377,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,     0,     0,     0,
       0,     0,  -377,     0,  -377,  -377,  -377,  -377,  -377,  -377,
    -377,  -377,  -377,  -377,     0,     0,     0,     0,  -377,  -377,
    -377,  -377,  -377,  -265,   257,  -377,  -377,  -377,     0,  -377,
       0,  -265,  -265,  -265,     0,     0,  -265,  -265,  -265,     0,
    -265,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -265,  -265,  -265,     0,     0,     0,     0,     0,     0,     0,
    -265,  -265,     0,  -265,  -265,  -265,  -265,  -265,     0,     0,
       0,     0,     0,     0,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,  -532,  -532,     0,     0,   341,
     342,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,  -265,     0,     0,  -265,  -265,  -265,     0,
       0,  -265,     0,     0,     0,     0,     0,  -265,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,     0,     0,
    -265,     0,     0,  -265,  -265,  -265,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,  -265,  -265,     0,     0,     0,     0,     0,
    -265,  -265,  -265,  -265,  -531,     0,  -265,  -265,  -265,     0,
    -265,     0,  -531,  -531,  -531,     0,     0,  -531,  -531,  -531,
       0,  -531,     0,     0,     0,     0,     0,     0,     0,     0,
    -531,  -531,  -531,     0,     0,     0,     0,     0,     0,     0,
       0,  -531,  -531,     0,  -531,  -531,  -531,  -531,  -531,     0,
       0,     0,     0,     0,     0,   328,   329,   330,   331,   332,
     333,   334,   335,     0,   337,   338,     0,     0,     0,     0,
     341,   342,  -531,  -531,  -531,  -531,  -531,  -531,  -531,  -531,
    -531,  -531,  -531,  -531,  -531,     0,     0,  -531,  -531,  -531,
       0,     0,  -531,     0,     0,     0,     0,     0,  -531,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,     0,
       0,     0,     0,     0,  -531,     0,  -531,  -531,  -531,  -531,
    -531,  -531,  -531,  -531,  -531,  -531,     0,     0,     0,     0,
    -531,  -531,  -531,  -531,  -531,  -278,   257,  -531,  -531,  -531,
       0,  -531,     0,  -278,  -278,  -278,     0,     0,  -278,  -278,
    -278,     0,  -278,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -278,  -278,     0,     0,     0,     0,     0,     0,
       0,     0,  -278,  -278,     0,  -278,  -278,  -278,  -278,  -278,
       0,     0,     0,     0,     0,     0,   328,  -532,  -532,  -532,
    -532,   333,   334,     0,     0,  -532,  -532,     0,     0,     0,
       0,   341,   342,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,     0,     0,  -278,  -278,
    -278,     0,     0,  -278,     0,     0,     0,     0,     0,  -278,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
       0,     0,     0,     0,     0,  -278,     0,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,     0,     0,     0,
       0,     0,  -278,  -278,  -278,  -278,  -513,   254,  -278,  -278,
    -278,     0,  -278,     0,  -513,  -513,  -513,     0,     0,     0,
    -513,  -513,     0,  -513,     0,     0,     0,     0,   706,     0,
       0,     0,  -513,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -513,  -513,     0,  -513,  -513,  -513,  -513,
    -513,     0,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,     0,     0,   341,   342,     0,
       0,     0,     0,     0,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,     0,     0,  -513,
    -513,  -513,     0,   688,   343,     0,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -92,  -513,     0,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,     0,     0,
       0,     0,  -513,  -513,  -513,  -513,   -84,  -271,     0,  -513,
       0,  -513,     0,  -513,     0,  -271,  -271,  -271,     0,     0,
       0,  -271,  -271,     0,  -271,     0,     0,     0,     0,   686,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -271,  -271,     0,  -271,  -271,  -271,
    -271,  -271,     0,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,     0,     0,   341,   342,
       0,     0,     0,     0,     0,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,     0,     0,
    -271,  -271,  -271,     0,   689,   343,     0,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -94,  -271,     0,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,     0,
       0,     0,     0,     0,  -271,  -271,  -271,   -86,     0,     0,
    -271,     0,  -271,     4,  -271,     5,     6,     7,     8,     9,
    -531,  -531,  -531,    10,    11,     0,     0,  -531,    12,     0,
      13,    14,    15,    16,    17,    18,    19,     0,     0,     0,
       0,     0,    20,    21,    22,    23,    24,    25,    26,     0,
       0,    27,     0,     0,     0,     0,     0,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,    41,    42,     0,    43,    44,    45,     0,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,    49,    50,     0,    51,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    61,    62,    63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -531,     4,  -531,
       5,     6,     7,     8,     9,     0,     0,  -531,    10,    11,
       0,  -531,  -531,    12,     0,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,     0,    43,
      44,    45,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,    49,    50,     0,    51,
      52,     0,    53,     0,    54,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    61,
      62,    63,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -531,     4,  -531,     5,     6,     7,     8,     9,
       0,     0,  -531,    10,    11,     0,     0,  -531,    12,  -531,
      13,    14,    15,    16,    17,    18,    19,     0,     0,     0,
       0,     0,    20,    21,    22,    23,    24,    25,    26,     0,
       0,    27,     0,     0,     0,     0,     0,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,    41,    42,     0,    43,    44,    45,     0,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,    49,    50,     0,    51,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    61,    62,    63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -531,     4,  -531,
       5,     6,     7,     8,     9,     0,     0,  -531,    10,    11,
       0,     0,  -531,    12,     0,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,     0,    43,
      44,    45,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,    49,    50,     0,    51,
      52,     0,    53,     0,    54,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,     0,     0,     4,     0,     5,
       6,     7,     8,     9,     0,  -531,  -531,    10,    11,    61,
      62,    63,    12,     0,    13,    14,    15,    16,    17,    18,
      19,     0,  -531,     0,  -531,     0,    20,    21,    22,    23,
      24,    25,    26,     0,     0,    27,     0,     0,     0,     0,
       0,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,    41,    42,     0,    43,    44,
      45,     0,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,    49,    50,     0,    51,    52,
       0,    53,     0,    54,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     4,     0,     5,     6,
       7,     8,     9,     0,     0,     0,    10,    11,    61,    62,
      63,    12,     0,    13,    14,    15,    16,    17,    18,    19,
       0,  -531,     0,  -531,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    27,     0,     0,     0,     0,     0,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,     0,    43,    44,    45,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,     0,   272,    50,     0,    51,    52,     0,
      53,     0,    54,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    63,
       0,     0,     0,     0,     0,     0,     0,     0,  -531,     0,
    -531,     4,  -531,     5,     6,     7,     8,     9,     0,     0,
       0,    10,    11,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,     0,     0,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,     0,     0,    27,
       0,     0,     0,     0,     0,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,    41,
      42,     0,    43,    44,    45,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,     0,    49,
      50,     0,    51,    52,     0,    53,     0,    54,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,    62,    63,     0,     0,     0,     0,     0,
       0,     0,     0,  -531,     0,  -531,     4,  -531,     5,     6,
       7,     8,     9,     0,     0,     0,    10,    11,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    27,     0,     0,     0,     0,     0,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,     0,    43,    44,    45,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,     0,    49,    50,     0,    51,    52,     0,
      53,     0,    54,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    63,
       0,     0,  -531,     0,     0,     0,     0,     0,     0,     0,
    -531,     4,  -531,     5,     6,     7,     8,     9,     0,     0,
    -531,    10,    11,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,     0,     0,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,     0,     0,    27,
       0,     0,     0,     0,     0,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,    41,
      42,     0,    43,    44,    45,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,     0,    49,
      50,     0,    51,    52,     0,    53,     0,    54,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,    61,    62,    63,    12,     0,    13,    14,    15,
     100,   101,    18,    19,     0,  -531,     0,  -531,     0,   102,
      21,    22,    23,    24,    25,    26,     0,     0,   105,     0,
       0,     0,     0,     0,     0,    29,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,   240,    41,    42,
       0,    43,    44,    45,     0,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   216,     0,     0,   111,    50,
       0,    51,    52,     0,   241,   242,    54,    55,    56,    57,
      58,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     9,     0,     0,     0,    10,
      11,    61,   243,    63,    12,     0,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,   264,     0,    20,    21,
      22,    23,    24,    25,    26,     0,     0,    27,     0,     0,
       0,     0,     0,     0,    29,     0,     0,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,    41,    42,     0,
      43,    44,    45,     0,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   216,     0,     0,   111,    50,     0,
      51,    52,     0,     0,     0,    54,    55,    56,    57,    58,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     0,     9,     0,     0,     0,    10,    11,
      61,    62,    63,    12,     0,    13,    14,    15,    16,    17,
      18,    19,     0,   225,     0,   226,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,     0,    29,     0,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,     0,    43,
      44,    45,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   216,     0,     0,   111,    50,     0,    51,
      52,     0,     0,     0,    54,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     8,     9,     0,     0,     0,    10,    11,    61,
      62,    63,    12,     0,    13,    14,    15,    16,    17,    18,
      19,     0,     0,     0,   264,     0,    20,    21,    22,    23,
      24,    25,    26,     0,     0,    27,     0,     0,     0,     0,
       0,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,    41,    42,     0,    43,    44,
      45,     0,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,    49,    50,     0,    51,    52,
       0,    53,     0,    54,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,    62,
      63,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   405,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,     0,     0,     0,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,     0,
       0,     0,     0,     0,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    37,    38,   164,    40,     0,     0,     0,
       0,     0,     0,     0,     0,   165,   166,   167,   168,   169,
     170,   171,   172,   173,     0,     0,   174,   175,     0,     0,
     176,   177,   178,   179,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   180,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,     0,   191,   192,  -506,  -506,  -506,     0,  -506,     0,
     193,   194,  -506,  -506,     0,     0,     0,  -506,     0,  -506,
    -506,  -506,  -506,  -506,  -506,  -506,     0,  -506,     0,     0,
       0,  -506,  -506,  -506,  -506,  -506,  -506,  -506,     0,     0,
    -506,     0,     0,     0,     0,     0,     0,  -506,     0,     0,
    -506,  -506,  -506,  -506,  -506,  -506,  -506,  -506,  -506,  -506,
    -506,  -506,     0,  -506,  -506,  -506,     0,  -506,  -506,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -506,     0,     0,
    -506,  -506,     0,  -506,  -506,     0,  -506,  -506,  -506,  -506,
    -506,  -506,  -506,  -506,  -506,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -506,  -506,  -506,     0,  -506,  -507,  -507,
    -507,     0,  -507,  -506,     0,     0,  -507,  -507,     0,     0,
       0,  -507,     0,  -507,  -507,  -507,  -507,  -507,  -507,  -507,
       0,  -507,     0,     0,     0,  -507,  -507,  -507,  -507,  -507,
    -507,  -507,     0,     0,  -507,     0,     0,     0,     0,     0,
       0,  -507,     0,     0,  -507,  -507,  -507,  -507,  -507,  -507,
    -507,  -507,  -507,  -507,  -507,  -507,     0,  -507,  -507,  -507,
       0,  -507,  -507,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -507,     0,     0,  -507,  -507,     0,  -507,  -507,     0,
    -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -507,  -507,  -507,
       0,  -507,  -509,  -509,  -509,     0,  -509,  -507,     0,     0,
    -509,  -509,     0,     0,     0,  -509,     0,  -509,  -509,  -509,
    -509,  -509,  -509,  -509,     0,     0,     0,     0,     0,  -509,
    -509,  -509,  -509,  -509,  -509,  -509,     0,     0,  -509,     0,
       0,     0,     0,     0,     0,  -509,     0,     0,  -509,  -509,
    -509,  -509,  -509,  -509,  -509,  -509,  -509,  -509,  -509,  -509,
       0,  -509,  -509,  -509,     0,  -509,  -509,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -509,   729,     0,  -509,  -509,
       0,  -509,  -509,     0,  -509,  -509,  -509,  -509,  -509,  -509,
    -509,  -509,  -509,     0,     0,     0,     0,     0,   -92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -509,  -509,  -509,  -511,  -511,  -511,     0,  -511,     0,
       0,  -509,  -511,  -511,     0,     0,     0,  -511,     0,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,     0,     0,     0,     0,
       0,  -511,  -511,  -511,  -511,  -511,  -511,  -511,     0,     0,
    -511,     0,     0,     0,     0,     0,     0,  -511,     0,     0,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,     0,  -511,  -511,  -511,     0,  -511,  -511,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -511,     0,     0,
    -511,  -511,     0,  -511,  -511,     0,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -511,  -511,  -511,  -512,  -512,  -512,     0,
    -512,     0,     0,  -511,  -512,  -512,     0,     0,     0,  -512,
       0,  -512,  -512,  -512,  -512,  -512,  -512,  -512,     0,     0,
       0,     0,     0,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
       0,     0,  -512,     0,     0,     0,     0,     0,     0,  -512,
       0,     0,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,     0,  -512,  -512,  -512,     0,  -512,
    -512,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -512,
       0,     0,  -512,  -512,     0,  -512,  -512,     0,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -512,  -512,  -512,     5,     6,
       7,     0,     9,     0,     0,  -512,    10,    11,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    27,     0,     0,     0,     0,     0,
       0,    29,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,     0,    43,    44,    45,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   216,     0,     0,   111,    50,     0,    51,    52,     0,
       0,     0,    54,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    63,
       0,     0,     0,     0,     0,     0,     0,   260,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,     0,     0,   145,   146,   147,   200,   201,
     202,   203,   152,   153,   154,     0,     0,     0,     0,     0,
     155,   156,   157,   158,   204,   205,   206,   207,   163,   293,
     294,   208,   295,     0,     0,     0,     0,     0,     0,     0,
       0,   165,   166,   167,   168,   169,   170,   171,   172,   173,
       0,     0,   174,   175,     0,     0,   176,   177,   178,   179,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     180,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,     0,   191,   192,
       0,     0,     0,     0,     0,     0,   193,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,     0,     0,     0,   145,   146,   147,   200,   201,   202,
     203,   152,   153,   154,     0,     0,     0,     0,     0,   155,
     156,   157,   158,   204,   205,   206,   207,   163,   262,     0,
     208,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     165,   166,   167,   168,   169,   170,   171,   172,   173,     0,
       0,   174,   175,     0,     0,   176,   177,   178,   179,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   180,
       0,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,     0,   191,   192,     0,
       0,     0,     0,     0,     0,   193,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,     0,     0,   145,   146,   147,   200,   201,   202,   203,
     152,   153,   154,     0,     0,     0,     0,     0,   155,   156,
     157,   158,   204,   205,   206,   207,   163,     0,     0,   208,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   165,
     166,   167,   168,   169,   170,   171,   172,   173,     0,     0,
     174,   175,     0,     0,   176,   177,   178,   179,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   180,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,     0,   191,   192,     0,     0,
       0,     0,     0,     0,   193,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,     0,
       0,     0,   145,   146,   147,   200,   201,   202,   203,   152,
     153,   154,     0,     0,     0,     0,     0,   155,   156,   157,
     158,   204,   205,   206,   207,   163,     0,     0,   208,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   165,   166,
     167,   168,   169,   170,   171,   172,   173,     0,     0,   174,
     175,     0,     0,   176,   177,   178,   179,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   180,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,     0,   191,   192,     5,     6,     7,
       0,     9,     0,   193,     0,    10,    11,     0,     0,     0,
      12,     0,    13,    14,    15,   100,   101,    18,    19,     0,
       0,     0,     0,     0,   102,   103,   104,    23,    24,    25,
      26,     0,     0,   105,     0,     0,     0,     0,     0,     0,
     106,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,     0,    43,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     285,     0,     0,   111,    50,     0,    51,    52,     0,     0,
       0,    54,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,     0,     0,     0,    12,   112,    13,    14,    15,
     100,   101,    18,    19,   286,     0,     0,     0,     0,   102,
     103,   104,    23,    24,    25,    26,     0,     0,   105,     0,
       0,     0,     0,     0,     0,   106,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,    41,    42,
       0,    43,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   285,     0,     0,   111,    50,
       0,    51,    52,     0,     0,     0,    54,    55,    56,    57,
      58,    59,    60,     0,     0,     0,     0,     5,     6,     7,
       8,     9,     0,     0,     0,    10,    11,     0,     0,     0,
      12,   112,    13,    14,    15,    16,    17,    18,    19,   517,
       0,     0,     0,     0,    20,    21,    22,    23,    24,    25,
      26,     0,     0,    27,     0,     0,     0,     0,     0,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,     0,    43,    44,    45,     0,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,    49,    50,     0,    51,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     0,
       9,     0,     0,     0,    10,    11,    61,    62,    63,    12,
       0,    13,    14,    15,   100,   101,    18,    19,     0,     0,
       0,     0,     0,   102,    21,    22,    23,    24,    25,    26,
       0,     0,   105,     0,     0,     0,     0,     0,     0,    29,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,   240,    41,    42,     0,    43,    44,    45,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   216,
       0,     0,   111,    50,     0,    51,    52,     0,   241,   242,
      54,    55,    56,    57,    58,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     9,
       0,     0,     0,    10,    11,    61,   243,    63,    12,     0,
      13,    14,    15,   100,   101,    18,    19,     0,     0,     0,
       0,     0,   102,   103,   104,    23,    24,    25,    26,     0,
       0,   105,     0,     0,     0,     0,     0,     0,    29,     0,
       0,    32,    33,    34,    35,    36,    37,    38,    39,    40,
     240,    41,    42,     0,    43,    44,    45,     0,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,     0,
       0,   111,    50,     0,    51,    52,     0,   620,   242,    54,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,    61,   243,    63,    12,     0,    13,
      14,    15,   100,   101,    18,    19,     0,     0,     0,     0,
       0,   102,   103,   104,    23,    24,    25,    26,     0,     0,
     105,     0,     0,     0,     0,     0,     0,    29,     0,     0,
      32,    33,    34,    35,    36,    37,    38,    39,    40,   240,
      41,    42,     0,    43,    44,    45,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   216,     0,     0,
     111,    50,     0,    51,    52,     0,   241,     0,    54,    55,
      56,    57,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     9,     0,     0,
       0,    10,    11,    61,   243,    63,    12,     0,    13,    14,
      15,   100,   101,    18,    19,     0,     0,     0,     0,     0,
     102,   103,   104,    23,    24,    25,    26,     0,     0,   105,
       0,     0,     0,     0,     0,     0,    29,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,   240,    41,
      42,     0,    43,    44,    45,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   216,     0,     0,   111,
      50,     0,    51,    52,     0,     0,   242,    54,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,    61,   243,    63,    12,     0,    13,    14,    15,
     100,   101,    18,    19,     0,     0,     0,     0,     0,   102,
     103,   104,    23,    24,    25,    26,     0,     0,   105,     0,
       0,     0,     0,     0,     0,    29,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,   240,    41,    42,
       0,    43,    44,    45,     0,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   216,     0,     0,   111,    50,
       0,    51,    52,     0,   620,     0,    54,    55,    56,    57,
      58,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     9,     0,     0,     0,    10,
      11,    61,   243,    63,    12,     0,    13,    14,    15,   100,
     101,    18,    19,     0,     0,     0,     0,     0,   102,   103,
     104,    23,    24,    25,    26,     0,     0,   105,     0,     0,
       0,     0,     0,     0,    29,     0,     0,    32,    33,    34,
      35,    36,    37,    38,    39,    40,   240,    41,    42,     0,
      43,    44,    45,     0,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   216,     0,     0,   111,    50,     0,
      51,    52,     0,     0,     0,    54,    55,    56,    57,    58,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     0,     9,     0,     0,     0,    10,    11,
      61,   243,    63,    12,     0,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,   105,     0,     0,     0,
       0,     0,     0,    29,     0,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,     0,    43,
      44,    45,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   216,     0,     0,   111,    50,     0,    51,
      52,     0,   511,     0,    54,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     9,     0,     0,     0,    10,    11,    61,
     243,    63,    12,     0,    13,    14,    15,   100,   101,    18,
      19,     0,     0,     0,     0,     0,   102,   103,   104,    23,
      24,    25,    26,     0,     0,   105,     0,     0,     0,     0,
       0,     0,    29,     0,     0,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,    41,    42,     0,    43,    44,
      45,     0,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   216,     0,     0,   111,    50,     0,    51,    52,
       0,   241,     0,    54,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    61,   243,
      63,    12,     0,    13,    14,    15,   100,   101,    18,    19,
       0,     0,     0,     0,     0,   102,   103,   104,    23,    24,
      25,    26,     0,     0,   105,     0,     0,     0,     0,     0,
       0,    29,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,     0,    43,    44,    45,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   216,     0,     0,   111,    50,     0,    51,    52,     0,
     511,     0,    54,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     9,     0,     0,     0,    10,    11,    61,   243,    63,
      12,     0,    13,    14,    15,   100,   101,    18,    19,     0,
       0,     0,     0,     0,   102,   103,   104,    23,    24,    25,
      26,     0,     0,   105,     0,     0,     0,     0,     0,     0,
      29,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,     0,    43,    44,    45,     0,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     216,     0,     0,   111,    50,     0,    51,    52,     0,   781,
       0,    54,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     0,
       9,     0,     0,     0,    10,    11,    61,   243,    63,    12,
       0,    13,    14,    15,   100,   101,    18,    19,     0,     0,
       0,     0,     0,   102,   103,   104,    23,    24,    25,    26,
       0,     0,   105,     0,     0,     0,     0,     0,     0,    29,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,     0,    43,    44,    45,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   216,
       0,     0,   111,    50,     0,    51,    52,     0,   620,     0,
      54,    55,    56,    57,    58,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     9,
       0,     0,     0,    10,    11,    61,   243,    63,    12,     0,
      13,    14,    15,    16,    17,    18,    19,     0,     0,     0,
       0,     0,    20,    21,    22,    23,    24,    25,    26,     0,
       0,    27,     0,     0,     0,     0,     0,     0,    29,     0,
       0,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,    41,    42,     0,    43,    44,    45,     0,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,     0,
       0,   111,    50,     0,    51,    52,     0,     0,     0,    54,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,    61,    62,    63,    12,     0,    13,
      14,    15,   100,   101,    18,    19,     0,     0,     0,     0,
       0,   102,   103,   104,    23,    24,    25,    26,     0,     0,
     105,     0,     0,     0,     0,     0,     0,    29,     0,     0,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      41,    42,     0,    43,    44,    45,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   216,     0,     0,
     111,    50,     0,    51,    52,     0,     0,     0,    54,    55,
      56,    57,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     9,     0,     0,
       0,    10,    11,    61,   243,    63,    12,     0,    13,    14,
      15,    16,    17,    18,    19,     0,     0,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,     0,     0,   105,
       0,     0,     0,     0,     0,     0,    29,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,    41,
      42,     0,    43,    44,    45,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   216,     0,     0,   111,
      50,     0,    51,    52,     0,     0,     0,    54,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,    61,   243,    63,    12,     0,    13,    14,    15,
     100,   101,    18,    19,     0,     0,     0,     0,     0,   102,
     103,   104,    23,    24,    25,    26,     0,     0,   105,     0,
       0,     0,     0,     0,     0,   106,     0,     0,    32,    33,
      34,   107,    36,    37,    38,   108,    40,     0,    41,    42,
       0,    43,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   109,     0,     0,   110,     0,     0,   111,    50,
       0,    51,    52,     0,     0,     0,    54,    55,    56,    57,
      58,    59,    60,     0,     0,     0,     0,     5,     6,     7,
       0,     9,     0,     0,     0,    10,    11,     0,     0,     0,
      12,   112,    13,    14,    15,   100,   101,    18,    19,     0,
       0,     0,     0,     0,   102,   103,   104,    23,    24,    25,
      26,     0,     0,   105,     0,     0,     0,     0,     0,     0,
     106,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,     0,    43,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     233,     0,     0,    49,    50,     0,    51,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,     0,     0,     0,    12,   112,    13,    14,    15,
     100,   101,    18,    19,     0,     0,     0,     0,     0,   102,
     103,   104,    23,    24,    25,    26,     0,     0,   105,     0,
       0,     0,     0,     0,     0,   106,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,    41,    42,
       0,    43,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   285,     0,     0,   324,    50,
       0,    51,    52,     0,   325,     0,    54,    55,    56,    57,
      58,    59,    60,     0,     0,     0,     0,     5,     6,     7,
       0,     9,     0,     0,     0,    10,    11,     0,     0,     0,
      12,   112,    13,    14,    15,   100,   101,    18,    19,     0,
       0,     0,     0,     0,   102,   103,   104,    23,    24,    25,
      26,     0,     0,   105,     0,     0,     0,     0,     0,     0,
     106,     0,     0,    32,    33,    34,   107,    36,    37,    38,
     108,    40,     0,    41,    42,     0,    43,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     110,     0,     0,   111,    50,     0,    51,    52,     0,     0,
       0,    54,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,     0,     0,     0,    12,   112,    13,    14,    15,
     100,   101,    18,    19,     0,     0,     0,     0,     0,   102,
     103,   104,    23,    24,    25,    26,     0,     0,   105,     0,
       0,     0,     0,     0,     0,   106,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,    41,    42,
       0,    43,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   285,     0,     0,   324,    50,
       0,    51,    52,     0,     0,     0,    54,    55,    56,    57,
      58,    59,    60,     0,     0,     0,     0,     5,     6,     7,
       0,     9,     0,     0,     0,    10,    11,     0,     0,     0,
      12,   112,    13,    14,    15,   100,   101,    18,    19,     0,
       0,     0,     0,     0,   102,   103,   104,    23,    24,    25,
      26,     0,     0,   105,     0,     0,     0,     0,     0,     0,
     106,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,     0,    43,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     859,     0,     0,   111,    50,     0,    51,    52,     0,     0,
       0,    54,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     0,   550,   551,     0,     0,   552,     0,     0,
       0,     0,     0,     0,     0,     0,   112,   165,   166,   167,
     168,   169,   170,   171,   172,   173,     0,     0,   174,   175,
       0,     0,   176,   177,   178,   179,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   180,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,     0,   191,   192,   558,   559,     0,     0,
     560,     0,   193,   257,     0,     0,     0,     0,     0,     0,
     165,   166,   167,   168,   169,   170,   171,   172,   173,     0,
       0,   174,   175,     0,     0,   176,   177,   178,   179,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   180,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,     0,   191,   192,   580,
     551,     0,     0,   581,     0,   193,   257,     0,     0,     0,
       0,     0,     0,   165,   166,   167,   168,   169,   170,   171,
     172,   173,     0,     0,   174,   175,     0,     0,   176,   177,
     178,   179,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   180,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,     0,
     191,   192,   564,   559,     0,     0,   565,     0,   193,   257,
       0,     0,     0,     0,     0,     0,   165,   166,   167,   168,
     169,   170,   171,   172,   173,     0,     0,   174,   175,     0,
       0,   176,   177,   178,   179,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   180,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,     0,   191,   192,   600,   551,     0,     0,   601,
       0,   193,   257,     0,     0,     0,     0,     0,     0,   165,
     166,   167,   168,   169,   170,   171,   172,   173,     0,     0,
     174,   175,     0,     0,   176,   177,   178,   179,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   180,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,     0,   191,   192,   603,   559,
       0,     0,   604,     0,   193,   257,     0,     0,     0,     0,
       0,     0,   165,   166,   167,   168,   169,   170,   171,   172,
     173,     0,     0,   174,   175,     0,     0,   176,   177,   178,
     179,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   180,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,     0,   191,
     192,   613,   551,     0,     0,   614,     0,   193,   257,     0,
       0,     0,     0,     0,     0,   165,   166,   167,   168,   169,
     170,   171,   172,   173,     0,     0,   174,   175,     0,     0,
     176,   177,   178,   179,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   180,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,     0,   191,   192,   616,   559,     0,     0,   617,     0,
     193,   257,     0,     0,     0,     0,     0,     0,   165,   166,
     167,   168,   169,   170,   171,   172,   173,     0,     0,   174,
     175,     0,     0,   176,   177,   178,   179,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   180,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,     0,   191,   192,   640,   551,     0,
       0,   641,     0,   193,   257,     0,     0,     0,     0,     0,
       0,   165,   166,   167,   168,   169,   170,   171,   172,   173,
       0,     0,   174,   175,     0,     0,   176,   177,   178,   179,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     180,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,     0,   191,   192,
     643,   559,     0,     0,   644,     0,   193,   257,     0,     0,
       0,     0,     0,     0,   165,   166,   167,   168,   169,   170,
     171,   172,   173,     0,     0,   174,   175,     0,     0,   176,
     177,   178,   179,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   180,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
       0,   191,   192,   906,   551,     0,     0,   907,     0,   193,
     257,     0,     0,     0,     0,     0,     0,   165,   166,   167,
     168,   169,   170,   171,   172,   173,     0,     0,   174,   175,
       0,     0,   176,   177,   178,   179,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   180,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,     0,   191,   192,   909,   559,     0,     0,
     910,     0,   193,   257,     0,     0,     0,     0,     0,     0,
     165,   166,   167,   168,   169,   170,   171,   172,   173,     0,
       0,   174,   175,     0,     0,   176,   177,   178,   179,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   180,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,     0,   191,   192,   564,
     559,     0,     0,   565,     0,   193,   257,     0,     0,     0,
       0,     0,     0,   165,   166,   167,   168,   169,   170,   171,
     172,   173,     0,     0,   174,   175,     0,     0,   176,   177,
     178,   179,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   180,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,     0,
     191,   192,     0,     0,     0,     0,     0,     0,   193,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,     0,     0,   341,   342,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   343,     0,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,     0,   328,   329,   330,   331,   332,   333,
     334,     0,     0,   337,   338,     0,     0,     0,   264,   341,
     342,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353
};

static const yytype_int16 yycheck[] =
{
       2,     7,     4,     5,     6,    51,    29,   292,    10,    11,
      12,     7,     8,    15,    16,    17,     8,    28,    20,   224,
      74,     8,   407,   402,   250,    27,    16,    17,    62,   279,
      20,   382,    28,   283,    49,   292,    28,   327,   355,   110,
     457,    28,   660,     4,    65,   595,   584,    49,    50,    55,
     657,    53,    51,    52,   354,   605,   356,   357,   358,    55,
      62,   466,    53,   380,   602,   663,    22,    16,    17,   568,
     569,    20,    74,     1,   750,   752,    13,   615,     5,     6,
     397,   381,    22,   106,    25,    29,   299,    25,    15,   137,
     303,    12,    61,   410,    13,   653,   396,    26,   398,   384,
     517,    26,    13,   663,   642,    25,   666,   109,    85,   111,
      25,   411,    13,   130,     2,    13,     4,   677,    76,   677,
     137,   272,    10,    11,    12,   420,    53,    13,    16,    17,
       0,    85,    20,    37,    38,    25,    27,   106,   109,    27,
     440,    97,   459,    25,    65,    25,    85,    74,   660,    52,
     826,   663,   129,    56,    25,   450,   114,    97,   126,   130,
     460,    49,    50,   107,   104,   677,    15,    52,    17,    54,
      55,    56,    57,   324,    62,   129,   136,   130,    52,   119,
      54,    55,    56,    57,   137,   113,   471,    25,    56,   130,
     129,   132,   130,   114,    11,    12,   873,   126,   135,   875,
     137,   126,   417,   132,   136,   420,   227,   135,   707,   137,
     130,   130,   132,   215,   471,   130,   135,   775,   137,   837,
     896,   109,    28,   111,   135,   832,   137,   845,   579,   231,
     232,   132,   286,   137,   135,   833,   137,   135,   589,   137,
     130,    85,   647,   648,   135,   130,   137,   109,   130,   135,
     130,   137,   254,    61,   256,   257,   130,   272,   260,   130,
      99,    10,    11,    12,   254,   267,   256,   257,   685,   819,
     272,   109,    87,   833,    85,   835,   322,   130,    27,   839,
      54,   327,   495,   109,   286,   129,    87,   847,   322,    63,
      64,    85,   130,   327,   109,   133,   104,   105,   135,   137,
     137,    50,    85,   588,   594,   254,   227,   256,   379,   324,
     312,   313,   314,   315,   316,   317,   318,   319,   129,    85,
     322,   833,   324,   325,    68,   327,   130,   215,   136,   363,
     364,   588,   132,   845,   325,   129,    37,    38,   898,    83,
      84,   132,   902,   231,   232,   750,   129,   752,    25,    87,
      61,   312,    85,   355,    65,   740,   317,   403,   354,   286,
     109,   363,   364,   129,    87,   355,   254,    61,   256,   257,
     908,   109,   260,   117,   118,   119,   120,   121,   380,   267,
     382,   383,    87,   379,   272,   132,   109,   637,    56,    85,
     380,   393,   677,   104,   105,   397,   129,   623,   325,   401,
     396,    85,   607,   457,   109,    59,    60,   397,   410,   109,
     104,   105,   106,   409,   231,   232,   356,    87,   417,    17,
     410,   826,   827,   434,   312,   313,   314,   315,   316,   317,
     318,   319,   109,   129,   322,   437,   324,    68,   434,   327,
     819,   381,   434,   439,    26,   129,   135,   434,   447,    56,
     801,    26,    88,   130,   375,   457,   133,   459,   398,    87,
     137,    25,   458,   517,   130,    87,   691,   355,   873,   459,
     875,   411,    26,   698,    68,   363,   364,    14,    15,    87,
      26,   109,   231,   232,    87,   406,   407,   109,   119,   120,
     121,   896,   380,    85,   382,   383,   313,   314,   315,   316,
     440,   109,   130,    85,   130,   393,   109,   858,   130,   397,
      85,   260,    85,   401,   132,   517,   539,    59,    60,    85,
     460,   806,   410,   117,   118,   119,   120,   121,   566,   567,
     457,    85,    54,    55,   557,    57,   128,   129,   126,    85,
     132,    63,    64,    68,   126,    85,   128,   129,   594,   437,
     132,   126,   133,   128,   129,   128,   129,   132,    85,    57,
      58,   584,   128,   129,   313,   314,   315,   316,   109,   318,
     319,   459,   126,   890,   128,   129,   578,   579,   132,   602,
     126,   592,   128,   129,   638,   591,    87,   589,   128,   129,
     517,   891,   615,   127,    56,   591,   592,   130,    68,   555,
     592,   128,   129,   808,   134,   592,   106,   563,   109,   814,
     566,   567,   106,    83,    84,   555,   618,    68,    68,   642,
      61,   130,    94,   563,    10,     8,   566,   567,   630,   130,
      61,   685,    13,    10,   383,    52,   638,    54,    55,    56,
      57,    85,   133,   583,    87,   585,   116,   117,   118,   119,
     120,   121,   654,   655,   688,   576,   127,   130,   135,    52,
     694,   695,    61,   104,   105,   106,   109,   669,    52,   590,
      85,   130,    89,   104,   105,   106,   678,   109,   130,    96,
     136,   130,   130,   685,   128,   129,   688,   130,    85,    10,
     578,   579,   694,   695,    40,    41,    42,    43,    44,   116,
     130,   589,   704,   705,   130,   104,   105,   106,    16,    17,
     130,   638,    20,   128,   129,    15,    85,    10,   127,    85,
     130,   723,   130,   111,   726,    68,    85,   134,    10,    10,
     618,   128,   129,    88,   736,   737,   738,     9,    46,    47,
      83,    84,   630,    51,    52,    10,    10,    10,    52,   127,
      54,    55,    56,    57,    62,    63,   130,   791,   685,   128,
     129,   578,   128,   129,   127,    87,   654,   655,   130,   128,
     129,   114,   115,   116,   117,   118,   119,   120,   121,    85,
     130,   669,    87,   130,    52,    89,   130,   109,   709,   791,
     678,    95,    96,   130,   114,   130,   130,    10,   800,   801,
     688,   618,   130,    10,   109,   807,   694,   695,   130,   811,
     127,    10,   116,   114,    10,   119,   704,   705,   130,   740,
     130,    56,   128,   129,   127,   130,    10,   260,   130,   578,
      10,   135,   130,   130,    10,   723,    15,     6,   726,   832,
     893,   274,    52,    81,    54,    55,    56,    57,   736,   737,
     738,   647,   892,    84,     7,    52,   858,    54,    55,    56,
      57,   806,   864,    52,   866,    54,    55,    56,    57,   618,
     872,   660,    65,     2,    -1,     4,     5,     6,     7,    89,
     807,   630,    -1,    -1,    -1,   908,    15,    -1,   890,    -1,
      -1,    -1,    89,   889,     2,    -1,     4,    -1,    95,    96,
     890,    -1,    -1,   791,    -1,    -1,    -1,    15,    -1,   726,
      -1,    -1,   800,   801,    -1,    -1,    -1,    -1,    -1,   116,
      49,    -1,   119,   811,    53,    52,    -1,    54,    55,    56,
      57,    -1,   240,   241,   242,   243,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    74,   254,    -1,   256,   257,
      -1,   891,    -1,    -1,    -1,    -1,   479,    -1,   481,    -1,
      -1,    52,    89,    54,    55,    56,    57,    -1,    95,    -1,
     858,    -1,   240,   241,   242,    -1,   864,   726,   866,    -1,
      -1,    -1,   111,    -1,   872,    -1,    -1,    -1,    -1,   422,
      -1,    -1,    -1,   426,    -1,    -1,   429,    -1,    89,    -1,
      -1,    -1,   890,   111,    95,    -1,    -1,    -1,    -1,   442,
       2,    -1,   445,    -1,   322,    -1,    -1,    -1,    -1,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,    -1,   355,    -1,     2,
      -1,     4,     5,     6,   322,   363,   364,    49,    -1,   327,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   380,    52,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,   516,    -1,    -1,   215,   395,    -1,   397,
      -1,   399,   400,    -1,    -1,   403,    49,    -1,    -1,    -1,
      53,    -1,   410,    -1,    -1,    -1,    -1,   215,   416,   417,
      89,    -1,   420,    -1,    -1,    -1,    95,    96,    -1,   111,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,   436,    -1,
      -1,    -1,    -1,   441,    -1,   403,    -1,   116,   267,   447,
     119,    -1,   450,   272,    -1,    -1,    -1,    -1,   416,   417,
      -1,   459,   420,   132,   587,    -1,    -1,   286,   111,   267,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,   447,
      -1,    -1,   450,   312,    -1,    -1,    -1,    -1,   317,    -1,
      -1,    -1,   500,   501,    -1,   324,   325,    -1,    -1,    -1,
       2,    -1,     4,   511,   312,    89,    -1,    -1,    -1,   317,
      -1,    95,    96,    -1,    -1,    -1,   324,    -1,   651,    -1,
      -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,   116,    -1,    -1,   119,    -1,    -1,    -1,   762,
     763,    -1,   765,   511,   767,   768,    -1,    49,   132,    -1,
      -1,    -1,    -1,   382,   777,   778,    -1,    -1,    -1,    -1,
      89,    -1,   215,    -1,   393,    -1,    95,    96,    -1,    -1,
      -1,    -1,   401,    -1,   382,   267,    -1,    -1,    -1,    -1,
     272,   714,    -1,    -1,    -1,   393,   594,   116,    -1,    -1,
     119,    -1,    -1,   401,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   437,   111,
     743,    -1,   620,    -1,   267,    -1,   749,    -1,    -1,   272,
      -1,   754,    -1,    -1,    -1,    -1,   594,    -1,   457,   437,
      -1,    -1,   324,   286,    -1,    -1,    -1,   645,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   620,    -1,    -1,   878,   879,   880,   881,   312,
     883,   884,    -1,    -1,   317,    -1,    -1,    -1,    -1,    -1,
      -1,   324,   325,    -1,   682,    -1,    -1,   645,   686,    -1,
     688,   689,    -1,    -1,    -1,    -1,   694,   695,   517,    -1,
      -1,    -1,   915,   916,    -1,    -1,    -1,    -1,   706,    -1,
      -1,   393,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   401,
      -1,    -1,    -1,   215,   682,    -1,    -1,    -1,    -1,    -1,
      -1,   729,    -1,   731,   732,    -1,    -1,   735,    -1,   382,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
     393,    -1,    -1,    -1,    -1,   437,    -1,    -1,   401,    -1,
     579,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     589,    -1,    44,    -1,    -1,   267,    -1,   735,    -1,    -1,
     272,   579,    -1,   781,    -1,    -1,    -1,   785,    -1,    -1,
      -1,   589,    -1,   791,   437,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    83,    84,    -1,   457,    -1,    -1,    -1,   816,   638,
     312,    -1,    -1,   781,    -1,   317,    -1,    -1,    -1,    -1,
      -1,    -1,   324,    -1,    -1,   654,   655,    -1,   110,    -1,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     669,    -1,    -1,    -1,    -1,    -1,   654,   655,   130,   678,
      -1,    -1,    -1,    -1,    -1,    -1,   685,    -1,    -1,    -1,
      -1,   669,    -1,    -1,   517,    -1,    -1,    -1,    -1,    -1,
     678,    -1,    -1,    -1,    -1,   704,   705,    -1,    -1,    -1,
     382,    -1,   890,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   393,    -1,    -1,   723,    -1,   704,   705,    -1,   401,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   736,   737,   738,
      -1,    -1,    -1,    -1,    -1,   723,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   579,    -1,   736,   737,
     738,    -1,   249,   250,    -1,   437,   589,    -1,    -1,    -1,
     257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   654,   655,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   800,   801,    -1,    -1,    -1,    -1,   669,   807,    -1,
      -1,    -1,   811,    -1,    -1,   638,   678,    -1,    -1,    -1,
      -1,    -1,   800,   801,    -1,    -1,    -1,    -1,    -1,   807,
      -1,   654,   655,   811,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   704,   705,    -1,    -1,   669,   670,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   678,    -1,    -1,    -1,   858,
      -1,   723,   685,    -1,    -1,   864,    -1,   866,   355,    -1,
      -1,    -1,    -1,   872,   736,   737,   738,    -1,    -1,    -1,
     858,   704,   705,    -1,    -1,    -1,   864,    -1,   866,    -1,
      -1,    -1,    -1,   380,   872,    -1,    -1,    -1,    -1,    -1,
     723,    -1,    -1,   390,    -1,    -1,    -1,   579,    -1,    -1,
     397,    -1,    -1,   736,   737,   738,    -1,   589,    -1,    -1,
      -1,    -1,    -1,   410,    -1,    -1,     0,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,     9,    10,    -1,   800,    13,
      14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,   811,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,    43,
      44,    -1,   459,    -1,    -1,    -1,    -1,   800,   801,    -1,
      -1,    -1,   654,   655,   807,    -1,   473,    -1,   811,    -1,
     477,    -1,   479,    -1,   481,    -1,    -1,   669,    -1,    -1,
      -1,    -1,   864,    -1,   866,    -1,   678,    -1,    -1,    -1,
     872,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   510,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   704,   705,    -1,   858,    -1,    -1,    -1,    -1,
      -1,   864,    -1,   866,    -1,    -1,    -1,    -1,    -1,   872,
      -1,   723,    -1,   127,    -1,   129,    -1,    -1,   132,   133,
      -1,   135,    -1,   137,   736,   737,   738,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   563,    -1,    -1,   566,
     567,   568,   569,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   585,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   594,   595,    -1,
     597,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   605,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   800,   801,
      -1,    -1,    -1,    -1,     0,    -1,   623,    -1,    -1,   811,
      -1,    -1,     8,     9,    10,    -1,    -1,    13,    14,    15,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,   653,    -1,    -1,    -1,
      -1,    37,    38,    -1,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   858,    -1,    -1,    -1,
     677,    -1,   864,    -1,   866,    -1,    -1,    -1,    -1,    -1,
     872,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    83,    84,    85,
     707,    87,    88,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    -1,   721,    -1,    -1,   724,    -1,    -1,
      -1,   107,    -1,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    -1,    -1,    -1,    -1,
      -1,   127,   128,   129,   130,    -1,    -1,   133,   134,   135,
      -1,   137,    -1,    -1,    -1,   762,   763,    -1,   765,    -1,
     767,   768,    -1,    -1,    -1,    -1,    -1,    -1,   775,    -1,
     777,   778,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,     1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    11,
      12,    -1,   819,    -1,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    60,    -1,
      62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,   878,   879,   880,   881,    -1,   883,   884,    -1,    -1,
      -1,    -1,    -1,   890,    86,   892,   893,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,     0,    -1,    -1,    -1,    -1,    -1,   915,   916,
       8,     9,    10,    -1,    -1,    13,    14,    15,    -1,    17,
     122,   123,   124,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    -1,    -1,   135,    -1,   137,    -1,    -1,    -1,    37,
      38,    -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    83,    84,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    84,    85,    -1,    -1,
      88,    -1,    -1,    -1,    -1,   110,    94,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,    -1,
      -1,    -1,   110,    -1,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    -1,    -1,    -1,    -1,   126,   127,
     128,   129,   130,     0,   132,   133,   134,   135,    -1,   137,
      -1,     8,     9,    10,    -1,    -1,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    83,
      84,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    83,    84,    85,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    94,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,    -1,
     107,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,    -1,    -1,    -1,    -1,    -1,
     127,   128,   129,   130,     0,    -1,   133,   134,   135,    -1,
     137,    -1,     8,     9,    10,    -1,    -1,    13,    14,    15,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    -1,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    77,    78,    -1,    -1,    -1,    -1,
      83,    84,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    83,    84,    85,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
      -1,    -1,    -1,    -1,   110,    -1,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    -1,    -1,    -1,    -1,
     126,   127,   128,   129,   130,     0,   132,   133,   134,   135,
      -1,   137,    -1,     8,     9,    10,    -1,    -1,    13,    14,
      15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    -1,    -1,    77,    78,    -1,    -1,    -1,
      -1,    83,    84,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    83,    84,
      85,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      -1,    -1,    -1,    -1,    -1,   110,    -1,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,    -1,
      -1,    -1,   127,   128,   129,   130,     0,   132,   133,   134,
     135,    -1,   137,    -1,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    -1,    17,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,    43,
      44,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    83,    84,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    83,
      84,    85,    -1,    87,   110,    -1,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,    -1,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,    -1,
      -1,    -1,   126,   127,   128,   129,   130,     0,    -1,   133,
      -1,   135,    -1,   137,    -1,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,
      43,    44,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    83,    84,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      83,    84,    85,    -1,    87,   110,    -1,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,   110,    -1,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
      -1,    -1,    -1,    -1,   127,   128,   129,   130,    -1,    -1,
     133,    -1,   135,     1,   137,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    -1,    62,    63,    64,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    89,    90,    -1,    92,    93,    -1,    95,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,     1,   137,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      -1,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    -1,    62,
      63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    89,    90,    -1,    92,
      93,    -1,    95,    -1,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
     123,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,     1,   137,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    -1,    62,    63,    64,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    89,    90,    -1,    92,    93,    -1,    95,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,     1,   137,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    -1,    62,
      63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    89,    90,    -1,    92,
      93,    -1,    95,    -1,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,   122,
     123,   124,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,   135,    -1,   137,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    60,    -1,    62,    63,
      64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    89,    90,    -1,    92,    93,
      -1,    95,    -1,    97,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    12,   122,   123,
     124,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,   135,    -1,   137,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    -1,    62,    63,    64,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    89,    90,    -1,    92,    93,    -1,
      95,    -1,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,
     135,     1,   137,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      60,    -1,    62,    63,    64,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,
      90,    -1,    92,    93,    -1,    95,    -1,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   133,    -1,   135,     1,   137,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    -1,    62,    63,    64,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    89,    90,    -1,    92,    93,    -1,
      95,    -1,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
      -1,    -1,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,     1,   137,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    -1,    -1,    -1,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      60,    -1,    62,    63,    64,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,
      90,    -1,    92,    93,    -1,    95,    -1,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,   122,   123,   124,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,   135,    -1,   137,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      -1,    92,    93,    -1,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,   122,   123,   124,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,   137,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    60,    -1,
      62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,    -1,
      92,    93,    -1,    -1,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,
     122,   123,   124,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,   135,    -1,   137,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    -1,    62,
      63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    89,    90,    -1,    92,
      93,    -1,    -1,    -1,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    11,    12,   122,
     123,   124,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,   137,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    60,    -1,    62,    63,
      64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    89,    90,    -1,    92,    93,
      -1,    95,    -1,    97,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    -1,    77,    78,    -1,    -1,
      81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,    -1,   123,   124,     3,     4,     5,    -1,     7,    -1,
     131,   132,    11,    12,    -1,    -1,    -1,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,    26,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    -1,    92,    93,    -1,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,   123,   124,    -1,   126,     3,     4,
       5,    -1,     7,   132,    -1,    -1,    11,    12,    -1,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,    26,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    89,    90,    -1,    92,    93,    -1,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
      -1,   126,     3,     4,     5,    -1,     7,   132,    -1,    -1,
      11,    12,    -1,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    -1,    89,    90,
      -1,    92,    93,    -1,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,    -1,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,     3,     4,     5,    -1,     7,    -1,
      -1,   132,    11,    12,    -1,    -1,    -1,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    -1,    92,    93,    -1,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,   123,   124,     3,     4,     5,    -1,
       7,    -1,    -1,   132,    11,    12,    -1,    -1,    -1,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    89,    90,    -1,    92,    93,    -1,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,   123,   124,     3,     4,
       5,    -1,     7,    -1,    -1,   132,    11,    12,    -1,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    -1,    62,    63,    64,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    89,    90,    -1,    92,    93,    -1,
      -1,    -1,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    -1,    77,    78,    -1,    -1,    81,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
      -1,    -1,    -1,    -1,    -1,    -1,   131,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    77,    78,    -1,    -1,    81,    82,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    -1,   123,   124,    -1,
      -1,    -1,    -1,    -1,    -1,   131,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    -1,
      77,    78,    -1,    -1,    81,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,    -1,   123,   124,    -1,    -1,
      -1,    -1,    -1,    -1,   131,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    -1,    77,
      78,    -1,    -1,    81,    82,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    -1,   123,   124,     3,     4,     5,
      -1,     7,    -1,   131,    -1,    11,    12,    -1,    -1,    -1,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    -1,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    -1,    92,    93,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    16,   122,    18,    19,    20,
      21,    22,    23,    24,   130,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      -1,    92,    93,    -1,    -1,    -1,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      16,   122,    18,    19,    20,    21,    22,    23,    24,   130,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    -1,    62,    63,    64,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    -1,    92,    93,    -1,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,   122,   123,   124,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    89,    90,    -1,    92,    93,    -1,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    11,    12,   122,   123,   124,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    89,    90,    -1,    92,    93,    -1,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,   122,   123,   124,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    -1,    92,    93,    -1,    95,    -1,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,   122,   123,   124,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,
      90,    -1,    92,    93,    -1,    -1,    96,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,   122,   123,   124,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      -1,    92,    93,    -1,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,   122,   123,   124,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,    -1,
      92,    93,    -1,    -1,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,
     122,   123,   124,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    -1,    62,
      63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    89,    90,    -1,    92,
      93,    -1,    95,    -1,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,   122,
     123,   124,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    60,    -1,    62,    63,
      64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    89,    90,    -1,    92,    93,
      -1,    95,    -1,    97,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   122,   123,
     124,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    -1,    62,    63,    64,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    89,    90,    -1,    92,    93,    -1,
      95,    -1,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,   122,   123,   124,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    -1,    62,    63,    64,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    -1,    92,    93,    -1,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,   122,   123,   124,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    -1,    62,    63,    64,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    11,    12,   122,   123,   124,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    -1,    62,    63,    64,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    89,    90,    -1,    92,    93,    -1,    -1,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,   122,   123,   124,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    -1,    62,    63,    64,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    -1,    92,    93,    -1,    -1,    -1,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,   122,   123,   124,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      60,    -1,    62,    63,    64,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,
      90,    -1,    92,    93,    -1,    -1,    -1,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,   122,   123,   124,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    89,    90,
      -1,    92,    93,    -1,    -1,    -1,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      16,   122,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    -1,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    -1,    92,    93,    -1,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    16,   122,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      -1,    92,    93,    -1,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      16,   122,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    -1,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    -1,    92,    93,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    16,   122,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      -1,    92,    93,    -1,    -1,    -1,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      16,   122,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    -1,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    -1,    92,    93,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    -1,    77,    78,
      -1,    -1,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,    -1,   123,   124,    52,    53,    -1,    -1,
      56,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    77,    78,    -1,    -1,    81,    82,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    -1,   123,   124,    52,
      53,    -1,    -1,    56,    -1,   131,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    -1,    77,    78,    -1,    -1,    81,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
     123,   124,    52,    53,    -1,    -1,    56,    -1,   131,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    -1,    77,    78,    -1,
      -1,    81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,    -1,   123,   124,    52,    53,    -1,    -1,    56,
      -1,   131,   132,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    -1,
      77,    78,    -1,    -1,    81,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,    -1,   123,   124,    52,    53,
      -1,    -1,    56,    -1,   131,   132,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    -1,    77,    78,    -1,    -1,    81,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,    52,    53,    -1,    -1,    56,    -1,   131,   132,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    -1,    77,    78,    -1,    -1,
      81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,    -1,   123,   124,    52,    53,    -1,    -1,    56,    -1,
     131,   132,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    -1,    77,
      78,    -1,    -1,    81,    82,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    -1,   123,   124,    52,    53,    -1,
      -1,    56,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    -1,    77,    78,    -1,    -1,    81,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
      52,    53,    -1,    -1,    56,    -1,   131,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    -1,    77,    78,    -1,    -1,    81,
      82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      -1,   123,   124,    52,    53,    -1,    -1,    56,    -1,   131,
     132,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    -1,    77,    78,
      -1,    -1,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,    -1,   123,   124,    52,    53,    -1,    -1,
      56,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    77,    78,    -1,    -1,    81,    82,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    -1,   123,   124,    52,
      53,    -1,    -1,    56,    -1,   131,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    -1,    77,    78,    -1,    -1,    81,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
     123,   124,    -1,    -1,    -1,    -1,    -1,    -1,   131,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,    -1,    68,    69,    70,    71,    72,    73,
      74,    -1,    -1,    77,    78,    -1,    -1,    -1,   137,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   139,   140,     0,     1,     3,     4,     5,     6,     7,
      11,    12,    16,    18,    19,    20,    21,    22,    23,    24,
      30,    31,    32,    33,    34,    35,    36,    39,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    59,    60,    62,    63,    64,    66,    67,    86,    89,
      90,    92,    93,    95,    97,    98,    99,   100,   101,   102,
     103,   122,   123,   124,   142,   143,   144,   147,   149,   150,
     153,   154,   156,   157,   158,   160,   161,   171,   185,   202,
     223,   224,   234,   235,   236,   237,   238,   239,   240,   243,
     251,   253,   254,   255,   256,   257,   258,   279,   290,   144,
      21,    22,    30,    31,    32,    39,    46,    52,    56,    83,
      86,    89,   122,   162,   163,   185,   202,   255,   258,   279,
     163,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    56,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    77,    78,    81,    82,    83,    84,
      95,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   123,   124,   131,   132,   164,   169,   170,   256,   274,
      33,    34,    35,    36,    49,    50,    51,    52,    56,   164,
     165,   166,   167,   251,   253,   186,    86,   147,   148,   161,
     202,   255,   257,   258,   148,   135,   137,   148,   283,   288,
     289,   189,   191,    86,   154,   161,   202,   207,   255,   258,
      58,    95,    96,   123,   153,   171,   173,   178,   181,   183,
     277,   278,   178,   178,   132,   179,   180,   132,   175,   179,
     132,   147,    54,   166,   137,   284,   146,   126,   171,   202,
     171,    56,    89,   142,   155,   156,   147,   174,   183,   277,
     290,   173,   276,   277,   290,    86,   130,   160,   202,   255,
     258,   217,   218,    54,    55,    57,   164,   246,   252,   245,
     246,   246,   136,   241,   136,   244,    59,    60,   149,   171,
     171,   283,   289,    40,    41,    42,    43,    44,    37,    38,
      28,   221,   109,   130,    89,    95,   157,   109,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    83,    84,   110,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    85,   128,   129,    85,   129,    26,
     126,   225,   237,    87,    87,   175,   179,   225,   284,   147,
      52,    56,   162,    59,    60,     1,   113,   259,   288,    85,
     128,   129,   198,   275,   199,    85,   129,   282,   130,   141,
     142,    56,    13,   203,   288,   109,    85,   128,   129,    87,
      87,   203,   283,    17,   228,   135,   148,   148,    56,    85,
     128,   129,    25,   173,   173,   173,    88,   130,   182,   290,
     130,   182,   178,   284,   285,   178,   177,   178,   290,   147,
     285,    54,    63,    64,   145,   132,   172,   126,   142,    85,
     129,    87,   155,   133,   285,   187,   134,   130,   137,   287,
     130,   287,   127,   287,    56,   157,   159,   130,    85,   128,
     129,    52,    54,    55,    56,    57,    89,    95,    96,   116,
     119,   132,   219,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,    61,   104,   105,   106,   247,   106,
     247,   106,    65,   106,   106,   242,   247,   106,    61,   106,
      68,    68,   144,   148,   148,   148,   148,   144,   147,   147,
     222,    95,   149,   173,   183,   184,   155,   130,   160,   130,
     149,   171,   173,   184,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
      52,    53,    56,   169,   175,   280,   281,   177,    52,    53,
      56,   169,   175,   280,    52,    56,   280,   280,   227,   226,
     149,   171,   149,   171,    94,   151,   196,   288,   260,   195,
      52,    56,   162,   280,   177,   280,   141,   147,   132,   261,
     262,   200,   168,    10,     8,   230,   290,   142,    13,   171,
      52,    56,   177,    52,    56,   142,   228,   183,    10,    27,
     204,   288,   204,    52,    56,   177,    52,    56,   193,   173,
      95,   173,   181,   277,   278,   285,   133,   285,   285,   166,
     188,   171,   142,   127,   171,   285,   285,   277,   130,   159,
      52,    56,   177,    52,    56,   109,    52,    89,    95,   208,
     209,   210,   264,   262,    29,   107,   220,   135,   214,   290,
     130,   273,   290,   130,   273,    52,   130,   273,    52,   249,
     248,   136,   247,   136,   171,   171,    76,   114,   212,   213,
     290,   173,   130,   285,   159,   130,    44,   284,    87,    87,
     175,   179,   284,   286,    87,    87,   175,   176,   179,   290,
     176,   179,   176,   179,   212,   212,    44,   152,   288,   148,
     141,   286,    10,   285,   262,   141,   288,   164,   166,   173,
     184,   231,   290,    15,   206,   290,    14,   205,   206,    87,
     286,    87,    87,   206,    10,   130,   203,   190,   192,   286,
     148,   173,   182,   147,   127,   287,   157,   286,   173,   210,
     130,   264,   130,   285,   214,   142,   142,    52,   215,   216,
     263,   265,   268,   270,   272,   266,   267,   270,   266,   142,
      54,    55,    57,   250,   258,   211,   214,   266,   270,   272,
     142,    95,   173,   159,   171,   111,   149,   171,   171,   151,
     134,    87,   149,   171,   149,   171,   151,   142,   142,   171,
     212,   197,   288,    10,   285,    10,   201,    88,   232,   290,
     142,     9,   233,   290,   148,    10,    87,    10,   173,   142,
     142,   142,   204,   285,   285,   209,   130,    95,   208,   285,
      10,   127,   130,   130,   273,   130,   273,   130,   273,   130,
     273,   273,   127,   214,   114,   130,   273,   130,   273,    10,
     173,   171,   149,   171,    10,   127,   142,   141,   261,    86,
     161,   202,   255,   258,   203,   142,   203,   206,   228,   229,
      10,    10,   194,   130,   209,   130,   264,   216,   266,   270,
     266,   266,   114,   270,   266,   127,    10,   141,    56,    85,
     128,   129,   142,   142,   142,   209,   130,   273,   130,   273,
     273,   273,   130,   273,   273,    10,    52,    56,   177,    52,
      56,   230,   205,    10,   209,   266,   266,   286,   273,   273
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      parser_yyerror (parser, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, parser); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, struct parser_params *parser)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    struct parser_params *parser;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (parser);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, struct parser_params *parser)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, parser)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    struct parser_params *parser;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, struct parser_params *parser)
#else
static void
yy_reduce_print (yyvsp, yyrule, parser)
    YYSTYPE *yyvsp;
    int yyrule;
    struct parser_params *parser;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , parser);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, parser); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
#ifndef yydebug
int yydebug;
#endif
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, struct parser_params *parser)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, parser)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    struct parser_params *parser;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (parser);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (struct parser_params *parser);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (struct parser_params *parser)
#else
int
yyparse (parser)
    struct parser_params *parser;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 743 "ripper.y"
    {
			lex_state = EXPR_BEG;
#if 0
			local_push(compile_for_eval);
#endif

		    ;}
    break;

  case 3:
#line 751 "ripper.y"
    {
#if 0
			if ((yyvsp[(2) - (2)].val) && !compile_for_eval) {
			    /* last expression should not be void */
			    if (nd_type((yyvsp[(2) - (2)].val)) != NODE_BLOCK) void_expr((yyvsp[(2) - (2)].val));
			    else {
				NODE *node = (yyvsp[(2) - (2)].val);
				while (node->nd_next) {
				    node = node->nd_next;
				}
				void_expr(node->nd_head);
			    }
			}
			ruby_eval_tree = NEW_SCOPE(0, block_append(ruby_eval_tree, (yyvsp[(2) - (2)].val)));
			local_pop();
#endif
			(yyval.val) = (yyvsp[(2) - (2)].val);
			parser->result = dispatch1(program, (yyval.val));

		    ;}
    break;

  case 4:
#line 777 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (4)].val);
			if ((yyvsp[(2) - (4)].val)) {
			    (yyval.val) = NEW_RESCUE((yyvsp[(1) - (4)].val), (yyvsp[(2) - (4)].val), (yyvsp[(3) - (4)].val));
			}
			else if ((yyvsp[(3) - (4)].val)) {
			    rb_warn0("else without rescue is useless");
			    (yyval.val) = block_append((yyval.val), (yyvsp[(3) - (4)].val));
			}
			if ((yyvsp[(4) - (4)].val)) {
			    if ((yyval.val)) {
				(yyval.val) = NEW_ENSURE((yyval.val), (yyvsp[(4) - (4)].val));
			    }
			    else {
				(yyval.val) = block_append((yyvsp[(4) - (4)].val), NEW_NIL());
			    }
			}
			fixpos((yyval.val), (yyvsp[(1) - (4)].val));
#endif
			(yyval.val) = dispatch4(body_stmt,
				       escape_Qundef((yyvsp[(1) - (4)].val)),
				       escape_Qundef((yyvsp[(2) - (4)].val)),
				       escape_Qundef((yyvsp[(3) - (4)].val)),
				       escape_Qundef((yyvsp[(4) - (4)].val)));

		    ;}
    break;

  case 5:
#line 807 "ripper.y"
    {
#if 0
			void_stmts((yyvsp[(1) - (2)].val));
#endif

			(yyval.val) = (yyvsp[(1) - (2)].val);
		    ;}
    break;

  case 6:
#line 817 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_BEGIN(0);
#endif
			(yyval.val) = dispatch2(stmts_add, dispatch0(stmts_new),
						  dispatch0(void_stmt));

		    ;}
    break;

  case 7:
#line 826 "ripper.y"
    {
#if 0
			(yyval.val) = newline_node((yyvsp[(1) - (1)].val));
#endif
			(yyval.val) = dispatch2(stmts_add, dispatch0(stmts_new), (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 8:
#line 834 "ripper.y"
    {
#if 0
			(yyval.val) = block_append((yyvsp[(1) - (3)].val), newline_node((yyvsp[(3) - (3)].val)));
#endif
			(yyval.val) = dispatch2(stmts_add, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 9:
#line 842 "ripper.y"
    {
			(yyval.val) = remove_begin((yyvsp[(2) - (2)].val));
		    ;}
    break;

  case 10:
#line 847 "ripper.y"
    {lex_state = EXPR_FNAME;;}
    break;

  case 11:
#line 848 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_ALIAS((yyvsp[(2) - (4)].val), (yyvsp[(4) - (4)].val));
#endif
			(yyval.val) = dispatch2(alias, (yyvsp[(2) - (4)].val), (yyvsp[(4) - (4)].val));

		    ;}
    break;

  case 12:
#line 856 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_VALIAS((yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch2(var_alias, (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 13:
#line 864 "ripper.y"
    {
#if 0
			char buf[3];

			sprintf(buf, "$%c", (char)(yyvsp[(3) - (3)].val)->nd_nth);
			(yyval.val) = NEW_VALIAS((yyvsp[(2) - (3)].val), rb_intern(buf));
#endif
			(yyval.val) = dispatch2(var_alias, (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 14:
#line 875 "ripper.y"
    {
#if 0
			yyerror("can't make alias for the number variables");
			(yyval.val) = NEW_BEGIN(0);
#endif
			(yyval.val) = dispatch2(var_alias, (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val));
			(yyval.val) = dispatch1(alias_error, (yyval.val));

		    ;}
    break;

  case 15:
#line 885 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (2)].val);
#endif
			(yyval.val) = dispatch1(undef, (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 16:
#line 893 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_IF(cond((yyvsp[(3) - (3)].val)), remove_begin((yyvsp[(1) - (3)].val)), 0);
			fixpos((yyval.val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch2(if_mod, (yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val));

		    ;}
    break;

  case 17:
#line 902 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_UNLESS(cond((yyvsp[(3) - (3)].val)), remove_begin((yyvsp[(1) - (3)].val)), 0);
			fixpos((yyval.val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch2(unless_mod, (yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val));

		    ;}
    break;

  case 18:
#line 911 "ripper.y"
    {
#if 0
			if ((yyvsp[(1) - (3)].val) && nd_type((yyvsp[(1) - (3)].val)) == NODE_BEGIN) {
			    (yyval.val) = NEW_WHILE(cond((yyvsp[(3) - (3)].val)), (yyvsp[(1) - (3)].val)->nd_body, 0);
			}
			else {
			    (yyval.val) = NEW_WHILE(cond((yyvsp[(3) - (3)].val)), (yyvsp[(1) - (3)].val), 1);
			}
#endif
			(yyval.val) = dispatch2(while_mod, (yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val));

		    ;}
    break;

  case 19:
#line 924 "ripper.y"
    {
#if 0
			if ((yyvsp[(1) - (3)].val) && nd_type((yyvsp[(1) - (3)].val)) == NODE_BEGIN) {
			    (yyval.val) = NEW_UNTIL(cond((yyvsp[(3) - (3)].val)), (yyvsp[(1) - (3)].val)->nd_body, 0);
			}
			else {
			    (yyval.val) = NEW_UNTIL(cond((yyvsp[(3) - (3)].val)), (yyvsp[(1) - (3)].val), 1);
			}
#endif
			(yyval.val) = dispatch2(until_mod, (yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val));

		    ;}
    break;

  case 20:
#line 937 "ripper.y"
    {
#if 0
			NODE *resq = NEW_RESBODY(0, remove_begin((yyvsp[(3) - (3)].val)), 0);
			(yyval.val) = NEW_RESCUE(remove_begin((yyvsp[(1) - (3)].val)), resq, 0);
#endif
			(yyval.val) = dispatch2(rescue_mod, (yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val));

		    ;}
    break;

  case 21:
#line 946 "ripper.y"
    {
			if (in_def || in_single) {
			    yyerror("BEGIN in method");
			}
#if 0
			/* local_push(0); */
#endif

		    ;}
    break;

  case 22:
#line 956 "ripper.y"
    {
#if 0
			ruby_eval_tree_begin = block_append(ruby_eval_tree_begin,
							    (yyvsp[(4) - (5)].val));
			/* NEW_PREEXE($4)); */
			/* local_pop(); */
			(yyval.val) = 0;
#endif
			(yyval.val) = dispatch1(BEGIN, (yyvsp[(4) - (5)].val));

		    ;}
    break;

  case 23:
#line 968 "ripper.y"
    {
			if (in_def || in_single) {
			    rb_warn0("END in method; use at_exit");
			}
#if 0
			(yyval.val) = NEW_POSTEXE(NEW_NODE(
			    NODE_SCOPE, 0 /* tbl */, (yyvsp[(3) - (4)].val) /* body */, 0 /* args */));
#endif
			(yyval.val) = dispatch1(END, (yyvsp[(3) - (4)].val));

		    ;}
    break;

  case 24:
#line 980 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(3) - (3)].val));
			(yyval.val) = node_assign((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch2(assign, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 25:
#line 989 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(3) - (3)].val));
			(yyvsp[(1) - (3)].val)->nd_value = (yyvsp[(3) - (3)].val);
			(yyval.val) = (yyvsp[(1) - (3)].val);
#endif
			(yyval.val) = dispatch2(massign, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 26:
#line 999 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(3) - (3)].val));
			if ((yyvsp[(1) - (3)].val)) {
			    ID vid = (yyvsp[(1) - (3)].val)->nd_vid;
			    if ((yyvsp[(2) - (3)].val) == tOROP) {
				(yyvsp[(1) - (3)].val)->nd_value = (yyvsp[(3) - (3)].val);
				(yyval.val) = NEW_OP_ASGN_OR(gettable(vid), (yyvsp[(1) - (3)].val));
				if (is_asgn_or_id(vid)) {
				    (yyval.val)->nd_aid = vid;
				}
			    }
			    else if ((yyvsp[(2) - (3)].val) == tANDOP) {
				(yyvsp[(1) - (3)].val)->nd_value = (yyvsp[(3) - (3)].val);
				(yyval.val) = NEW_OP_ASGN_AND(gettable(vid), (yyvsp[(1) - (3)].val));
			    }
			    else {
				(yyval.val) = (yyvsp[(1) - (3)].val);
				(yyval.val)->nd_value = NEW_CALL(gettable(vid), (yyvsp[(2) - (3)].val), NEW_LIST((yyvsp[(3) - (3)].val)));
			    }
			}
			else {
			    (yyval.val) = NEW_BEGIN(0);
			}
#endif
			(yyval.val) = dispatch3(opassign, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 27:
#line 1028 "ripper.y"
    {
#if 0
			NODE *args;

			value_expr((yyvsp[(6) - (6)].val));
			if (!(yyvsp[(3) - (6)].val)) (yyvsp[(3) - (6)].val) = NEW_ZARRAY();
			args = arg_concat((yyvsp[(6) - (6)].val), (yyvsp[(3) - (6)].val));
			if ((yyvsp[(5) - (6)].val) == tOROP) {
			    (yyvsp[(5) - (6)].val) = 0;
			}
			else if ((yyvsp[(5) - (6)].val) == tANDOP) {
			    (yyvsp[(5) - (6)].val) = 1;
			}
			(yyval.val) = NEW_OP_ASGN1((yyvsp[(1) - (6)].val), (yyvsp[(5) - (6)].val), args);
			fixpos((yyval.val), (yyvsp[(1) - (6)].val));
#endif
			(yyval.val) = dispatch2(aref_field, (yyvsp[(1) - (6)].val), escape_Qundef((yyvsp[(3) - (6)].val)));
			(yyval.val) = dispatch3(opassign, (yyval.val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val));

		    ;}
    break;

  case 28:
#line 1049 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(5) - (5)].val));
			if ((yyvsp[(4) - (5)].val) == tOROP) {
			    (yyvsp[(4) - (5)].val) = 0;
			}
			else if ((yyvsp[(4) - (5)].val) == tANDOP) {
			    (yyvsp[(4) - (5)].val) = 1;
			}
			(yyval.val) = NEW_OP_ASGN2((yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val));
			fixpos((yyval.val), (yyvsp[(1) - (5)].val));
#endif
			(yyval.val) = dispatch3(field, (yyvsp[(1) - (5)].val), ripper_id2sym('.'), (yyvsp[(3) - (5)].val));
			(yyval.val) = dispatch3(opassign, (yyval.val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val));

		    ;}
    break;

  case 29:
#line 1066 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(5) - (5)].val));
			if ((yyvsp[(4) - (5)].val) == tOROP) {
			    (yyvsp[(4) - (5)].val) = 0;
			}
			else if ((yyvsp[(4) - (5)].val) == tANDOP) {
			    (yyvsp[(4) - (5)].val) = 1;
			}
			(yyval.val) = NEW_OP_ASGN2((yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val));
			fixpos((yyval.val), (yyvsp[(1) - (5)].val));
#endif
			(yyval.val) = dispatch3(field, (yyvsp[(1) - (5)].val), ripper_id2sym('.'), (yyvsp[(3) - (5)].val));
			(yyval.val) = dispatch3(opassign, (yyval.val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val));

		    ;}
    break;

  case 30:
#line 1083 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(5) - (5)].val));
			if ((yyvsp[(4) - (5)].val) == tOROP) {
			    (yyvsp[(4) - (5)].val) = 0;
			}
			else if ((yyvsp[(4) - (5)].val) == tANDOP) {
			    (yyvsp[(4) - (5)].val) = 1;
			}
			(yyval.val) = NEW_OP_ASGN2((yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val));
			fixpos((yyval.val), (yyvsp[(1) - (5)].val));
#endif
			(yyval.val) = dispatch3(field, (yyvsp[(1) - (5)].val), ripper_intern("::"), (yyvsp[(3) - (5)].val));
			(yyval.val) = dispatch3(opassign, (yyval.val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val));

		    ;}
    break;

  case 31:
#line 1100 "ripper.y"
    {
#if 0
			rb_backref_error((yyvsp[(1) - (3)].val));
			(yyval.val) = NEW_BEGIN(0);
#endif
			(yyval.val) = dispatch2(assign, dispatch1(var_field, (yyvsp[(1) - (3)].val)), (yyvsp[(3) - (3)].val));
			(yyval.val) = dispatch1(assign_error, (yyval.val));

		    ;}
    break;

  case 32:
#line 1110 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(3) - (3)].val));
			(yyval.val) = node_assign((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch2(assign, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 33:
#line 1119 "ripper.y"
    {
#if 0
			(yyvsp[(1) - (3)].val)->nd_value = (yyvsp[(3) - (3)].val);
			(yyval.val) = (yyvsp[(1) - (3)].val);
#endif
			dispatch2(massign, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 34:
#line 1128 "ripper.y"
    {
#if 0
			(yyvsp[(1) - (3)].val)->nd_value = (yyvsp[(3) - (3)].val);
			(yyval.val) = (yyvsp[(1) - (3)].val);
#endif
			(yyval.val) = dispatch2(massign, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 37:
#line 1141 "ripper.y"
    {
#if 0
			(yyval.val) = logop(NODE_AND, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ripper_intern("and"), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 38:
#line 1149 "ripper.y"
    {
#if 0
			(yyval.val) = logop(NODE_OR, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ripper_intern("or"), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 39:
#line 1157 "ripper.y"
    {
#if 0
			(yyval.val) = call_uni_op(cond((yyvsp[(2) - (2)].val)), '!');
#endif
			(yyval.val) = dispatch2(unary, ripper_intern("not"), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 40:
#line 1165 "ripper.y"
    {
#if 0
			(yyval.val) = call_uni_op(cond((yyvsp[(2) - (2)].val)), '!');
#endif
			(yyval.val) = dispatch2(unary, ripper_id2sym('!'), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 42:
#line 1176 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(1) - (1)].val));
			(yyval.val) = (yyvsp[(1) - (1)].val);
		        if (!(yyval.val)) (yyval.val) = NEW_NIL();
#endif
			(yyval.val) = (yyvsp[(1) - (1)].val);

		    ;}
    break;

  case 45:
#line 1190 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_RETURN(ret_args((yyvsp[(2) - (2)].val)));
#endif
			(yyval.val) = dispatch1(return, (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 46:
#line 1198 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_BREAK(ret_args((yyvsp[(2) - (2)].val)));
#endif
			(yyval.val) = dispatch1(break, (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 47:
#line 1206 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_NEXT(ret_args((yyvsp[(2) - (2)].val)));
#endif
			(yyval.val) = dispatch1(next, (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 49:
#line 1217 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CALL((yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val));
#endif
			(yyval.val) = dispatch3(call, (yyvsp[(1) - (4)].val), ripper_id2sym('.'), (yyvsp[(3) - (4)].val));
			(yyval.val) = method_arg((yyval.val), (yyvsp[(4) - (4)].val));

		    ;}
    break;

  case 50:
#line 1226 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CALL((yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val));
#endif
			(yyval.val) = dispatch3(call, (yyvsp[(1) - (4)].val), ripper_intern("::"), (yyvsp[(3) - (4)].val));
			(yyval.val) = method_arg((yyval.val), (yyvsp[(4) - (4)].val));

		    ;}
    break;

  case 51:
#line 1237 "ripper.y"
    {
#if 0
			dyna_push();
			(yyval.num) = ruby_sourceline;
#endif

		    ;}
    break;

  case 52:
#line 1247 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_ITER((yyvsp[(3) - (5)].val),(yyvsp[(4) - (5)].val));
			nd_set_line((yyval.val), (yyvsp[(2) - (5)].num));
			dyna_pop();
#endif
			(yyval.val) = dispatch2(brace_block, escape_Qundef((yyvsp[(3) - (5)].val)), (yyvsp[(4) - (5)].val));

		    ;}
    break;

  case 53:
#line 1259 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_FCALL((yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val));
			fixpos((yyval.val), (yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = dispatch2(command, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 54:
#line 1268 "ripper.y"
    {
#if 0
			block_dup_check((yyvsp[(2) - (3)].val),(yyvsp[(3) - (3)].val));
		        (yyvsp[(3) - (3)].val)->nd_iter = NEW_FCALL((yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val));
			(yyval.val) = (yyvsp[(3) - (3)].val);
			fixpos((yyval.val), (yyvsp[(2) - (3)].val));
#endif
			(yyval.val) = dispatch2(command, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val));
			(yyval.val) = method_add_block((yyval.val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 55:
#line 1280 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CALL((yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val));
			fixpos((yyval.val), (yyvsp[(1) - (4)].val));
#endif
			(yyval.val) = dispatch4(command_call, (yyvsp[(1) - (4)].val), ripper_id2sym('.'), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val));

		    ;}
    break;

  case 56:
#line 1289 "ripper.y"
    {
#if 0
			block_dup_check((yyvsp[(4) - (5)].val),(yyvsp[(5) - (5)].val));
		        (yyvsp[(5) - (5)].val)->nd_iter = NEW_CALL((yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val));
			(yyval.val) = (yyvsp[(5) - (5)].val);
			fixpos((yyval.val), (yyvsp[(1) - (5)].val));
#endif
			(yyval.val) = dispatch4(command_call, (yyvsp[(1) - (5)].val), ripper_id2sym('.'), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val));
			(yyval.val) = method_add_block((yyval.val), (yyvsp[(5) - (5)].val));

		   ;}
    break;

  case 57:
#line 1301 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CALL((yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val));
			fixpos((yyval.val), (yyvsp[(1) - (4)].val));
#endif
			(yyval.val) = dispatch4(command_call, (yyvsp[(1) - (4)].val), ripper_intern("::"), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val));

		    ;}
    break;

  case 58:
#line 1310 "ripper.y"
    {
#if 0
			block_dup_check((yyvsp[(4) - (5)].val),(yyvsp[(5) - (5)].val));
		        (yyvsp[(5) - (5)].val)->nd_iter = NEW_CALL((yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val));
			(yyval.val) = (yyvsp[(5) - (5)].val);
			fixpos((yyval.val), (yyvsp[(1) - (5)].val));
#endif
			(yyval.val) = dispatch4(command_call, (yyvsp[(1) - (5)].val), ripper_intern("::"), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val));
			(yyval.val) = method_add_block((yyval.val), (yyvsp[(5) - (5)].val));

		   ;}
    break;

  case 59:
#line 1322 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_SUPER((yyvsp[(2) - (2)].val));
			fixpos((yyval.val), (yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = dispatch1(super, (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 60:
#line 1331 "ripper.y"
    {
#if 0
			(yyval.val) = new_yield((yyvsp[(2) - (2)].val));
			fixpos((yyval.val), (yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = dispatch1(yield, (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 62:
#line 1343 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (3)].val);
#endif
			(yyval.val) = dispatch1(mlhs_paren, (yyvsp[(2) - (3)].val));

		    ;}
    break;

  case 64:
#line 1354 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(NEW_LIST((yyvsp[(2) - (3)].val)), 0);
#endif
			(yyval.val) = dispatch1(mlhs_paren, (yyvsp[(2) - (3)].val));

		    ;}
    break;

  case 65:
#line 1364 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (1)].val), 0);
#endif
			(yyval.val) = (yyvsp[(1) - (1)].val);

		    ;}
    break;

  case 66:
#line 1372 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(list_append((yyvsp[(1) - (2)].val),(yyvsp[(2) - (2)].val)), 0);
#endif
			(yyval.val) = mlhs_add((yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 67:
#line 1380 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = mlhs_add_star((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 68:
#line 1388 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (5)].val), NEW_POSTARG((yyvsp[(3) - (5)].val),(yyvsp[(5) - (5)].val)));
#endif
			(yyval.val) = mlhs_add_star((yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val));

		    ;}
    break;

  case 69:
#line 1396 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (2)].val), -1);
#endif
			(yyval.val) = mlhs_add_star((yyvsp[(1) - (2)].val), Qnil);

		    ;}
    break;

  case 70:
#line 1404 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (4)].val), NEW_POSTARG(-1, (yyvsp[(4) - (4)].val)));
#endif
			(yyval.val) = mlhs_add_star((yyvsp[(1) - (4)].val), Qnil);

		    ;}
    break;

  case 71:
#line 1412 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, (yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = mlhs_add_star(mlhs_new(), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 72:
#line 1420 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, NEW_POSTARG((yyvsp[(2) - (4)].val),(yyvsp[(4) - (4)].val)));
#endif
			(yyval.val) = mlhs_add_star(mlhs_new(), (yyvsp[(2) - (4)].val));

		    ;}
    break;

  case 73:
#line 1428 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, -1);
#endif
			(yyval.val) = mlhs_add_star(mlhs_new(), Qnil);

		    ;}
    break;

  case 74:
#line 1436 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, NEW_POSTARG(-1, (yyvsp[(3) - (3)].val)));
#endif
			(yyval.val) = mlhs_add_star(mlhs_new(), Qnil);

		    ;}
    break;

  case 76:
#line 1447 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (3)].val);
#endif
			(yyval.val) = dispatch1(mlhs_paren, (yyvsp[(2) - (3)].val));

		    ;}
    break;

  case 77:
#line 1457 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST((yyvsp[(1) - (2)].val));
#endif
			(yyval.val) = mlhs_add(mlhs_new(), (yyvsp[(1) - (2)].val));

		    ;}
    break;

  case 78:
#line 1465 "ripper.y"
    {
#if 0
			(yyval.val) = list_append((yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val));
#endif
			(yyval.val) = mlhs_add((yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val));

		    ;}
    break;

  case 79:
#line 1475 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST((yyvsp[(1) - (1)].val));
#endif
			(yyval.val) = mlhs_add(mlhs_new(), (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 80:
#line 1483 "ripper.y"
    {
#if 0
			(yyval.val) = list_append((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = mlhs_add((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 81:
#line 1493 "ripper.y"
    {
#if 0
			(yyval.val) = assignable((yyvsp[(1) - (1)].val), 0);
#endif
			(yyval.val) = (yyvsp[(1) - (1)].val);

		    ;}
    break;

  case 82:
#line 1501 "ripper.y"
    {
#if 0
			(yyval.val) = aryset((yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val));
#endif
			(yyval.val) = dispatch2(aref_field, (yyvsp[(1) - (4)].val), escape_Qundef((yyvsp[(3) - (4)].val)));

		    ;}
    break;

  case 83:
#line 1509 "ripper.y"
    {
#if 0
			(yyval.val) = attrset((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(field, (yyvsp[(1) - (3)].val), ripper_id2sym('.'), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 84:
#line 1517 "ripper.y"
    {
#if 0
			(yyval.val) = attrset((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch2(const_path_field, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 85:
#line 1525 "ripper.y"
    {
#if 0
			(yyval.val) = attrset((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(field, (yyvsp[(1) - (3)].val), ripper_id2sym('.'), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 86:
#line 1533 "ripper.y"
    {
#if 0
			if (in_def || in_single)
			    yyerror("dynamic constant assignment");
			(yyval.val) = NEW_CDECL(0, 0, NEW_COLON2((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)));
#endif
			if (in_def || in_single)
			    yyerror("dynamic constant assignment");
			(yyval.val) = dispatch2(const_path_field, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 87:
#line 1545 "ripper.y"
    {
#if 0
			if (in_def || in_single)
			    yyerror("dynamic constant assignment");
			(yyval.val) = NEW_CDECL(0, 0, NEW_COLON3((yyvsp[(2) - (2)].val)));
#endif
			(yyval.val) = dispatch1(top_const_field, (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 88:
#line 1555 "ripper.y"
    {
#if 0
			rb_backref_error((yyvsp[(1) - (1)].val));
			(yyval.val) = NEW_BEGIN(0);
#endif
			(yyval.val) = dispatch1(var_field, (yyvsp[(1) - (1)].val));
			(yyval.val) = dispatch1(assign_error, (yyval.val));

		    ;}
    break;

  case 89:
#line 1567 "ripper.y"
    {
#if 0
			if (!((yyval.val) = assignable((yyvsp[(1) - (1)].val), 0))) (yyval.val) = NEW_BEGIN(0);
#endif
			(yyval.val) = dispatch1(var_field, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 90:
#line 1575 "ripper.y"
    {
#if 0
			(yyval.val) = aryset((yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val));
#endif
			(yyval.val) = dispatch2(aref_field, (yyvsp[(1) - (4)].val), escape_Qundef((yyvsp[(3) - (4)].val)));

		    ;}
    break;

  case 91:
#line 1583 "ripper.y"
    {
#if 0
			(yyval.val) = attrset((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(field, (yyvsp[(1) - (3)].val), ripper_id2sym('.'), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 92:
#line 1591 "ripper.y"
    {
#if 0
			(yyval.val) = attrset((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(field, (yyvsp[(1) - (3)].val), ripper_intern("::"), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 93:
#line 1599 "ripper.y"
    {
#if 0
			(yyval.val) = attrset((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(field, (yyvsp[(1) - (3)].val), ripper_id2sym('.'), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 94:
#line 1607 "ripper.y"
    {
#if 0
			if (in_def || in_single)
			    yyerror("dynamic constant assignment");
			(yyval.val) = NEW_CDECL(0, 0, NEW_COLON2((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)));
#endif
			(yyval.val) = dispatch2(const_path_field, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
			if (in_def || in_single) {
			    (yyval.val) = dispatch1(assign_error, (yyval.val));
			}

		    ;}
    break;

  case 95:
#line 1620 "ripper.y"
    {
#if 0
			if (in_def || in_single)
			    yyerror("dynamic constant assignment");
			(yyval.val) = NEW_CDECL(0, 0, NEW_COLON3((yyvsp[(2) - (2)].val)));
#endif
			(yyval.val) = dispatch1(top_const_field, (yyvsp[(2) - (2)].val));
			if (in_def || in_single) {
			    (yyval.val) = dispatch1(assign_error, (yyval.val));
			}

		    ;}
    break;

  case 96:
#line 1633 "ripper.y"
    {
#if 0
			rb_backref_error((yyvsp[(1) - (1)].val));
			(yyval.val) = NEW_BEGIN(0);
#endif
			(yyval.val) = dispatch1(assign_error, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 97:
#line 1644 "ripper.y"
    {
#if 0
			yyerror("class/module name must be CONSTANT");
#endif
			(yyval.val) = dispatch1(class_name_error, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 99:
#line 1655 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_COLON3((yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = dispatch1(top_const_ref, (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 100:
#line 1663 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_COLON2(0, (yyval.val));
#endif
			(yyval.val) = dispatch1(const_ref, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 101:
#line 1671 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_COLON2((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch2(const_path_ref, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 105:
#line 1684 "ripper.y"
    {
#if 0
			lex_state = EXPR_END;
			(yyval.val) = (yyvsp[(1) - (1)].val);
#endif
			lex_state = EXPR_END;
			(yyval.val) = (yyvsp[(1) - (1)].val);

		    ;}
    break;

  case 106:
#line 1694 "ripper.y"
    {
#if 0
			lex_state = EXPR_END;
			(yyval.val) = (yyvsp[(1) - (1)].id);
#endif
			lex_state = EXPR_END;
			(yyval.val) = (yyvsp[(1) - (1)].val);

		    ;}
    break;

  case 109:
#line 1710 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIT(ID2SYM((yyvsp[(1) - (1)].val)));
#endif
			(yyval.val) = dispatch1(symbol_literal, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 111:
#line 1721 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_UNDEF((yyvsp[(1) - (1)].val));
#endif
			(yyval.val) = rb_ary_new3(1, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 112:
#line 1728 "ripper.y"
    {lex_state = EXPR_FNAME;;}
    break;

  case 113:
#line 1729 "ripper.y"
    {
#if 0
			(yyval.val) = block_append((yyvsp[(1) - (4)].val), NEW_UNDEF((yyvsp[(4) - (4)].val)));
#endif
			rb_ary_push((yyvsp[(1) - (4)].val), (yyvsp[(4) - (4)].val));

		    ;}
    break;

  case 114:
#line 1738 "ripper.y"
    { ifndef_ripper((yyval.val) = '|'); ;}
    break;

  case 115:
#line 1739 "ripper.y"
    { ifndef_ripper((yyval.val) = '^'); ;}
    break;

  case 116:
#line 1740 "ripper.y"
    { ifndef_ripper((yyval.val) = '&'); ;}
    break;

  case 117:
#line 1741 "ripper.y"
    { ifndef_ripper((yyval.val) = tCMP); ;}
    break;

  case 118:
#line 1742 "ripper.y"
    { ifndef_ripper((yyval.val) = tEQ); ;}
    break;

  case 119:
#line 1743 "ripper.y"
    { ifndef_ripper((yyval.val) = tEQQ); ;}
    break;

  case 120:
#line 1744 "ripper.y"
    { ifndef_ripper((yyval.val) = tMATCH); ;}
    break;

  case 121:
#line 1745 "ripper.y"
    { ifndef_ripper((yyval.val) = tNMATCH); ;}
    break;

  case 122:
#line 1746 "ripper.y"
    { ifndef_ripper((yyval.val) = '>'); ;}
    break;

  case 123:
#line 1747 "ripper.y"
    { ifndef_ripper((yyval.val) = tGEQ); ;}
    break;

  case 124:
#line 1748 "ripper.y"
    { ifndef_ripper((yyval.val) = '<'); ;}
    break;

  case 125:
#line 1749 "ripper.y"
    { ifndef_ripper((yyval.val) = tLEQ); ;}
    break;

  case 126:
#line 1750 "ripper.y"
    { ifndef_ripper((yyval.val) = tNEQ); ;}
    break;

  case 127:
#line 1751 "ripper.y"
    { ifndef_ripper((yyval.val) = tLSHFT); ;}
    break;

  case 128:
#line 1752 "ripper.y"
    { ifndef_ripper((yyval.val) = tRSHFT); ;}
    break;

  case 129:
#line 1753 "ripper.y"
    { ifndef_ripper((yyval.val) = '+'); ;}
    break;

  case 130:
#line 1754 "ripper.y"
    { ifndef_ripper((yyval.val) = '-'); ;}
    break;

  case 131:
#line 1755 "ripper.y"
    { ifndef_ripper((yyval.val) = '*'); ;}
    break;

  case 132:
#line 1756 "ripper.y"
    { ifndef_ripper((yyval.val) = '*'); ;}
    break;

  case 133:
#line 1757 "ripper.y"
    { ifndef_ripper((yyval.val) = '/'); ;}
    break;

  case 134:
#line 1758 "ripper.y"
    { ifndef_ripper((yyval.val) = '%'); ;}
    break;

  case 135:
#line 1759 "ripper.y"
    { ifndef_ripper((yyval.val) = tPOW); ;}
    break;

  case 136:
#line 1760 "ripper.y"
    { ifndef_ripper((yyval.val) = '!'); ;}
    break;

  case 137:
#line 1761 "ripper.y"
    { ifndef_ripper((yyval.val) = '~'); ;}
    break;

  case 138:
#line 1762 "ripper.y"
    { ifndef_ripper((yyval.val) = tUPLUS); ;}
    break;

  case 139:
#line 1763 "ripper.y"
    { ifndef_ripper((yyval.val) = tUMINUS); ;}
    break;

  case 140:
#line 1764 "ripper.y"
    { ifndef_ripper((yyval.val) = tAREF); ;}
    break;

  case 141:
#line 1765 "ripper.y"
    { ifndef_ripper((yyval.val) = tASET); ;}
    break;

  case 142:
#line 1766 "ripper.y"
    { ifndef_ripper((yyval.val) = '`'); ;}
    break;

  case 184:
#line 1784 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(3) - (3)].val));
			(yyval.val) = node_assign((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch2(assign, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 185:
#line 1793 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(3) - (5)].val));
		        (yyvsp[(3) - (5)].val) = NEW_RESCUE((yyvsp[(3) - (5)].val), NEW_RESBODY(0,(yyvsp[(5) - (5)].val),0), 0);
			(yyval.val) = node_assign((yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val));
#endif
			(yyval.val) = dispatch2(assign, (yyvsp[(1) - (5)].val), dispatch2(rescue_mod, (yyvsp[(3) - (5)].val), (yyvsp[(5) - (5)].val)));

		    ;}
    break;

  case 186:
#line 1803 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(3) - (3)].val));
			if ((yyvsp[(1) - (3)].val)) {
			    ID vid = (yyvsp[(1) - (3)].val)->nd_vid;
			    if ((yyvsp[(2) - (3)].val) == tOROP) {
				(yyvsp[(1) - (3)].val)->nd_value = (yyvsp[(3) - (3)].val);
				(yyval.val) = NEW_OP_ASGN_OR(gettable(vid), (yyvsp[(1) - (3)].val));
				if (is_asgn_or_id(vid)) {
				    (yyval.val)->nd_aid = vid;
				}
			    }
			    else if ((yyvsp[(2) - (3)].val) == tANDOP) {
				(yyvsp[(1) - (3)].val)->nd_value = (yyvsp[(3) - (3)].val);
				(yyval.val) = NEW_OP_ASGN_AND(gettable(vid), (yyvsp[(1) - (3)].val));
			    }
			    else {
				(yyval.val) = (yyvsp[(1) - (3)].val);
				(yyval.val)->nd_value = NEW_CALL(gettable(vid), (yyvsp[(2) - (3)].val), NEW_LIST((yyvsp[(3) - (3)].val)));
			    }
			}
			else {
			    (yyval.val) = NEW_BEGIN(0);
			}
#endif
			(yyval.val) = dispatch3(opassign, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 187:
#line 1832 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(3) - (5)].val));
		        (yyvsp[(3) - (5)].val) = NEW_RESCUE((yyvsp[(3) - (5)].val), NEW_RESBODY(0,(yyvsp[(5) - (5)].val),0), 0);
			if ((yyvsp[(1) - (5)].val)) {
			    ID vid = (yyvsp[(1) - (5)].val)->nd_vid;
			    if ((yyvsp[(2) - (5)].val) == tOROP) {
				(yyvsp[(1) - (5)].val)->nd_value = (yyvsp[(3) - (5)].val);
				(yyval.val) = NEW_OP_ASGN_OR(gettable(vid), (yyvsp[(1) - (5)].val));
				if (is_asgn_or_id(vid)) {
				    (yyval.val)->nd_aid = vid;
				}
			    }
			    else if ((yyvsp[(2) - (5)].val) == tANDOP) {
				(yyvsp[(1) - (5)].val)->nd_value = (yyvsp[(3) - (5)].val);
				(yyval.val) = NEW_OP_ASGN_AND(gettable(vid), (yyvsp[(1) - (5)].val));
			    }
			    else {
				(yyval.val) = (yyvsp[(1) - (5)].val);
				(yyval.val)->nd_value = NEW_CALL(gettable(vid), (yyvsp[(2) - (5)].val), NEW_LIST((yyvsp[(3) - (5)].val)));
			    }
			}
			else {
			    (yyval.val) = NEW_BEGIN(0);
			}
#endif
			(yyvsp[(3) - (5)].val) = dispatch2(rescue_mod, (yyvsp[(3) - (5)].val), (yyvsp[(5) - (5)].val));
			(yyval.val) = dispatch3(opassign, (yyvsp[(1) - (5)].val), (yyvsp[(2) - (5)].val), (yyvsp[(3) - (5)].val));

		    ;}
    break;

  case 188:
#line 1863 "ripper.y"
    {
#if 0
			NODE *args;

			value_expr((yyvsp[(6) - (6)].val));
			if (!(yyvsp[(3) - (6)].val)) (yyvsp[(3) - (6)].val) = NEW_ZARRAY();
			args = arg_concat((yyvsp[(6) - (6)].val), (yyvsp[(3) - (6)].val));
			if ((yyvsp[(5) - (6)].val) == tOROP) {
			    (yyvsp[(5) - (6)].val) = 0;
			}
			else if ((yyvsp[(5) - (6)].val) == tANDOP) {
			    (yyvsp[(5) - (6)].val) = 1;
			}
			(yyval.val) = NEW_OP_ASGN1((yyvsp[(1) - (6)].val), (yyvsp[(5) - (6)].val), args);
			fixpos((yyval.val), (yyvsp[(1) - (6)].val));
#endif
			(yyvsp[(1) - (6)].val) = dispatch2(aref_field, (yyvsp[(1) - (6)].val), escape_Qundef((yyvsp[(3) - (6)].val)));
			(yyval.val) = dispatch3(opassign, (yyvsp[(1) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val));

		    ;}
    break;

  case 189:
#line 1884 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(5) - (5)].val));
			if ((yyvsp[(4) - (5)].val) == tOROP) {
			    (yyvsp[(4) - (5)].val) = 0;
			}
			else if ((yyvsp[(4) - (5)].val) == tANDOP) {
			    (yyvsp[(4) - (5)].val) = 1;
			}
			(yyval.val) = NEW_OP_ASGN2((yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val));
			fixpos((yyval.val), (yyvsp[(1) - (5)].val));
#endif
			(yyvsp[(1) - (5)].val) = dispatch3(field, (yyvsp[(1) - (5)].val), ripper_id2sym('.'), (yyvsp[(3) - (5)].val));
			(yyval.val) = dispatch3(opassign, (yyvsp[(1) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val));

		    ;}
    break;

  case 190:
#line 1901 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(5) - (5)].val));
			if ((yyvsp[(4) - (5)].val) == tOROP) {
			    (yyvsp[(4) - (5)].val) = 0;
			}
			else if ((yyvsp[(4) - (5)].val) == tANDOP) {
			    (yyvsp[(4) - (5)].val) = 1;
			}
			(yyval.val) = NEW_OP_ASGN2((yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val));
			fixpos((yyval.val), (yyvsp[(1) - (5)].val));
#endif
			(yyvsp[(1) - (5)].val) = dispatch3(field, (yyvsp[(1) - (5)].val), ripper_id2sym('.'), (yyvsp[(3) - (5)].val));
			(yyval.val) = dispatch3(opassign, (yyvsp[(1) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val));

		    ;}
    break;

  case 191:
#line 1918 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(5) - (5)].val));
			if ((yyvsp[(4) - (5)].val) == tOROP) {
			    (yyvsp[(4) - (5)].val) = 0;
			}
			else if ((yyvsp[(4) - (5)].val) == tANDOP) {
			    (yyvsp[(4) - (5)].val) = 1;
			}
			(yyval.val) = NEW_OP_ASGN2((yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val));
			fixpos((yyval.val), (yyvsp[(1) - (5)].val));
#endif
			(yyvsp[(1) - (5)].val) = dispatch3(field, (yyvsp[(1) - (5)].val), ripper_intern("::"), (yyvsp[(3) - (5)].val));
			(yyval.val) = dispatch3(opassign, (yyvsp[(1) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val));

		    ;}
    break;

  case 192:
#line 1935 "ripper.y"
    {
#if 0
			yyerror("constant re-assignment");
			(yyval.val) = NEW_BEGIN(0);
#endif
			(yyval.val) = dispatch2(const_path_field, (yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val));
			(yyval.val) = dispatch3(opassign, (yyval.val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val));
			(yyval.val) = dispatch1(assign_error, (yyval.val));

		    ;}
    break;

  case 193:
#line 1946 "ripper.y"
    {
#if 0
			yyerror("constant re-assignment");
			(yyval.val) = NEW_BEGIN(0);
#endif
			(yyval.val) = dispatch1(top_const_field, (yyvsp[(2) - (4)].val));
			(yyval.val) = dispatch3(opassign, (yyval.val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val));
			(yyval.val) = dispatch1(assign_error, (yyval.val));

		    ;}
    break;

  case 194:
#line 1957 "ripper.y"
    {
#if 0
			rb_backref_error((yyvsp[(1) - (3)].val));
			(yyval.val) = NEW_BEGIN(0);
#endif
			(yyval.val) = dispatch1(var_field, (yyvsp[(1) - (3)].val));
			(yyval.val) = dispatch3(opassign, (yyval.val), (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val));
			(yyval.val) = dispatch1(assign_error, (yyval.val));

		    ;}
    break;

  case 195:
#line 1968 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(1) - (3)].val));
			value_expr((yyvsp[(3) - (3)].val));
			if (nd_type((yyvsp[(1) - (3)].val)) == NODE_LIT && FIXNUM_P((yyvsp[(1) - (3)].val)->nd_lit) &&
			    nd_type((yyvsp[(3) - (3)].val)) == NODE_LIT && FIXNUM_P((yyvsp[(3) - (3)].val)->nd_lit)) {
			    (yyvsp[(1) - (3)].val)->nd_lit = rb_range_new((yyvsp[(1) - (3)].val)->nd_lit, (yyvsp[(3) - (3)].val)->nd_lit, Qfalse);
			    (yyval.val) = (yyvsp[(1) - (3)].val);
			}
			else {
			    (yyval.val) = NEW_DOT2((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
			}
#endif
			(yyval.val) = dispatch2(dot2, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 196:
#line 1985 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(1) - (3)].val));
			value_expr((yyvsp[(3) - (3)].val));
			if (nd_type((yyvsp[(1) - (3)].val)) == NODE_LIT && FIXNUM_P((yyvsp[(1) - (3)].val)->nd_lit) &&
			    nd_type((yyvsp[(3) - (3)].val)) == NODE_LIT && FIXNUM_P((yyvsp[(3) - (3)].val)->nd_lit)) {
			    (yyvsp[(1) - (3)].val)->nd_lit = rb_range_new((yyvsp[(1) - (3)].val)->nd_lit, (yyvsp[(3) - (3)].val)->nd_lit, Qtrue);
			    (yyval.val) = (yyvsp[(1) - (3)].val);
			}
			else {
			    (yyval.val) = NEW_DOT3((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
			}
#endif
			(yyval.val) = dispatch2(dot3, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 197:
#line 2002 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), '+', (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ID2SYM('+'), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 198:
#line 2010 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), '-', (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ID2SYM('-'), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 199:
#line 2018 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), '*', (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ID2SYM('*'), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 200:
#line 2026 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), '/', (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ID2SYM('/'), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 201:
#line 2034 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), '%', (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ID2SYM('%'), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 202:
#line 2042 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), tPOW, (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ripper_intern("**"), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 203:
#line 2050 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CALL(call_bin_op((yyvsp[(2) - (4)].val), tPOW, (yyvsp[(4) - (4)].val)), tUMINUS, 0);
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(2) - (4)].val), ripper_intern("**"), (yyvsp[(4) - (4)].val));
			(yyval.val) = dispatch2(unary, ripper_intern("-@"), (yyval.val));

		    ;}
    break;

  case 204:
#line 2059 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CALL(call_bin_op((yyvsp[(2) - (4)].val), tPOW, (yyvsp[(4) - (4)].val)), tUMINUS, 0);
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(2) - (4)].val), ripper_intern("**"), (yyvsp[(4) - (4)].val));
			(yyval.val) = dispatch2(unary, ripper_intern("-@"), (yyval.val));

		    ;}
    break;

  case 205:
#line 2068 "ripper.y"
    {
#if 0
			(yyval.val) = call_uni_op((yyvsp[(2) - (2)].val), tUPLUS);
#endif
			(yyval.val) = dispatch2(unary, ripper_intern("+@"), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 206:
#line 2076 "ripper.y"
    {
#if 0
			(yyval.val) = call_uni_op((yyvsp[(2) - (2)].val), tUMINUS);
#endif
			(yyval.val) = dispatch2(unary, ripper_intern("-@"), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 207:
#line 2084 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), '|', (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ID2SYM('|'), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 208:
#line 2092 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), '^', (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ID2SYM('^'), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 209:
#line 2100 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), '&', (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ID2SYM('&'), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 210:
#line 2108 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), tCMP, (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ripper_intern("<=>"), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 211:
#line 2116 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), '>', (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ID2SYM('>'), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 212:
#line 2124 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), tGEQ, (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ripper_intern(">="), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 213:
#line 2132 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), '<', (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ID2SYM('<'), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 214:
#line 2140 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), tLEQ, (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ripper_intern("<="), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 215:
#line 2148 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), tEQ, (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ripper_intern("=="), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 216:
#line 2156 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), tEQQ, (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ripper_intern("==="), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 217:
#line 2164 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), tNEQ, (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ripper_intern("!="), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 218:
#line 2172 "ripper.y"
    {
#if 0
			(yyval.val) = match_op((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
                        if (nd_type((yyvsp[(1) - (3)].val)) == NODE_LIT && TYPE((yyvsp[(1) - (3)].val)->nd_lit) == T_REGEXP) {
                            (yyval.val) = reg_named_capture_assign((yyvsp[(1) - (3)].val)->nd_lit, (yyval.val));
                        }
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ripper_intern("=~"), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 219:
#line 2183 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), tNMATCH, (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ripper_intern("!~"), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 220:
#line 2191 "ripper.y"
    {
#if 0
			(yyval.val) = call_uni_op(cond((yyvsp[(2) - (2)].val)), '!');
#endif
			(yyval.val) = dispatch2(unary, ID2SYM('!'), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 221:
#line 2199 "ripper.y"
    {
#if 0
			(yyval.val) = call_uni_op((yyvsp[(2) - (2)].val), '~');
#endif
			(yyval.val) = dispatch2(unary, ID2SYM('~'), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 222:
#line 2207 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), tLSHFT, (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ripper_intern("<<"), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 223:
#line 2215 "ripper.y"
    {
#if 0
			(yyval.val) = call_bin_op((yyvsp[(1) - (3)].val), tRSHFT, (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ripper_intern(">>"), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 224:
#line 2223 "ripper.y"
    {
#if 0
			(yyval.val) = logop(NODE_AND, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ripper_intern("&&"), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 225:
#line 2231 "ripper.y"
    {
#if 0
			(yyval.val) = logop(NODE_OR, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch3(binary, (yyvsp[(1) - (3)].val), ripper_intern("||"), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 226:
#line 2238 "ripper.y"
    {in_defined = 1;;}
    break;

  case 227:
#line 2239 "ripper.y"
    {
#if 0
			in_defined = 0;
			(yyval.val) = NEW_DEFINED((yyvsp[(4) - (4)].val));
#endif
			in_defined = 0;
			(yyval.val) = dispatch1(defined, (yyvsp[(4) - (4)].val));

		    ;}
    break;

  case 228:
#line 2249 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(1) - (6)].val));
			(yyval.val) = NEW_IF(cond((yyvsp[(1) - (6)].val)), (yyvsp[(3) - (6)].val), (yyvsp[(6) - (6)].val));
			fixpos((yyval.val), (yyvsp[(1) - (6)].val));
#endif
			(yyval.val) = dispatch3(ifop, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(6) - (6)].val));

		    ;}
    break;

  case 229:
#line 2259 "ripper.y"
    {
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 230:
#line 2265 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(1) - (1)].val));
			(yyval.val) = (yyvsp[(1) - (1)].val);
		        if (!(yyval.val)) (yyval.val) = NEW_NIL();
#endif
			(yyval.val) = (yyvsp[(1) - (1)].val);

		    ;}
    break;

  case 232:
#line 2278 "ripper.y"
    {
			(yyval.val) = (yyvsp[(1) - (2)].val);
		    ;}
    break;

  case 233:
#line 2282 "ripper.y"
    {
#if 0
			(yyval.val) = arg_append((yyvsp[(1) - (4)].val), NEW_HASH((yyvsp[(3) - (4)].val)));
#endif
			(yyval.val) = arg_add_assocs((yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val));

		    ;}
    break;

  case 234:
#line 2290 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST(NEW_HASH((yyvsp[(1) - (2)].val)));
#endif
			(yyval.val) = arg_add_assocs(arg_new(), (yyvsp[(1) - (2)].val));

		    ;}
    break;

  case 235:
#line 2300 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (3)].val);
#endif
			(yyval.val) = dispatch1(arg_paren, escape_Qundef((yyvsp[(2) - (3)].val)));

		    ;}
    break;

  case 240:
#line 2318 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST((yyvsp[(1) - (1)].val));
#endif
			(yyval.val) = arg_add(arg_new(), (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 241:
#line 2326 "ripper.y"
    {
#if 0
			(yyval.val) = arg_blk_pass((yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = arg_add_optblock((yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 242:
#line 2334 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST(NEW_HASH((yyvsp[(1) - (2)].val)));
			(yyval.val) = arg_blk_pass((yyval.val), (yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = arg_add_assocs(arg_new(), (yyvsp[(1) - (2)].val));
			(yyval.val) = arg_add_optblock((yyval.val), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 243:
#line 2344 "ripper.y"
    {
#if 0
			(yyval.val) = arg_append((yyvsp[(1) - (4)].val), NEW_HASH((yyvsp[(3) - (4)].val)));
			(yyval.val) = arg_blk_pass((yyval.val), (yyvsp[(4) - (4)].val));
#endif
			(yyval.val) = arg_add_optblock(arg_add_assocs((yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val)), (yyvsp[(4) - (4)].val));

		    ;}
    break;

  case 244:
#line 2355 "ripper.y"
    {
			(yyval.val) = arg_add_block(arg_new(), (yyvsp[(1) - (1)].val));
		    ;}
    break;

  case 245:
#line 2361 "ripper.y"
    {
			(yyval.num) = cmdarg_stack;
			CMDARG_PUSH(1);
		    ;}
    break;

  case 246:
#line 2366 "ripper.y"
    {
			/* CMDARG_POP() */
			cmdarg_stack = (yyvsp[(1) - (2)].num);
			(yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 247:
#line 2374 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_BLOCK_PASS((yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = (yyvsp[(2) - (2)].val);

		    ;}
    break;

  case 248:
#line 2384 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 249:
#line 2388 "ripper.y"
    {
			(yyval.val) = 0;
		    ;}
    break;

  case 250:
#line 2394 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST((yyvsp[(1) - (1)].val));
#endif
			(yyval.val) = arg_add(arg_new(), (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 251:
#line 2402 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_SPLAT((yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = arg_add_star(arg_new(), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 252:
#line 2410 "ripper.y"
    {
#if 0
			NODE *n1;
			if ((n1 = splat_array((yyvsp[(1) - (3)].val))) != 0) {
			    (yyval.val) = list_append(n1, (yyvsp[(3) - (3)].val));
			}
			else {
			    (yyval.val) = arg_append((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
			}
#endif
			(yyval.val) = arg_add((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 253:
#line 2424 "ripper.y"
    {
#if 0
			NODE *n1;
			if (nd_type((yyvsp[(4) - (4)].val)) == NODE_ARRAY &&
			    (n1 = splat_array((yyvsp[(1) - (4)].val))) != 0) {
			    (yyval.val) = list_concat(n1, (yyvsp[(4) - (4)].val));
			}
			else {
			    (yyval.val) = arg_concat((yyvsp[(1) - (4)].val), (yyvsp[(4) - (4)].val));
			}
#endif
			(yyval.val) = arg_add_star((yyvsp[(1) - (4)].val), (yyvsp[(4) - (4)].val));

		    ;}
    break;

  case 254:
#line 2441 "ripper.y"
    {
#if 0
			NODE *n1;
			if ((n1 = splat_array((yyvsp[(1) - (3)].val))) != 0) {
			    (yyval.val) = list_append(n1, (yyvsp[(3) - (3)].val));
			}
			else {
			    (yyval.val) = arg_append((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
			}
#endif
			(yyval.val) = mrhs_add(args2mrhs((yyvsp[(1) - (3)].val)), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 255:
#line 2455 "ripper.y"
    {
#if 0
			NODE *n1;
			if (nd_type((yyvsp[(4) - (4)].val)) == NODE_ARRAY &&
			    (n1 = splat_array((yyvsp[(1) - (4)].val))) != 0) {
			    (yyval.val) = list_concat(n1, (yyvsp[(4) - (4)].val));
			}
			else {
			    (yyval.val) = arg_concat((yyvsp[(1) - (4)].val), (yyvsp[(4) - (4)].val));
			}
#endif
			(yyval.val) = mrhs_add_star(args2mrhs((yyvsp[(1) - (4)].val)), (yyvsp[(4) - (4)].val));

		    ;}
    break;

  case 256:
#line 2470 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_SPLAT((yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = mrhs_add_star(mrhs_new(), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 265:
#line 2488 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_FCALL((yyvsp[(1) - (1)].val), 0);
#endif
			(yyval.val) = method_arg(dispatch1(fcall, (yyvsp[(1) - (1)].val)), arg_new());

		    ;}
    break;

  case 266:
#line 2496 "ripper.y"
    {
#if 0
			(yyval.num) = ruby_sourceline;
#endif

		    ;}
    break;

  case 267:
#line 2504 "ripper.y"
    {
#if 0
			if ((yyvsp[(3) - (4)].val) == NULL) {
			    (yyval.val) = NEW_NIL();
			}
			else {
			    if (nd_type((yyvsp[(3) - (4)].val)) == NODE_RESCUE ||
				nd_type((yyvsp[(3) - (4)].val)) == NODE_ENSURE)
				nd_set_line((yyvsp[(3) - (4)].val), (yyvsp[(2) - (4)].num));
			    (yyval.val) = NEW_BEGIN((yyvsp[(3) - (4)].val));
			}
			nd_set_line((yyval.val), (yyvsp[(2) - (4)].num));
#endif
			(yyval.val) = dispatch1(begin, (yyvsp[(3) - (4)].val));

		    ;}
    break;

  case 268:
#line 2520 "ripper.y"
    {lex_state = EXPR_ENDARG;;}
    break;

  case 269:
#line 2521 "ripper.y"
    {
			rb_warning0("(...) interpreted as grouped expression");
#if 0
			(yyval.val) = (yyvsp[(2) - (4)].val);
#endif
			(yyval.val) = dispatch1(paren, (yyvsp[(2) - (4)].val));

		    ;}
    break;

  case 270:
#line 2530 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (3)].val);
#endif
			(yyval.val) = dispatch1(paren, (yyvsp[(2) - (3)].val));

		    ;}
    break;

  case 271:
#line 2538 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_COLON2((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch2(const_path_ref, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 272:
#line 2546 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_COLON3((yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = dispatch1(top_const_ref, (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 273:
#line 2554 "ripper.y"
    {
#if 0
			if ((yyvsp[(2) - (3)].val) == 0) {
			    (yyval.val) = NEW_ZARRAY(); /* zero length array*/
			}
			else {
			    (yyval.val) = (yyvsp[(2) - (3)].val);
			}
#endif
			(yyval.val) = dispatch1(array, escape_Qundef((yyvsp[(2) - (3)].val)));

		    ;}
    break;

  case 274:
#line 2567 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_HASH((yyvsp[(2) - (3)].val));
#endif
			(yyval.val) = dispatch1(hash, escape_Qundef((yyvsp[(2) - (3)].val)));

		    ;}
    break;

  case 275:
#line 2575 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_RETURN(0);
#endif
			(yyval.val) = dispatch0(return0);

		    ;}
    break;

  case 276:
#line 2583 "ripper.y"
    {
#if 0
			(yyval.val) = new_yield((yyvsp[(3) - (4)].val));
#endif
			(yyval.val) = dispatch1(yield, dispatch1(paren, (yyvsp[(3) - (4)].val)));

		    ;}
    break;

  case 277:
#line 2591 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_YIELD(0, Qfalse);
#endif
			(yyval.val) = dispatch1(yield, dispatch1(paren, arg_new()));

		    ;}
    break;

  case 278:
#line 2599 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_YIELD(0, Qfalse);
#endif
			(yyval.val) = dispatch0(yield0);

		    ;}
    break;

  case 279:
#line 2606 "ripper.y"
    {in_defined = 1;;}
    break;

  case 280:
#line 2607 "ripper.y"
    {
#if 0
			in_defined = 0;
			(yyval.val) = NEW_DEFINED((yyvsp[(5) - (6)].val));
#endif
			in_defined = 0;
			(yyval.val) = dispatch1(defined, (yyvsp[(5) - (6)].val));

		    ;}
    break;

  case 281:
#line 2617 "ripper.y"
    {
#if 0
			(yyval.val) = call_uni_op(cond((yyvsp[(3) - (4)].val)), '!');
#endif
			(yyval.val) = dispatch2(unary, ripper_intern("not"), (yyvsp[(3) - (4)].val));

		    ;}
    break;

  case 282:
#line 2625 "ripper.y"
    {
#if 0
			(yyval.val) = call_uni_op(cond(NEW_NIL()), '!');
#endif
			(yyval.val) = dispatch2(unary, ripper_intern("not"), Qnil);

		    ;}
    break;

  case 283:
#line 2633 "ripper.y"
    {
#if 0
			(yyvsp[(2) - (2)].val)->nd_iter = NEW_FCALL((yyvsp[(1) - (2)].val), 0);
			(yyval.val) = (yyvsp[(2) - (2)].val);
			fixpos((yyvsp[(2) - (2)].val)->nd_iter, (yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = method_arg(dispatch1(fcall, (yyvsp[(1) - (2)].val)), arg_new());
			(yyval.val) = method_add_block((yyval.val), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 285:
#line 2645 "ripper.y"
    {
#if 0
			block_dup_check((yyvsp[(1) - (2)].val)->nd_args, (yyvsp[(2) - (2)].val));
			(yyvsp[(2) - (2)].val)->nd_iter = (yyvsp[(1) - (2)].val);
			(yyval.val) = (yyvsp[(2) - (2)].val);
			fixpos((yyval.val), (yyvsp[(1) - (2)].val));
#endif
			(yyval.val) = method_add_block((yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 286:
#line 2656 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 287:
#line 2663 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_IF(cond((yyvsp[(2) - (6)].val)), (yyvsp[(4) - (6)].val), (yyvsp[(5) - (6)].val));
			fixpos((yyval.val), (yyvsp[(2) - (6)].val));
#endif
			(yyval.val) = dispatch3(if, (yyvsp[(2) - (6)].val), (yyvsp[(4) - (6)].val), escape_Qundef((yyvsp[(5) - (6)].val)));

		    ;}
    break;

  case 288:
#line 2675 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_UNLESS(cond((yyvsp[(2) - (6)].val)), (yyvsp[(4) - (6)].val), (yyvsp[(5) - (6)].val));
			fixpos((yyval.val), (yyvsp[(2) - (6)].val));
#endif
			(yyval.val) = dispatch3(unless, (yyvsp[(2) - (6)].val), (yyvsp[(4) - (6)].val), escape_Qundef((yyvsp[(5) - (6)].val)));

		    ;}
    break;

  case 289:
#line 2683 "ripper.y"
    {COND_PUSH(1);;}
    break;

  case 290:
#line 2683 "ripper.y"
    {COND_POP();;}
    break;

  case 291:
#line 2686 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_WHILE(cond((yyvsp[(3) - (7)].val)), (yyvsp[(6) - (7)].val), 1);
			fixpos((yyval.val), (yyvsp[(3) - (7)].val));
#endif
			(yyval.val) = dispatch2(while, (yyvsp[(3) - (7)].val), (yyvsp[(6) - (7)].val));

		    ;}
    break;

  case 292:
#line 2694 "ripper.y"
    {COND_PUSH(1);;}
    break;

  case 293:
#line 2694 "ripper.y"
    {COND_POP();;}
    break;

  case 294:
#line 2697 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_UNTIL(cond((yyvsp[(3) - (7)].val)), (yyvsp[(6) - (7)].val), 1);
			fixpos((yyval.val), (yyvsp[(3) - (7)].val));
#endif
			(yyval.val) = dispatch2(until, (yyvsp[(3) - (7)].val), (yyvsp[(6) - (7)].val));

		    ;}
    break;

  case 295:
#line 2708 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CASE((yyvsp[(2) - (5)].val), (yyvsp[(4) - (5)].val));
			fixpos((yyval.val), (yyvsp[(2) - (5)].val));
#endif
			(yyval.val) = dispatch2(case, (yyvsp[(2) - (5)].val), (yyvsp[(4) - (5)].val));

		    ;}
    break;

  case 296:
#line 2717 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CASE(0, (yyvsp[(3) - (4)].val));
#endif
			(yyval.val) = dispatch2(case, Qnil, (yyvsp[(3) - (4)].val));

		    ;}
    break;

  case 297:
#line 2725 "ripper.y"
    {COND_PUSH(1);;}
    break;

  case 298:
#line 2727 "ripper.y"
    {COND_POP();;}
    break;

  case 299:
#line 2730 "ripper.y"
    {
#if 0
			/*
			 *  for a, b, c in e
			 *  #=>
			 *  e.each{|*x| a, b, c = x
			 *
			 *  for a in e
			 *  #=>
			 *  e.each{|x| a, = x}
			 */
			ID id = internal_id();
			ID *tbl = ALLOC_N(ID, 2);
			NODE *m = NEW_ARGS_AUX(0, 0);
			NODE *args, *scope;

			if (nd_type((yyvsp[(2) - (9)].val)) == NODE_MASGN) {
			    /* if args.length == 1 && args[0].kind_of?(Array)
			     *   args = args[0]
			     * end
			     */
			    NODE *one = NEW_LIST(NEW_LIT(INT2FIX(1)));
			    NODE *zero = NEW_LIST(NEW_LIT(INT2FIX(0)));
			    m->nd_next = block_append(
				NEW_IF(
				    NEW_NODE(NODE_AND,
					     NEW_CALL(NEW_CALL(NEW_DVAR(id), rb_intern("length"), 0),
						      rb_intern("=="), one),
					     NEW_CALL(NEW_CALL(NEW_DVAR(id), rb_intern("[]"), zero),
						      rb_intern("kind_of?"), NEW_LIST(NEW_LIT(rb_cArray))),
					     0),
					NEW_DASGN_CURR(id,
						       NEW_CALL(NEW_DVAR(id), rb_intern("[]"), zero)),
					0),
				node_assign((yyvsp[(2) - (9)].val), NEW_DVAR(id)));
			}
			else {
			    m->nd_next = node_assign(NEW_MASGN(NEW_LIST((yyvsp[(2) - (9)].val)), 0), NEW_DVAR(id));
			}

			args = new_args(m, 0, id, 0, 0);
			scope = NEW_NODE(NODE_SCOPE, tbl, (yyvsp[(8) - (9)].val), args);
			tbl[0] = 1; tbl[1] = id;
			(yyval.val) = NEW_FOR(0, (yyvsp[(5) - (9)].val), scope);
			fixpos((yyval.val), (yyvsp[(2) - (9)].val));
#endif
			(yyval.val) = dispatch3(for, (yyvsp[(2) - (9)].val), (yyvsp[(5) - (9)].val), (yyvsp[(8) - (9)].val));

		    ;}
    break;

  case 300:
#line 2780 "ripper.y"
    {
			if (in_def || in_single)
			    yyerror("class definition in method body");
#if 0
			local_push(0);
			(yyval.num) = ruby_sourceline;
#endif

		    ;}
    break;

  case 301:
#line 2791 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CLASS((yyvsp[(2) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(3) - (6)].val));
			nd_set_line((yyval.val), (yyvsp[(4) - (6)].num));
			local_pop();
#endif
			(yyval.val) = dispatch3(class, (yyvsp[(2) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val));

		    ;}
    break;

  case 302:
#line 2801 "ripper.y"
    {
#if 0
			(yyval.num) = in_def;
			in_def = 0;
#endif
			in_def = 0;

		    ;}
    break;

  case 303:
#line 2810 "ripper.y"
    {
#if 0
			(yyval.num) = in_single;
			in_single = 0;
			local_push(0);
#endif
			(yyval.val) = in_single;
			in_single = 0;

		    ;}
    break;

  case 304:
#line 2822 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_SCLASS((yyvsp[(3) - (8)].val), (yyvsp[(7) - (8)].val));
			fixpos((yyval.val), (yyvsp[(3) - (8)].val));
			local_pop();
			in_def = (yyvsp[(4) - (8)].num);
			in_single = (yyvsp[(6) - (8)].num);
#endif
			(yyval.val) = dispatch2(sclass, (yyvsp[(3) - (8)].val), (yyvsp[(7) - (8)].val));
			in_def = (yyvsp[(4) - (8)].val);
			in_single = (yyvsp[(6) - (8)].val);

		    ;}
    break;

  case 305:
#line 2836 "ripper.y"
    {
			if (in_def || in_single)
			    yyerror("module definition in method body");
#if 0
			local_push(0);
			(yyval.num) = ruby_sourceline;
#endif

		    ;}
    break;

  case 306:
#line 2847 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MODULE((yyvsp[(2) - (5)].val), (yyvsp[(4) - (5)].val));
			nd_set_line((yyval.val), (yyvsp[(3) - (5)].num));
			local_pop();
#endif
			(yyval.val) = dispatch2(module, (yyvsp[(2) - (5)].val), (yyvsp[(4) - (5)].val));

		    ;}
    break;

  case 307:
#line 2857 "ripper.y"
    {
			(yyval.id) = cur_mid;
			cur_mid = (yyvsp[(2) - (2)].val);
			in_def++;
#if 0
			local_push(0);
#endif

		    ;}
    break;

  case 308:
#line 2869 "ripper.y"
    {
#if 0
			NODE *body = remove_begin((yyvsp[(5) - (6)].val));
			reduce_nodes(&body);
			(yyval.val) = NEW_DEFN((yyvsp[(2) - (6)].val), (yyvsp[(4) - (6)].val), body, NOEX_PRIVATE);
			fixpos((yyval.val), (yyvsp[(4) - (6)].val));
			local_pop();
			in_def--;
			cur_mid = (yyvsp[(3) - (6)].id);
#endif
			(yyval.val) = dispatch3(def, (yyvsp[(2) - (6)].val), (yyvsp[(4) - (6)].val), (yyvsp[(5) - (6)].val));
			in_def--;
			cur_mid = (yyvsp[(3) - (6)].id);

		    ;}
    break;

  case 309:
#line 2884 "ripper.y"
    {lex_state = EXPR_FNAME;;}
    break;

  case 310:
#line 2885 "ripper.y"
    {
			in_single++;
			lex_state = EXPR_END; /* force for args */
#if 0
			local_push(0);
#endif

		    ;}
    break;

  case 311:
#line 2896 "ripper.y"
    {
#if 0
			NODE *body = remove_begin((yyvsp[(8) - (9)].val));
			reduce_nodes(&body);
			(yyval.val) = NEW_DEFS((yyvsp[(2) - (9)].val), (yyvsp[(5) - (9)].val), (yyvsp[(7) - (9)].val), body);
			fixpos((yyval.val), (yyvsp[(2) - (9)].val));
			local_pop();
			in_single--;
#endif
			(yyval.val) = dispatch5(defs, (yyvsp[(2) - (9)].val), (yyvsp[(3) - (9)].val), (yyvsp[(5) - (9)].val), (yyvsp[(7) - (9)].val), (yyvsp[(8) - (9)].val));
			in_single--;

		    ;}
    break;

  case 312:
#line 2910 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_BREAK(0);
#endif
			(yyval.val) = dispatch1(break, arg_new());

		    ;}
    break;

  case 313:
#line 2918 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_NEXT(0);
#endif
			(yyval.val) = dispatch1(next, arg_new());

		    ;}
    break;

  case 314:
#line 2926 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_REDO();
#endif
			(yyval.val) = dispatch0(redo);

		    ;}
    break;

  case 315:
#line 2934 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_RETRY();
#endif
			(yyval.val) = dispatch0(retry);

		    ;}
    break;

  case 316:
#line 2944 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(1) - (1)].val));
			(yyval.val) = (yyvsp[(1) - (1)].val);
		        if (!(yyval.val)) (yyval.val) = NEW_NIL();
#endif
			(yyval.val) = (yyvsp[(1) - (1)].val);

		    ;}
    break;

  case 317:
#line 2958 "ripper.y"
    { (yyval.val) = Qnil; ;}
    break;

  case 319:
#line 2964 "ripper.y"
    { (yyval.val) = (yyvsp[(2) - (2)].val); ;}
    break;

  case 320:
#line 2971 "ripper.y"
    { (yyval.val) = Qnil; ;}
    break;

  case 323:
#line 2980 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_IF(cond((yyvsp[(2) - (5)].val)), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val));
			fixpos((yyval.val), (yyvsp[(2) - (5)].val));
#endif
			(yyval.val) = dispatch3(elsif, (yyvsp[(2) - (5)].val), (yyvsp[(4) - (5)].val), escape_Qundef((yyvsp[(5) - (5)].val)));

		    ;}
    break;

  case 325:
#line 2992 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (2)].val);
#endif
			(yyval.val) = dispatch1(else, (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 328:
#line 3006 "ripper.y"
    {
#if 0
			(yyval.val) = assignable((yyvsp[(1) - (1)].val), 0);
#endif
			(yyval.val) = dispatch1(mlhs_paren, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 329:
#line 3014 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (3)].val);
#endif
			(yyval.val) = dispatch1(mlhs_paren, (yyvsp[(2) - (3)].val));

		    ;}
    break;

  case 330:
#line 3024 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST((yyvsp[(1) - (1)].val));
#endif
			(yyval.val) = mlhs_add(mlhs_new(), (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 331:
#line 3032 "ripper.y"
    {
#if 0
			(yyval.val) = list_append((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = mlhs_add((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 332:
#line 3042 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (1)].val), 0);
#endif
			(yyval.val) = (yyvsp[(1) - (1)].val);

		    ;}
    break;

  case 333:
#line 3050 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (4)].val), assignable((yyvsp[(4) - (4)].val), 0));
#endif
			(yyval.val) = mlhs_add_star((yyvsp[(1) - (4)].val), (yyvsp[(4) - (4)].val));

		    ;}
    break;

  case 334:
#line 3058 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (6)].val), NEW_POSTARG(assignable((yyvsp[(4) - (6)].val), 0), (yyvsp[(6) - (6)].val)));
#endif
			(yyval.val) = mlhs_add_star((yyvsp[(1) - (6)].val), (yyvsp[(4) - (6)].val));

		    ;}
    break;

  case 335:
#line 3066 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (3)].val), -1);
#endif
			(yyval.val) = mlhs_add_star((yyvsp[(1) - (3)].val), Qnil);

		    ;}
    break;

  case 336:
#line 3074 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (5)].val), NEW_POSTARG(-1, (yyvsp[(5) - (5)].val)));
#endif
			(yyval.val) = mlhs_add_star((yyvsp[(1) - (5)].val), (yyvsp[(5) - (5)].val));

		    ;}
    break;

  case 337:
#line 3082 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, assignable((yyvsp[(2) - (2)].val), 0));
#endif
			(yyval.val) = mlhs_add_star(mlhs_new(), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 338:
#line 3090 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, NEW_POSTARG(assignable((yyvsp[(2) - (4)].val), 0), (yyvsp[(4) - (4)].val)));
#endif
		      #if 0
		      TODO: Check me
		      #endif
			(yyval.val) = mlhs_add_star((yyvsp[(2) - (4)].val), (yyvsp[(4) - (4)].val));

		    ;}
    break;

  case 339:
#line 3101 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, -1);
#endif
			(yyval.val) = mlhs_add_star(mlhs_new(), Qnil);

		    ;}
    break;

  case 340:
#line 3109 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, NEW_POSTARG(-1, (yyvsp[(3) - (3)].val)));
#endif
			(yyval.val) = mlhs_add_star(mlhs_new(), Qnil);

		    ;}
    break;

  case 341:
#line 3119 "ripper.y"
    {
#if 0
			(yyval.val) = new_args((yyvsp[(1) - (4)].val), 0, (yyvsp[(3) - (4)].val), 0, (yyvsp[(4) - (4)].val));
#endif
			(yyval.val) = params_new((yyvsp[(1) - (4)].val), Qnil, (yyvsp[(3) - (4)].val), Qnil, escape_Qundef((yyvsp[(4) - (4)].val)));

		    ;}
    break;

  case 342:
#line 3127 "ripper.y"
    {
#if 0
			(yyval.val) = new_args((yyvsp[(1) - (2)].val), 0, 1, 0, 0);
#endif
			(yyval.val) = params_new((yyvsp[(1) - (2)].val), Qnil, Qnil, Qnil, Qnil);
                        dispatch1(excessed_comma, (yyval.val));

		    ;}
    break;

  case 343:
#line 3136 "ripper.y"
    {
#if 0
			(yyval.val) = new_args((yyvsp[(1) - (6)].val), 0, (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val));
#endif
			(yyval.val) = params_new((yyvsp[(1) - (6)].val), Qnil, (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), escape_Qundef((yyvsp[(6) - (6)].val)));

		    ;}
    break;

  case 344:
#line 3144 "ripper.y"
    {
#if 0
			(yyval.val) = new_args((yyvsp[(1) - (2)].val), 0, 0, 0, (yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = params_new((yyvsp[(1) - (2)].val), Qnil,Qnil, Qnil, escape_Qundef((yyvsp[(2) - (2)].val)));

		    ;}
    break;

  case 345:
#line 3152 "ripper.y"
    {
#if 0
			(yyval.val) = new_args(0, 0, (yyvsp[(1) - (2)].val), 0, (yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = params_new(Qnil, Qnil, (yyvsp[(1) - (2)].val), Qnil, escape_Qundef((yyvsp[(2) - (2)].val)));

		    ;}
    break;

  case 346:
#line 3160 "ripper.y"
    {
#if 0
			(yyval.val) = new_args(0, 0, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val));
#endif
			(yyval.val) = params_new(Qnil, Qnil, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), escape_Qundef((yyvsp[(4) - (4)].val)));

		    ;}
    break;

  case 347:
#line 3168 "ripper.y"
    {
#if 0
			(yyval.val) = new_args(0, 0, 0, 0, (yyvsp[(1) - (1)].val));
#endif
			(yyval.val) = params_new(Qnil, Qnil, Qnil, Qnil, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 349:
#line 3179 "ripper.y"
    {
			command_start = Qtrue;
		    ;}
    break;

  case 350:
#line 3185 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			(yyval.val) = blockvar_new(params_new(Qnil,Qnil,Qnil,Qnil,Qnil),
                                          escape_Qundef((yyvsp[(2) - (3)].val)));

		    ;}
    break;

  case 351:
#line 3194 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			(yyval.val) = blockvar_new(params_new(Qnil,Qnil,Qnil,Qnil,Qnil),
                                          Qnil);

		    ;}
    break;

  case 352:
#line 3203 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (4)].val);
#endif
			(yyval.val) = blockvar_new(escape_Qundef((yyvsp[(2) - (4)].val)), escape_Qundef((yyvsp[(3) - (4)].val)));

		    ;}
    break;

  case 354:
#line 3215 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			(yyval.val) = (yyvsp[(2) - (2)].val);

		    ;}
    break;

  case 355:
#line 3227 "ripper.y"
    {
			(yyval.val) = rb_ary_new2((yyvsp[(1) - (1)].val));
		    ;}
    break;

  case 356:
#line 3234 "ripper.y"
    {
			rb_ary_push((yyval.val), (yyvsp[(3) - (3)].val));
		    ;}
    break;

  case 357:
#line 3241 "ripper.y"
    {
#if 0
			new_bv((yyvsp[(1) - (1)].val));
#endif
			(yyval.val) = (yyvsp[(1) - (1)].val);

		    ;}
    break;

  case 358:
#line 3249 "ripper.y"
    {
			(yyval.val) = 0;
		    ;}
    break;

  case 359:
#line 3254 "ripper.y"
    {
#if 0
			dyna_push();
			(yyval.num) = lpar_beg;
			lpar_beg = ++paren_nest;
#endif

		    ;}
    break;

  case 360:
#line 3264 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (3)].val);
			(yyval.val)->nd_body = NEW_SCOPE((yyvsp[(2) - (3)].val)->nd_head, (yyvsp[(3) - (3)].val));
			dyna_pop();
			lpar_beg = (yyvsp[(1) - (3)].num);
#endif
			(yyval.val) = dispatch2(lambda, (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 361:
#line 3277 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LAMBDA((yyvsp[(2) - (4)].val));
#endif
			(yyval.val) = dispatch1(paren, (yyvsp[(2) - (4)].val));

		    ;}
    break;

  case 362:
#line 3285 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LAMBDA((yyvsp[(1) - (2)].val));
#endif
			(yyval.val) = (yyvsp[(1) - (2)].val);

		    ;}
    break;

  case 363:
#line 3295 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (3)].val);
		    ;}
    break;

  case 364:
#line 3299 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (3)].val);
		    ;}
    break;

  case 365:
#line 3305 "ripper.y"
    {
#if 0
			dyna_push();
			(yyval.num) = ruby_sourceline;
#endif
		    ;}
    break;

  case 366:
#line 3314 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_ITER((yyvsp[(3) - (5)].val),(yyvsp[(4) - (5)].val));
			nd_set_line((yyval.val), (yyvsp[(2) - (5)].num));
			dyna_pop();
#endif
			(yyval.val) = dispatch2(do_block, escape_Qundef((yyvsp[(3) - (5)].val)), (yyvsp[(4) - (5)].val));

		    ;}
    break;

  case 367:
#line 3326 "ripper.y"
    {
#if 0
			block_dup_check((yyvsp[(1) - (2)].val)->nd_args, (yyvsp[(2) - (2)].val));
			(yyvsp[(2) - (2)].val)->nd_iter = (yyvsp[(1) - (2)].val);
			(yyval.val) = (yyvsp[(2) - (2)].val);
			fixpos((yyval.val), (yyvsp[(1) - (2)].val));
#endif
			(yyval.val) = method_add_block((yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 368:
#line 3337 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CALL((yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val));
#endif
			(yyval.val) = dispatch3(call, (yyvsp[(1) - (4)].val), ripper_id2sym('.'), (yyvsp[(3) - (4)].val));
			(yyval.val) = method_optarg((yyval.val), (yyvsp[(4) - (4)].val));

		    ;}
    break;

  case 369:
#line 3346 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CALL((yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val));
#endif
			(yyval.val) = dispatch3(call, (yyvsp[(1) - (4)].val), ripper_intern("::"), (yyvsp[(3) - (4)].val));
			(yyval.val) = method_optarg((yyval.val), (yyvsp[(4) - (4)].val));

		    ;}
    break;

  case 370:
#line 3357 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_FCALL((yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val));
			fixpos((yyval.val), (yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = method_arg(dispatch1(fcall, (yyvsp[(1) - (2)].val)), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 371:
#line 3366 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CALL((yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val));
			fixpos((yyval.val), (yyvsp[(1) - (4)].val));
#endif
			(yyval.val) = dispatch3(call, (yyvsp[(1) - (4)].val), ripper_id2sym('.'), (yyvsp[(3) - (4)].val));
			(yyval.val) = method_optarg((yyval.val), (yyvsp[(4) - (4)].val));

		    ;}
    break;

  case 372:
#line 3376 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CALL((yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val));
			fixpos((yyval.val), (yyvsp[(1) - (4)].val));
#endif
			(yyval.val) = dispatch3(call, (yyvsp[(1) - (4)].val), ripper_id2sym('.'), (yyvsp[(3) - (4)].val));
			(yyval.val) = method_optarg((yyval.val), (yyvsp[(4) - (4)].val));

		    ;}
    break;

  case 373:
#line 3386 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CALL((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), 0);
#endif
			(yyval.val) = dispatch3(call, (yyvsp[(1) - (3)].val), ripper_intern("::"), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 374:
#line 3394 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CALL((yyvsp[(1) - (3)].val), rb_intern("call"), (yyvsp[(3) - (3)].val));
			fixpos((yyval.val), (yyvsp[(1) - (3)].val));
#endif
			(yyval.val) = dispatch3(call, dispatch1(paren, (yyvsp[(1) - (3)].val)),
				       ripper_id2sym('.'), rb_intern("call"));
			(yyval.val) = method_optarg((yyval.val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 375:
#line 3405 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CALL((yyvsp[(1) - (3)].val), rb_intern("call"), (yyvsp[(3) - (3)].val));
			fixpos((yyval.val), (yyvsp[(1) - (3)].val));
#endif
			(yyval.val) = dispatch3(call, dispatch1(paren, (yyvsp[(1) - (3)].val)),
				       ripper_id2sym('.'), rb_intern("call"));
			(yyval.val) = method_optarg((yyval.val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 376:
#line 3416 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_SUPER((yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = dispatch1(super, (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 377:
#line 3424 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_ZSUPER();
#endif
			(yyval.val) = dispatch0(zsuper);

		    ;}
    break;

  case 378:
#line 3432 "ripper.y"
    {
#if 0
			if ((yyvsp[(1) - (4)].val) && nd_type((yyvsp[(1) - (4)].val)) == NODE_SELF)
			    (yyval.val) = NEW_FCALL(tAREF, (yyvsp[(3) - (4)].val));
			else
			    (yyval.val) = NEW_CALL((yyvsp[(1) - (4)].val), tAREF, (yyvsp[(3) - (4)].val));
			fixpos((yyval.val), (yyvsp[(1) - (4)].val));
#endif
			(yyval.val) = dispatch2(aref, (yyvsp[(1) - (4)].val), escape_Qundef((yyvsp[(3) - (4)].val)));

		    ;}
    break;

  case 379:
#line 3446 "ripper.y"
    {
#if 0
			dyna_push();
			(yyval.num) = ruby_sourceline;
#endif

		    ;}
    break;

  case 380:
#line 3455 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_ITER((yyvsp[(3) - (5)].val),(yyvsp[(4) - (5)].val));
			nd_set_line((yyval.val), (yyvsp[(2) - (5)].num));
			dyna_pop();
#endif
			(yyval.val) = dispatch2(brace_block, escape_Qundef((yyvsp[(3) - (5)].val)), (yyvsp[(4) - (5)].val));

		    ;}
    break;

  case 381:
#line 3465 "ripper.y"
    {
#if 0
			dyna_push();
			(yyval.num) = ruby_sourceline;
#endif

		    ;}
    break;

  case 382:
#line 3474 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_ITER((yyvsp[(3) - (5)].val),(yyvsp[(4) - (5)].val));
			nd_set_line((yyval.val), (yyvsp[(2) - (5)].num));
			dyna_pop();
#endif
			(yyval.val) = dispatch2(do_block, escape_Qundef((yyvsp[(3) - (5)].val)), (yyvsp[(4) - (5)].val));

		    ;}
    break;

  case 383:
#line 3488 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_WHEN((yyvsp[(2) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val));
#endif
			(yyval.val) = dispatch3(when, (yyvsp[(2) - (5)].val), (yyvsp[(4) - (5)].val), escape_Qundef((yyvsp[(5) - (5)].val)));

		    ;}
    break;

  case 386:
#line 3504 "ripper.y"
    {
#if 0
			if ((yyvsp[(3) - (6)].val)) {
			    (yyvsp[(3) - (6)].val) = node_assign((yyvsp[(3) - (6)].val), NEW_ERRINFO());
			    (yyvsp[(5) - (6)].val) = block_append((yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val));
			}
			(yyval.val) = NEW_RESBODY((yyvsp[(2) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val));
			fixpos((yyval.val), (yyvsp[(2) - (6)].val)?(yyvsp[(2) - (6)].val):(yyvsp[(5) - (6)].val));
#endif
			(yyval.val) = dispatch4(rescue,
				       escape_Qundef((yyvsp[(2) - (6)].val)),
				       escape_Qundef((yyvsp[(3) - (6)].val)),
				       escape_Qundef((yyvsp[(5) - (6)].val)),
				       escape_Qundef((yyvsp[(6) - (6)].val)));

		    ;}
    break;

  case 388:
#line 3524 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST((yyvsp[(1) - (1)].val));
#endif
			(yyval.val) = rb_ary_new3(1, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 389:
#line 3532 "ripper.y"
    {
#if 0
			if (!((yyval.val) = splat_array((yyvsp[(1) - (1)].val)))) (yyval.val) = (yyvsp[(1) - (1)].val);
#endif
			(yyval.val) = (yyvsp[(1) - (1)].val);

		    ;}
    break;

  case 391:
#line 3543 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 393:
#line 3550 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (2)].val);
#endif
			(yyval.val) = dispatch1(ensure, (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 396:
#line 3562 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIT(ID2SYM((yyvsp[(1) - (1)].val)));
#endif
			(yyval.val) = dispatch1(symbol_literal, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 398:
#line 3573 "ripper.y"
    {
#if 0
			NODE *node = (yyvsp[(1) - (1)].val);
			if (!node) {
			    node = NEW_STR(STR_NEW0());
			}
			else {
			    node = evstr2dstr(node);
			}
			(yyval.val) = node;
#endif
			(yyval.val) = (yyvsp[(1) - (1)].val);

		    ;}
    break;

  case 401:
#line 3592 "ripper.y"
    {
#if 0
			(yyval.val) = literal_concat((yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = dispatch2(string_concat, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 402:
#line 3602 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (3)].val);
#endif
			(yyval.val) = dispatch1(string_literal, (yyvsp[(2) - (3)].val));

		    ;}
    break;

  case 403:
#line 3612 "ripper.y"
    {
#if 0
			NODE *node = (yyvsp[(2) - (3)].val);
			if (!node) {
			    node = NEW_XSTR(STR_NEW0());
			}
			else {
			    switch (nd_type(node)) {
			      case NODE_STR:
				nd_set_type(node, NODE_XSTR);
				break;
			      case NODE_DSTR:
				nd_set_type(node, NODE_DXSTR);
				break;
			      default:
				node = NEW_NODE(NODE_DXSTR, STR_NEW0(), 1, NEW_LIST(node));
				break;
			    }
			}
			(yyval.val) = node;
#endif
			(yyval.val) = dispatch1(xstring_literal, (yyvsp[(2) - (3)].val));

		    ;}
    break;

  case 404:
#line 3639 "ripper.y"
    {
#if 0
			int options = (yyvsp[(3) - (3)].val);
			NODE *node = (yyvsp[(2) - (3)].val);
                        NODE *list;
			if (!node) {
			    node = NEW_LIT(reg_compile(STR_NEW0(), options));
			}
			else switch (nd_type(node)) {
			  case NODE_STR:
			    {
				VALUE src = node->nd_lit;
				nd_set_type(node, NODE_LIT);
				node->nd_lit = reg_compile(src, options);
			    }
			    break;
			  default:
			    node = NEW_NODE(NODE_DSTR, STR_NEW0(), 1, NEW_LIST(node));
			  case NODE_DSTR:
			    if (options & RE_OPTION_ONCE) {
				nd_set_type(node, NODE_DREGX_ONCE);
			    }
			    else {
				nd_set_type(node, NODE_DREGX);
			    }
			    node->nd_cflag = options & RE_OPTION_MASK;
                            reg_fragment_check(node->nd_lit, options);
                            for (list = node->nd_next; list; list = list->nd_next) {
                                if (nd_type(list->nd_head) == NODE_STR) {
                                    reg_fragment_check(list->nd_head->nd_lit, options);
                                }
                            }
			    break;
			}
			(yyval.val) = node;
#endif
			(yyval.val) = dispatch2(regexp_literal, (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 405:
#line 3681 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_ZARRAY();
#endif
			(yyval.val) = dispatch0(words_new);

		    ;}
    break;

  case 406:
#line 3689 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (3)].val);
		    ;}
    break;

  case 407:
#line 3695 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			(yyval.val) = dispatch0(words_new);

		    ;}
    break;

  case 408:
#line 3703 "ripper.y"
    {
#if 0
			(yyval.val) = list_append((yyvsp[(1) - (3)].val), evstr2dstr((yyvsp[(2) - (3)].val)));
#endif
			(yyval.val) = dispatch2(words_add, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val));

		    ;}
    break;

  case 409:
#line 3715 "ripper.y"
    {
			(yyval.val) = dispatch0(word_new);
			(yyval.val) = dispatch2(word_add, (yyval.val), (yyvsp[(1) - (1)].val));
		    ;}
    break;

  case 410:
#line 3721 "ripper.y"
    {
#if 0
			(yyval.val) = literal_concat((yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = dispatch2(word_add, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 411:
#line 3731 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_ZARRAY();
#endif
			(yyval.val) = dispatch0(qwords_new);

		    ;}
    break;

  case 412:
#line 3739 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (3)].val);
		    ;}
    break;

  case 413:
#line 3745 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			(yyval.val) = dispatch0(qwords_new);

		    ;}
    break;

  case 414:
#line 3753 "ripper.y"
    {
#if 0
			(yyval.val) = list_append((yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val));
#endif
			(yyval.val) = dispatch2(qwords_add, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val));

		    ;}
    break;

  case 415:
#line 3763 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			(yyval.val) = dispatch0(string_content);

		    ;}
    break;

  case 416:
#line 3771 "ripper.y"
    {
#if 0
			(yyval.val) = literal_concat((yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = dispatch2(string_add, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 417:
#line 3781 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			(yyval.val) = dispatch0(xstring_new);

		    ;}
    break;

  case 418:
#line 3789 "ripper.y"
    {
#if 0
			(yyval.val) = literal_concat((yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = dispatch2(xstring_add, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 420:
#line 3800 "ripper.y"
    {
			(yyval.node) = lex_strterm;
			lex_strterm = 0;
			lex_state = EXPR_BEG;
		    ;}
    break;

  case 421:
#line 3806 "ripper.y"
    {
#if 0
			lex_strterm = (yyvsp[(2) - (3)].node);
			(yyval.val) = NEW_EVSTR((yyvsp[(3) - (3)].val));
#endif
			lex_strterm = (yyvsp[(2) - (3)].node);
			(yyval.val) = dispatch1(string_dvar, (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 422:
#line 3816 "ripper.y"
    {
			(yyval.node) = lex_strterm;
			lex_strterm = 0;
			lex_state = EXPR_BEG;
			COND_PUSH(0);
			CMDARG_PUSH(0);
		    ;}
    break;

  case 423:
#line 3824 "ripper.y"
    {
			lex_strterm = (yyvsp[(2) - (4)].node);
			COND_LEXPOP();
			CMDARG_LEXPOP();
#if 0
			if ((yyvsp[(3) - (4)].val)) (yyvsp[(3) - (4)].val)->flags &= ~NODE_FL_NEWLINE;
			(yyval.val) = new_evstr((yyvsp[(3) - (4)].val));
#endif
			(yyval.val) = dispatch1(string_embexpr, (yyvsp[(3) - (4)].val));

		    ;}
    break;

  case 424:
#line 3838 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_GVAR((yyvsp[(1) - (1)].val));
#endif
			(yyval.val) = dispatch1(var_ref, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 425:
#line 3846 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_IVAR((yyvsp[(1) - (1)].val));
#endif
			(yyval.val) = dispatch1(var_ref, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 426:
#line 3854 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CVAR((yyvsp[(1) - (1)].val));
#endif
			(yyval.val) = dispatch1(var_ref, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 428:
#line 3865 "ripper.y"
    {
#if 0
			lex_state = EXPR_ENDARG;
			(yyval.val) = (yyvsp[(2) - (2)].val);
#endif
			lex_state = EXPR_ENDARG;
			(yyval.val) = dispatch1(symbol, (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 433:
#line 3883 "ripper.y"
    {
#if 0
			lex_state = EXPR_ENDARG;
			if (!((yyval.val) = (yyvsp[(2) - (3)].val))) {
			    (yyval.val) = NEW_LIT(ID2SYM(rb_intern("")));
			}
			else {
			    VALUE lit;

			    switch (nd_type((yyval.val))) {
			      case NODE_DSTR:
				nd_set_type((yyval.val), NODE_DSYM);
				break;
			      case NODE_STR:
				lit = (yyval.val)->nd_lit;
				(yyval.val)->nd_lit = ID2SYM(rb_intern_str(lit));
				nd_set_type((yyval.val), NODE_LIT);
				break;
			      default:
				(yyval.val) = NEW_NODE(NODE_DSYM, STR_NEW0(), 1, NEW_LIST((yyval.val)));
				break;
			    }
			}
#endif
			lex_state = EXPR_ENDARG;
			(yyval.val) = dispatch1(dyna_symbol, (yyvsp[(2) - (3)].val));

		    ;}
    break;

  case 436:
#line 3916 "ripper.y"
    {
#if 0
			(yyval.val) = negate_lit((yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = dispatch2(unary, ripper_intern("-@"), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 437:
#line 3924 "ripper.y"
    {
#if 0
			(yyval.val) = negate_lit((yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = dispatch2(unary, ripper_intern("-@"), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 443:
#line 3938 "ripper.y"
    {ifndef_ripper((yyval.val) = keyword_nil);;}
    break;

  case 444:
#line 3939 "ripper.y"
    {ifndef_ripper((yyval.val) = keyword_self);;}
    break;

  case 445:
#line 3940 "ripper.y"
    {ifndef_ripper((yyval.val) = keyword_true);;}
    break;

  case 446:
#line 3941 "ripper.y"
    {ifndef_ripper((yyval.val) = keyword_false);;}
    break;

  case 447:
#line 3942 "ripper.y"
    {ifndef_ripper((yyval.val) = keyword__FILE__);;}
    break;

  case 448:
#line 3943 "ripper.y"
    {ifndef_ripper((yyval.val) = keyword__LINE__);;}
    break;

  case 449:
#line 3944 "ripper.y"
    {ifndef_ripper((yyval.val) = keyword__ENCODING__);;}
    break;

  case 450:
#line 3948 "ripper.y"
    {
#if 0
			if (!((yyval.val) = gettable((yyvsp[(1) - (1)].val)))) (yyval.val) = NEW_BEGIN(0);
#endif
			(yyval.val) = dispatch1(var_ref, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 451:
#line 3958 "ripper.y"
    {
#if 0
			(yyval.val) = assignable((yyvsp[(1) - (1)].val), 0);
#endif
			(yyval.val) = dispatch1(var_field, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 454:
#line 3972 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			(yyval.val) = Qnil;

		    ;}
    break;

  case 455:
#line 3980 "ripper.y"
    {
			lex_state = EXPR_BEG;
		    ;}
    break;

  case 456:
#line 3984 "ripper.y"
    {
			(yyval.val) = (yyvsp[(3) - (4)].val);
		    ;}
    break;

  case 457:
#line 3988 "ripper.y"
    {
#if 0
			yyerrok;
			(yyval.val) = 0;
#endif
			yyerrok;
			(yyval.val) = Qnil;

		    ;}
    break;

  case 458:
#line 4000 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (3)].val);
			lex_state = EXPR_BEG;
			command_start = Qtrue;
#endif
			(yyval.val) = dispatch1(paren, (yyvsp[(2) - (3)].val));
			lex_state = EXPR_BEG;
			command_start = Qtrue;

		    ;}
    break;

  case 459:
#line 4012 "ripper.y"
    {
			(yyval.val) = (yyvsp[(1) - (2)].val);
		    ;}
    break;

  case 460:
#line 4018 "ripper.y"
    {
#if 0
			(yyval.val) = new_args((yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), 0, (yyvsp[(6) - (6)].val));
#endif
			(yyval.val) = params_new((yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), Qnil, escape_Qundef((yyvsp[(6) - (6)].val)));

		    ;}
    break;

  case 461:
#line 4026 "ripper.y"
    {
#if 0
			(yyval.val) = new_args((yyvsp[(1) - (8)].val), (yyvsp[(3) - (8)].val), (yyvsp[(5) - (8)].val), (yyvsp[(7) - (8)].val), (yyvsp[(8) - (8)].val));
#endif
			(yyval.val) = params_new((yyvsp[(1) - (8)].val), (yyvsp[(3) - (8)].val), (yyvsp[(5) - (8)].val), (yyvsp[(7) - (8)].val), escape_Qundef((yyvsp[(8) - (8)].val)));

		    ;}
    break;

  case 462:
#line 4034 "ripper.y"
    {
#if 0
			(yyval.val) = new_args((yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), 0, 0, (yyvsp[(4) - (4)].val));
#endif
			(yyval.val) = params_new((yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), Qnil, Qnil, escape_Qundef((yyvsp[(4) - (4)].val)));

		    ;}
    break;

  case 463:
#line 4042 "ripper.y"
    {
#if 0
			(yyval.val) = new_args((yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), 0, (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val));
#endif
			(yyval.val) = params_new((yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), Qnil, (yyvsp[(5) - (6)].val), escape_Qundef((yyvsp[(6) - (6)].val)));

		    ;}
    break;

  case 464:
#line 4050 "ripper.y"
    {
#if 0
			(yyval.val) = new_args((yyvsp[(1) - (4)].val), 0, (yyvsp[(3) - (4)].val), 0, (yyvsp[(4) - (4)].val));
#endif
			(yyval.val) = params_new((yyvsp[(1) - (4)].val), Qnil, (yyvsp[(3) - (4)].val), Qnil, escape_Qundef((yyvsp[(4) - (4)].val)));

		    ;}
    break;

  case 465:
#line 4058 "ripper.y"
    {
#if 0
			(yyval.val) = new_args((yyvsp[(1) - (6)].val), 0, (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val));
#endif
			(yyval.val) = params_new((yyvsp[(1) - (6)].val), Qnil, (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), escape_Qundef((yyvsp[(6) - (6)].val)));

		    ;}
    break;

  case 466:
#line 4066 "ripper.y"
    {
#if 0
			(yyval.val) = new_args((yyvsp[(1) - (2)].val), 0, 0, 0, (yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = params_new((yyvsp[(1) - (2)].val), Qnil, Qnil, Qnil,escape_Qundef((yyvsp[(2) - (2)].val)));

		    ;}
    break;

  case 467:
#line 4074 "ripper.y"
    {
#if 0
			(yyval.val) = new_args(0, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), 0, (yyvsp[(4) - (4)].val));
#endif
			(yyval.val) = params_new(Qnil, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), Qnil, escape_Qundef((yyvsp[(4) - (4)].val)));

		    ;}
    break;

  case 468:
#line 4082 "ripper.y"
    {
#if 0
			(yyval.val) = new_args(0, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val));
#endif
			(yyval.val) = params_new(Qnil, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), escape_Qundef((yyvsp[(6) - (6)].val)));

		    ;}
    break;

  case 469:
#line 4090 "ripper.y"
    {
#if 0
			(yyval.val) = new_args(0, (yyvsp[(1) - (2)].val), 0, 0, (yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = params_new(Qnil, (yyvsp[(1) - (2)].val), Qnil, Qnil,escape_Qundef((yyvsp[(2) - (2)].val)));

		    ;}
    break;

  case 470:
#line 4098 "ripper.y"
    {
#if 0
			(yyval.val) = new_args(0, (yyvsp[(1) - (4)].val), 0, (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val));
#endif
			(yyval.val) = params_new(Qnil, (yyvsp[(1) - (4)].val), Qnil, (yyvsp[(3) - (4)].val), escape_Qundef((yyvsp[(4) - (4)].val)));

		    ;}
    break;

  case 471:
#line 4106 "ripper.y"
    {
#if 0
			(yyval.val) = new_args(0, 0, (yyvsp[(1) - (2)].val), 0, (yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = params_new(Qnil, Qnil, (yyvsp[(1) - (2)].val), Qnil,escape_Qundef((yyvsp[(2) - (2)].val)));

		    ;}
    break;

  case 472:
#line 4114 "ripper.y"
    {
#if 0
			(yyval.val) = new_args(0, 0, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val));
#endif
			(yyval.val) = params_new(Qnil, Qnil, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), escape_Qundef((yyvsp[(4) - (4)].val)));

		    ;}
    break;

  case 473:
#line 4122 "ripper.y"
    {
#if 0
			(yyval.val) = new_args(0, 0, 0, 0, (yyvsp[(1) - (1)].val));
#endif
			(yyval.val) = params_new(Qnil, Qnil, Qnil, Qnil, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 474:
#line 4130 "ripper.y"
    {
#if 0
			(yyval.val) = new_args(0, 0, 0, 0, 0);
#endif
			(yyval.val) = params_new(Qnil, Qnil, Qnil, Qnil, Qnil);

		    ;}
    break;

  case 475:
#line 4140 "ripper.y"
    {
#if 0
			yyerror("formal argument cannot be a constant");
			(yyval.val) = 0;
#endif
			(yyval.val) = dispatch1(param_error, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 476:
#line 4149 "ripper.y"
    {
#if 0
			yyerror("formal argument cannot be an instance variable");
			(yyval.val) = 0;
#endif
			(yyval.val) = dispatch1(param_error, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 477:
#line 4158 "ripper.y"
    {
#if 0
			yyerror("formal argument cannot be a global variable");
			(yyval.val) = 0;
#endif
			(yyval.val) = dispatch1(param_error, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 478:
#line 4167 "ripper.y"
    {
#if 0
			yyerror("formal argument cannot be a class variable");
			(yyval.val) = 0;
#endif
			(yyval.val) = dispatch1(param_error, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 480:
#line 4179 "ripper.y"
    {
#if 0
			if (!is_local_id((yyvsp[(1) - (1)].val)))
			    yyerror("formal argument must be local variable");
			shadowing_lvar((yyvsp[(1) - (1)].val));
#endif

			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 481:
#line 4191 "ripper.y"
    {
#if 0
			arg_var((yyvsp[(1) - (1)].val));
			(yyval.val) = NEW_ARGS_AUX((yyvsp[(1) - (1)].val), 1);
#endif

		    ;}
    break;

  case 482:
#line 4199 "ripper.y"
    {
#if 0
			ID tid = internal_id();
			arg_var(tid);
			if (dyna_in_block()) {
			    (yyvsp[(2) - (3)].val)->nd_value = NEW_DVAR(tid);
			}
			else {
			    (yyvsp[(2) - (3)].val)->nd_value = NEW_LVAR(tid);
			}
			(yyval.val) = NEW_ARGS_AUX(tid, 1);
			(yyval.val)->nd_next = (yyvsp[(2) - (3)].val);
#endif
			(yyval.val) = dispatch1(mlhs_paren, (yyvsp[(2) - (3)].val));

		    ;}
    break;

  case 483:
#line 4220 "ripper.y"
    {
			(yyval.val) = rb_ary_new3(1, (yyvsp[(1) - (1)].val));
		    ;}
    break;

  case 484:
#line 4225 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (3)].val);
			(yyval.val)->nd_plen++;
			(yyval.val)->nd_next = block_append((yyval.val)->nd_next, (yyvsp[(3) - (3)].val)->nd_next);
			rb_gc_force_recycle((VALUE)(yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = rb_ary_push((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 485:
#line 4238 "ripper.y"
    {
#if 0
			if (!is_local_id((yyvsp[(1) - (3)].val)))
			    yyerror("formal argument must be local variable");
			shadowing_lvar((yyvsp[(1) - (3)].val));
			arg_var((yyvsp[(1) - (3)].val));
			(yyval.val) = NEW_OPT_ARG(0, assignable((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)));
#endif
			(yyval.val) = rb_assoc_new((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 486:
#line 4252 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (1)].val);
#endif
			(yyval.val) = rb_ary_new3(1, (yyvsp[(1) - (1)].val));

		    ;}
    break;

  case 487:
#line 4260 "ripper.y"
    {
#if 0
			NODE *opts = (yyvsp[(1) - (3)].val);

			while (opts->nd_next) {
			    opts = opts->nd_next;
			}
			opts->nd_next = (yyvsp[(3) - (3)].val);
			(yyval.val) = (yyvsp[(1) - (3)].val);
#endif
			(yyval.val) = rb_ary_push((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 490:
#line 4280 "ripper.y"
    {
#if 0
			if (!is_local_id((yyvsp[(2) - (2)].val)))
			    yyerror("rest argument must be local variable");
			shadowing_lvar((yyvsp[(2) - (2)].val));
			arg_var((yyvsp[(2) - (2)].val));
			(yyval.val) = (yyvsp[(2) - (2)].val);
#endif
			(yyval.val) = dispatch1(rest_param, (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 491:
#line 4292 "ripper.y"
    {
#if 0
			(yyval.val) = internal_id();
			arg_var((yyval.val));
#endif
			(yyval.val) = dispatch1(rest_param, Qnil);

		    ;}
    break;

  case 494:
#line 4307 "ripper.y"
    {
#if 0
			if (!is_local_id((yyvsp[(2) - (2)].val)))
			    yyerror("block argument must be local variable");
			else if (!dyna_in_block() && local_id((yyvsp[(2) - (2)].val)))
			    yyerror("duplicated block argument name");
			shadowing_lvar((yyvsp[(2) - (2)].val));
			arg_var((yyvsp[(2) - (2)].val));
			(yyval.val) = (yyvsp[(2) - (2)].val);
#endif
			(yyval.val) = dispatch1(blockarg, (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 495:
#line 4323 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 496:
#line 4327 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			(yyval.val) = Qundef;

		    ;}
    break;

  case 497:
#line 4337 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(1) - (1)].val));
			(yyval.val) = (yyvsp[(1) - (1)].val);
		        if (!(yyval.val)) (yyval.val) = NEW_NIL();
#endif
			(yyval.val) = (yyvsp[(1) - (1)].val);

		    ;}
    break;

  case 498:
#line 4346 "ripper.y"
    {lex_state = EXPR_BEG;;}
    break;

  case 499:
#line 4347 "ripper.y"
    {
#if 0
			if ((yyvsp[(3) - (4)].val) == 0) {
			    yyerror("can't define singleton method for ().");
			}
			else {
			    switch (nd_type((yyvsp[(3) - (4)].val))) {
			      case NODE_STR:
			      case NODE_DSTR:
			      case NODE_XSTR:
			      case NODE_DXSTR:
			      case NODE_DREGX:
			      case NODE_LIT:
			      case NODE_ARRAY:
			      case NODE_ZARRAY:
				yyerror("can't define singleton method for literals");
			      default:
				value_expr((yyvsp[(3) - (4)].val));
				break;
			    }
			}
			(yyval.val) = (yyvsp[(3) - (4)].val);
#endif
			(yyval.val) = dispatch1(paren, (yyvsp[(3) - (4)].val));

		    ;}
    break;

  case 501:
#line 4377 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (2)].val);
#endif
			(yyval.val) = dispatch1(assoclist_from_args, (yyvsp[(1) - (2)].val));

		    ;}
    break;

  case 502:
#line 4389 "ripper.y"
    {
			(yyval.val) = rb_ary_new3(1, (yyvsp[(1) - (1)].val));
		    ;}
    break;

  case 503:
#line 4394 "ripper.y"
    {
#if 0
			(yyval.val) = list_concat((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = rb_ary_push((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 504:
#line 4404 "ripper.y"
    {
#if 0
			(yyval.val) = list_append(NEW_LIST((yyvsp[(1) - (3)].val)), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val) = dispatch2(assoc_new, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

		    ;}
    break;

  case 505:
#line 4412 "ripper.y"
    {
#if 0
			(yyval.val) = list_append(NEW_LIST(NEW_LIT(ID2SYM((yyvsp[(1) - (2)].val)))), (yyvsp[(2) - (2)].val));
#endif
			(yyval.val) = dispatch2(assoc_new, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val));

		    ;}
    break;

  case 516:
#line 4440 "ripper.y"
    { (yyval.val) = (yyvsp[(1) - (1)].val); ;}
    break;

  case 517:
#line 4445 "ripper.y"
    { (yyval.val) = (yyvsp[(1) - (1)].val); ;}
    break;

  case 527:
#line 4468 "ripper.y"
    {yyerrok;;}
    break;

  case 530:
#line 4473 "ripper.y"
    {yyerrok;;}
    break;

  case 531:
#line 4477 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			(yyval.val) = Qundef;

		    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 9354 "parse.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      parser_yyerror (parser, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    parser_yyerror (parser, yymsg);
	  }
	else
	  {
	    parser_yyerror (parser, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, parser);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, parser);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  parser_yyerror (parser, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, parser);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, parser);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 4485 "ripper.y"

# undef parser
# undef yylex
# undef yylval
# define yylval  (*((YYSTYPE*)(parser->parser_yylval)))

static int parser_regx_options(struct parser_params*);
static int parser_tokadd_string(struct parser_params*,int,int,int,long*,rb_encoding**);
static void parser_tokaddmbc(struct parser_params *parser, int c, rb_encoding *enc);
static int parser_parse_string(struct parser_params*,NODE*);
static int parser_here_document(struct parser_params*,NODE*);


# define nextc()                   parser_nextc(parser)
# define pushback(c)               parser_pushback(parser, c)
# define newtok()                  parser_newtok(parser)
# define tokspace(n)               parser_tokspace(parser, n)
# define tokadd(c)                 parser_tokadd(parser, c)
# define tok_hex(numlen)           parser_tok_hex(parser, numlen)
# define read_escape(flags,e)      parser_read_escape(parser, flags, e)
# define tokadd_escape(e)          parser_tokadd_escape(parser, e)
# define regx_options()            parser_regx_options(parser)
# define tokadd_string(f,t,p,n,e)  parser_tokadd_string(parser,f,t,p,n,e)
# define parse_string(n)           parser_parse_string(parser,n)
# define tokaddmbc(c, enc)         parser_tokaddmbc(parser, c, enc)
# define here_document(n)          parser_here_document(parser,n)
# define heredoc_identifier()      parser_heredoc_identifier(parser)
# define heredoc_restore(n)        parser_heredoc_restore(parser,n)
# define whole_match_p(e,l,i)      parser_whole_match_p(parser,e,l,i)

#ifdef RIPPER
/* FIXME */
# define local_id(x)       1
# define dyna_in_block()   1
#endif /* RIPPER */

#ifndef RIPPER
# define set_yylval_str(x) yylval.node = NEW_STR(x)
# define set_yylval_num(x) yylval.num = x
# define set_yylval_id(x)  yylval.id = x
# define set_yylval_literal(x) yylval.node = NEW_LIT(x)
# define set_yylval_node(x) yylval.node = x
# define yylval_id() yylval.id
#else
# define set_yylval_str(x) (void)(x)
# define set_yylval_num(x) (void)(x)
# define set_yylval_id(x) (void)(x)
# define set_yylval_literal(x) (void)(x)
# define set_yylval_node(x) (void)(x)
# define yylval_id() SYM2ID(yylval.val)
#endif

#ifdef RIPPER
#define ripper_flush(p) (p->tokp = p->parser_lex_p)

static void
ripper_dispatch_scan_event(struct parser_params *parser, int t)
{
    VALUE str;

    if (lex_p < parser->tokp) rb_raise(rb_eRuntimeError, "lex_p < tokp");
    if (lex_p == parser->tokp) return;
    str = STR_NEW(parser->tokp, lex_p - parser->tokp);
    yylval.val = ripper_dispatch1(parser, ripper_token2eventid(t), str);
    ripper_flush(parser);
}

static void
ripper_dispatch_delayed_token(struct parser_params *parser, int t)
{
    int saved_line = ruby_sourceline;
    const char *saved_tokp = parser->tokp;

    ruby_sourceline = parser->delayed_line;
    parser->tokp = lex_pbeg + parser->delayed_col;
    yylval.val = ripper_dispatch1(parser, ripper_token2eventid(t), parser->delayed);
    parser->delayed = Qnil;
    ruby_sourceline = saved_line;
    parser->tokp = saved_tokp;
}
#endif /* RIPPER */

#include "ruby/regex.h"
#include "ruby/util.h"

/* We remove any previous definition of `SIGN_EXTEND_CHAR',
   since ours (we hope) works properly with all combinations of
   machines, compilers, `char' and `unsigned char' argument types.
   (Per Bothner suggested the basic approach.)  */
#undef SIGN_EXTEND_CHAR
#if __STDC__
# define SIGN_EXTEND_CHAR(c) ((signed char)(c))
#else  /* not __STDC__ */
/* As in Harbison and Steele.  */
# define SIGN_EXTEND_CHAR(c) ((((unsigned char)(c)) ^ 128) - 128)
#endif

#define parser_mbclen()  mbclen((lex_p-1),lex_pend,parser->enc)
#define parser_precise_mbclen()  rb_enc_precise_mbclen((lex_p-1),lex_pend,parser->enc)
#define is_identchar(p,e,enc) (rb_enc_isalnum(*p,enc) || (*p) == '_' || !ISASCII(*p))
#define parser_is_identchar() (!parser->eofp && is_identchar((lex_p-1),lex_pend,parser->enc))

#define parser_isascii() ISASCII(*(lex_p-1))

static int
parser_yyerror(struct parser_params *parser, const char *msg)
{
#ifndef RIPPER
    const int max_line_margin = 30;
    const char *p, *pe;
    char *buf;
    int len, i;

    compile_error(PARSER_ARG "%s", msg);
    p = lex_p;
    while (lex_pbeg <= p) {
	if (*p == '\n') break;
	p--;
    }
    p++;

    pe = lex_p;
    while (pe < lex_pend) {
	if (*pe == '\n') break;
	pe++;
    }

    len = pe - p;
    if (len > 4) {
	char *p2;
	const char *pre = "", *post = "";

	if (len > max_line_margin * 2 + 10) {
	    if (lex_p - p > max_line_margin) {
		p = rb_enc_prev_char(p, lex_p - max_line_margin, rb_enc_get(lex_lastline));
		pre = "...";
	    }
	    if (pe - lex_p > max_line_margin) {
		pe = rb_enc_prev_char(lex_p, lex_p + max_line_margin, rb_enc_get(lex_lastline));
		post = "...";
	    }
	    len = pe - p;
	}
	buf = ALLOCA_N(char, len+2);
	MEMCPY(buf, p, char, len);
	buf[len] = '\0';
	rb_compile_error_append("%s%s%s", pre, buf, post);

	i = lex_p - p;
	p2 = buf; pe = buf + len;

	while (p2 < pe) {
	    if (*p2 != '\t') *p2 = ' ';
	    p2++;
	}
	buf[i] = '^';
	buf[i+1] = '\0';
	rb_compile_error_append("%s%s", pre, buf);
    }
#else
    dispatch1(parse_error, STR_NEW2(msg));
#endif /* !RIPPER */
    return 0;
}

static void parser_prepare(struct parser_params *parser);

#ifndef RIPPER
VALUE ruby_suppress_tracing(VALUE (*func)(VALUE, int), VALUE arg, int always);

static VALUE
debug_lines(const char *f)
{
    if (rb_const_defined_at(rb_cObject, rb_intern("SCRIPT_LINES__"))) {
	VALUE hash = rb_const_get_at(rb_cObject, rb_intern("SCRIPT_LINES__"));
	if (TYPE(hash) == T_HASH) {
	    VALUE fname = rb_str_new2(f);
	    VALUE lines = rb_ary_new();
	    rb_hash_aset(hash, fname, lines);
	    return lines;
	}
    }
    return 0;
}

static VALUE
yycompile0(VALUE arg, int tracing)
{
    int n;
    NODE *tree;
    struct parser_params *parser = (struct parser_params *)arg;

    if (!compile_for_eval && rb_safe_level() == 0) {
	ruby_debug_lines = debug_lines(ruby_sourcefile);
	if (ruby_debug_lines && ruby_sourceline > 0) {
	    VALUE str = STR_NEW0();
	    n = ruby_sourceline;
	    do {
		rb_ary_push(ruby_debug_lines, str);
	    } while (--n);
	}
    }

    parser_prepare(parser);
    n = yyparse((void*)parser);
    ruby_debug_lines = 0;
    compile_for_eval = 0;

    lex_strterm = 0;
    lex_p = lex_pbeg = lex_pend = 0;
    lex_lastline = lex_nextline = 0;
    if (parser->nerr) {
	return 0;
    }
    tree = ruby_eval_tree;
    if (!tree) {
	tree = NEW_NIL();
    }
    if (ruby_eval_tree_begin) {
	NODE *scope = ruby_eval_tree;

        if (scope) {
	    scope->nd_body = NEW_PRELUDE(ruby_eval_tree_begin, scope->nd_body);
	}
	tree = scope;
    }
    else {
	tree = ruby_eval_tree;
    }
    return (VALUE)tree;
}

static NODE*
yycompile(struct parser_params *parser, const char *f, int line)
{
    ruby_sourcefile = ruby_strdup(f);
    ruby_sourceline = line - 1;
    return (NODE *)ruby_suppress_tracing(yycompile0, (VALUE)parser, Qtrue);
}
#endif /* !RIPPER */

static VALUE
lex_get_str(struct parser_params *parser, VALUE s)
{
    char *beg, *end, *pend;

    beg = RSTRING_PTR(s);
    if (lex_gets_ptr) {
	if (RSTRING_LEN(s) == lex_gets_ptr) return Qnil;
	beg += lex_gets_ptr;
    }
    pend = RSTRING_PTR(s) + RSTRING_LEN(s);
    end = beg;
    while (end < pend) {
	if (*end++ == '\n') break;
    }
    lex_gets_ptr = end - RSTRING_PTR(s);
    return rb_enc_str_new(beg, end - beg, rb_enc_get(s));
}

static VALUE
lex_getline(struct parser_params *parser)
{
    VALUE line = (*parser->parser_lex_gets)(parser, parser->parser_lex_input);
#ifndef RIPPER
    if (ruby_debug_lines && !NIL_P(line)) {
	rb_ary_push(ruby_debug_lines, line);
    }
#endif
    return line;
}

#ifndef RIPPER
NODE*
rb_compile_string(const char *f, VALUE s, int line)
{
    VALUE volatile vparser = rb_parser_new();

    return rb_parser_compile_string(vparser, f, s, line);
}

NODE*
rb_parser_compile_string(volatile VALUE vparser, const char *f, VALUE s, int line)
{
    struct parser_params *parser;
    NODE *node;
    volatile VALUE tmp;

    Data_Get_Struct(vparser, struct parser_params, parser);
    lex_gets = lex_get_str;
    lex_gets_ptr = 0;
    lex_input = s;
    lex_pbeg = lex_p = lex_pend = 0;
    compile_for_eval = rb_parse_in_eval();

    node = yycompile(parser, f, line);
    tmp = vparser; /* prohibit tail call optimization */

    return node;
}

NODE*
rb_compile_cstr(const char *f, const char *s, int len, int line)
{
    return rb_compile_string(f, rb_str_new(s, len), line);
}

NODE*
rb_parser_compile_cstr(volatile VALUE vparser, const char *f, const char *s, int len, int line)
{
    return rb_parser_compile_string(vparser, f, rb_str_new(s, len), line);
}

static VALUE
lex_io_gets(struct parser_params *parser, VALUE io)
{
    return rb_io_gets(io);
}

NODE*
rb_compile_file(const char *f, VALUE file, int start)
{
    VALUE volatile vparser = rb_parser_new();

    return rb_parser_compile_file(vparser, f, file, start);
}

NODE*
rb_parser_compile_file(volatile VALUE vparser, const char *f, VALUE file, int start)
{
    struct parser_params *parser;
    volatile VALUE tmp;
    NODE *node;

    Data_Get_Struct(vparser, struct parser_params, parser);
    lex_gets = lex_io_gets;
    lex_input = file;
    lex_pbeg = lex_p = lex_pend = 0;

    node = yycompile(parser, f, start);
    tmp = vparser; /* prohibit tail call optimization */

    return node;
}
#endif  /* !RIPPER */

#define STR_FUNC_ESCAPE 0x01
#define STR_FUNC_EXPAND 0x02
#define STR_FUNC_REGEXP 0x04
#define STR_FUNC_QWORDS 0x08
#define STR_FUNC_SYMBOL 0x10
#define STR_FUNC_INDENT 0x20

enum string_type {
    str_squote = (0),
    str_dquote = (STR_FUNC_EXPAND),
    str_xquote = (STR_FUNC_EXPAND),
    str_regexp = (STR_FUNC_REGEXP|STR_FUNC_ESCAPE|STR_FUNC_EXPAND),
    str_sword  = (STR_FUNC_QWORDS),
    str_dword  = (STR_FUNC_QWORDS|STR_FUNC_EXPAND),
    str_ssym   = (STR_FUNC_SYMBOL),
    str_dsym   = (STR_FUNC_SYMBOL|STR_FUNC_EXPAND),
};

static VALUE
parser_str_new(const char *p, long n, rb_encoding *enc, int func, rb_encoding *enc0)
{
    VALUE str;

    str = rb_enc_str_new(p, n, enc);
    if (!(func & STR_FUNC_REGEXP) && rb_enc_asciicompat(enc)) {
	if (rb_enc_str_coderange(str) == ENC_CODERANGE_7BIT) {
	    rb_enc_associate(str, rb_usascii_encoding());
	}
	else if (enc0 == rb_usascii_encoding() && enc != rb_utf8_encoding()) {
	    rb_enc_associate(str, rb_ascii8bit_encoding());
	}
    }

    return str;
}

#define lex_goto_eol(parser) (parser->parser_lex_p = parser->parser_lex_pend)

static inline int
parser_nextc(struct parser_params *parser)
{
    int c;

    if (lex_p == lex_pend) {
	VALUE v = lex_nextline;
	lex_nextline = 0;
	if (!v) {
	    if (parser->eofp)
		return -1;

	    if (!lex_input || NIL_P(v = lex_getline(parser))) {
		parser->eofp = Qtrue;
		lex_goto_eol(parser);
		return -1;
	    }
	}
	{	
#ifdef RIPPER
	    if (parser->tokp < lex_pend) {
		if (NIL_P(parser->delayed)) {
		    parser->delayed = rb_str_buf_new(1024);
		    rb_str_buf_cat(parser->delayed,
				   parser->tokp, lex_pend - parser->tokp);
		    parser->delayed_line = ruby_sourceline;
		    parser->delayed_col = parser->tokp - lex_pbeg;
		}
		else {
		    rb_str_buf_cat(parser->delayed,
				   parser->tokp, lex_pend - parser->tokp);
		}
	    }
#endif
	    if (heredoc_end > 0) {
		ruby_sourceline = heredoc_end;
		heredoc_end = 0;
	    }
	    ruby_sourceline++;
	    parser->line_count++;
	    lex_pbeg = lex_p = RSTRING_PTR(v);
	    lex_pend = lex_p + RSTRING_LEN(v);
#ifdef RIPPER
	    ripper_flush(parser);
#endif
	    lex_lastline = v;
	}
    }
    c = (unsigned char)*lex_p++;
    if (c == '\r' && lex_p < lex_pend && *lex_p == '\n') {
	lex_p++;
	c = '\n';
    }

    return c;
}

static void
parser_pushback(struct parser_params *parser, int c)
{
    if (c == -1) return;
    lex_p--;
    if (lex_p > lex_pbeg && lex_p[0] == '\n' && lex_p[-1] == '\r') {
	lex_p--;
    }
}

#define was_bol() (lex_p == lex_pbeg + 1)
#define peek(c) (lex_p != lex_pend && (c) == *lex_p)

#define tokfix() (tokenbuf[tokidx]='\0')
#define tok() tokenbuf
#define toklen() tokidx
#define toklast() (tokidx>0?tokenbuf[tokidx-1]:0)

static char*
parser_newtok(struct parser_params *parser)
{
    tokidx = 0;
    if (!tokenbuf) {
	toksiz = 60;
	tokenbuf = ALLOC_N(char, 60);
    }
    if (toksiz > 4096) {
	toksiz = 60;
	REALLOC_N(tokenbuf, char, 60);
    }
    return tokenbuf;
}

static char *
parser_tokspace(struct parser_params *parser, int n)
{
    tokidx += n;

    if (tokidx >= toksiz) {
	do {toksiz *= 2;} while (toksiz < tokidx);
	REALLOC_N(tokenbuf, char, toksiz);
    }
    return &tokenbuf[tokidx-n];
}

static void
parser_tokadd(struct parser_params *parser, int c)
{
    tokenbuf[tokidx++] = (char)c;
    if (tokidx >= toksiz) {
	toksiz *= 2;
	REALLOC_N(tokenbuf, char, toksiz);
    }
}

static int
parser_tok_hex(struct parser_params *parser, int *numlen)
{
    int c;

    c = scan_hex(lex_p, 2, numlen);
    if (!*numlen) {
	yyerror("invalid hex escape");
	return 0;
    }
    lex_p += *numlen;
    return c;
}

#define tokcopy(n) memcpy(tokspace(n), lex_p - (n), (n))

static int
parser_tokadd_utf8(struct parser_params *parser, rb_encoding **encp,
                   int string_literal, int symbol_literal, int regexp_literal)
{
    /*
     * If string_literal is true, then we allow multiple codepoints
     * in \u{}, and add the codepoints to the current token.
     * Otherwise we're parsing a character literal and return a single
     * codepoint without adding it 
     */

    int codepoint;
    int numlen;

    if (regexp_literal) { tokadd('\\'); tokadd('u'); }

    if (peek('{')) {  /* handle \u{...} form */
	do {
            if (regexp_literal) { tokadd(*lex_p); }
	    nextc();
	    codepoint = scan_hex(lex_p, 6, &numlen);
	    if (numlen == 0)  {
		yyerror("invalid Unicode escape");
		return 0;
	    }
	    if (codepoint > 0x10ffff) {
		yyerror("invalid Unicode codepoint (too large)");
		return 0;
	    }
	    lex_p += numlen;
            if (regexp_literal) {
                tokcopy(numlen);
            }
            else if (codepoint >= 0x80) {
		*encp = UTF8_ENC();
		if (string_literal) tokaddmbc(codepoint, *encp);
	    }
	    else if (string_literal) {
		if (codepoint == 0 && symbol_literal) {
		    yyerror("symbol cannot contain '\\u{0}'");
		    return 0;
		}

		tokadd(codepoint);
	    }
	} while (string_literal && (peek(' ') || peek('\t')));

	if (!peek('}')) {
	    yyerror("unterminated Unicode escape");
	    return 0;
	}

        if (regexp_literal) { tokadd('}'); }
	nextc();
    }
    else {			/* handle \uxxxx form */
	codepoint = scan_hex(lex_p, 4, &numlen);
	if (numlen < 4) {
	    yyerror("invalid Unicode escape");
	    return 0;
	}
	lex_p += 4;
        if (regexp_literal) {
            tokcopy(4);
        }
	else if (codepoint >= 0x80) {
	    *encp = UTF8_ENC();
	    if (string_literal) tokaddmbc(codepoint, *encp);
	}
	else if (string_literal) {
	    if (codepoint == 0 && symbol_literal) {
		yyerror("symbol cannot contain '\\u0000'");
		return 0;
	    }

	    tokadd(codepoint);
	}
    }

    return codepoint;
}

#define ESCAPE_CONTROL 1
#define ESCAPE_META    2

static int
parser_read_escape(struct parser_params *parser, int flags,
		   rb_encoding **encp)
{
    int c;
    int numlen;

    switch (c = nextc()) {
      case '\\':	/* Backslash */
	return c;

      case 'n':	/* newline */
	return '\n';

      case 't':	/* horizontal tab */
	return '\t';

      case 'r':	/* carriage-return */
	return '\r';

      case 'f':	/* form-feed */
	return '\f';

      case 'v':	/* vertical tab */
	return '\13';

      case 'a':	/* alarm(bell) */
	return '\007';

      case 'e':	/* escape */
	return 033;

      case '0': case '1': case '2': case '3': /* octal constant */
      case '4': case '5': case '6': case '7':
	if (flags & (ESCAPE_CONTROL|ESCAPE_META)) goto eof;
	{
	    int numlen;

	    pushback(c);
	    c = scan_oct(lex_p, 3, &numlen);
	    lex_p += numlen;
	}
	return c;

      case 'x':	/* hex constant */
	if (flags & (ESCAPE_CONTROL|ESCAPE_META)) goto eof;
	c = tok_hex(&numlen);
	if (numlen == 0) return 0;
	return c;

      case 'b':	/* backspace */
	return '\010';

      case 's':	/* space */
	return ' ';

      case 'M':
	if (flags & ESCAPE_META) goto eof;
	if ((c = nextc()) != '-') {
	    pushback(c);
	    goto eof;
	}
	if ((c = nextc()) == '\\') {
	    return read_escape(flags|ESCAPE_META, encp) | 0x80;
	}
	else if (c == -1 || !ISASCII(c)) goto eof;
	else {
	    return ((c & 0xff) | 0x80);
	}

      case 'C':
	if ((c = nextc()) != '-') {
	    pushback(c);
	    goto eof;
	}
      case 'c':
	if (flags & ESCAPE_CONTROL) goto eof;
	if ((c = nextc())== '\\') {
	    c = read_escape(flags|ESCAPE_CONTROL, encp);
	}
	else if (c == '?')
	    return 0177;
	else if (c == -1 || !ISASCII(c)) goto eof;
	return c & 0x9f;

      eof:
      case -1:
        yyerror("Invalid escape character syntax");
	return '\0';

      default:
	return c;
    }
}

static void
parser_tokaddmbc(struct parser_params *parser, int c, rb_encoding *enc)
{
    int len = rb_enc_codelen(c, enc);
    rb_enc_mbcput(c, tokspace(len), enc);
}

static int
parser_tokadd_escape(struct parser_params *parser, rb_encoding **encp)
{
    int c;
    int flags = 0;

  first:
    switch (c = nextc()) {
      case '\n':
	return 0;		/* just ignore */

      case '0': case '1': case '2': case '3': /* octal constant */
      case '4': case '5': case '6': case '7':
	if (flags & (ESCAPE_CONTROL|ESCAPE_META)) goto eof;
	{
	    int numlen;
	    int oct;

	    oct = scan_oct(--lex_p, 3, &numlen);
	    if (numlen == 0) goto eof;
	    lex_p += numlen;
	    tokcopy(numlen + 1);
	}
	return 0;

      case 'x':	/* hex constant */
	if (flags & (ESCAPE_CONTROL|ESCAPE_META)) goto eof;
	{
	    int numlen;
	    int hex;

	    hex = tok_hex(&numlen);
	    if (numlen == 0) goto eof;
	    tokcopy(numlen + 2);
	}
	return 0;

      case 'M':
	if (flags & ESCAPE_META) goto eof;
	if ((c = nextc()) != '-') {
	    pushback(c);
	    goto eof;
	}
	tokcopy(3);
	flags |= ESCAPE_META;
	goto escaped;

      case 'C':
	if (flags & ESCAPE_CONTROL) goto eof;
	if ((c = nextc()) != '-') {
	    pushback(c);
	    goto eof;
	}
	tokcopy(3);
	goto escaped;

      case 'c':
	if (flags & ESCAPE_CONTROL) goto eof;
	tokcopy(2);
	flags |= ESCAPE_CONTROL;
      escaped:
	if ((c = nextc()) == '\\') {
	    goto first;
	}
	else if (c == -1) goto eof;
	tokadd(c);
	return 0;

      eof:
      case -1:
        yyerror("Invalid escape character syntax");
	return -1;

      default:
        tokadd('\\');
	tokadd(c);
    }
    return 0;
}

extern int rb_char_to_option_kcode(int c, int *option, int *kcode);

static int
parser_regx_options(struct parser_params *parser)
{
    int kcode = 0;
    int options = 0;
    int c, opt, kc;

    newtok();
    while (c = nextc(), ISALPHA(c)) {
        if (c == 'o') {
            options |= RE_OPTION_ONCE;
        }
        else if (rb_char_to_option_kcode(c, &opt, &kc)) {
            options |= opt;
	    if (kc >= 0) kcode = c;
        }
        else {
	    tokadd(c);
        }
    }
    pushback(c);
    if (toklen()) {
	tokfix();
	compile_error(PARSER_ARG "unknown regexp option%s - %s",
		      toklen() > 1 ? "s" : "", tok());
    }
    return options | RE_OPTION_ENCODING(kcode);
}

static void
dispose_string(VALUE str)
{
    /* TODO: should use another API? */
    if (RBASIC(str)->flags & RSTRING_NOEMBED)
	xfree(RSTRING_PTR(str));
    rb_gc_force_recycle(str);
}

static int
parser_tokadd_mbchar(struct parser_params *parser, int c)
{
    int len = parser_precise_mbclen();
    if (!MBCLEN_CHARFOUND_P(len)) {
	compile_error(PARSER_ARG "invalid multibyte char");
	return -1;
    }
    tokadd(c);
    lex_p += --len;
    if (len > 0) tokcopy(len);
    return c;
}

#define tokadd_mbchar(c) parser_tokadd_mbchar(parser, c)

static int
parser_tokadd_string(struct parser_params *parser,
		     int func, int term, int paren, long *nest,
		     rb_encoding **encp)
{
    int c;
    int has_nonascii = 0;
    rb_encoding *enc = *encp;
    char *errbuf = 0;
    static const char mixed_msg[] = "%s mixed within %s source";

#define mixed_error(enc1, enc2) if (!errbuf) {	\
	int len = sizeof(mixed_msg) - 4;	\
	len += strlen(rb_enc_name(enc1));	\
	len += strlen(rb_enc_name(enc2));	\
	errbuf = ALLOCA_N(char, len);		\
	snprintf(errbuf, len, mixed_msg,	\
		 rb_enc_name(enc1),		\
		 rb_enc_name(enc2));		\
	yyerror(errbuf);			\
    }
#define mixed_escape(beg, enc1, enc2) do {	\
	const char *pos = lex_p;		\
	lex_p = beg;				\
	mixed_error(enc1, enc2);		\
	lex_p = pos;				\
    } while (0)

    while ((c = nextc()) != -1) {
	if (paren && c == paren) {
	    ++*nest;
	}
	else if (c == term) {
	    if (!nest || !*nest) {
		pushback(c);
		break;
	    }
	    --*nest;
	}
	else if ((func & STR_FUNC_EXPAND) && c == '#' && lex_p < lex_pend) {
	    int c2 = *lex_p;
	    if (c2 == '$' || c2 == '@' || c2 == '{') {
		pushback(c);
		break;
	    }
	}
	else if (c == '\\') {
	    const char *beg = lex_p - 1;
	    c = nextc();
	    switch (c) {
	      case '\n':
		if (func & STR_FUNC_QWORDS) break;
		if (func & STR_FUNC_EXPAND) continue;
		tokadd('\\');
		break;

	      case '\\':
		if (func & STR_FUNC_ESCAPE) tokadd(c);
		break;

	      case 'u':
		if ((func & STR_FUNC_EXPAND) == 0) {
		    tokadd('\\');
		    break;
		}
		parser_tokadd_utf8(parser, &enc, 1,
				   func & STR_FUNC_SYMBOL,
                                   func & STR_FUNC_REGEXP);
		if (has_nonascii && enc != *encp) {
		    mixed_escape(beg, enc, *encp);
		}
		continue;

	      default:
		if (func & STR_FUNC_REGEXP) {
		    pushback(c);
		    if ((c = tokadd_escape(&enc)) < 0)
			return -1;
		    if (has_nonascii && enc != *encp) {
			mixed_escape(beg, enc, *encp);
		    }
		    continue;
		}
		else if (func & STR_FUNC_EXPAND) {
		    pushback(c);
		    if (func & STR_FUNC_ESCAPE) tokadd('\\');
		    c = read_escape(0, &enc);
		}
		else if ((func & STR_FUNC_QWORDS) && ISSPACE(c)) {
		    /* ignore backslashed spaces in %w */
		}
		else if (c != term && !(paren && c == paren)) {
		    tokadd('\\');
		}
	    }
	}
	else if (!parser_isascii()) {
	    has_nonascii = 1;
	    if (enc != *encp) {
		mixed_error(enc, *encp);
		continue;
	    }
	    if (tokadd_mbchar(c) == -1) return -1;
	    continue;
	}
	else if ((func & STR_FUNC_QWORDS) && ISSPACE(c)) {
	    pushback(c);
	    break;
	}
	if (!c && (func & STR_FUNC_SYMBOL)) {
	    func &= ~STR_FUNC_SYMBOL;
	    compile_error(PARSER_ARG "symbol cannot contain '\\0'");
	    continue;
	}
        if (c & 0x80) {
            has_nonascii = 1;
	    if (enc != *encp) {
		mixed_error(enc, *encp);
		continue;
	    }
        }
	tokadd(c);
    }
    *encp = enc;
    return c;
}

#define NEW_STRTERM(func, term, paren) \
	rb_node_newnode(NODE_STRTERM, (func), (term) | ((paren) << (CHAR_BIT * 2)), 0)

static int
parser_parse_string(struct parser_params *parser, NODE *quote)
{
    int func = quote->nd_func;
    int term = nd_term(quote);
    int paren = nd_paren(quote);
    int c, space = 0;
    rb_encoding *enc = parser->enc;

    if (func == -1) return tSTRING_END;
    c = nextc();
    if ((func & STR_FUNC_QWORDS) && ISSPACE(c)) {
	do {c = nextc();} while (ISSPACE(c));
	space = 1;
    }
    if (c == term && !quote->nd_nest) {
	if (func & STR_FUNC_QWORDS) {
	    quote->nd_func = -1;
	    return ' ';
	}
	if (!(func & STR_FUNC_REGEXP)) return tSTRING_END;
        set_yylval_num(regx_options());
	return tREGEXP_END;
    }
    if (space) {
	pushback(c);
	return ' ';
    }
    newtok();
    if ((func & STR_FUNC_EXPAND) && c == '#') {
	switch (c = nextc()) {
	  case '$':
	  case '@':
	    pushback(c);
	    return tSTRING_DVAR;
	  case '{':
	    return tSTRING_DBEG;
	}
	tokadd('#');
    }
    pushback(c);
    if (tokadd_string(func, term, paren, &quote->nd_nest,
		      &enc) == -1) {
	ruby_sourceline = nd_line(quote);
	if (func & STR_FUNC_REGEXP) {
	    if (parser->eofp)
		compile_error(PARSER_ARG "unterminated regexp meets end of file");
	    return tREGEXP_END;
	}
	else {
	    if (parser->eofp)
		compile_error(PARSER_ARG "unterminated string meets end of file");
	    return tSTRING_END;
	}
    }

    tokfix();
    set_yylval_str(STR_NEW3(tok(), toklen(), enc, func));
    return tSTRING_CONTENT;
}

static int
parser_heredoc_identifier(struct parser_params *parser)
{
    int c = nextc(), term, func = 0, len;

    if (c == '-') {
	c = nextc();
	func = STR_FUNC_INDENT;
    }
    switch (c) {
      case '\'':
	func |= str_squote; goto quoted;
      case '"':
	func |= str_dquote; goto quoted;
      case '`':
	func |= str_xquote;
      quoted:
	newtok();
	tokadd(func);
	term = c;
	while ((c = nextc()) != -1 && c != term) {
	    if (tokadd_mbchar(c) == -1) return 0;
	}
	if (c == -1) {
	    compile_error(PARSER_ARG "unterminated here document identifier");
	    return 0;
	}
	break;

      default:
	if (!parser_is_identchar()) {
	    pushback(c);
	    if (func & STR_FUNC_INDENT) {
		pushback('-');
	    }
	    return 0;
	}
	newtok();
	term = '"';
	tokadd(func |= str_dquote);
	do {
	    if (tokadd_mbchar(c) == -1) return 0;
	} while ((c = nextc()) != -1 && parser_is_identchar());
	pushback(c);
	break;
    }

    tokfix();
#ifdef RIPPER
    ripper_dispatch_scan_event(parser, tHEREDOC_BEG);
#endif
    len = lex_p - lex_pbeg;
    lex_goto_eol(parser);
    lex_strterm = rb_node_newnode(NODE_HEREDOC,
				  STR_NEW(tok(), toklen()),	/* nd_lit */
				  len,				/* nd_nth */
				  lex_lastline);		/* nd_orig */
    nd_set_line(lex_strterm, ruby_sourceline);
#ifdef RIPPER
    ripper_flush(parser);
#endif
    return term == '`' ? tXSTRING_BEG : tSTRING_BEG;
}

static void
parser_heredoc_restore(struct parser_params *parser, NODE *here)
{
    VALUE line;

#ifdef RIPPER
    if (!NIL_P(parser->delayed))
	ripper_dispatch_delayed_token(parser, tSTRING_CONTENT);
    lex_goto_eol(parser);
    ripper_dispatch_scan_event(parser, tHEREDOC_END);
#endif
    line = here->nd_orig;
    lex_lastline = line;
    lex_pbeg = RSTRING_PTR(line);
    lex_pend = lex_pbeg + RSTRING_LEN(line);
    lex_p = lex_pbeg + here->nd_nth;
    heredoc_end = ruby_sourceline;
    ruby_sourceline = nd_line(here);
    dispose_string(here->nd_lit);
    rb_gc_force_recycle((VALUE)here);
#ifdef RIPPER
    ripper_flush(parser);
#endif
}

static int
parser_whole_match_p(struct parser_params *parser,
    const char *eos, int len, int indent)
{
    const char *p = lex_pbeg;
    int n;

    if (indent) {
	while (*p && ISSPACE(*p)) p++;
    }
    n= lex_pend - (p + len);
    if (n < 0 || (n > 0 && p[len] != '\n' && p[len] != '\r')) return Qfalse;
    if (strncmp(eos, p, len) == 0) return Qtrue;
    return Qfalse;
}

static int
parser_here_document(struct parser_params *parser, NODE *here)
{
    int c, func, indent = 0;
    const char *eos, *p, *pend;
    long len;
    VALUE str = 0;

    eos = RSTRING_PTR(here->nd_lit);
    len = RSTRING_LEN(here->nd_lit) - 1;
    indent = (func = *eos++) & STR_FUNC_INDENT;

    if ((c = nextc()) == -1) {
      error:
	compile_error(PARSER_ARG "can't find string \"%s\" anywhere before EOF", eos);
      restore:
	heredoc_restore(lex_strterm);
	lex_strterm = 0;
	return 0;
    }
    if (was_bol() && whole_match_p(eos, len, indent)) {
	heredoc_restore(lex_strterm);
	return tSTRING_END;
    }

    if (!(func & STR_FUNC_EXPAND)) {
	do {
	    p = RSTRING_PTR(lex_lastline);
	    pend = lex_pend;
	    if (pend > p) {
		switch (pend[-1]) {
		  case '\n':
		    if (--pend == p || pend[-1] != '\r') {
			pend++;
			break;
		    }
		  case '\r':
		    --pend;
		}
	    }
	    if (str)
		rb_str_cat(str, p, pend - p);
	    else
		str = STR_NEW(p, pend - p);
	    if (pend < lex_pend) rb_str_cat(str, "\n", 1);
	    lex_goto_eol(parser);
	    if (nextc() == -1) {
		if (str) dispose_string(str);
		goto error;
	    }
	} while (!whole_match_p(eos, len, indent));
    }
    else {
	/*	int mb = ENC_CODERANGE_7BIT, *mbp = &mb;*/
	rb_encoding *enc = parser->enc;
	newtok();
	if (c == '#') {
	    switch (c = nextc()) {
	      case '$':
	      case '@':
		pushback(c);
		return tSTRING_DVAR;
	      case '{':
		return tSTRING_DBEG;
	    }
	    tokadd('#');
	}
	do {
	    pushback(c);
	    if ((c = tokadd_string(func, '\n', 0, NULL, &enc)) == -1) {
		if (parser->eofp) goto error;
		goto restore;
	    }
	    if (c != '\n') {
		set_yylval_str(STR_NEW3(tok(), toklen(), enc, func));
		return tSTRING_CONTENT;
	    }
	    tokadd(nextc());
	    /*	    if (mbp && mb == ENC_CODERANGE_UNKNOWN) mbp = 0;*/
	    if ((c = nextc()) == -1) goto error;
	} while (!whole_match_p(eos, len, indent));
	str = STR_NEW3(tok(), toklen(), enc, func);
    }
    heredoc_restore(lex_strterm);
    lex_strterm = NEW_STRTERM(-1, 0, 0);
    set_yylval_str(str);
    return tSTRING_CONTENT;
}

#include "lex.c"

#ifndef RIPPER
static void
arg_ambiguous_gen(struct parser_params *parser)
{
    rb_warning0("ambiguous first argument; put parentheses or even spaces");
}
#else
static void
arg_ambiguous_gen(struct parser_params *parser)
{
    dispatch0(arg_ambiguous);
}
#endif
#define arg_ambiguous() arg_ambiguous_gen(parser)

static int
lvar_defined_gen(struct parser_params *parser, ID id)
{
#ifndef RIPPER
    return (dyna_in_block() && dvar_defined(id)) || local_id(id);
#else
    return 0;
#endif
}

/* emacsen -*- hack */
static int
parser_encode_length(struct parser_params *parser, const char *name, int len)
{
    int nlen;

    if (len > 5 && name[nlen = len - 5] == '-') {
	if (rb_memcicmp(name + nlen + 1, "unix", 4) == 0)
	    return nlen;
    }
    if (len > 4 && name[nlen = len - 5] == '-') {
	if (rb_memcicmp(name + nlen + 1, "dos", 3) == 0)
	    return nlen;
	if (rb_memcicmp(name + nlen + 1, "mac", 3) == 0)
	    return nlen;
    }
    return len;
}

static void
parser_set_encode(struct parser_params *parser, const char *name)
{
    int idx = rb_enc_find_index(name);
    rb_encoding *enc;

    if (idx < 0) {
	rb_raise(rb_eArgError, "unknown encoding name: %s", name);
    }
    enc = rb_enc_from_index(idx);
    if (!rb_enc_asciicompat(enc)) {
	rb_raise(rb_eArgError, "%s is not ASCII compatible", rb_enc_name(enc));
    }
    parser->enc = enc;
}

#ifndef RIPPER
typedef int (*rb_magic_comment_length_t)(struct parser_params *parser, const char *name, int len);
typedef void (*rb_magic_comment_setter_t)(struct parser_params *parser, const char *name, const char *val);

static void
magic_comment_encoding(struct parser_params *parser, const char *name, const char *val)
{
    if (parser && parser->line_count != (parser->has_shebang ? 2 : 1))
	return;
    parser_set_encode(parser, val);
}

struct magic_comment {
    const char *name;
    rb_magic_comment_setter_t func;
    rb_magic_comment_length_t length;
};

static const struct magic_comment magic_comments[] = {
    {"coding", magic_comment_encoding, parser_encode_length},
    {"encoding", magic_comment_encoding, parser_encode_length},
};
#endif

static const char *
magic_comment_marker(const char *str, int len)
{
    int i = 2;

    while (i < len) {
	switch (str[i]) {
	  case '-':
	    if (str[i-1] == '*' && str[i-2] == '-') {
		return str + i + 1;
	    }
	    i += 2;
	    break;
	  case '*':
	    if (i + 1 >= len) return 0;
	    if (str[i+1] != '-') {
		i += 4;
	    }
	    else if (str[i-1] != '-') {
		i += 2;
	    }
	    else {
		return str + i + 2;
	    }
	    break;
	  default:
	    i += 3;
	    break;
	}
    }
    return 0;
}

static int
parser_magic_comment(struct parser_params *parser, const char *str, int len)
{
    VALUE name = 0, val = 0;
    const char *beg, *end, *vbeg, *vend;
#define str_copy(_s, _p, _n) ((_s) \
	? (rb_str_resize((_s), (_n)), \
	   MEMCPY(RSTRING_PTR(_s), (_p), char, (_n)), (_s)) \
	: ((_s) = STR_NEW((_p), (_n))))

    if (len <= 7) return Qfalse;
    if (!(beg = magic_comment_marker(str, len))) return Qfalse;
    if (!(end = magic_comment_marker(beg, str + len - beg))) return Qfalse;
    str = beg;
    len = end - beg - 3;

    /* %r"([^\\s\'\":;]+)\\s*:\\s*(\"(?:\\\\.|[^\"])*\"|[^\"\\s;]+)[\\s;]*" */
    while (len > 0) {
#ifndef RIPPER
	const struct magic_comment *p = magic_comments;
#endif
	int n = 0;

	for (; len > 0 && *str; str++, --len) {
	    switch (*str) {
	      case '\'': case '"': case ':': case ';':
		continue;
	    }
	    if (!ISSPACE(*str)) break;
	}
	for (beg = str; len > 0; str++, --len) {
	    switch (*str) {
	      case '\'': case '"': case ':': case ';':
		break;
	      default:
		if (ISSPACE(*str)) break;
		continue;
	    }
	    break;
	}
	for (end = str; len > 0 && ISSPACE(*str); str++, --len);
	if (!len) break;
	if (*str != ':') continue;

	do str++; while (--len > 0 && ISSPACE(*str));
	if (!len) break;
	if (*str == '"') {
	    for (vbeg = ++str; --len > 0 && *str != '"'; str++) {
		if (*str == '\\') {
		    --len;
		    ++str;
		}
	    }
	    vend = str;
	    if (len) {
		--len;
		++str;
	    }
	}
	else {
	    for (vbeg = str; len > 0 && *str != '"' && *str != ';' && !ISSPACE(*str); --len, str++);
	    vend = str;
	}
	while (len > 0 && (*str == ';' || ISSPACE(*str))) --len, str++;

	n = end - beg;
	str_copy(name, beg, n);
#ifndef RIPPER
	do {
	    if (STRNCASECMP(p->name, RSTRING_PTR(name), n) == 0) {
		n = vend - vbeg;
		if (p->length) {
		    n = (*p->length)(parser, vbeg, n);
		}
		str_copy(val, vbeg, n);
		(*p->func)(parser, RSTRING_PTR(name), RSTRING_PTR(val));
		break;
	    }
	} while (++p < magic_comments + sizeof(magic_comments) / sizeof(*p));
#else
	dispatch2(magic_comment, name, val);
#endif
    }

    return Qtrue;
}

static void
set_file_encoding(struct parser_params *parser, const char *str, const char *send)
{
    int sep = 0;
    const char *beg = str;
    VALUE s;

    for (;;) {
	if (send - str <= 6) return;
	switch (str[6]) {
	  case 'C': case 'c': str += 6; continue;
	  case 'O': case 'o': str += 5; continue;
	  case 'D': case 'd': str += 4; continue;
	  case 'I': case 'i': str += 3; continue;
	  case 'N': case 'n': str += 2; continue;
	  case 'G': case 'g': str += 1; continue;
	  case '=': case ':':
	    sep = 1;
	    str += 6;
	    break;
	  default:
	    str += 6;
	    if (ISSPACE(*str)) break;
	    continue;
	}
	if (STRNCASECMP(str-6, "coding", 6) == 0) break;
    }
    for (;;) {
	do {
	    if (++str >= send) return;
	} while (ISSPACE(*str));
	if (sep) break;
	if (*str != '=' && *str != ':') return;
	sep = 1;
	str++;
    }
    beg = str;
    while ((*str == '-' || *str == '_' || ISALNUM(*str)) && ++str < send);
    s = rb_str_new(beg, parser_encode_length(parser, beg, str - beg));
    parser_set_encode(parser, RSTRING_PTR(s));
    rb_str_resize(s, 0);
}

static void
parser_prepare(struct parser_params *parser)
{
    int c = nextc();
    switch (c) {
      case '#':
	if (peek('!')) parser->has_shebang = 1;
	break;
      case 0xef:		/* UTF-8 BOM marker */
	if (lex_pend - lex_p >= 2 &&
	    (unsigned char)lex_p[0] == 0xbb &&
	    (unsigned char)lex_p[1] == 0xbf) {
	    parser_set_encode(parser, "UTF-8");
	    lex_p += 2;
	    lex_pbeg = lex_p;
	    return;
	}
	break;
      case EOF:
	return;
    }
    pushback(c);
    parser->enc = rb_enc_get(lex_lastline);
}

#define IS_ARG() (lex_state == EXPR_ARG || lex_state == EXPR_CMDARG)
#define IS_BEG() (lex_state == EXPR_BEG || lex_state == EXPR_MID || lex_state == EXPR_VALUE || lex_state == EXPR_CLASS)

static int
parser_yylex(struct parser_params *parser)
{
    register int c;
    int space_seen = 0;
    int cmd_state;
    enum lex_state_e last_state;
    rb_encoding *enc;
    int mb;
#ifdef RIPPER
    int fallthru = Qfalse;
#endif

    if (lex_strterm) {
	int token;
	if (nd_type(lex_strterm) == NODE_HEREDOC) {
	    token = here_document(lex_strterm);
	    if (token == tSTRING_END) {
		lex_strterm = 0;
		lex_state = EXPR_ENDARG;
	    }
	}
	else {
	    token = parse_string(lex_strterm);
	    if (token == tSTRING_END || token == tREGEXP_END) {
		rb_gc_force_recycle((VALUE)lex_strterm);
		lex_strterm = 0;
		lex_state = EXPR_ENDARG;
	    }
	}
	return token;
    }
    cmd_state = command_start;
    command_start = Qfalse;
  retry:
    switch (c = nextc()) {
      case '\0':		/* NUL */
      case '\004':		/* ^D */
      case '\032':		/* ^Z */
      case -1:			/* end of script. */
	return 0;

	/* white spaces */
      case ' ': case '\t': case '\f': case '\r':
      case '\13': /* '\v' */
	space_seen++;
#ifdef RIPPER
	while ((c = nextc())) {
	    switch (c) {
	      case ' ': case '\t': case '\f': case '\r':
	      case '\13': /* '\v' */
		break;
	      default:
		goto outofloop;
	    }
	}
      outofloop:
	pushback(c);
	ripper_dispatch_scan_event(parser, tSP);
#endif
	goto retry;

      case '#':		/* it's a comment */
	if (!parser->has_shebang || parser->line_count != 1) {
	    /* no magic_comment in shebang line */
	    if (!parser_magic_comment(parser, lex_p, lex_pend - lex_p)) {
		if (parser->line_count == (parser->has_shebang ? 2 : 1)) {
		    set_file_encoding(parser, lex_p, lex_pend);
		}
	    }
	}
	lex_p = lex_pend;
#ifdef RIPPER
        ripper_dispatch_scan_event(parser, tCOMMENT);
        fallthru = Qtrue;
#endif
	/* fall through */
      case '\n':
	switch (lex_state) {
	  case EXPR_BEG:
	  case EXPR_FNAME:
	  case EXPR_DOT:
	  case EXPR_CLASS:
	  case EXPR_VALUE:
#ifdef RIPPER
            if (!fallthru) {
                ripper_dispatch_scan_event(parser, tIGNORED_NL);
            }
            fallthru = Qfalse;
#endif
	    goto retry;
	  default:
	    break;
	}
	while ((c = nextc())) {
	    switch (c) {
	      case ' ': case '\t': case '\f': case '\r':
	      case '\13': /* '\v' */
		space_seen++;
		break;
	      case '.': {
		  if ((c = nextc()) != '.') {
		      pushback(c);
		      pushback('.');
		      goto retry;
		  }
	      }
	      default:
		--ruby_sourceline;
		lex_nextline = lex_lastline;
	      case -1:		/* EOF no decrement*/
		lex_goto_eol(parser);
#ifdef RIPPER
		if (c != -1) {
		    parser->tokp = lex_p;
		}
#endif
		goto normal_newline;
	    }
	}
      normal_newline:
	command_start = Qtrue;
	lex_state = EXPR_BEG;
	return '\n';

      case '*':
	if ((c = nextc()) == '*') {
	    if ((c = nextc()) == '=') {
                set_yylval_id(tPOW);
		lex_state = EXPR_BEG;
		return tOP_ASGN;
	    }
	    pushback(c);
	    c = tPOW;
	}
	else {
	    if (c == '=') {
                set_yylval_id('*');
		lex_state = EXPR_BEG;
		return tOP_ASGN;
	    }
	    pushback(c);
	    if (IS_ARG() && space_seen && !ISSPACE(c)) {
		rb_warning0("`*' interpreted as argument prefix");
		c = tSTAR;
	    }
	    else if (IS_BEG()) {
		c = tSTAR;
	    }
	    else {
		c = '*';
	    }
	}
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	return c;

      case '!':
	c = nextc();
	if (lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
	    lex_state = EXPR_ARG;
	    if (c == '@') {
		return '!';
	    }
	}
	else {
	    lex_state = EXPR_BEG;
	}
	if (c == '=') {
	    return tNEQ;
	}
	if (c == '~') {
	    return tNMATCH;
	}
	pushback(c);
	return '!';

      case '=':
	if (was_bol()) {
	    /* skip embedded rd document */
	    if (strncmp(lex_p, "begin", 5) == 0 && ISSPACE(lex_p[5])) {
#ifdef RIPPER
                int first_p = Qtrue;

                lex_goto_eol(parser);
                ripper_dispatch_scan_event(parser, tEMBDOC_BEG);
#endif
		for (;;) {
		    lex_goto_eol(parser);
#ifdef RIPPER
                    if (!first_p) {
                        ripper_dispatch_scan_event(parser, tEMBDOC);
                    }
                    first_p = Qfalse;
#endif
		    c = nextc();
		    if (c == -1) {
			compile_error(PARSER_ARG "embedded document meets end of file");
			return 0;
		    }
		    if (c != '=') continue;
		    if (strncmp(lex_p, "end", 3) == 0 &&
			(lex_p + 3 == lex_pend || ISSPACE(lex_p[3]))) {
			break;
		    }
		}
		lex_goto_eol(parser);
#ifdef RIPPER
                ripper_dispatch_scan_event(parser, tEMBDOC_END);
#endif
		goto retry;
	    }
	}

	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	if ((c = nextc()) == '=') {
	    if ((c = nextc()) == '=') {
		return tEQQ;
	    }
	    pushback(c);
	    return tEQ;
	}
	if (c == '~') {
	    return tMATCH;
	}
	else if (c == '>') {
	    return tASSOC;
	}
	pushback(c);
	return '=';

      case '<':
	c = nextc();
	if (c == '<' &&
	    lex_state != EXPR_END &&
	    lex_state != EXPR_DOT &&
	    lex_state != EXPR_ENDARG &&
	    lex_state != EXPR_CLASS &&
	    (!IS_ARG() || space_seen)) {
	    int token = heredoc_identifier();
	    if (token) return token;
	}
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	if (c == '=') {
	    if ((c = nextc()) == '>') {
		return tCMP;
	    }
	    pushback(c);
	    return tLEQ;
	}
	if (c == '<') {
	    if ((c = nextc()) == '=') {
                set_yylval_id(tLSHFT);
		lex_state = EXPR_BEG;
		return tOP_ASGN;
	    }
	    pushback(c);
	    return tLSHFT;
	}
	pushback(c);
	return '<';

      case '>':
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	if ((c = nextc()) == '=') {
	    return tGEQ;
	}
	if (c == '>') {
	    if ((c = nextc()) == '=') {
                set_yylval_id(tRSHFT);
		lex_state = EXPR_BEG;
		return tOP_ASGN;
	    }
	    pushback(c);
	    return tRSHFT;
	}
	pushback(c);
	return '>';

      case '"':
	lex_strterm = NEW_STRTERM(str_dquote, '"', 0);
	return tSTRING_BEG;

      case '`':
	if (lex_state == EXPR_FNAME) {
	    lex_state = EXPR_END;
	    return c;
	}
	if (lex_state == EXPR_DOT) {
	    if (cmd_state)
		lex_state = EXPR_CMDARG;
	    else
		lex_state = EXPR_ARG;
	    return c;
	}
	lex_strterm = NEW_STRTERM(str_xquote, '`', 0);
	return tXSTRING_BEG;

      case '\'':
	lex_strterm = NEW_STRTERM(str_squote, '\'', 0);
	return tSTRING_BEG;

      case '?':
	if (lex_state == EXPR_END ||
	    lex_state == EXPR_ENDARG) {
	    lex_state = EXPR_VALUE;
	    return '?';
	}
	c = nextc();
	if (c == -1) {
	    compile_error(PARSER_ARG "incomplete character syntax");
	    return 0;
	}
	if (rb_enc_isspace(c, parser->enc)) {
	    if (!IS_ARG()) {
		int c2 = 0;
		switch (c) {
		  case ' ':
		    c2 = 's';
		    break;
		  case '\n':
		    c2 = 'n';
		    break;
		  case '\t':
		    c2 = 't';
		    break;
		  case '\v':
		    c2 = 'v';
		    break;
		  case '\r':
		    c2 = 'r';
		    break;
		  case '\f':
		    c2 = 'f';
		    break;
		}
		if (c2) {
		    rb_warnI("invalid character syntax; use ?\\%c", c2);
		}
	    }
	  ternary:
	    pushback(c);
	    lex_state = EXPR_VALUE;
	    return '?';
	}
	newtok();
	enc = parser->enc;
	if (!parser_isascii()) {
	    if (tokadd_mbchar(c) == -1) return 0;
	}
	else if ((rb_enc_isalnum(c, parser->enc) || c == '_') &&
		 lex_p < lex_pend && is_identchar(lex_p, lex_pend, parser->enc)) {
	    goto ternary;
	}
        else if (c == '\\') {
            if (peek('u')) {
                nextc();
                c = parser_tokadd_utf8(parser, &enc, 0, 0, 0);
                if (0x80 <= c) {
                    tokaddmbc(c, enc);
                }
                else {
                    tokadd(c);
                }
            }
            else {
                c = read_escape(0, &enc);
                tokadd(c);
            }
        }
        else {
	    tokadd(c);
        }
	tokfix();
	set_yylval_str(STR_NEW3(tok(), toklen(), enc, 0));
	lex_state = EXPR_ENDARG;
	return tCHAR;

      case '&':
	if ((c = nextc()) == '&') {
	    lex_state = EXPR_BEG;
	    if ((c = nextc()) == '=') {
                set_yylval_id(tANDOP);
		lex_state = EXPR_BEG;
		return tOP_ASGN;
	    }
	    pushback(c);
	    return tANDOP;
	}
	else if (c == '=') {
            set_yylval_id('&');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	pushback(c);
	if (IS_ARG() && space_seen && !ISSPACE(c)) {
	    rb_warning0("`&' interpreted as argument prefix");
	    c = tAMPER;
	}
	else if (IS_BEG()) {
	    c = tAMPER;
	}
	else {
	    c = '&';
	}
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG;
	}
	return c;

      case '|':
	if ((c = nextc()) == '|') {
	    lex_state = EXPR_BEG;
	    if ((c = nextc()) == '=') {
                set_yylval_id(tOROP);
		lex_state = EXPR_BEG;
		return tOP_ASGN;
	    }
	    pushback(c);
	    return tOROP;
	}
	if (c == '=') {
            set_yylval_id('|');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	if (lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
	    lex_state = EXPR_ARG;
	}
	else {
	    lex_state = EXPR_BEG;
	}
	pushback(c);
	return '|';

      case '+':
	c = nextc();
	if (lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
	    lex_state = EXPR_ARG;
	    if (c == '@') {
		return tUPLUS;
	    }
	    pushback(c);
	    return '+';
	}
	if (c == '=') {
            set_yylval_id('+');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	if (IS_BEG() ||
	    (IS_ARG() && space_seen && !ISSPACE(c))) {
	    if (IS_ARG()) arg_ambiguous();
	    lex_state = EXPR_BEG;
	    pushback(c);
	    if (ISDIGIT(c)) {
		c = '+';
		goto start_num;
	    }
	    return tUPLUS;
	}
	lex_state = EXPR_BEG;
	pushback(c);
	return '+';

      case '-':
	c = nextc();
	if (lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
	    lex_state = EXPR_ARG;
	    if (c == '@') {
		return tUMINUS;
	    }
	    pushback(c);
	    return '-';
	}
	if (c == '=') {
            set_yylval_id('-');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	if (c == '>') {
	    lex_state = EXPR_ARG;
	    return tLAMBDA;
	}
	if (IS_BEG() ||
	    (IS_ARG() && space_seen && !ISSPACE(c))) {
	    if (IS_ARG()) arg_ambiguous();
	    lex_state = EXPR_BEG;
	    pushback(c);
	    if (ISDIGIT(c)) {
		return tUMINUS_NUM;
	    }
	    return tUMINUS;
	}
	lex_state = EXPR_BEG;
	pushback(c);
	return '-';

      case '.':
	lex_state = EXPR_BEG;
	if ((c = nextc()) == '.') {
	    if ((c = nextc()) == '.') {
		return tDOT3;
	    }
	    pushback(c);
	    return tDOT2;
	}
	pushback(c);
	if (ISDIGIT(c)) {
	    yyerror("no .<digit> floating literal anymore; put 0 before dot");
	}
	lex_state = EXPR_DOT;
	return '.';

      start_num:
      case '0': case '1': case '2': case '3': case '4':
      case '5': case '6': case '7': case '8': case '9':
	{
	    int is_float, seen_point, seen_e, nondigit;

	    is_float = seen_point = seen_e = nondigit = 0;
	    lex_state = EXPR_ENDARG;
	    newtok();
	    if (c == '-' || c == '+') {
		tokadd(c);
		c = nextc();
	    }
	    if (c == '0') {
		int start = toklen();
		c = nextc();
		if (c == 'x' || c == 'X') {
		    /* hexadecimal */
		    c = nextc();
		    if (ISXDIGIT(c)) {
			do {
			    if (c == '_') {
				if (nondigit) break;
				nondigit = c;
				continue;
			    }
			    if (!ISXDIGIT(c)) break;
			    nondigit = 0;
			    tokadd(c);
			} while ((c = nextc()) != -1);
		    }
		    pushback(c);
		    tokfix();
		    if (toklen() == start) {
			yyerror("numeric literal without digits");
		    }
		    else if (nondigit) goto trailing_uc;
                    set_yylval_literal(rb_cstr_to_inum(tok(), 16, Qfalse));
		    return tINTEGER;
		}
		if (c == 'b' || c == 'B') {
		    /* binary */
		    c = nextc();
		    if (c == '0' || c == '1') {
			do {
			    if (c == '_') {
				if (nondigit) break;
				nondigit = c;
				continue;
			    }
			    if (c != '0' && c != '1') break;
			    nondigit = 0;
			    tokadd(c);
			} while ((c = nextc()) != -1);
		    }
		    pushback(c);
		    tokfix();
		    if (toklen() == start) {
			yyerror("numeric literal without digits");
		    }
		    else if (nondigit) goto trailing_uc;
                    set_yylval_literal(rb_cstr_to_inum(tok(), 2, Qfalse));
		    return tINTEGER;
		}
		if (c == 'd' || c == 'D') {
		    /* decimal */
		    c = nextc();
		    if (ISDIGIT(c)) {
			do {
			    if (c == '_') {
				if (nondigit) break;
				nondigit = c;
				continue;
			    }
			    if (!ISDIGIT(c)) break;
			    nondigit = 0;
			    tokadd(c);
			} while ((c = nextc()) != -1);
		    }
		    pushback(c);
		    tokfix();
		    if (toklen() == start) {
			yyerror("numeric literal without digits");
		    }
		    else if (nondigit) goto trailing_uc;
                    set_yylval_literal(rb_cstr_to_inum(tok(), 10, Qfalse));
		    return tINTEGER;
		}
		if (c == '_') {
		    /* 0_0 */
		    goto octal_number;
		}
		if (c == 'o' || c == 'O') {
		    /* prefixed octal */
		    c = nextc();
		    if (c == '_' || !ISDIGIT(c)) {
			yyerror("numeric literal without digits");
		    }
		}
		if (c >= '0' && c <= '7') {
		    /* octal */
		  octal_number:
	            do {
			if (c == '_') {
			    if (nondigit) break;
			    nondigit = c;
			    continue;
			}
			if (c < '0' || c > '7') break;
			nondigit = 0;
			tokadd(c);
		    } while ((c = nextc()) != -1);
		    if (toklen() > start) {
			pushback(c);
			tokfix();
			if (nondigit) goto trailing_uc;
                        set_yylval_literal(rb_cstr_to_inum(tok(), 8, Qfalse));
			return tINTEGER;
		    }
		    if (nondigit) {
			pushback(c);
			goto trailing_uc;
		    }
		}
		if (c > '7' && c <= '9') {
		    yyerror("Invalid octal digit");
		}
		else if (c == '.' || c == 'e' || c == 'E') {
		    tokadd('0');
		}
		else {
		    pushback(c);
                    set_yylval_literal(INT2FIX(0));
		    return tINTEGER;
		}
	    }

	    for (;;) {
		switch (c) {
		  case '0': case '1': case '2': case '3': case '4':
		  case '5': case '6': case '7': case '8': case '9':
		    nondigit = 0;
		    tokadd(c);
		    break;

		  case '.':
		    if (nondigit) goto trailing_uc;
		    if (seen_point || seen_e) {
			goto decode_num;
		    }
		    else {
			int c0 = nextc();
			if (!ISDIGIT(c0)) {
			    pushback(c0);
			    goto decode_num;
			}
			c = c0;
		    }
		    tokadd('.');
		    tokadd(c);
		    is_float++;
		    seen_point++;
		    nondigit = 0;
		    break;

		  case 'e':
		  case 'E':
		    if (nondigit) {
			pushback(c);
			c = nondigit;
			goto decode_num;
		    }
		    if (seen_e) {
			goto decode_num;
		    }
		    tokadd(c);
		    seen_e++;
		    is_float++;
		    nondigit = c;
		    c = nextc();
		    if (c != '-' && c != '+') continue;
		    tokadd(c);
		    nondigit = c;
		    break;

		  case '_':	/* `_' in number just ignored */
		    if (nondigit) goto decode_num;
		    nondigit = c;
		    break;

		  default:
		    goto decode_num;
		}
		c = nextc();
	    }

	  decode_num:
	    pushback(c);
	    tokfix();
	    if (nondigit) {
		char tmp[30];
	      trailing_uc:
		sprintf(tmp, "trailing `%c' in number", nondigit);
		yyerror(tmp);
	    }
	    if (is_float) {
		double d = strtod(tok(), 0);
		if (errno == ERANGE) {
		    rb_warningS("Float %s out of range", tok());
		    errno = 0;
		}
                set_yylval_literal(DOUBLE2NUM(d));
		return tFLOAT;
	    }
            set_yylval_literal(rb_cstr_to_inum(tok(), 10, Qfalse));
	    return tINTEGER;
	}

      case ')':
      case ']':
	paren_nest--;
      case '}':
	COND_LEXPOP();
	CMDARG_LEXPOP();
	if (c == ')')
	    lex_state = EXPR_END;
	else
	    lex_state = EXPR_ENDARG;
	return c;

      case ':':
	c = nextc();
	if (c == ':') {
	    if (IS_BEG() ||
		lex_state == EXPR_CLASS || (IS_ARG() && space_seen)) {
		lex_state = EXPR_BEG;
		return tCOLON3;
	    }
	    lex_state = EXPR_DOT;
	    return tCOLON2;
	}
	if (lex_state == EXPR_END ||
	    lex_state == EXPR_ENDARG || ISSPACE(c)) {
	    pushback(c);
	    lex_state = EXPR_BEG;
	    return ':';
	}
	switch (c) {
	  case '\'':
	    lex_strterm = NEW_STRTERM(str_ssym, c, 0);
	    break;
	  case '"':
	    lex_strterm = NEW_STRTERM(str_dsym, c, 0);
	    break;
	  default:
	    pushback(c);
	    break;
	}
	lex_state = EXPR_FNAME;
	return tSYMBEG;

      case '/':
	if (IS_BEG()) {
	    lex_strterm = NEW_STRTERM(str_regexp, '/', 0);
	    return tREGEXP_BEG;
	}
	if ((c = nextc()) == '=') {
            set_yylval_id('/');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	pushback(c);
	if (IS_ARG() && space_seen) {
	    if (!ISSPACE(c)) {
		arg_ambiguous();
		lex_strterm = NEW_STRTERM(str_regexp, '/', 0);
		return tREGEXP_BEG;
	    }
	}
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	return '/';

      case '^':
	if ((c = nextc()) == '=') {
            set_yylval_id('^');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	pushback(c);
	return '^';

      case ';':
	lex_state = EXPR_BEG;
	command_start = Qtrue;
	return ';';

      case ',':
	lex_state = EXPR_BEG;
	return ',';

      case '~':
	if (lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
	    if ((c = nextc()) != '@') {
		pushback(c);
	    }
	    lex_state = EXPR_ARG;
	}
	else {
	    lex_state = EXPR_BEG;
	}
	return '~';

      case '(':
	if (IS_BEG()) {
	    c = tLPAREN;
	}
	else if (space_seen) {
	    if (IS_ARG()) {
		c = tLPAREN_ARG;
	    }
	}
	paren_nest++;
	COND_PUSH(0);
	CMDARG_PUSH(0);
	lex_state = EXPR_BEG;
	return c;

      case '[':
	paren_nest++;
	if (lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
	    lex_state = EXPR_ARG;
	    if ((c = nextc()) == ']') {
		if ((c = nextc()) == '=') {
		    return tASET;
		}
		pushback(c);
		return tAREF;
	    }
	    pushback(c);
	    return '[';
	}
	else if (IS_BEG()) {
	    c = tLBRACK;
	}
	else if (IS_ARG() && space_seen) {
	    c = tLBRACK;
	}
	lex_state = EXPR_BEG;
	COND_PUSH(0);
	CMDARG_PUSH(0);
	return c;

      case '{':
	if (lpar_beg && lpar_beg == paren_nest) {
	    lex_state = EXPR_BEG;
	    lpar_beg = 0;
	    --paren_nest;
	    return tLAMBEG;
	}
	if (IS_ARG() || lex_state == EXPR_END)
	    c = '{';          /* block (primary) */
	else if (lex_state == EXPR_ENDARG)
	    c = tLBRACE_ARG;  /* block (expr) */
	else
	    c = tLBRACE;      /* hash */
	COND_PUSH(0);
	CMDARG_PUSH(0);
	lex_state = EXPR_BEG;
	if (c != tLBRACE) command_start = Qtrue;
	return c;

      case '\\':
	c = nextc();
	if (c == '\n') {
	    space_seen = 1;
#ifdef RIPPER
	    ripper_dispatch_scan_event(parser, tSP);
#endif
	    goto retry; /* skip \\n */
	}
	pushback(c);
	return '\\';

      case '%':
	if (IS_BEG()) {
	    int term;
	    int paren;

	    c = nextc();
	  quotation:
	    if (!ISALNUM(c)) {
		term = c;
		c = 'Q';
	    }
	    else {
		term = nextc();
		if (rb_enc_isalnum(term, parser->enc) || !parser_isascii()) {
		    yyerror("unknown type of %string");
		    return 0;
		}
	    }
	    if (c == -1 || term == -1) {
		compile_error(PARSER_ARG "unterminated quoted string meets end of file");
		return 0;
	    }
	    paren = term;
	    if (term == '(') term = ')';
	    else if (term == '[') term = ']';
	    else if (term == '{') term = '}';
	    else if (term == '<') term = '>';
	    else paren = 0;

	    switch (c) {
	      case 'Q':
		lex_strterm = NEW_STRTERM(str_dquote, term, paren);
		return tSTRING_BEG;

	      case 'q':
		lex_strterm = NEW_STRTERM(str_squote, term, paren);
		return tSTRING_BEG;

	      case 'W':
		lex_strterm = NEW_STRTERM(str_dword, term, paren);
		do {c = nextc();} while (ISSPACE(c));
		pushback(c);
		return tWORDS_BEG;

	      case 'w':
		lex_strterm = NEW_STRTERM(str_sword, term, paren);
		do {c = nextc();} while (ISSPACE(c));
		pushback(c);
		return tQWORDS_BEG;

	      case 'x':
		lex_strterm = NEW_STRTERM(str_xquote, term, paren);
		return tXSTRING_BEG;

	      case 'r':
		lex_strterm = NEW_STRTERM(str_regexp, term, paren);
		return tREGEXP_BEG;

	      case 's':
		lex_strterm = NEW_STRTERM(str_ssym, term, paren);
		lex_state = EXPR_FNAME;
		return tSYMBEG;

	      default:
		yyerror("unknown type of %string");
		return 0;
	    }
	}
	if ((c = nextc()) == '=') {
            set_yylval_id('%');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	if (IS_ARG() && space_seen && !ISSPACE(c)) {
	    goto quotation;
	}
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	pushback(c);
	return '%';

      case '$':
	last_state = lex_state;
	lex_state = EXPR_ENDARG;
	newtok();
	c = nextc();
	switch (c) {
	  case '_':		/* $_: last read line string */
	    c = nextc();
	    if (parser_is_identchar()) {
		tokadd('$');
		tokadd('_');
		break;
	    }
	    pushback(c);
	    c = '_';
	    /* fall through */
	  case '~':		/* $~: match-data */
	  case '*':		/* $*: argv */
	  case '$':		/* $$: pid */
	  case '?':		/* $?: last status */
	  case '!':		/* $!: error string */
	  case '@':		/* $@: error position */
	  case '/':		/* $/: input record separator */
	  case '\\':		/* $\: output record separator */
	  case ';':		/* $;: field separator */
	  case ',':		/* $,: output field separator */
	  case '.':		/* $.: last read line number */
	  case '=':		/* $=: ignorecase */
	  case ':':		/* $:: load path */
	  case '<':		/* $<: reading filename */
	  case '>':		/* $>: default output handle */
	  case '\"':		/* $": already loaded files */
	    tokadd('$');
	    tokadd(c);
	    tokfix();
            set_yylval_id(rb_intern(tok()));
	    return tGVAR;

	  case '-':
	    tokadd('$');
	    tokadd(c);
	    c = nextc();
	    if (parser_is_identchar()) {
		if (tokadd_mbchar(c) == -1) return 0;
	    }
	    else {
		pushback(c);
	    }
	  gvar:
	    tokfix();
            set_yylval_id(rb_intern(tok()));
	    return tGVAR;

	  case '&':		/* $&: last match */
	  case '`':		/* $`: string before last match */
	  case '\'':		/* $': string after last match */
	  case '+':		/* $+: string matches last paren. */
	    if (last_state == EXPR_FNAME) {
		tokadd('$');
		tokadd(c);
		goto gvar;
	    }
	    set_yylval_node(NEW_BACK_REF(c));
	    return tBACK_REF;

	  case '1': case '2': case '3':
	  case '4': case '5': case '6':
	  case '7': case '8': case '9':
	    tokadd('$');
	    do {
		tokadd(c);
		c = nextc();
	    } while (ISDIGIT(c));
	    pushback(c);
	    if (last_state == EXPR_FNAME) goto gvar;
	    tokfix();
	    set_yylval_node(NEW_NTH_REF(atoi(tok()+1)));
	    return tNTH_REF;

	  default:
	    if (!parser_is_identchar()) {
		pushback(c);
		return '$';
	    }
	  case '0':
	    tokadd('$');
	}
	break;

      case '@':
	c = nextc();
	newtok();
	tokadd('@');
	if (c == '@') {
	    tokadd('@');
	    c = nextc();
	}
	if (ISDIGIT(c)) {
	    if (tokidx == 1) {
		compile_error(PARSER_ARG "`@%c' is not allowed as an instance variable name", c);
	    }
	    else {
		compile_error(PARSER_ARG "`@@%c' is not allowed as a class variable name", c);
	    }
	    return 0;
	}
	if (!parser_is_identchar()) {
	    pushback(c);
	    return '@';
	}
	break;

      case '_':
	if (was_bol() && whole_match_p("__END__", 7, 0)) {
	    ruby__end__seen = 1;
	    parser->eofp = Qtrue;
#ifndef RIPPER
	    return -1;
#else
            lex_goto_eol(parser);
            ripper_dispatch_scan_event(parser, k__END__);
            return 0;
#endif
	}
	newtok();
	break;

      default:
	if (!parser_is_identchar()) {
	    rb_compile_error(PARSER_ARG  "Invalid char `\\x%02X' in expression", c);
	    goto retry;
	}

	newtok();
	break;
    }

    mb = ENC_CODERANGE_7BIT;
    do {
	if (!ISASCII(c)) mb = ENC_CODERANGE_UNKNOWN;
	if (tokadd_mbchar(c) == -1) return 0;
	c = nextc();
    } while (parser_is_identchar());
    switch (tok()[0]) {
      case '@': case '$':
	pushback(c);
	break;
      default:
	if ((c == '!' || c == '?') && !peek('=')) {
	    tokadd(c);
	}
	else {
	    pushback(c);
	}
    }
    tokfix();

    {
	int result = 0;

	last_state = lex_state;
	switch (tok()[0]) {
	  case '$':
	    lex_state = EXPR_ENDARG;
	    result = tGVAR;
	    break;
	  case '@':
	    lex_state = EXPR_ENDARG;
	    if (tok()[1] == '@')
		result = tCVAR;
	    else
		result = tIVAR;
	    break;

	  default:
	    if (toklast() == '!' || toklast() == '?') {
		result = tFID;
	    }
	    else {
		if (lex_state == EXPR_FNAME) {
		    if ((c = nextc()) == '=' && !peek('~') && !peek('>') &&
			(!peek('=') || (lex_p + 1 < lex_pend && lex_p[1] == '>'))) {
			result = tIDENTIFIER;
			tokadd(c);
			tokfix();
		    }
		    else {
			pushback(c);
		    }
		}
		if (result == 0 && ISUPPER(tok()[0])) {
		    result = tCONSTANT;
		}
		else {
		    result = tIDENTIFIER;
		}
	    }

	    if (mb == ENC_CODERANGE_7BIT && lex_state != EXPR_DOT) {
		const struct kwtable *kw;

		/* See if it is a reserved word.  */
		kw = rb_reserved_word(tok(), toklen());
		if (kw) {
		    enum lex_state_e state = lex_state;
		    lex_state = kw->state;
		    if (state == EXPR_FNAME) {
                        set_yylval_id(rb_intern(kw->name));
			return kw->id[0];
		    }
		    if (kw->id[0] == keyword_do) {
			command_start = Qtrue;
			if (lpar_beg && lpar_beg == paren_nest) {
			    lpar_beg = 0;
			    --paren_nest;
			    return keyword_do_LAMBDA;
			}
			if (COND_P()) return keyword_do_cond;
			if (CMDARG_P() && state != EXPR_CMDARG)
			    return keyword_do_block;
			if (state == EXPR_ENDARG || state == EXPR_BEG)
			    return keyword_do_block;
			return keyword_do;
		    }
		    if (state == EXPR_BEG || state == EXPR_VALUE)
			return kw->id[0];
		    else {
			if (kw->id[0] != kw->id[1])
			    lex_state = EXPR_BEG;
			return kw->id[1];
		    }
		}
	    }

	    if ((lex_state == EXPR_BEG && !cmd_state) ||
		lex_state == EXPR_ARG ||
		lex_state == EXPR_CMDARG) {
		if (peek(':') && !(lex_p + 1 < lex_pend && lex_p[1] == ':')) {
		    lex_state = EXPR_BEG;
		    nextc();
		    set_yylval_id(TOK_INTERN(!ENC_SINGLE(mb)));
		    return tLABEL;
		}
	    }
	    if (IS_BEG() ||
		lex_state == EXPR_DOT ||
		IS_ARG()) {
		if (cmd_state) {
		    lex_state = EXPR_CMDARG;
		}
		else {
		    lex_state = EXPR_ARG;
		}
	    }
	    else {
		lex_state = EXPR_END;
	    }
	}
        {
            ID ident = TOK_INTERN(!ENC_SINGLE(mb));

            set_yylval_id(ident);
            if (last_state != EXPR_DOT && is_local_id(ident) && lvar_defined(ident)) {
                lex_state = EXPR_END;
            }
        }
	return result;
    }
}

#if YYPURE
static int
yylex(void *lval, void *p)
#else
yylex(void *p)
#endif
{
    struct parser_params *parser = (struct parser_params*)p;
    int t;

#if YYPURE
    parser->parser_yylval = (union tmpyystype*)lval;
    parser->parser_yylval->val = Qundef;
#endif
    t = parser_yylex(parser);
#ifdef RIPPER
    if (!NIL_P(parser->delayed)) {
	ripper_dispatch_delayed_token(parser, t);
	return t;
    }
    if (t != 0)
	ripper_dispatch_scan_event(parser, t);
#endif

    return t;
}

#ifndef RIPPER
static NODE*
node_newnode(struct parser_params *parser, enum node_type type, VALUE a0, VALUE a1, VALUE a2)
{
    NODE *n = (rb_node_newnode)(type, a0, a1, a2);
    nd_set_line(n, ruby_sourceline);
    return n;
}

enum node_type
nodetype(NODE *node)			/* for debug */
{
    return (enum node_type)nd_type(node);
}

int
nodeline(NODE *node)
{
    return nd_line(node);
}

static NODE*
newline_node(NODE *node)
{
    if (node) {
	node = remove_begin(node);
	node->flags |= NODE_FL_NEWLINE;
    }
    return node;
}

static void
fixpos(NODE *node, NODE *orig)
{
    if (!node) return;
    if (!orig) return;
    if (orig == (NODE*)1) return;
    nd_set_line(node, nd_line(orig));
}

static void
parser_warning(struct parser_params *parser, NODE *node, const char *mesg)
{
    rb_compile_warning(ruby_sourcefile, nd_line(node), "%s", mesg);
}
#define parser_warning(node, mesg) parser_warning(parser, node, mesg)

static void
parser_warn(struct parser_params *parser, NODE *node, const char *mesg)
{
    rb_compile_warn(ruby_sourcefile, nd_line(node), "%s", mesg);
}
#define parser_warn(node, mesg) parser_warn(parser, node, mesg)

static NODE*
block_append_gen(struct parser_params *parser, NODE *head, NODE *tail)
{
    NODE *end, *h = head, *nd;

    if (tail == 0) return head;

    if (h == 0) return tail;
    switch (nd_type(h)) {
      case NODE_LIT:
      case NODE_STR:
      case NODE_SELF:
      case NODE_TRUE:
      case NODE_FALSE:
      case NODE_NIL:
	parser_warning(h, "unused literal ignored");
	return tail;
      default:
	h = end = NEW_BLOCK(head);
	end->nd_end = end;
	fixpos(end, head);
	head = end;
	break;
      case NODE_BLOCK:
	end = h->nd_end;
	break;
    }

    nd = end->nd_head;
    switch (nd_type(nd)) {
      case NODE_RETURN:
      case NODE_BREAK:
      case NODE_NEXT:
      case NODE_REDO:
      case NODE_RETRY:
	if (RTEST(ruby_verbose)) {
	    parser_warning(nd, "statement not reached");
	}
	break;

      default:
	break;
    }

    if (nd_type(tail) != NODE_BLOCK) {
	tail = NEW_BLOCK(tail);
	tail->nd_end = tail;
    }
    end->nd_next = tail;
    h->nd_end = tail->nd_end;
    return head;
}

/* append item to the list */
static NODE*
list_append_gen(struct parser_params *parser, NODE *list, NODE *item)
{
    NODE *last;

    if (list == 0) return NEW_LIST(item);
    if (list->nd_next) {
	last = list->nd_next->nd_end;
    }
    else {
	last = list;
    }

    list->nd_alen += 1;
    last->nd_next = NEW_LIST(item);
    list->nd_next->nd_end = last->nd_next;
    return list;
}

/* concat two lists */
static NODE*
list_concat_gen(struct parser_params *parser, NODE *head, NODE *tail)
{
    NODE *last;

    if (head->nd_next) {
	last = head->nd_next->nd_end;
    }
    else {
	last = head;
    }

    head->nd_alen += tail->nd_alen;
    last->nd_next = tail;
    if (tail->nd_next) {
	head->nd_next->nd_end = tail->nd_next->nd_end;
    }
    else {
	head->nd_next->nd_end = tail;
    }

    return head;
}

static int
literal_concat0(struct parser_params *parser, VALUE head, VALUE tail)
{
    if (!rb_enc_compatible(head, tail)) {
	compile_error(PARSER_ARG "string literal encodings differ (%s / %s)",
		      rb_enc_name(rb_enc_get(head)),
		      rb_enc_name(rb_enc_get(tail)));
	rb_str_resize(head, 0);
	rb_str_resize(tail, 0);
	return 0;
    }
    rb_str_buf_append(head, tail);
    return 1;
}

/* concat two string literals */
static NODE *
literal_concat_gen(struct parser_params *parser, NODE *head, NODE *tail)
{
    enum node_type htype;

    if (!head) return tail;
    if (!tail) return head;

    htype = nd_type(head);
    if (htype == NODE_EVSTR) {
	NODE *node = NEW_DSTR(STR_NEW0());
	head = list_append(node, head);
    }
    switch (nd_type(tail)) {
      case NODE_STR:
	if (htype == NODE_STR) {
	    if (!literal_concat0(parser, head->nd_lit, tail->nd_lit)) {
	      error:
		rb_gc_force_recycle((VALUE)head);
		rb_gc_force_recycle((VALUE)tail);
		return 0;
	    }
	    rb_gc_force_recycle((VALUE)tail);
	}
	else {
	    list_append(head, tail);
	}
	break;

      case NODE_DSTR:
	if (htype == NODE_STR) {
	    if (!literal_concat0(parser, head->nd_lit, tail->nd_lit))
		goto error;
	    tail->nd_lit = head->nd_lit;
	    rb_gc_force_recycle((VALUE)head);
	    head = tail;
	}
	else {
	    nd_set_type(tail, NODE_ARRAY);
	    tail->nd_head = NEW_STR(tail->nd_lit);
	    list_concat(head, tail);
	}
	break;

      case NODE_EVSTR:
	if (htype == NODE_STR) {
	    nd_set_type(head, NODE_DSTR);
	    head->nd_alen = 1;
	}
	list_append(head, tail);
	break;
    }
    return head;
}

static NODE *
evstr2dstr_gen(struct parser_params *parser, NODE *node)
{
    if (nd_type(node) == NODE_EVSTR) {
	node = list_append(NEW_DSTR(STR_NEW0()), node);
    }
    return node;
}

static NODE *
new_evstr_gen(struct parser_params *parser, NODE *node)
{
    NODE *head = node;

    if (node) {
	switch (nd_type(node)) {
	  case NODE_STR: case NODE_DSTR: case NODE_EVSTR:
	    return node;
	}
    }
    return NEW_EVSTR(head);
}

static NODE *
call_bin_op_gen(struct parser_params *parser, NODE *recv, ID id, NODE *arg1)
{
    value_expr(recv);
    value_expr(arg1);
    return NEW_CALL(recv, id, NEW_LIST(arg1));
}

static NODE *
call_uni_op_gen(struct parser_params *parser, NODE *recv, ID id)
{
    value_expr(recv);
    return NEW_CALL(recv, id, 0);
}

static NODE*
match_op_gen(struct parser_params *parser, NODE *node1, NODE *node2)
{
    value_expr(node1);
    value_expr(node2);
    if (node1) {
	switch (nd_type(node1)) {
	  case NODE_DREGX:
	  case NODE_DREGX_ONCE:
	    return NEW_MATCH2(node1, node2);

	  case NODE_LIT:
	    if (TYPE(node1->nd_lit) == T_REGEXP) {
		return NEW_MATCH2(node1, node2);
	    }
	}
    }

    if (node2) {
	switch (nd_type(node2)) {
	  case NODE_DREGX:
	  case NODE_DREGX_ONCE:
	    return NEW_MATCH3(node2, node1);

	  case NODE_LIT:
	    if (TYPE(node2->nd_lit) == T_REGEXP) {
		return NEW_MATCH3(node2, node1);
	    }
	}
    }

    return NEW_CALL(node1, tMATCH, NEW_LIST(node2));
}

static NODE*
gettable_gen(struct parser_params *parser, ID id)
{
    if (id == keyword_self) {
	return NEW_SELF();
    }
    else if (id == keyword_nil) {
	return NEW_NIL();
    }
    else if (id == keyword_true) {
	return NEW_TRUE();
    }
    else if (id == keyword_false) {
	return NEW_FALSE();
    }
    else if (id == keyword__FILE__) {
	return NEW_STR(STR_NEW2(ruby_sourcefile));
    }
    else if (id == keyword__LINE__) {
	return NEW_LIT(INT2FIX(ruby_sourceline));
    }
    else if (id == keyword__ENCODING__) {
	return NEW_LIT(rb_enc_from_encoding(parser->enc));
    }
    else if (is_local_id(id)) {
	if (dyna_in_block() && dvar_defined(id)) return NEW_DVAR(id);
	if (local_id(id)) return NEW_LVAR(id);
	/* method call without arguments */
	return NEW_VCALL(id);
    }
    else if (is_global_id(id)) {
	return NEW_GVAR(id);
    }
    else if (is_instance_id(id)) {
	return NEW_IVAR(id);
    }
    else if (is_const_id(id)) {
	return NEW_CONST(id);
    }
    else if (is_class_id(id)) {
	return NEW_CVAR(id);
    }
    compile_error(PARSER_ARG "identifier %s is not valid to get", rb_id2name(id));
    return 0;
}

static NODE*
assignable_gen(struct parser_params *parser, ID id, NODE *val)
{
    if (!id) return 0;
    if (id == keyword_self) {
	yyerror("Can't change the value of self");
    }
    else if (id == keyword_nil) {
	yyerror("Can't assign to nil");
    }
    else if (id == keyword_true) {
	yyerror("Can't assign to true");
    }
    else if (id == keyword_false) {
	yyerror("Can't assign to false");
    }
    else if (id == keyword__FILE__) {
	yyerror("Can't assign to __FILE__");
    }
    else if (id == keyword__LINE__) {
	yyerror("Can't assign to __LINE__");
    }
    else if (id == keyword__ENCODING__) {
	yyerror("Can't assign to __ENCODING__");
    }
    else if (is_local_id(id)) {
	if (dyna_in_block()) {
	    if (dvar_curr(id)) {
		return NEW_DASGN_CURR(id, val);
	    }
	    else if (dvar_defined(id)) {
		return NEW_DASGN(id, val);
	    }
	    else if (local_id(id)) {
		return NEW_LASGN(id, val);
	    }
	    else{
		dyna_var(id);
		return NEW_DASGN_CURR(id, val);
	    }
	}
	else {
	    if (!local_id(id)) {
		local_var(id);
	    }
	    return NEW_LASGN(id, val);
	}
    }
    else if (is_global_id(id)) {
	return NEW_GASGN(id, val);
    }
    else if (is_instance_id(id)) {
	return NEW_IASGN(id, val);
    }
    else if (is_const_id(id)) {
	if (in_def || in_single)
	    yyerror("dynamic constant assignment");
	return NEW_CDECL(id, val, 0);
    }
    else if (is_class_id(id)) {
	return NEW_CVASGN(id, val);
    }
    else {
	compile_error(PARSER_ARG "identifier %s is not valid to set", rb_id2name(id));
    }
    return 0;
}

static void
shadowing_lvar_gen(struct parser_params *parser, ID name)
{
    ID uscore;

    CONST_ID(uscore, "_");
    if (uscore == name) return;
    if (dyna_in_block()) {
	if (dvar_curr(name)) {
	    yyerror("duplicated argument name");
	}
	else if (dvar_defined(name) || local_id(name)) {
	    rb_warningS("shadowing outer local variable - %s", rb_id2name(name));
	    vtable_add(lvtbl->vars, name);
	}
    }
    else {
	if (local_id(name)) {
	    yyerror("duplicated argument name");
	}
    }
}

static void
new_bv_gen(struct parser_params *parser, ID name)
{
    if (!name) return;
    if (!is_local_id(name)) {
	compile_error(PARSER_ARG "invalid local variable - %s",
		      rb_id2name(name));
	return;
    }
    shadowing_lvar(name);
    dyna_var(name);
}

static NODE *
aryset_gen(struct parser_params *parser, NODE *recv, NODE *idx)
{
    if (recv && nd_type(recv) == NODE_SELF)
	recv = (NODE *)1;
    return NEW_ATTRASGN(recv, tASET, idx);
}

static void
block_dup_check_gen(struct parser_params *parser, NODE *node1, NODE *node2)
{
    if (node2 && node1 && nd_type(node1) == NODE_BLOCK_PASS) {
	compile_error(PARSER_ARG "both block arg and actual block given");
    }
}

ID
rb_id_attrset(ID id)
{
    id &= ~ID_SCOPE_MASK;
    id |= ID_ATTRSET;
    return id;
}

static NODE *
attrset_gen(struct parser_params *parser, NODE *recv, ID id)
{
    if (recv && nd_type(recv) == NODE_SELF)
	recv = (NODE *)1;
    return NEW_ATTRASGN(recv, rb_id_attrset(id), 0);
}

static void
rb_backref_error_gen(struct parser_params *parser, NODE *node)
{
    switch (nd_type(node)) {
      case NODE_NTH_REF:
	compile_error(PARSER_ARG "Can't set variable $%ld", node->nd_nth);
	break;
      case NODE_BACK_REF:
	compile_error(PARSER_ARG "Can't set variable $%c", (int)node->nd_nth);
	break;
    }
}

static NODE *
arg_concat_gen(struct parser_params *parser, NODE *node1, NODE *node2)
{
    if (!node2) return node1;
    switch (nd_type(node1)) {
      case NODE_BLOCK_PASS:
	node1->nd_iter = arg_concat(node1->nd_iter, node2);
	return node1;
      case NODE_ARGSPUSH:
	if (nd_type(node2) != NODE_ARRAY) break;
	node1->nd_body = list_concat(NEW_LIST(node1->nd_body), node2);
	nd_set_type(node1, NODE_ARGSCAT);
	return node1;
      case NODE_ARGSCAT:
	if (nd_type(node2) != NODE_ARRAY) break;
	node1->nd_body = list_concat(node1->nd_body, node2);
	return node1;
    }
    return NEW_ARGSCAT(node1, node2);
}

static NODE *
arg_append_gen(struct parser_params *parser, NODE *node1, NODE *node2)
{
    if (!node1) return NEW_LIST(node2);
    switch (nd_type(node1))  {
      case NODE_ARRAY:
	return list_append(node1, node2);
      case NODE_BLOCK_PASS:
	node1->nd_head = arg_append(node1->nd_head, node2);
	return node1;
      case NODE_ARGSPUSH:
	node1->nd_body = list_append(NEW_LIST(node1->nd_body), node2);
	nd_set_type(node1, NODE_ARGSCAT);
	return node1;
    }
    return NEW_ARGSPUSH(node1, node2);
}

static NODE *
splat_array(NODE* node)
{
    if (nd_type(node) == NODE_SPLAT) node = node->nd_head;
    if (nd_type(node) == NODE_ARRAY) return node;
    return 0;
}

static NODE *
node_assign_gen(struct parser_params *parser, NODE *lhs, NODE *rhs)
{
    if (!lhs) return 0;

    switch (nd_type(lhs)) {
      case NODE_GASGN:
      case NODE_IASGN:
      case NODE_IASGN2:
      case NODE_LASGN:
      case NODE_DASGN:
      case NODE_DASGN_CURR:
      case NODE_MASGN:
      case NODE_CDECL:
      case NODE_CVASGN:
	lhs->nd_value = rhs;
	break;

      case NODE_ATTRASGN:
      case NODE_CALL:
	lhs->nd_args = arg_append(lhs->nd_args, rhs);
	break;

      default:
	/* should not happen */
	break;
    }

    return lhs;
}

static int
value_expr_gen(struct parser_params *parser, NODE *node)
{
    int cond = 0;

    if (!node) {
	rb_warning0("empty expression");
    }
    while (node) {
	switch (nd_type(node)) {
	  case NODE_DEFN:
	  case NODE_DEFS:
	    parser_warning(node, "void value expression");
	    return Qfalse;

	  case NODE_RETURN:
	  case NODE_BREAK:
	  case NODE_NEXT:
	  case NODE_REDO:
	  case NODE_RETRY:
	    if (!cond) yyerror("void value expression");
	    /* or "control never reach"? */
	    return Qfalse;

	  case NODE_BLOCK:
	    while (node->nd_next) {
		node = node->nd_next;
	    }
	    node = node->nd_head;
	    break;

	  case NODE_BEGIN:
	    node = node->nd_body;
	    break;

	  case NODE_IF:
	    if (!node->nd_body) {
		node = node->nd_else;
		break;
	    }
	    else if (!node->nd_else) {
		node = node->nd_body;
		break;
	    }
	    if (!value_expr(node->nd_body)) return Qfalse;
	    node = node->nd_else;
	    break;

	  case NODE_AND:
	  case NODE_OR:
	    cond = 1;
	    node = node->nd_2nd;
	    break;

	  default:
	    return Qtrue;
	}
    }

    return Qtrue;
}

static void
void_expr_gen(struct parser_params *parser, NODE *node)
{
    const char *useless = 0;

    if (!RTEST(ruby_verbose)) return;

    if (!node) return;
    switch (nd_type(node)) {
      case NODE_CALL:
	switch (node->nd_mid) {
	  case '+':
	  case '-':
	  case '*':
	  case '/':
	  case '%':
	  case tPOW:
	  case tUPLUS:
	  case tUMINUS:
	  case '|':
	  case '^':
	  case '&':
	  case tCMP:
	  case '>':
	  case tGEQ:
	  case '<':
	  case tLEQ:
	  case tEQ:
	  case tNEQ:
	    useless = rb_id2name(node->nd_mid);
	    break;
	}
	break;

      case NODE_LVAR:
      case NODE_DVAR:
      case NODE_GVAR:
      case NODE_IVAR:
      case NODE_CVAR:
      case NODE_NTH_REF:
      case NODE_BACK_REF:
	useless = "a variable";
	break;
      case NODE_CONST:
	useless = "a constant";
	break;
      case NODE_LIT:
      case NODE_STR:
      case NODE_DSTR:
      case NODE_DREGX:
      case NODE_DREGX_ONCE:
	useless = "a literal";
	break;
      case NODE_COLON2:
      case NODE_COLON3:
	useless = "::";
	break;
      case NODE_DOT2:
	useless = "..";
	break;
      case NODE_DOT3:
	useless = "...";
	break;
      case NODE_SELF:
	useless = "self";
	break;
      case NODE_NIL:
	useless = "nil";
	break;
      case NODE_TRUE:
	useless = "true";
	break;
      case NODE_FALSE:
	useless = "false";
	break;
      case NODE_DEFINED:
	useless = "defined?";
	break;
    }

    if (useless) {
	int line = ruby_sourceline;

	ruby_sourceline = nd_line(node);
	rb_warnS("useless use of %s in void context", useless);
	ruby_sourceline = line;
    }
}

static void
void_stmts_gen(struct parser_params *parser, NODE *node)
{
    if (!RTEST(ruby_verbose)) return;
    if (!node) return;
    if (nd_type(node) != NODE_BLOCK) return;

    for (;;) {
	if (!node->nd_next) return;
	void_expr0(node->nd_head);
	node = node->nd_next;
    }
}

static NODE *
remove_begin(NODE *node)
{
    NODE **n = &node, *n1 = node;
    while (n1 && nd_type(n1) == NODE_BEGIN && n1->nd_body) {
	*n = n1 = n1->nd_body;
    }
    return node;
}

static void
reduce_nodes_gen(struct parser_params *parser, NODE **body)
{
    NODE *node = *body;

    if (!node) {
	*body = NEW_NIL();
	return;
    }
#define subnodes(n1, n2) \
    ((!node->n1) ? (node->n2 ? (body = &node->n2, 1) : 0) : \
     (!node->n2) ? (body = &node->n1, 1) : \
     (reduce_nodes(&node->n1), body = &node->n2, 1))

    while (node) {
	switch (nd_type(node)) {
	  end:
	  case NODE_NIL:
	    *body = 0;
	    return;
	  case NODE_RETURN:
	    *body = node = node->nd_stts;
	    continue;
	  case NODE_BEGIN:
	    *body = node = node->nd_body;
	    continue;
	  case NODE_BLOCK:
	    body = &node->nd_end->nd_head;
	    break;
	  case NODE_IF:
	    if (subnodes(nd_body, nd_else)) break;
	    return;
	  case NODE_CASE:
	    body = &node->nd_body;
	    break;
	  case NODE_WHEN:
	    if (!subnodes(nd_body, nd_next)) goto end;
	    break;
	  case NODE_ENSURE:
	    if (!subnodes(nd_head, nd_resq)) goto end;
	    break;
	  case NODE_RESCUE:
	    if (!subnodes(nd_head, nd_resq)) goto end;
	    break;
	  default:
	    return;
	}
	node = *body;
    }

#undef subnodes
}

static int
assign_in_cond(struct parser_params *parser, NODE *node)
{
    switch (nd_type(node)) {
      case NODE_MASGN:
	yyerror("multiple assignment in conditional");
	return 1;

      case NODE_LASGN:
      case NODE_DASGN:
      case NODE_GASGN:
      case NODE_IASGN:
	break;

      default:
	return 0;
    }

    switch (nd_type(node->nd_value)) {
      case NODE_LIT:
      case NODE_STR:
      case NODE_NIL:
      case NODE_TRUE:
      case NODE_FALSE:
	/* reports always */
	parser_warn(node->nd_value, "found = in conditional, should be ==");
	return 1;

      case NODE_DSTR:
      case NODE_XSTR:
      case NODE_DXSTR:
      case NODE_EVSTR:
      case NODE_DREGX:
      default:
	break;
    }
    return 1;
}

static int
e_option_supplied(struct parser_params *parser)
{
    if (strcmp(ruby_sourcefile, "-e") == 0)
	return Qtrue;
    return Qfalse;
}

static void
warn_unless_e_option(struct parser_params *parser, NODE *node, const char *str)
{
    if (!e_option_supplied(parser)) parser_warn(node, str);
}

static void
warning_unless_e_option(struct parser_params *parser, NODE *node, const char *str)
{
    if (!e_option_supplied(parser)) parser_warning(node, str);
}

static NODE *cond0(struct parser_params*,NODE*);

static NODE*
range_op(struct parser_params *parser, NODE *node)
{
    enum node_type type;

    if (!e_option_supplied(parser)) return node;
    if (node == 0) return 0;

    value_expr(node);
    node = cond0(parser, node);
    type = nd_type(node);
    if (type == NODE_LIT && FIXNUM_P(node->nd_lit)) {
	warn_unless_e_option(parser, node, "integer literal in conditional range");
	return NEW_CALL(node, tEQ, NEW_LIST(NEW_GVAR(rb_intern("$."))));
    }
    return node;
}

static int
literal_node(NODE *node)
{
    if (!node) return 1;	/* same as NODE_NIL */
    switch (nd_type(node)) {
      case NODE_LIT:
      case NODE_STR:
      case NODE_DSTR:
      case NODE_EVSTR:
      case NODE_DREGX:
      case NODE_DREGX_ONCE:
      case NODE_DSYM:
	return 2;
      case NODE_TRUE:
      case NODE_FALSE:
      case NODE_NIL:
	return 1;
    }
    return 0;
}

static NODE*
cond0(struct parser_params *parser, NODE *node)
{
    if (node == 0) return 0;
    assign_in_cond(parser, node);

    switch (nd_type(node)) {
      case NODE_DSTR:
      case NODE_EVSTR:
      case NODE_STR:
	rb_warn0("string literal in condition");
	break;

      case NODE_DREGX:
      case NODE_DREGX_ONCE:
	warning_unless_e_option(parser, node, "regex literal in condition");
	return NEW_MATCH2(node, NEW_GVAR(rb_intern("$_")));

      case NODE_AND:
      case NODE_OR:
	node->nd_1st = cond0(parser, node->nd_1st);
	node->nd_2nd = cond0(parser, node->nd_2nd);
	break;

      case NODE_DOT2:
      case NODE_DOT3:
	node->nd_beg = range_op(parser, node->nd_beg);
	node->nd_end = range_op(parser, node->nd_end);
	if (nd_type(node) == NODE_DOT2) nd_set_type(node,NODE_FLIP2);
	else if (nd_type(node) == NODE_DOT3) nd_set_type(node, NODE_FLIP3);
	if (!e_option_supplied(parser)) {
	    int b = literal_node(node->nd_beg);
	    int e = literal_node(node->nd_end);
	    if ((b == 1 && e == 1) || (b + e >= 2 && RTEST(ruby_verbose))) {
		parser_warn(node, "range literal in condition");
	    }
	}
	break;

      case NODE_DSYM:
	parser_warning(node, "literal in condition");
	break;

      case NODE_LIT:
	if (TYPE(node->nd_lit) == T_REGEXP) {
	    warn_unless_e_option(parser, node, "regex literal in condition");
	    nd_set_type(node, NODE_MATCH);
	}
	else {
	    parser_warning(node, "literal in condition");
	}
      default:
	break;
    }
    return node;
}

static NODE*
cond_gen(struct parser_params *parser, NODE *node)
{
    if (node == 0) return 0;
    return cond0(parser, node);
}

static NODE*
logop_gen(struct parser_params *parser, enum node_type type, NODE *left, NODE *right)
{
    value_expr(left);
    if (left && nd_type(left) == type) {
	NODE *node = left, *second;
	while ((second = node->nd_2nd) != 0 && nd_type(second) == type) {
	    node = second;
	}
	node->nd_2nd = NEW_NODE(type, second, right, 0);
	return left;
    }
    return NEW_NODE(type, left, right, 0);
}

static void
no_blockarg(struct parser_params *parser, NODE *node)
{
    if (node && nd_type(node) == NODE_BLOCK_PASS) {
	compile_error(PARSER_ARG "block argument should not be given");
    }
}

static NODE *
ret_args_gen(struct parser_params *parser, NODE *node)
{
    if (node) {
	no_blockarg(parser, node);
	if (nd_type(node) == NODE_ARRAY) {
	    if (node->nd_next == 0) {
		node = node->nd_head;
	    }
	    else {
		nd_set_type(node, NODE_VALUES);
	    }
	}
    }
    return node;
}

static NODE *
new_yield_gen(struct parser_params *parser, NODE *node)
{
    long state = Qtrue;

    if (node) {
        no_blockarg(parser, node);
	if (node && nd_type(node) == NODE_SPLAT) {
	    state = Qtrue;
	}
    }
    else {
        state = Qfalse;
    }
    return NEW_YIELD(node, state);
}

static NODE*
negate_lit(NODE *node)
{
    switch (TYPE(node->nd_lit)) {
      case T_FIXNUM:
	node->nd_lit = LONG2FIX(-FIX2LONG(node->nd_lit));
	break;
      case T_BIGNUM:
	node->nd_lit = rb_funcall(node->nd_lit,tUMINUS,0,0);
	break;
      case T_FLOAT:
	RFLOAT(node->nd_lit)->float_value = -RFLOAT_VALUE(node->nd_lit);
	break;
      default:
	break;
    }
    return node;
}

static NODE *
arg_blk_pass(NODE *node1, NODE *node2)
{
    if (node2) {
	node2->nd_head = node1;
	return node2;
    }
    return node1;
}

static NODE*
new_args_gen(struct parser_params *parser, NODE *m, NODE *o, ID r, NODE *p, ID b)
{
    int saved_line = ruby_sourceline;
    NODE *node;
    NODE *i1, *i2 = 0;

    node = NEW_ARGS(m ? m->nd_plen : 0, o);
    i1 = m ? m->nd_next : 0;
    node->nd_next = NEW_ARGS_AUX(r, b);

    if (p) {
	i2 = p->nd_next;
	node->nd_next->nd_next = NEW_ARGS_AUX(p->nd_pid, p->nd_plen);
    }
    else if (i1) {
	node->nd_next->nd_next = NEW_ARGS_AUX(0, 0);
    }
    if (i1 || i2) {
	node->nd_next->nd_next->nd_next = NEW_NODE(NODE_AND, i1, i2, 0);
    }
    ruby_sourceline = saved_line;
    return node;
}

static void
local_push_gen(struct parser_params *parser, int inherit_dvars)
{
    struct local_vars *local;

    local = ALLOC(struct local_vars);
    local->prev = lvtbl;
    local->args = vtable_alloc(0);
    local->vars = vtable_alloc(inherit_dvars ? DVARS_INHERIT : DVARS_TOPSCOPE);
    lvtbl = local;
}

static void
local_pop_gen(struct parser_params *parser)
{
    struct local_vars *local = lvtbl->prev;
    vtable_free(lvtbl->args);
    vtable_free(lvtbl->vars);
    xfree(lvtbl);
    lvtbl = local;
}

static ID*
vtable_tblcpy(ID *buf, const struct vtable *src)
{
    int i, cnt = vtable_size(src);

    if (cnt > 0) {
        buf[0] = cnt;
        for (i = 0; i < cnt; i++) {
            buf[i] = src->tbl[i];
        }
        return buf;
    }
    return 0;
}

static ID*
local_tbl_gen(struct parser_params *parser)
{
    int cnt = vtable_size(lvtbl->args) + vtable_size(lvtbl->vars);
    ID *buf;

    if (cnt <= 0) return 0;
    buf = ALLOC_N(ID, cnt + 1);
    vtable_tblcpy(buf+1, lvtbl->args);
    vtable_tblcpy(buf+vtable_size(lvtbl->args)+1, lvtbl->vars);
    buf[0] = cnt;
    return buf;
}

#include "debug.h"
static int
arg_var_gen(struct parser_params *parser, ID id)
{
    vtable_add(lvtbl->args, id);
    return vtable_size(lvtbl->args) - 1;
}

static int
local_var_gen(struct parser_params *parser, ID id)
{
    vtable_add(lvtbl->vars, id);
    return vtable_size(lvtbl->vars) - 1;
}

static int
local_id_gen(struct parser_params *parser, ID id)
{
    struct vtable *vars, *args;

    vars = lvtbl->vars;
    args = lvtbl->args;

    while (vars && POINTER_P(vars->prev)) {
	vars = vars->prev;
	args = args->prev;
    }

    if (vars && vars->prev == DVARS_INHERIT) {
	return rb_local_defined(id);
    }
    else {
	return (vtable_included(args, id) ||
		vtable_included(vars, id));
    }
}

static void
dyna_push_gen(struct parser_params *parser)
{
    lvtbl->args = vtable_alloc(lvtbl->args);
    lvtbl->vars = vtable_alloc(lvtbl->vars);
}

static void
dyna_pop_gen(struct parser_params *parser)
{
    struct vtable *tmp;

    tmp = lvtbl->args;
    lvtbl->args = lvtbl->args->prev;
    vtable_free(tmp);
    tmp = lvtbl->vars;
    lvtbl->vars = lvtbl->vars->prev;
    vtable_free(tmp);
}

static int
dyna_in_block_gen(struct parser_params *parser)
{
    return POINTER_P(lvtbl->vars) && lvtbl->vars->prev != DVARS_TOPSCOPE;
}

static int
dvar_defined_gen(struct parser_params *parser, ID id)
{
    struct vtable *vars, *args;

    args = lvtbl->args;
    vars = lvtbl->vars;

    while (POINTER_P(vars)) {
	if (vtable_included(args, id)) {
	    return 1;
	}
	if (vtable_included(vars, id)) {
	    return 1;
	}
	args = args->prev;
	vars = vars->prev;
    }

    if (vars == DVARS_INHERIT) {
        return rb_dvar_defined(id);
    }

    return 0;
}

static int
dvar_curr_gen(struct parser_params *parser, ID id)
{
    return (vtable_included(lvtbl->args, id) ||
	    vtable_included(lvtbl->vars, id));
}

VALUE rb_reg_compile(VALUE str, int options);
VALUE rb_reg_check_preprocess(VALUE);

static void
reg_fragment_setenc_gen(struct parser_params* parser, VALUE str, int options)
{
    int c = RE_OPTION_ENCODING_IDX(options);

    if (c) {
	int opt, idx;
	rb_char_to_option_kcode(c, &opt, &idx);
	if (idx != ENCODING_GET(str) &&
	    rb_enc_str_coderange(str) != ENC_CODERANGE_7BIT) {
            goto error;
	}
	ENCODING_SET(str, idx);
    }
    else if (RE_OPTION_ENCODING_NONE(options)) {
        if (!ENCODING_IS_ASCII8BIT(str) &&
            rb_enc_str_coderange(str) != ENC_CODERANGE_7BIT) {
            c = 'n';
            goto error;
        }
	rb_enc_associate(str, rb_ascii8bit_encoding());
    }
    else if (parser->enc == rb_usascii_encoding()) {
	if (rb_enc_str_coderange(str) != ENC_CODERANGE_7BIT) {
	    /* raise in re.c */
	    rb_enc_associate(str, rb_usascii_encoding());
	}
	else {
	    rb_enc_associate(str, rb_ascii8bit_encoding());
	}
    }
    return;

  error:
    compile_error(PARSER_ARG
        "regexp encoding option '%c' differs from source encoding '%s'",
        c, rb_enc_name(rb_enc_get(str)));
}

static void
reg_fragment_check_gen(struct parser_params* parser, VALUE str, int options)
{
    VALUE err;
    reg_fragment_setenc_gen(parser, str, options);
    err = rb_reg_check_preprocess(str);
    if (err != Qnil) {
        err = rb_obj_as_string(err);
        compile_error(PARSER_ARG "%s", RSTRING_PTR(err));
	RB_GC_GUARD(err);
    }
}

typedef struct {
    struct parser_params* parser;
    rb_encoding *enc;
    NODE *succ_block;
    NODE *fail_block;
    int num;
} reg_named_capture_assign_t;

static int
reg_named_capture_assign_iter(const OnigUChar *name, const OnigUChar *name_end,
          int back_num, int *back_refs, OnigRegex regex, void *arg0)
{
    reg_named_capture_assign_t *arg = (reg_named_capture_assign_t*)arg0;
    struct parser_params* parser = arg->parser;
    rb_encoding *enc = arg->enc;
    int len = name_end - name;
    const char *s = (const char *)name;
    ID var;

    arg->num++;

    if (arg->succ_block == 0) {
        arg->succ_block = NEW_BEGIN(0);
        arg->fail_block = NEW_BEGIN(0);
    }

    if (!len || (*name != '_' && ISASCII(*name) && !rb_enc_islower(*name, enc)) ||
	rb_reserved_word(s, len) || !rb_enc_symname2_p(s, len, enc)) {
        return ST_CONTINUE;
    }
    var = rb_intern3(s, len, enc);
    if (dvar_defined(var) || local_id(var)) {
        rb_warningS("named capture conflicts a local variable - %s", 
                    rb_id2name(var));
    }
    arg->succ_block = block_append(arg->succ_block,
        newline_node(node_assign(assignable(var,0),
            NEW_CALL(
              gettable(rb_intern("$~")),
              idAREF,
              NEW_LIST(NEW_LIT(ID2SYM(var))))
            )));
    arg->fail_block = block_append(arg->fail_block,
        newline_node(node_assign(assignable(var,0), NEW_LIT(Qnil))));
    return ST_CONTINUE;
}

static NODE *
reg_named_capture_assign_gen(struct parser_params* parser, VALUE regexp, NODE *match)
{
    reg_named_capture_assign_t arg;

    arg.parser = parser;
    arg.enc = rb_enc_get(regexp);
    arg.succ_block = 0;
    arg.fail_block = 0;
    arg.num = 0;
    onig_foreach_name(RREGEXP(regexp)->ptr, reg_named_capture_assign_iter, (void*)&arg);

    if (arg.num == 0)
        return match;

    return 
        block_append(
            newline_node(match),
            NEW_IF(gettable(rb_intern("$~")),
                block_append(
                    newline_node(arg.succ_block),
                    newline_node(
                        NEW_CALL(
                          gettable(rb_intern("$~")),
                          rb_intern("begin"),
                          NEW_LIST(NEW_LIT(INT2FIX(0)))))),
                block_append(
                    newline_node(arg.fail_block),
                    newline_node(
                        NEW_LIT(Qnil)))));
}

static VALUE
reg_compile_gen(struct parser_params* parser, VALUE str, int options)
{
    VALUE re;
    VALUE err;

    reg_fragment_setenc(str, options);
    err = rb_errinfo();
    re = rb_reg_compile(str, options & RE_OPTION_MASK);
    if (NIL_P(re)) {
	ID mesg = rb_intern("mesg");
	VALUE m = rb_attr_get(rb_errinfo(), mesg);
	rb_set_errinfo(err);
	if (!NIL_P(err)) {
	    rb_str_append(rb_str_cat(rb_attr_get(err, mesg), "\n", 1), m);
	}
	else {
	    compile_error(PARSER_ARG "%s", RSTRING_PTR(m));
	}
	return Qnil;
    }
    return re;
}

void
rb_gc_mark_parser(void)
{
}

NODE*
rb_parser_append_print(VALUE vparser, NODE *node)
{
    NODE *prelude = 0;
    NODE *scope = node;
    struct parser_params *parser;

    if (!node) return node;

    Data_Get_Struct(vparser, struct parser_params, parser);

    node = node->nd_body;

    if (nd_type(node) == NODE_PRELUDE) {
	prelude = node;
	node = node->nd_body;
    }

    node = block_append(node,
			NEW_FCALL(rb_intern("print"),
				  NEW_ARRAY(NEW_GVAR(rb_intern("$_")))));
    if (prelude) {
	prelude->nd_body = node;
	scope->nd_body = prelude;
    }
    else {
	scope->nd_body = node;
    }

    return scope;
}

NODE *
rb_parser_while_loop(VALUE vparser, NODE *node, int chop, int split)
{
    NODE *prelude = 0;
    NODE *scope = node;
    struct parser_params *parser;

    if (!node) return node;

    Data_Get_Struct(vparser, struct parser_params, parser);

    node = node->nd_body;

    if (nd_type(node) == NODE_PRELUDE) {
	prelude = node;
	node = node->nd_body;
    }
    if (split) {
	node = block_append(NEW_GASGN(rb_intern("$F"),
				      NEW_CALL(NEW_GVAR(rb_intern("$_")),
					       rb_intern("split"), 0)),
			    node);
    }
    if (chop) {
	node = block_append(NEW_CALL(NEW_GVAR(rb_intern("$_")),
				     rb_intern("chop!"), 0), node);
    }

    node = NEW_OPT_N(node);

    if (prelude) {
	prelude->nd_body = node;
	scope->nd_body = prelude;
    }
    else {
	scope->nd_body = node;
    }

    return scope;
}

static const struct {
    ID token;
    const char *name;
} op_tbl[] = {
    {tDOT2,	".."},
    {tDOT3,	"..."},
    {'+',	"+"},
    {'-',	"-"},
    {'+',	"+(binary)"},
    {'-',	"-(binary)"},
    {'*',	"*"},
    {'/',	"/"},
    {'%',	"%"},
    {tPOW,	"**"},
    {tUPLUS,	"+@"},
    {tUMINUS,	"-@"},
    {'|',	"|"},
    {'^',	"^"},
    {'&',	"&"},
    {'!',	"!"},
    {tCMP,	"<=>"},
    {'>',	">"},
    {tGEQ,	">="},
    {'<',	"<"},
    {tLEQ,	"<="},
    {tEQ,	"=="},
    {tEQQ,	"==="},
    {tNEQ,	"!="},
    {tMATCH,	"=~"},
    {tNMATCH,	"!~"},
    {'~',	"~"},
    {'!',	"!"},
    {tAREF,	"[]"},
    {tASET,	"[]="},
    {tLSHFT,	"<<"},
    {tRSHFT,	">>"},
    {tCOLON2,	"::"},
    {'`',	"`"},
    {0,	0}
};

static struct symbols {
    ID last_id;
    st_table *sym_id;
    st_table *id_str;
    st_table *ivar2_id;
    st_table *id_ivar2;
    VALUE op_sym[tLAST_TOKEN];
} global_symbols = {tLAST_TOKEN >> ID_SCOPE_SHIFT};

static const struct st_hash_type symhash = {
    rb_str_hash_cmp,
    rb_str_hash,
};

struct ivar2_key {
    ID id;
    VALUE klass;
};

static int
ivar2_cmp(struct ivar2_key *key1, struct ivar2_key *key2)
{
    if (key1->id == key2->id && key1->klass == key2->klass) {
	return 0;
    }
    return 1;
}

static int
ivar2_hash(struct ivar2_key *key)
{
    return (key->id << 8) ^ (key->klass >> 2);
}

static const struct st_hash_type ivar2_hash_type = {
    ivar2_cmp,
    ivar2_hash,
};

void
Init_sym(void)
{
    global_symbols.sym_id = st_init_table_with_size(&symhash, 1000);
    global_symbols.id_str = st_init_numtable_with_size(1000);
    global_symbols.ivar2_id = st_init_table_with_size(&ivar2_hash_type, 1000);
    global_symbols.id_ivar2 = st_init_numtable_with_size(1000);
    rb_intern2("", 0);
}

void
rb_gc_mark_symbols(void)
{
    rb_mark_tbl(global_symbols.id_str);
    rb_gc_mark_locations(global_symbols.op_sym,
			 global_symbols.op_sym + tLAST_TOKEN);
}

static ID
internal_id_gen(struct parser_params *parser)
{
    ID id = (ID)vtable_size(lvtbl->args) + (ID)vtable_size(lvtbl->vars);
    id += ((tLAST_TOKEN - ID_INTERNAL) >> ID_SCOPE_SHIFT) + 1;
    return ID_INTERNAL | (id << ID_SCOPE_SHIFT);
}

static int
is_special_global_name(const char *m, const char *e, rb_encoding *enc)
{
    int mb = 0;

    if (m >= e) return 0;
    switch (*m) {
      case '~': case '*': case '$': case '?': case '!': case '@':
      case '/': case '\\': case ';': case ',': case '.': case '=':
      case ':': case '<': case '>': case '\"':
      case '&': case '`': case '\'': case '+':
      case '0':
	++m;
	break;
      case '-':
	++m;
	if (m < e && is_identchar(m, e, enc)) {
	    if (!ISASCII(*m)) mb = 1;
	    m += rb_enc_mbclen(m, e, enc);
	}
	break;
      default:
	if (!rb_enc_isdigit(*m, enc)) return 0;
	do {
	    if (!ISASCII(*m)) mb = 1;
	    ++m;
	} while (rb_enc_isdigit(*m, enc));
    }
    return m == e ? mb + 1 : 0;
}

int
rb_symname_p(const char *name)
{
    return rb_enc_symname_p(name, rb_ascii8bit_encoding());
}

int
rb_enc_symname_p(const char *name, rb_encoding *enc)
{
    return rb_enc_symname2_p(name, strlen(name), enc);
}

int
rb_enc_symname2_p(const char *name, int len, rb_encoding *enc)
{
    const char *m = name;
    const char *e = m + len;
    int localid = Qfalse;

    if (!m) return Qfalse;
    switch (*m) {
      case '\0':
	return Qfalse;

      case '$':
	if (is_special_global_name(++m, e, enc)) return Qtrue;
	goto id;

      case '@':
	if (*++m == '@') ++m;
	goto id;

      case '<':
	switch (*++m) {
	  case '<': ++m; break;
	  case '=': if (*++m == '>') ++m; break;
	  default: break;
	}
	break;

      case '>':
	switch (*++m) {
	  case '>': case '=': ++m; break;
	}
	break;

      case '=':
	switch (*++m) {
	  case '~': ++m; break;
	  case '=': if (*++m == '=') ++m; break;
	  default: return Qfalse;
	}
	break;

      case '*':
	if (*++m == '*') ++m;
	break;

      case '+': case '-':
	if (*++m == '@') ++m;
	break;

      case '|': case '^': case '&': case '/': case '%': case '~': case '`':
	++m;
	break;

      case '[':
	if (*++m != ']') return Qfalse;
	if (*++m == '=') ++m;
	break;

      case '!':
	switch (*++m) {
	  case '\0': return Qtrue;
	  case '=': case '~': ++m; break;
	  default: return Qfalse;
	}
	break;
	    
      default:
	localid = !rb_enc_isupper(*m, enc);
      id:
	if (m >= e || (*m != '_' && !rb_enc_isalpha(*m, enc) && ISASCII(*m)))
	    return Qfalse;
	while (m < e && is_identchar(m, e, enc)) m += rb_enc_mbclen(m, e, enc);
	if (localid) {
	    switch (*m) {
	      case '!': case '?': case '=': ++m;
	    }
	}
	break;
    }
    return *m ? Qfalse : Qtrue;
}

ID
rb_intern3(const char *name, long len, rb_encoding *enc)
{
    const char *m = name;
    const char *e = m + len;
    VALUE str;
    ID id;
    int last;
    int mb;
    struct RString fake_str;
    fake_str.basic.flags = T_STRING|RSTRING_NOEMBED|FL_FREEZE;
    fake_str.basic.klass = rb_cString;
    fake_str.as.heap.len = len;
    fake_str.as.heap.ptr = (char *)name;
    fake_str.as.heap.aux.capa = len;
    str = (VALUE)&fake_str;
    rb_enc_associate(str, enc);

    if (st_lookup(global_symbols.sym_id, str, (st_data_t *)&id))
	return id;

    if (rb_cString && !rb_enc_asciicompat(enc)) {
	id = ID_JUNK;
	goto new_id;
    }
    last = len-1;
    id = 0;
    switch (*m) {
      case '$':
	id |= ID_GLOBAL;
	if ((mb = is_special_global_name(++m, e, enc)) != 0) {
	    if (!--mb) enc = rb_ascii8bit_encoding();
	    goto new_id;
	}
	break;
      case '@':
	if (m[1] == '@') {
	    m++;
	    id |= ID_CLASS;
	}
	else {
	    id |= ID_INSTANCE;
	}
	m++;
	break;
      default:
	if (m[0] != '_' && rb_enc_isascii((unsigned char)m[0], enc)
	    && !rb_enc_isalnum(m[0], enc)) {
	    /* operators */
	    int i;

	    for (i=0; op_tbl[i].token; i++) {
		if (*op_tbl[i].name == *m &&
		    strcmp(op_tbl[i].name, m) == 0) {
		    id = op_tbl[i].token;
		    goto id_register;
		}
	    }
	}

	if (m[last] == '=') {
	    /* attribute assignment */
	    id = rb_intern3(name, last, enc);
	    if (id > tLAST_TOKEN && !is_attrset_id(id)) {
		enc = rb_enc_get(rb_id2str(id));
		id = rb_id_attrset(id);
		goto id_register;
	    }
	    id = ID_ATTRSET;
	}
	else if (rb_enc_isupper(m[0], enc)) {
	    id = ID_CONST;
        }
	else {
	    id = ID_LOCAL;
	}
	break;
    }
    mb = 0;
    if (!rb_enc_isdigit(*m, enc)) {
	while (m <= name + last && is_identchar(m, e, enc)) {
	    if (ISASCII(*m)) {
		m++;
	    }
	    else {
		mb = 1;
		m += rb_enc_mbclen(m, e, enc);
	    }
	}
    }
    if (m - name < len) id = ID_JUNK;
    if (enc != rb_usascii_encoding()) {
	/*
	 * this clause makes sense only when called from other than
	 * rb_intern_str() taking care of code-range.
	 */
	if (!mb) {
	    for (; m <= name + len; ++m) {
		if (!ISASCII(*m)) goto mbstr;
	    }
	    enc = rb_usascii_encoding();
	}
      mbstr:;
    }
  new_id:
    id |= ++global_symbols.last_id << ID_SCOPE_SHIFT;
  id_register:
    str = rb_enc_str_new(name, len, enc);
    OBJ_FREEZE(str);
    st_add_direct(global_symbols.sym_id, (st_data_t)str, id);
    st_add_direct(global_symbols.id_str, id, (st_data_t)str);
    return id;
}

ID
rb_intern2(const char *name, long len)
{
    return rb_intern3(name, len, rb_usascii_encoding());
}

#undef rb_intern
ID
rb_intern(const char *name)
{
    return rb_intern2(name, strlen(name));
}

ID
rb_intern_str(VALUE str)
{
    rb_encoding *enc;
    ID id;

    if (rb_enc_str_coderange(str) == ENC_CODERANGE_7BIT) {
	enc = rb_usascii_encoding();
    }
    else {
	enc = rb_enc_get(str);
    }
    id = rb_intern3(RSTRING_PTR(str), RSTRING_LEN(str), enc);
    RB_GC_GUARD(str);
    return id;
}

VALUE
rb_id2str(ID id)
{
    st_data_t data;

    if (id < tLAST_TOKEN) {
	int i = 0;

	for (i=0; op_tbl[i].token; i++) {
	    if (op_tbl[i].token == id) {
		VALUE str = global_symbols.op_sym[i];
		if (!str) {
		    str = rb_usascii_str_new2(op_tbl[i].name);
		    OBJ_FREEZE(str);
		    global_symbols.op_sym[i] = str;
		}
		return str;
	    }
	}
    }

    if (st_lookup(global_symbols.id_str, id, &data)) {
        VALUE str = (VALUE)data;
        if (RBASIC(str)->klass == 0)
            RBASIC(str)->klass = rb_cString;
	return str;
    }

    if (is_attrset_id(id)) {
	ID id2 = (id & ~ID_SCOPE_MASK) | ID_LOCAL;
	VALUE str;

	while (!(str = rb_id2str(id2))) {
	    if (!is_local_id(id2)) return 0;
	    id2 = (id & ~ID_SCOPE_MASK) | ID_CONST;
	}
	str = rb_str_dup(str);
	rb_str_cat(str, "=", 1);
	rb_intern_str(str);
	if (st_lookup(global_symbols.id_str, id, &data)) {
            VALUE str = (VALUE)data;
            if (RBASIC(str)->klass == 0)
                RBASIC(str)->klass = rb_cString;
            return str;
        }
    }
    return 0;
}

const char *
rb_id2name(ID id)
{
    VALUE str = rb_id2str(id);

    if (!str) return 0;
    return RSTRING_PTR(str);
}

static int
symbols_i(VALUE sym, ID value, VALUE ary)
{
    rb_ary_push(ary, ID2SYM(value));
    return ST_CONTINUE;
}

/*
 *  call-seq:
 *     Symbol.all_symbols    => array
 *
 *  Returns an array of all the symbols currently in Ruby's symbol
 *  table.
 *
 *     Symbol.all_symbols.size    #=> 903
 *     Symbol.all_symbols[1,20]   #=> [:floor, :ARGV, :Binding, :symlink,
 *                                     :chown, :EOFError, :$;, :String,
 *                                     :LOCK_SH, :"setuid?", :$<,
 *                                     :default_proc, :compact, :extend,
 *                                     :Tms, :getwd, :$=, :ThreadGroup,
 *                                     :wait2, :$>]
 */

VALUE
rb_sym_all_symbols(void)
{
    VALUE ary = rb_ary_new2(global_symbols.sym_id->num_entries);

    st_foreach(global_symbols.sym_id, symbols_i, ary);
    return ary;
}

int
rb_is_const_id(ID id)
{
    if (is_const_id(id)) return Qtrue;
    return Qfalse;
}

int
rb_is_class_id(ID id)
{
    if (is_class_id(id)) return Qtrue;
    return Qfalse;
}

int
rb_is_instance_id(ID id)
{
    if (is_instance_id(id)) return Qtrue;
    return Qfalse;
}

int
rb_is_local_id(ID id)
{
    if (is_local_id(id)) return Qtrue;
    return Qfalse;
}

int
rb_is_junk_id(ID id)
{
    if (is_junk_id(id)) return Qtrue;
    return Qfalse;
}

#endif /* !RIPPER */

static void
parser_initialize(struct parser_params *parser)
{
    parser->eofp = Qfalse;

    parser->parser_lex_strterm = 0;
    parser->parser_cond_stack = 0;
    parser->parser_cmdarg_stack = 0;
    parser->parser_class_nest = 0;
    parser->parser_paren_nest = 0;
    parser->parser_lpar_beg = 0;
    parser->parser_in_single = 0;
    parser->parser_in_def = 0;
    parser->parser_in_defined = 0;
    parser->parser_compile_for_eval = 0;
    parser->parser_cur_mid = 0;
    parser->parser_tokenbuf = NULL;
    parser->parser_tokidx = 0;
    parser->parser_toksiz = 0;
    parser->parser_heredoc_end = 0;
    parser->parser_command_start = Qtrue;
    parser->parser_lex_pbeg = 0;
    parser->parser_lex_p = 0;
    parser->parser_lex_pend = 0;
    parser->parser_lvtbl = 0;
    parser->parser_ruby__end__seen = 0;
    parser->parser_ruby_sourcefile = 0;
#ifndef RIPPER
    parser->is_ripper = 0;
    parser->parser_eval_tree_begin = 0;
    parser->parser_eval_tree = 0;
#else
    parser->is_ripper = 1;
    parser->parser_ruby_sourcefile_string = Qnil;
    parser->delayed = Qnil;

    parser->result = Qnil;
    parser->parsing_thread = Qnil;
    parser->toplevel_p = Qtrue;
#endif
#ifdef YYMALLOC
    parser->heap = NULL;
#endif
    parser->enc = rb_usascii_encoding();
}

#ifdef RIPPER
#define parser_mark ripper_parser_mark
#define parser_free ripper_parser_free
#endif

static void
parser_mark(void *ptr)
{
    struct parser_params *p = (struct parser_params*)ptr;

    rb_gc_mark((VALUE)p->parser_lex_strterm);
    rb_gc_mark(p->parser_lex_input);
    rb_gc_mark(p->parser_lex_lastline);
    rb_gc_mark(p->parser_lex_nextline);
#ifndef RIPPER
    rb_gc_mark((VALUE)p->parser_eval_tree_begin) ;
    rb_gc_mark((VALUE)p->parser_eval_tree) ;
    rb_gc_mark(p->debug_lines);
#else
    rb_gc_mark(p->parser_ruby_sourcefile_string);
    rb_gc_mark(p->delayed);
    rb_gc_mark(p->value);
    rb_gc_mark(p->result);
    rb_gc_mark(p->parsing_thread);
#endif
#ifdef YYMALLOC
    rb_gc_mark((VALUE)p->heap);
#endif
}

static void
parser_free(void *ptr)
{
    struct parser_params *p = (struct parser_params*)ptr;
    struct local_vars *local, *prev;

    if (p->parser_tokenbuf) {
        xfree(p->parser_tokenbuf);
    }
    for (local = p->parser_lvtbl; local; local = prev) {
	if (local->vars) xfree(local->vars);
	prev = local->prev;
	xfree(local);
    }
#ifndef RIPPER
    xfree(p->parser_ruby_sourcefile);
#endif
    xfree(p);
}

VALUE rb_parser_get_yydebug(VALUE);
VALUE rb_parser_set_yydebug(VALUE, VALUE);

#ifndef RIPPER
static struct parser_params *
parser_new(void)
{
    struct parser_params *p;

    p = ALLOC_N(struct parser_params, 1);
    MEMZERO(p, struct parser_params, 1);
    parser_initialize(p);
    return p;
}

VALUE
rb_parser_new(void)
{
    struct parser_params *p = parser_new();

    return Data_Wrap_Struct(0, parser_mark, parser_free, p);
}

/*
 *  call-seq:
 *    ripper#end_seen?   -> Boolean
 *
 *  Return if parsed source ended by +\_\_END\_\_+.
 *  This number starts from 1.
 */
VALUE
rb_parser_end_seen_p(VALUE vparser)
{
    struct parser_params *parser;

    Data_Get_Struct(vparser, struct parser_params, parser);
    return ruby__end__seen ? Qtrue : Qfalse;
}

/*
 *  call-seq:
 *    ripper#encoding   -> encoding
 *
 *  Return encoding of the source.
 */
VALUE
rb_parser_encoding(VALUE vparser)
{
    struct parser_params *parser;

    Data_Get_Struct(vparser, struct parser_params, parser);
    return rb_enc_from_encoding(parser->enc);
}

/*
 *  call-seq:
 *    ripper.yydebug   -> true or false
 *
 *  Get yydebug.
 */
VALUE
rb_parser_get_yydebug(VALUE self)
{
    struct parser_params *parser;

    Data_Get_Struct(self, struct parser_params, parser);
    return yydebug ? Qtrue : Qfalse;
}

/*
 *  call-seq:
 *    ripper.yydebug = flag
 *
 *  Set yydebug.
 */
VALUE
rb_parser_set_yydebug(VALUE self, VALUE flag)
{
    struct parser_params *parser;

    Data_Get_Struct(self, struct parser_params, parser);
    yydebug = RTEST(flag);
    return flag;
}

#ifdef YYMALLOC
#define HEAPCNT(n, size) ((n) * (size) / sizeof(YYSTYPE))
#define NEWHEAP() rb_node_newnode(NODE_ALLOCA, 0, (VALUE)parser->heap, 0)
#define ADD2HEAP(n, c, p) ((parser->heap = (n))->u1.node = (p), \
			   (n)->u3.cnt = (c), (p))

void *
rb_parser_malloc(struct parser_params *parser, size_t size)
{
    size_t cnt = HEAPCNT(1, size);
    NODE *n = NEWHEAP();
    void *ptr = xmalloc(size);

    return ADD2HEAP(n, cnt, ptr);
}

void *
rb_parser_calloc(struct parser_params *parser, size_t nelem, size_t size)
{
    size_t cnt = HEAPCNT(nelem, size);
    NODE *n = NEWHEAP();
    void *ptr = xcalloc(nelem, size);

    return ADD2HEAP(n, cnt, ptr);
}

void *
rb_parser_realloc(struct parser_params *parser, void *ptr, size_t size)
{
    NODE *n;
    size_t cnt = HEAPCNT(1, size);

    if (ptr && (n = parser->heap) != NULL) {
	do {
	    if (n->u1.node == ptr) {
		n->u1.node = ptr = xrealloc(ptr, size);
		if (n->u3.cnt) n->u3.cnt = cnt;
		return ptr;
	    }
	} while ((n = n->u2.node) != NULL);
    }
    n = NEWHEAP();
    ptr = xrealloc(ptr, size);
    return ADD2HEAP(n, cnt, ptr);
}

void
rb_parser_free(struct parser_params *parser, void *ptr)
{
    NODE **prev = &parser->heap, *n;

    while ((n = *prev) != NULL) {
	if (n->u1.node == ptr) {
	    *prev = n->u2.node;
	    rb_gc_force_recycle((VALUE)n);
	    break;
	}
	prev = &n->u2.node;
    }
    xfree(ptr);
}
#endif
#endif

#ifdef RIPPER
#ifdef RIPPER_DEBUG
extern int rb_is_pointer_to_heap(VALUE);

/* :nodoc: */
static VALUE
ripper_validate_object(VALUE self, VALUE x)
{
    if (x == Qfalse) return x;
    if (x == Qtrue) return x;
    if (x == Qnil) return x;
    if (x == Qundef)
        rb_raise(rb_eArgError, "Qundef given");
    if (FIXNUM_P(x)) return x;
    if (SYMBOL_P(x)) return x;
    if (!rb_is_pointer_to_heap(x))
        rb_raise(rb_eArgError, "invalid pointer: %p", x);
    switch (TYPE(x)) {
      case T_STRING:
      case T_OBJECT:
      case T_ARRAY:
      case T_BIGNUM:
      case T_FLOAT:
        return x;
      case T_NODE:
        rb_raise(rb_eArgError, "NODE given: %p", x);
      default:
        rb_raise(rb_eArgError, "wrong type of ruby object: %p (%s)",
                 x, rb_obj_classname(x));
    }
    return x;
}
#endif

#define validate(x)

static VALUE
ripper_dispatch0(struct parser_params *parser, ID mid)
{
    return rb_funcall(parser->value, mid, 0);
}

static VALUE
ripper_dispatch1(struct parser_params *parser, ID mid, VALUE a)
{
    validate(a);
    return rb_funcall(parser->value, mid, 1, a);
}

static VALUE
ripper_dispatch2(struct parser_params *parser, ID mid, VALUE a, VALUE b)
{
    validate(a);
    validate(b);
    return rb_funcall(parser->value, mid, 2, a, b);
}

static VALUE
ripper_dispatch3(struct parser_params *parser, ID mid, VALUE a, VALUE b, VALUE c)
{
    validate(a);
    validate(b);
    validate(c);
    return rb_funcall(parser->value, mid, 3, a, b, c);
}

static VALUE
ripper_dispatch4(struct parser_params *parser, ID mid, VALUE a, VALUE b, VALUE c, VALUE d)
{
    validate(a);
    validate(b);
    validate(c);
    validate(d);
    return rb_funcall(parser->value, mid, 4, a, b, c, d);
}

static VALUE
ripper_dispatch5(struct parser_params *parser, ID mid, VALUE a, VALUE b, VALUE c, VALUE d, VALUE e)
{
    validate(a);
    validate(b);
    validate(c);
    validate(d);
    validate(e);
    return rb_funcall(parser->value, mid, 5, a, b, c, d, e);
}

static const struct kw_assoc {
    ID id;
    const char *name;
} keyword_to_name[] = {
    {keyword_class,	"class"},
    {keyword_module,	"module"},
    {keyword_def,	"def"},
    {keyword_undef,	"undef"},
    {keyword_begin,	"begin"},
    {keyword_rescue,	"rescue"},
    {keyword_ensure,	"ensure"},
    {keyword_end,	"end"},
    {keyword_if,	"if"},
    {keyword_unless,	"unless"},
    {keyword_then,	"then"},
    {keyword_elsif,	"elsif"},
    {keyword_else,	"else"},
    {keyword_case,	"case"},
    {keyword_when,	"when"},
    {keyword_while,	"while"},
    {keyword_until,	"until"},
    {keyword_for,	"for"},
    {keyword_break,	"break"},
    {keyword_next,	"next"},
    {keyword_redo,	"redo"},
    {keyword_retry,	"retry"},
    {keyword_in,	"in"},
    {keyword_do,	"do"},
    {keyword_do_cond,	"do"},
    {keyword_do_block,	"do"},
    {keyword_return,	"return"},
    {keyword_yield,	"yield"},
    {keyword_super,	"super"},
    {keyword_self,	"self"},
    {keyword_nil,	"nil"},
    {keyword_true,	"true"},
    {keyword_false,	"false"},
    {keyword_and,	"and"},
    {keyword_or,	"or"},
    {keyword_not,	"not"},
    {modifier_if,	"if"},
    {modifier_unless,	"unless"},
    {modifier_while,	"while"},
    {modifier_until,	"until"},
    {modifier_rescue,	"rescue"},
    {keyword_alias,	"alias"},
    {keyword_defined,	"defined?"},
    {keyword_BEGIN,	"BEGIN"},
    {keyword_END,	"END"},
    {keyword__LINE__,	"__LINE__"},
    {keyword__FILE__,	"__FILE__"},
    {keyword__ENCODING__, "__ENCODING__"},
    {0, NULL}
};

static const char*
keyword_id_to_str(ID id)
{
    const struct kw_assoc *a;

    for (a = keyword_to_name; a->id; a++) {
        if (a->id == id)
            return a->name;
    }
    return NULL;
}

static VALUE
ripper_id2sym(ID id)
{
    const char *name;
    char buf[8];

    if (id <= 256) {
        buf[0] = id;
        buf[1] = '\0';
        return ID2SYM(rb_intern(buf));
    }
    if ((name = keyword_id_to_str(id))) {
        return ID2SYM(rb_intern(name));
    }
    switch (id) {
      case tOROP:
        name = "||";
        break;
      case tANDOP:
        name = "&&";
        break;
      default:
        name = rb_id2name(id);
        if (!name) {
            rb_bug("cannot convert ID to string: %ld", (unsigned long)id);
        }
        break;
    }
    return ID2SYM(rb_intern(name));
}

static VALUE
ripper_intern(const char *s)
{
    return ID2SYM(rb_intern(s));
}

static void
ripper_compile_error(struct parser_params *parser, const char *fmt, ...)
{
    VALUE str;
    va_list args;

    va_start(args, fmt);
    str = rb_vsprintf(fmt, args);
    va_end(args);
    rb_funcall(parser->value, rb_intern("compile_error"), 1, str);
}

static void
ripper_warn0(struct parser_params *parser, const char *fmt)
{
    rb_funcall(parser->value, rb_intern("warn"), 1, STR_NEW2(fmt));
}

static void
ripper_warnI(struct parser_params *parser, const char *fmt, int a)
{
    rb_funcall(parser->value, rb_intern("warn"), 2,
               STR_NEW2(fmt), INT2NUM(a));
}

#if 0
static void
ripper_warnS(struct parser_params *parser, const char *fmt, const char *str)
{
    rb_funcall(parser->value, rb_intern("warn"), 2,
               STR_NEW2(fmt), STR_NEW2(str));
}
#endif

static void
ripper_warning0(struct parser_params *parser, const char *fmt)
{
    rb_funcall(parser->value, rb_intern("warning"), 1, STR_NEW2(fmt));
}

static void
ripper_warningS(struct parser_params *parser, const char *fmt, const char *str)
{
    rb_funcall(parser->value, rb_intern("warning"), 2,
               STR_NEW2(fmt), STR_NEW2(str));
}

static VALUE
ripper_lex_get_generic(struct parser_params *parser, VALUE src)
{
    return rb_funcall(src, ripper_id_gets, 0);
}

static VALUE
ripper_s_allocate(VALUE klass)
{
    struct parser_params *p;
    VALUE self;

    p = ALLOC_N(struct parser_params, 1);
    MEMZERO(p, struct parser_params, 1);
    self = Data_Wrap_Struct(klass, parser_mark, parser_free, p);
    p->value = self;
    return self;
}

#define ripper_initialized_p(r) ((r)->parser_lex_input != 0)

/*
 *  call-seq:
 *    Ripper.new(src, filename="(ripper)", lineno=1) -> ripper
 *
 *  Create a new Ripper object.
 *  _src_ must be a String, a IO, or an Object which has #gets method.
 *
 *  This method does not starts parsing.
 *  See also Ripper#parse and Ripper.parse.
 */
static VALUE
ripper_initialize(int argc, VALUE *argv, VALUE self)
{
    struct parser_params *parser;
    VALUE src, fname, lineno;

    Data_Get_Struct(self, struct parser_params, parser);
    rb_scan_args(argc, argv, "12", &src, &fname, &lineno);
    if (rb_obj_respond_to(src, ripper_id_gets, 0)) {
        parser->parser_lex_gets = ripper_lex_get_generic;
    }
    else {
        StringValue(src);
        parser->parser_lex_gets = lex_get_str;
    }
    parser->parser_lex_input = src;
    parser->eofp = Qfalse;
    if (NIL_P(fname)) {
        fname = STR_NEW2("(ripper)");
    }
    else {
        StringValue(fname);
    }
    parser_initialize(parser);

    parser->parser_ruby_sourcefile_string = fname;
    parser->parser_ruby_sourcefile = RSTRING_PTR(fname);
    parser->parser_ruby_sourceline = NIL_P(lineno) ? 0 : NUM2INT(lineno) - 1;

    return Qnil;
}

extern VALUE rb_thread_pass(void);

struct ripper_args {
    struct parser_params *parser;
    int argc;
    VALUE *argv;
};

static VALUE
ripper_parse0(VALUE parser_v)
{
    struct parser_params *parser;

    Data_Get_Struct(parser_v, struct parser_params, parser);
    parser_prepare(parser);
    ripper_yyparse((void*)parser);
    return parser->result;
}

static VALUE
ripper_ensure(VALUE parser_v)
{
    struct parser_params *parser;

    Data_Get_Struct(parser_v, struct parser_params, parser);
    parser->parsing_thread = Qnil;
    return Qnil;
}

/*
 *  call-seq:
 *    ripper#parse
 *
 *  Start parsing and returns the value of the root action.
 */
static VALUE
ripper_parse(VALUE self)
{
    struct parser_params *parser;

    Data_Get_Struct(self, struct parser_params, parser);
    if (!ripper_initialized_p(parser)) {
        rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    if (!NIL_P(parser->parsing_thread)) {
        if (parser->parsing_thread == rb_thread_current())
            rb_raise(rb_eArgError, "Ripper#parse is not reentrant");
        else
            rb_raise(rb_eArgError, "Ripper#parse is not multithread-safe");
    }
    parser->parsing_thread = rb_thread_current();
    rb_ensure(ripper_parse0, self, ripper_ensure, self);

    return parser->result;
}

/*
 *  call-seq:
 *    ripper#column   -> Integer
 *
 *  Return column number of current parsing line.
 *  This number starts from 0.
 */
static VALUE
ripper_column(VALUE self)
{
    struct parser_params *parser;
    long col;

    Data_Get_Struct(self, struct parser_params, parser);
    if (!ripper_initialized_p(parser)) {
        rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    if (NIL_P(parser->parsing_thread)) return Qnil;
    col = parser->tokp - parser->parser_lex_pbeg;
    return LONG2NUM(col);
}

/*
 *  call-seq:
 *    ripper#lineno   -> Integer
 *
 *  Return line number of current parsing line.
 *  This number starts from 1.
 */
static VALUE
ripper_lineno(VALUE self)
{
    struct parser_params *parser;

    Data_Get_Struct(self, struct parser_params, parser);
    if (!ripper_initialized_p(parser)) {
        rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    if (NIL_P(parser->parsing_thread)) return Qnil;
    return INT2NUM(parser->parser_ruby_sourceline);
}

#ifdef RIPPER_DEBUG
/* :nodoc: */
static VALUE
ripper_assert_Qundef(VALUE self, VALUE obj, VALUE msg)
{
    StringValue(msg);
    if (obj == Qundef) {
        rb_raise(rb_eArgError, "%s", RSTRING_PTR(msg));
    }
    return Qnil;
}

/* :nodoc: */
static VALUE
ripper_value(VALUE self, VALUE obj)
{
    return ULONG2NUM(obj);
}
#endif

void
Init_ripper(void)
{
    VALUE Ripper;

    Ripper = rb_define_class("Ripper", rb_cObject);
    rb_define_const(Ripper, "Version", rb_usascii_str_new2(RIPPER_VERSION));
    rb_define_alloc_func(Ripper, ripper_s_allocate);
    rb_define_method(Ripper, "initialize", ripper_initialize, -1);
    rb_define_method(Ripper, "parse", ripper_parse, 0);
    rb_define_method(Ripper, "column", ripper_column, 0);
    rb_define_method(Ripper, "lineno", ripper_lineno, 0);
    rb_define_method(Ripper, "end_seen?", rb_parser_end_seen_p, 0);
    rb_define_method(Ripper, "encoding", rb_parser_encoding, 0);
    rb_define_method(Ripper, "yydebug", rb_parser_get_yydebug, 0);
    rb_define_method(Ripper, "yydebug=", rb_parser_set_yydebug, 1);
#ifdef RIPPER_DEBUG
    rb_define_method(rb_mKernel, "assert_Qundef", ripper_assert_Qundef, 2);
    rb_define_method(rb_mKernel, "rawVALUE", ripper_value, 1);
    rb_define_method(rb_mKernel, "validate_object", ripper_validate_object, 1);
#endif

    ripper_id_gets = rb_intern("gets");
    ripper_init_eventids1(Ripper);
    ripper_init_eventids2(Ripper);
    /* ensure existing in symbol table */
    rb_intern("||");
    rb_intern("&&");
}
#endif /* RIPPER */

