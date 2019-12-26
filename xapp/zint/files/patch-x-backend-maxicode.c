--- ./backend/maxicode.c.orig	2011-05-16 22:12:46.000000000 +0300
+++ ./backend/maxicode.c	2013-03-14 16:56:19.000000000 +0300
@@ -29,7 +29,6 @@
 #ifdef __APPLE__
 #include <sys/malloc.h> 
 #else
-#include <malloc.h> 
 #endif
 
 int maxi_codeword[144];
