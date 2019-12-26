--- ./src/3rdparty/webkit/Source/JavaScriptCore/jit/ExecutableAllocator.h.orig	2015-05-07 16:14:45.000000000 +0200
+++ ./src/3rdparty/webkit/Source/JavaScriptCore/jit/ExecutableAllocator.h	2019-03-22 13:54:51.712115000 +0200
@@ -326,6 +326,8 @@
         syscall(__NR_cacheflush, reinterpret_cast<unsigned>(code), size, CACHEFLUSH_D_WB | CACHEFLUSH_I);
 #endif
     }
+#elif CPU(ARM_TRADITIONAL) && OS(FREEBSD) && COMPILER(CLANG)
+       __clear_cache(code, reinterpret_cast<char*>(code) + size);
 #else
     #error "The cacheFlush support is missing on this platform."
 #endif
