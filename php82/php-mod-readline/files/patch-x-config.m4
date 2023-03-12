--- ./config.m4.orig	2022-04-12 12:55:44.000000000 +0200
+++ ./config.m4	2022-04-26 23:16:23.127198000 +0200
@@ -1,8 +1,3 @@
-PHP_ARG_WITH([libedit],
-  [for libedit readline replacement],
-  [AS_HELP_STRING([--with-libedit],
-    [Include libedit readline replacement (CLI/CGI only)])])
-
 if test "$PHP_LIBEDIT" = "no"; then
   PHP_ARG_WITH([readline],
     [for readline support],
