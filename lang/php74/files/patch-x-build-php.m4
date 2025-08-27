--- ./build/php.m4.orig	2022-10-31 12:36:05.000000000 +0200
+++ ./build/php.m4	2025-08-26 20:19:41.430005000 +0200
@@ -2034,7 +2034,7 @@
 dnl Common setup macro for libxml.
 dnl
 AC_DEFUN([PHP_SETUP_LIBXML], [
-  PKG_CHECK_MODULES([LIBXML], [libxml-2.0 >= 2.7.6])
+  PKG_CHECK_MODULES([LIBXML], [libxml2 >= 2.7.6])
 
   PHP_EVAL_INCLINE($LIBXML_CFLAGS)
   PHP_EVAL_LIBLINE($LIBXML_LIBS, $1)
