--- ./libguile/pthread-threads.h.orig	2010-12-13 19:24:40.000000000 +0200
+++ ./libguile/pthread-threads.h	2014-01-06 21:26:21.000000000 +0300
@@ -26,6 +26,9 @@
 */
 
 #include <pthread.h>
+#if HAVE_PTHREAD_NP_H
+# include <pthread_np.h>
+#endif
 #include <sched.h>
 
 /* Threads 
