encsrcdir = ./enc
topdir = .
prefix = /usr/local/ruby1.9-norubygems
exec_prefix = $(prefix)
libdir = $(exec_prefix)/lib
top_srcdir = $(encsrcdir:/enc=)
srcdir = $(top_srcdir)
arch = i686-darwin9.3.0
EXTOUT = .ext
hdrdir = $(srcdir)/include
arch_hdrdir = $(EXTOUT)/include/$(arch)
ENCSODIR = $(EXTOUT)/$(arch)/enc
TRANSSODIR = $(ENCSODIR)/trans
DLEXT = bundle
OBJEXT = o

BUILTIN_ENCS	= ascii.c us_ascii.c\
		  unicode.c utf_8.c

RUBY_SO_NAME = ruby
LIBRUBY = $(LIBRUBY_A)
LIBRUBYARG_SHARED = 
LIBRUBYARG_STATIC = $(LIBRUBYARG_SHARED)

empty =
CC = gcc
OUTFLAG = -o $(empty)
COUTFLAG = -o $(empty)
CFLAGS = $(CCDLFLAGS)  $(cflags) -pipe -fno-common 
cflags = $(optflags) $(debugflags) $(warnflags)
optflags = -O2
debugflags = -g
warnflags = -Wall -Wno-parentheses
CCDLFLAGS =  -fno-common
INCFLAGS = -I. -I$(arch_hdrdir) -I$(hdrdir) -I$(top_srcdir)
DEFS = 
CPPFLAGS =  -D_XOPEN_SOURCE -D_DARWIN_C_SOURCE $(DEFS) $(cppflags) -DONIG_ENC_REGISTER=rb_enc_register
LDFLAGS = -L. 
LIBS = $(LIBRUBYARG_STATIC) -lpthread -ldl -lobjc  $(EXTLIBS)
LDSHARED = cc -dynamic -bundle -undefined suppress -flat_namespace
ldflags  = $(LDFLAGS)
dldflags = 
archflag = 
DLDFLAGS = $(ldflags) $(dldflags) $(archflag)

RM = rm -f

all:

clean:

distclean: clean
	@$(RM) enc.mk

#### depend ####


VPATH = $(arch_hdrdir)/ruby:$(hdrdir)/ruby:$(srcdir):$(encsrcdir)
LIBPATH =  -L. -L$(topdir)

ENCOBJS = enc/big5.$(OBJEXT) \
	  enc/cp949.$(OBJEXT) \
	  enc/encdb.$(OBJEXT) \
	  enc/euc_jp.$(OBJEXT) \
	  enc/euc_kr.$(OBJEXT) \
	  enc/euc_tw.$(OBJEXT) \
	  enc/gb2312.$(OBJEXT) \
	  enc/gb18030.$(OBJEXT) \
	  enc/gbk.$(OBJEXT) \
	  enc/iso_8859_1.$(OBJEXT) \
	  enc/iso_8859_2.$(OBJEXT) \
	  enc/iso_8859_3.$(OBJEXT) \
	  enc/iso_8859_4.$(OBJEXT) \
	  enc/iso_8859_5.$(OBJEXT) \
	  enc/iso_8859_6.$(OBJEXT) \
	  enc/iso_8859_7.$(OBJEXT) \
	  enc/iso_8859_8.$(OBJEXT) \
	  enc/iso_8859_9.$(OBJEXT) \
	  enc/iso_8859_10.$(OBJEXT) \
	  enc/iso_8859_11.$(OBJEXT) \
	  enc/iso_8859_13.$(OBJEXT) \
	  enc/iso_8859_14.$(OBJEXT) \
	  enc/iso_8859_15.$(OBJEXT) \
	  enc/iso_8859_16.$(OBJEXT) \
	  enc/koi8_r.$(OBJEXT) \
	  enc/koi8_u.$(OBJEXT) \
	  enc/shift_jis.$(OBJEXT) \
	  enc/utf_16be.$(OBJEXT) \
	  enc/utf_16le.$(OBJEXT) \
	  enc/utf_32be.$(OBJEXT) \
	  enc/utf_32le.$(OBJEXT) \
	  enc/windows_1251.$(OBJEXT)

ENCDEFS = 

