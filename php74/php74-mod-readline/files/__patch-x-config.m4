--- ./config.m4.orig	2016-01-06 17:14:47.000000000 +0200
+++ ./config.m4	2016-12-03 22:19:43.223269000 +0200
@@ -2,9 +2,6 @@
 dnl $Id$
 dnl
 
-PHP_ARG_WITH(libedit,for libedit readline replacement, 
-[  --with-libedit[=DIR]      Include libedit readline replacement (CLI/CGI only)])
-
 if test "$PHP_LIBEDIT" = "no"; then
   PHP_ARG_WITH(readline,for readline support,
   [  --with-readline[=DIR]     Include readline support (CLI/CGI only)])
