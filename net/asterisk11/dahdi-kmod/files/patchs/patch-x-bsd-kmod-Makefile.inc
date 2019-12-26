--- ./bsd-kmod/Makefile.inc.orig	2012-02-26 23:53:27.000000000 +0300
+++ ./bsd-kmod/Makefile.inc	2014-09-27 21:19:40.000000000 +0300
@@ -19,4 +19,4 @@
 TOUCH?=		touch
 
 beforeinstall:
-	${MKDIR} ${KMODDIR}
+	${MKDIR} ${DESTDIR}${KMODDIR}
