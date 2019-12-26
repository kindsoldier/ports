--- ./src/corelib/global/qfloat16.cpp.orig	2019-01-28 19:11:52.000000000 +0200
+++ ./src/corelib/global/qfloat16.cpp	2019-03-17 19:22:28.509900000 +0200
@@ -135,7 +135,7 @@
 #undef f16cextern
 }
 
-#elif defined(__ARM_FP16_FORMAT_IEEE) && defined(__ARM_NEON__)
+#elif defined(__ARM_FP16_FORMAT_IEEE) && defined(__ARM_NEON__) && (__ARM_FP & 2)
 static inline bool hasFastF16()
 {
     return true;
