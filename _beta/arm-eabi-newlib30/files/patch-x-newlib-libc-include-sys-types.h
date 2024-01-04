--- ./newlib/libc/include/sys/types.h.orig	2016-12-23 04:33:54.000000000 +0200
+++ ./newlib/libc/include/sys/types.h	2018-04-08 01:18:32.570661000 +0200
@@ -236,7 +236,7 @@
 typedef	__int64_t	sbintime_t;
 
 #include <sys/features.h>
-#include <sys/_pthreadtypes.h>
+#include <sys/_pthreadtypes.h>
 #include <machine/types.h>
 
 #endif  /* !__need_inttypes */
