--- ./src/include/storage/s_lock.h.orig	2022-02-07 23:15:36.000000000 +0200
+++ ./src/include/storage/s_lock.h	2022-02-23 20:23:06.858809000 +0200
@@ -321,7 +321,7 @@
  * We use the int-width variant of the builtin because it works on more chips
  * than other widths.
  */
-#if defined(__arm__) || defined(__arm) || defined(__aarch64__) || defined(__aarch64)
+#if defined(__arm__) || defined(__arm) || defined(__aarch64__) || defined(__aarch64) || defined(__riscv)
 #ifdef HAVE_GCC__SYNC_INT32_TAS
 #define HAS_TEST_AND_SET
 
@@ -338,7 +338,7 @@
 #define S_UNLOCK(lock) __sync_lock_release(lock)
 
 #endif	 /* HAVE_GCC__SYNC_INT32_TAS */
-#endif	 /* __arm__ || __arm || __aarch64__ || __aarch64 */
+#endif	 /* __arm__ || __arm || __aarch64__ || __aarch64 || __riscv */
 
 
 /*
