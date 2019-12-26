--- ./include/includes.h.orig	2010-06-11 14:22:12.000000000 +0300
+++ ./include/includes.h	2011-11-16 18:21:33.000000000 +0300
@@ -865,7 +865,7 @@
 #endif
 
 #ifndef SIGRTMIN
-#define SIGRTMIN 32
+#define SIGRTMIN NSIG
 #endif
 
 #ifndef MAP_FILE