ENCSOS = $(ENCSODIR)/big5.$(DLEXT) \
	 $(ENCSODIR)/cp949.$(DLEXT) \
	 $(ENCSODIR)/encdb.$(DLEXT) \
	 $(ENCSODIR)/euc_jp.$(DLEXT) \
	 $(ENCSODIR)/euc_kr.$(DLEXT) \
	 $(ENCSODIR)/euc_tw.$(DLEXT) \
	 $(ENCSODIR)/gb2312.$(DLEXT) \
	 $(ENCSODIR)/gb18030.$(DLEXT) \
	 $(ENCSODIR)/gbk.$(DLEXT) \
	 $(ENCSODIR)/iso_8859_1.$(DLEXT) \
	 $(ENCSODIR)/iso_8859_2.$(DLEXT) \
	 $(ENCSODIR)/iso_8859_3.$(DLEXT) \
	 $(ENCSODIR)/iso_8859_4.$(DLEXT) \
	 $(ENCSODIR)/iso_8859_5.$(DLEXT) \
	 $(ENCSODIR)/iso_8859_6.$(DLEXT) \
	 $(ENCSODIR)/iso_8859_7.$(DLEXT) \
	 $(ENCSODIR)/iso_8859_8.$(DLEXT) \
	 $(ENCSODIR)/iso_8859_9.$(DLEXT) \
	 $(ENCSODIR)/iso_8859_10.$(DLEXT) \
	 $(ENCSODIR)/iso_8859_11.$(DLEXT) \
	 $(ENCSODIR)/iso_8859_13.$(DLEXT) \
	 $(ENCSODIR)/iso_8859_14.$(DLEXT) \
	 $(ENCSODIR)/iso_8859_15.$(DLEXT) \
	 $(ENCSODIR)/iso_8859_16.$(DLEXT) \
	 $(ENCSODIR)/koi8_r.$(DLEXT) \
	 $(ENCSODIR)/koi8_u.$(DLEXT) \
	 $(ENCSODIR)/shift_jis.$(DLEXT) \
	 $(ENCSODIR)/utf_16be.$(DLEXT) \
	 $(ENCSODIR)/utf_16le.$(DLEXT) \
	 $(ENCSODIR)/utf_32be.$(DLEXT) \
	 $(ENCSODIR)/utf_32le.$(DLEXT) \
	 $(ENCSODIR)/windows_1251.$(DLEXT)

TRANSOBJS = enc/trans/japanese.$(OBJEXT) \
	    enc/trans/korean.$(OBJEXT) \
	    enc/trans/single_byte.$(OBJEXT) \
	    enc/trans/transdb.$(OBJEXT) \
	    enc/trans/utf_16_32.$(OBJEXT)

TRANSDEFS = 

TRANSSOS = $(ENCSODIR)/trans/japanese.$(DLEXT) \
	   $(ENCSODIR)/trans/korean.$(DLEXT) \
	   $(ENCSODIR)/trans/single_byte.$(DLEXT) \
	   $(ENCSODIR)/trans/transdb.$(DLEXT) \
	   $(ENCSODIR)/trans/utf_16_32.$(DLEXT)

all: $(ENCSOS) $(TRANSSOS)

.c.$(OBJEXT):
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<


$(ENCOBJS): regenc.h oniguruma.h config.h defines.h
$(TRANSOBJS): ruby.h intern.h config.h defines.h missing.h encoding.h oniguruma.h st.h transcode_data.h

