--- ./libguile/gen-scmconfig.c.orig	2010-12-13 19:25:01.000000000 +0200
+++ ./libguile/gen-scmconfig.c	2019-01-20 20:28:47.675853000 +0200
@@ -123,6 +123,7 @@
 
 #include <libguile/gen-scmconfig.h>
 
+#define _ANSI_SOURCE
 #include <stdio.h>
 #include <string.h>
 
