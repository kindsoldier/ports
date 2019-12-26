--- ./src/3rdparty/javascriptcore/JavaScriptCore/jit/JITStubs.cpp.orig	2015-05-07 16:14:48.000000000 +0200
+++ ./src/3rdparty/javascriptcore/JavaScriptCore/jit/JITStubs.cpp	2019-03-22 13:54:51.705896000 +0200
@@ -80,7 +80,7 @@
 #define THUMB_FUNC_PARAM(name)
 #endif
 
-#if OS(LINUX) && CPU(X86_64)
+#if (OS(LINUX) || OS(FREEBSD)) && CPU(X86_64)
 #define SYMBOL_STRING_RELOCATION(name) #name "@plt"
 #else
 #define SYMBOL_STRING_RELOCATION(name) SYMBOL_STRING(name)
