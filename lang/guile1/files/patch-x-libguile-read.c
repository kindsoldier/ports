--- ./libguile/read.c.orig	2010-12-13 19:24:40.000000000 +0200
+++ ./libguile/read.c	2019-01-20 20:28:47.694323000 +0200
@@ -27,7 +27,7 @@
 #include <ctype.h>
 #include <string.h>
 #ifdef HAVE_STRINGS_H
-# include <strings.h>
+# include "/usr/include/strings.h"
 #endif
 
 #include "libguile/_scm.h"
