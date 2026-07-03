--- ./build/php.m4.orig	2026-07-01 09:57:51.000000000 +0200
+++ ./build/php.m4	2026-07-02 20:19:42.554771000 +0200
@@ -2022,7 +2022,7 @@
 dnl Common setup macro for libxml.
 dnl
 AC_DEFUN([PHP_SETUP_LIBXML], [
-  PKG_CHECK_MODULES([LIBXML], [libxml-2.0 >= 2.9.0])
+  PKG_CHECK_MODULES([LIBXML], [libxml2 >= 2.9.0])
 
   PHP_EVAL_INCLINE($LIBXML_CFLAGS)
   PHP_EVAL_LIBLINE($LIBXML_LIBS, $1)
