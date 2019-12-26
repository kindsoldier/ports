--- ./include/includes.h.orig	2011-07-24 22:09:38.000000000 +0300
+++ ./include/includes.h	2015-01-02 17:21:25.000000000 +0200
@@ -865,7 +865,7 @@
 #endif
 
 #ifndef SIGRTMIN
-#define SIGRTMIN 32
+#define SIGRTMIN NSIG
 #endif
 
 #ifndef MAP_FILE