$(ENCSODIR)/big5.$(DLEXT): enc/big5.$(OBJEXT)
	$(LDSHARED) -o $@ enc/big5.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/cp949.$(DLEXT): enc/cp949.$(OBJEXT)
	$(LDSHARED) -o $@ enc/cp949.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/encdb.$(DLEXT): enc/encdb.$(OBJEXT)
	$(LDSHARED) -o $@ enc/encdb.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/euc_jp.$(DLEXT): enc/euc_jp.$(OBJEXT)
	$(LDSHARED) -o $@ enc/euc_jp.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/euc_kr.$(DLEXT): enc/euc_kr.$(OBJEXT)
	$(LDSHARED) -o $@ enc/euc_kr.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/euc_tw.$(DLEXT): enc/euc_tw.$(OBJEXT)
	$(LDSHARED) -o $@ enc/euc_tw.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/gb2312.$(DLEXT): enc/gb2312.$(OBJEXT)
	$(LDSHARED) -o $@ enc/gb2312.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/gb18030.$(DLEXT): enc/gb18030.$(OBJEXT)
	$(LDSHARED) -o $@ enc/gb18030.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/gbk.$(DLEXT): enc/gbk.$(OBJEXT)
	$(LDSHARED) -o $@ enc/gbk.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/iso_8859_1.$(DLEXT): enc/iso_8859_1.$(OBJEXT)
	$(LDSHARED) -o $@ enc/iso_8859_1.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/iso_8859_2.$(DLEXT): enc/iso_8859_2.$(OBJEXT)
	$(LDSHARED) -o $@ enc/iso_8859_2.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/iso_8859_3.$(DLEXT): enc/iso_8859_3.$(OBJEXT)
	$(LDSHARED) -o $@ enc/iso_8859_3.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/iso_8859_4.$(DLEXT): enc/iso_8859_4.$(OBJEXT)
	$(LDSHARED) -o $@ enc/iso_8859_4.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/iso_8859_5.$(DLEXT): enc/iso_8859_5.$(OBJEXT)
	$(LDSHARED) -o $@ enc/iso_8859_5.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/iso_8859_6.$(DLEXT): enc/iso_8859_6.$(OBJEXT)
	$(LDSHARED) -o $@ enc/iso_8859_6.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/iso_8859_7.$(DLEXT): enc/iso_8859_7.$(OBJEXT)
	$(LDSHARED) -o $@ enc/iso_8859_7.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/iso_8859_8.$(DLEXT): enc/iso_8859_8.$(OBJEXT)
	$(LDSHARED) -o $@ enc/iso_8859_8.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/iso_8859_9.$(DLEXT): enc/iso_8859_9.$(OBJEXT)
	$(LDSHARED) -o $@ enc/iso_8859_9.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/iso_8859_10.$(DLEXT): enc/iso_8859_10.$(OBJEXT)
	$(LDSHARED) -o $@ enc/iso_8859_10.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/iso_8859_11.$(DLEXT): enc/iso_8859_11.$(OBJEXT)
	$(LDSHARED) -o $@ enc/iso_8859_11.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/iso_8859_13.$(DLEXT): enc/iso_8859_13.$(OBJEXT)
	$(LDSHARED) -o $@ enc/iso_8859_13.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/iso_8859_14.$(DLEXT): enc/iso_8859_14.$(OBJEXT)
	$(LDSHARED) -o $@ enc/iso_8859_14.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/iso_8859_15.$(DLEXT): enc/iso_8859_15.$(OBJEXT)
	$(LDSHARED) -o $@ enc/iso_8859_15.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/iso_8859_16.$(DLEXT): enc/iso_8859_16.$(OBJEXT)
	$(LDSHARED) -o $@ enc/iso_8859_16.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/koi8_r.$(DLEXT): enc/koi8_r.$(OBJEXT)
	$(LDSHARED) -o $@ enc/koi8_r.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/koi8_u.$(DLEXT): enc/koi8_u.$(OBJEXT)
	$(LDSHARED) -o $@ enc/koi8_u.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/shift_jis.$(DLEXT): enc/shift_jis.$(OBJEXT)
	$(LDSHARED) -o $@ enc/shift_jis.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/utf_16be.$(DLEXT): enc/utf_16be.$(OBJEXT)
	$(LDSHARED) -o $@ enc/utf_16be.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/utf_16le.$(DLEXT): enc/utf_16le.$(OBJEXT)
	$(LDSHARED) -o $@ enc/utf_16le.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/utf_32be.$(DLEXT): enc/utf_32be.$(OBJEXT)
	$(LDSHARED) -o $@ enc/utf_32be.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/utf_32le.$(DLEXT): enc/utf_32le.$(OBJEXT)
	$(LDSHARED) -o $@ enc/utf_32le.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/windows_1251.$(DLEXT): enc/windows_1251.$(OBJEXT)
	$(LDSHARED) -o $@ enc/windows_1251.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/trans/japanese.$(DLEXT): enc/trans/japanese.$(OBJEXT)
	$(LDSHARED) -o $@ enc/trans/japanese.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/trans/korean.$(DLEXT): enc/trans/korean.$(OBJEXT)
	$(LDSHARED) -o $@ enc/trans/korean.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/trans/single_byte.$(DLEXT): enc/trans/single_byte.$(OBJEXT)
	$(LDSHARED) -o $@ enc/trans/single_byte.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/trans/transdb.$(DLEXT): enc/trans/transdb.$(OBJEXT)
	$(LDSHARED) -o $@ enc/trans/transdb.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(ENCSODIR)/trans/utf_16_32.$(DLEXT): enc/trans/utf_16_32.$(OBJEXT)
	$(LDSHARED) -o $@ enc/trans/utf_16_32.$(OBJEXT) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

