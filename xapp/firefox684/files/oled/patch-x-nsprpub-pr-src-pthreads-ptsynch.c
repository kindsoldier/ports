--- ./nsprpub/pr/src/pthreads/ptsynch.c~	2019-05-14 21:13:24.000000000 +0200
+++ ./nsprpub/pr/src/pthreads/ptsynch.c	2019-12-23 17:35:00.513748000 +0200
@@ -911,7 +911,7 @@
  * From the semctl(2) man page in glibc 2.0
  */
 #if (defined(__GNU_LIBRARY__) && !defined(_SEM_SEMUN_UNDEFINED)) \
-    || defined(FREEBSD) || defined(OPENBSD) || defined(BSDI) \
+    || defined(OPENBSD) || defined(BSDI) \
     || defined(DARWIN) || defined(SYMBIAN)
 /* union semun is defined by including <sys/sem.h> */
 #else
