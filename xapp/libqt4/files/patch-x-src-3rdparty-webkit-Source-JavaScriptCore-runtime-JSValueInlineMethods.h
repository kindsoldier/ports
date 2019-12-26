--- ./src/3rdparty/webkit/Source/JavaScriptCore/runtime/JSValueInlineMethods.h.orig	2015-05-07 16:14:45.000000000 +0200
+++ ./src/3rdparty/webkit/Source/JavaScriptCore/runtime/JSValueInlineMethods.h	2019-03-22 13:54:51.716495000 +0200
@@ -227,7 +227,11 @@
             u.asBits.tag = CellTag;
         else
             u.asBits.tag = EmptyValueTag;
+#if defined(__sparc64__) || defined(__aarch64__)
+        u.asBits.payload = reinterpret_cast<int64_t>(ptr);
+#else
         u.asBits.payload = reinterpret_cast<int32_t>(ptr);
+#endif
 #if ENABLE(JSC_ZOMBIES)
         ASSERT(!isZombie());
 #endif
@@ -239,7 +243,11 @@
             u.asBits.tag = CellTag;
         else
             u.asBits.tag = EmptyValueTag;
+#if defined(__sparc64__) || defined(__aarch64__)
+        u.asBits.payload = reinterpret_cast<int64_t>(const_cast<JSCell*>(ptr));
+#else
         u.asBits.payload = reinterpret_cast<int32_t>(const_cast<JSCell*>(ptr));
+#endif
 #if ENABLE(JSC_ZOMBIES)
         ASSERT(!isZombie());
 #endif
