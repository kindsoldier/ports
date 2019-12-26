--- ./src/3rdparty/webkit/Source/JavaScriptCore/wtf/Platform.h.orig	2015-05-07 16:14:45.000000000 +0200
+++ ./src/3rdparty/webkit/Source/JavaScriptCore/wtf/Platform.h	2019-03-22 13:54:51.723193000 +0200
@@ -279,6 +279,7 @@
 #elif defined(__ARM_ARCH_6__) \
     || defined(__ARM_ARCH_6J__) \
     || defined(__ARM_ARCH_6K__) \
+    || defined(__ARM_ARCH_6KZ__) \
     || defined(__ARM_ARCH_6Z__) \
     || defined(__ARM_ARCH_6ZK__) \
     || defined(__ARM_ARCH_6T2__) \
