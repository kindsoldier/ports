--- ./libedc/libedc_dec_p.mk.orig	2010-06-23 23:48:26.000000000 +0300
+++ ./libedc/libedc_dec_p.mk	2018-06-10 14:33:47.145746000 +0200
@@ -22,7 +22,7 @@
 XARCH_OPT=	$(_XARCH_OPT:%cc=$(XARCH_GEN))
 
 SUNPROCOPTOPT=	-fast $(XARCH_OPT)
-GCCOPTOPT=	-O3  -fexpensive-optimizations
+GCCOPTOPT=	-O2
 #
 CFILES=		edc_ecc_dec.c
 HFILES=		edc.h