enc/big5.$(OBJEXT): $(srcdir)/enc/big5.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/cp949.$(OBJEXT): $(srcdir)/enc/cp949.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/encdb.$(OBJEXT): $(srcdir)/enc/encdb.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/euc_jp.$(OBJEXT): $(srcdir)/enc/euc_jp.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/euc_kr.$(OBJEXT): $(srcdir)/enc/euc_kr.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/euc_tw.$(OBJEXT): $(srcdir)/enc/euc_tw.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/gb2312.$(OBJEXT): $(srcdir)/enc/gb2312.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/gb18030.$(OBJEXT): $(srcdir)/enc/gb18030.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/gbk.$(OBJEXT): $(srcdir)/enc/gbk.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/iso_8859_1.$(OBJEXT): $(srcdir)/enc/iso_8859_1.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/iso_8859_2.$(OBJEXT): $(srcdir)/enc/iso_8859_2.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/iso_8859_3.$(OBJEXT): $(srcdir)/enc/iso_8859_3.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/iso_8859_4.$(OBJEXT): $(srcdir)/enc/iso_8859_4.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/iso_8859_5.$(OBJEXT): $(srcdir)/enc/iso_8859_5.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/iso_8859_6.$(OBJEXT): $(srcdir)/enc/iso_8859_6.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/iso_8859_7.$(OBJEXT): $(srcdir)/enc/iso_8859_7.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/iso_8859_8.$(OBJEXT): $(srcdir)/enc/iso_8859_8.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/iso_8859_9.$(OBJEXT): $(srcdir)/enc/iso_8859_9.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/iso_8859_10.$(OBJEXT): $(srcdir)/enc/iso_8859_10.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/iso_8859_11.$(OBJEXT): $(srcdir)/enc/iso_8859_11.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/iso_8859_13.$(OBJEXT): $(srcdir)/enc/iso_8859_13.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/iso_8859_14.$(OBJEXT): $(srcdir)/enc/iso_8859_14.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/iso_8859_15.$(OBJEXT): $(srcdir)/enc/iso_8859_15.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/iso_8859_16.$(OBJEXT): $(srcdir)/enc/iso_8859_16.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/koi8_r.$(OBJEXT): $(srcdir)/enc/koi8_r.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/koi8_u.$(OBJEXT): $(srcdir)/enc/koi8_u.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/shift_jis.$(OBJEXT): $(srcdir)/enc/shift_jis.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/utf_16be.$(OBJEXT): $(srcdir)/enc/utf_16be.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/utf_16le.$(OBJEXT): $(srcdir)/enc/utf_16le.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/utf_32be.$(OBJEXT): $(srcdir)/enc/utf_32be.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/utf_32le.$(OBJEXT): $(srcdir)/enc/utf_32le.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/windows_1251.$(OBJEXT): $(srcdir)/enc/windows_1251.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/trans/japanese.$(OBJEXT): $(srcdir)/enc/trans/japanese.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/trans/korean.$(OBJEXT): $(srcdir)/enc/trans/korean.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/trans/single_byte.$(OBJEXT): $(srcdir)/enc/trans/single_byte.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/trans/transdb.$(OBJEXT): $(srcdir)/enc/trans/transdb.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<
enc/trans/utf_16_32.$(OBJEXT): $(srcdir)/enc/trans/utf_16_32.c
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<

enc/encdb.$(OBJEXT): encdb.h
enc/trans/transdb.$(OBJEXT): transdb.h

clean:
	@$(RM) $(ENCSOS) $(ENCDEFS) $(ENCOBJS) $(TRANSSOS) $(TRANSDEFS) $(TRANSOBJS)
	@-rmdir $(ENCSODIR)/trans
	@-rmdir $(ENCSODIR)
	@-rmdir enc/trans
	@-rmdir enc
