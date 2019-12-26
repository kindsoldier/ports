--- ./backend/code1.c.orig	2011-05-16 22:12:46.000000000 +0300
+++ ./backend/code1.c	2013-03-14 16:56:19.000000000 +0300
@@ -28,7 +28,6 @@
 #ifdef __APPLE__
 #include <sys/malloc.h>
 #else
-#include <malloc.h>
 #endif
 
 void horiz(struct zint_symbol *symbol, int row_no, int full)
