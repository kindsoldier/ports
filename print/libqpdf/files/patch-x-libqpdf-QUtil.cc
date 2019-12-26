--- ./libqpdf/QUtil.cc.orig	2014-06-07 21:06:13.000000000 +0000
+++ ./libqpdf/QUtil.cc	2019-03-08 15:08:28.821428000 +0000
@@ -230,7 +230,7 @@
 QUtil::setLineBuf(FILE* f)
 {
 #ifndef _WIN32
-    setvbuf(f, reinterpret_cast<char *>(NULL), _IOLBF, 0);
+    setvbuf(f, reinterpret_cast<char *>(0), _IOLBF, 0);
 #endif
 }
 
