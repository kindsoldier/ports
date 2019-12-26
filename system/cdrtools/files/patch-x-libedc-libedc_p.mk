--- ./libedc/libedc_p.mk.orig	2010-06-23 23:48:26.000000000 +0300
+++ ./libedc/libedc_p.mk	2018-06-10 14:33:47.150880000 +0200
@@ -26,7 +26,7 @@
 XARCH_OPT=	$(_XARCH_OPT:%cc=$(XARCH_GEN))
 
 SUNPROCOPTOPT=	-fast $(XARCH_OPT)
-GCCOPTOPT=	-O3  -fexpensive-optimizations
+GCCOPTOPT=	-O2
 #
 CFILES=		edc_ecc.c
 HFILES=
