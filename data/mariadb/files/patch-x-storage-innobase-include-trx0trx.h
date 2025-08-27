--- ./storage/innobase/include/trx0trx.h.orig	2025-01-29 12:22:21.000000000 +0200
+++ ./storage/innobase/include/trx0trx.h	2025-08-27 14:19:07.750565000 +0200
@@ -38,6 +38,7 @@
 #include "small_vector.h"
 
 #include <vector>
+#include <mutex>
 
 // Forward declaration
 struct mtr_t;
@@ -605,10 +606,10 @@
   /** mutex protecting state and some of lock
   (some are protected by lock_sys.latch) */
   srw_spin_mutex mutex;
-#ifdef UNIV_DEBUG
+//#ifdef UNIV_DEBUG
   /** The owner of mutex (0 if none); protected by mutex */
   std::atomic<pthread_t> mutex_owner{0};
-#endif /* UNIV_DEBUG */
+//#endif /* UNIV_DEBUG */
 public:
   void mutex_init() { mutex.init(); }
   void mutex_destroy() { mutex.destroy(); }
