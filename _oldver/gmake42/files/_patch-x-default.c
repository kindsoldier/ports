--- ./default.c.orig	2013-10-06 02:12:18.000000000 +0300
+++ ./default.c	2013-10-09 21:09:42.000000000 +0300
@@ -375,6 +375,9 @@
     "LXLIBS", "",
     "LDLIBS", "",
 #endif
+#ifdef __FreeBSD__
+    "MAKE", "gmake",
+#endif
 
     "LINK.obj", "$(LD) $(LDFLAGS)",
 #ifndef GCC_IS_NATIVE
@@ -409,7 +412,7 @@
     "OBJC", "gcc",
 #else
     "CC", "cc",
-    "CXX", "g++",
+    "CXX", "c++",
     "OBJC", "cc",
 #endif
 
