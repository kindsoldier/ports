--- ./prnt/hpcups/ErnieFilter.cpp.orig	2010-07-19 05:14:09.000000000 +0300
+++ ./prnt/hpcups/ErnieFilter.cpp	2015-01-04 01:11:42.000000000 +0200
@@ -50,7 +50,7 @@
 #include "ErnieFilter.h"
 
 
-#if defined(__APPLE__) || defined(__linux)
+#if defined(__APPLE__) || defined(__linux) || (__FreeBSD__)
 #include <math.h>
 #endif
 
