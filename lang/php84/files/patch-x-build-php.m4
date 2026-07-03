--- ./build/php.m4.orig	2026-05-05 18:34:12.000000000 +0200
+++ ./build/php.m4	2026-07-02 19:01:02.576889000 +0200
@@ -1902,7 +1902,7 @@
 dnl Common setup macro for libxml.
 dnl
 AC_DEFUN([PHP_SETUP_LIBXML], [
-  PKG_CHECK_MODULES([LIBXML], [libxml-2.0 >= 2.9.4])
+  PKG_CHECK_MODULES([LIBXML], [libxml2 >= 2.9.4])
   PHP_EVAL_INCLINE([$LIBXML_CFLAGS])
   PHP_EVAL_LIBLINE([$LIBXML_LIBS], [$1])
   $2
