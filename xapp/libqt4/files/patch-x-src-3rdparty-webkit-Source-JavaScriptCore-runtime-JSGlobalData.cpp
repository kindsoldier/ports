--- ./src/3rdparty/webkit/Source/JavaScriptCore/runtime/JSGlobalData.cpp.orig	2015-05-07 16:14:45.000000000 +0200
+++ ./src/3rdparty/webkit/Source/JavaScriptCore/runtime/JSGlobalData.cpp	2019-03-22 13:54:51.714343000 +0200
@@ -121,7 +121,11 @@
 {
     // Enough storage to fit a JSArray, JSByteArray, JSString, or JSFunction.
     // COMPILE_ASSERTS below check that this is true.
+#if defined(__aarch64__)
+    char storage[128];
+#else
     char storage[64];
+#endif
 
     COMPILE_ASSERT(sizeof(JSArray) <= sizeof(storage), sizeof_JSArray_must_be_less_than_storage);
     JSCell* jsArray = new (storage) JSArray(JSArray::VPtrStealingHack);
