--- ./bsd-kmod/Makefile.inc.orig	2014-09-30 23:38:29.000000000 +0300
+++ ./bsd-kmod/Makefile.inc	2014-10-02 21:21:52.000000000 +0300
@@ -2,7 +2,8 @@
 
 PREFIX?=	/usr/local
 INCLUDEDIR=	${.CURDIR}/../../include
-KMODDIR?=	${PREFIX}/lib/dahdi
+#KMODDIR?=	${PREFIX}/lib/dahdi
+KMODDIR?=	/boot/modules
 
 CFLAGS+=	-I${INCLUDEDIR} -D__KERNEL__ -DM_LINUX=M_DAHDI
 #CFLAGS+=	-DINVARIANT_SUPPORT -DINVARIANTS -DDIAGNOSTIC
