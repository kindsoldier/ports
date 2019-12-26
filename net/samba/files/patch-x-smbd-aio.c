--- ./smbd/aio.c.orig	2011-07-24 22:09:38.000000000 +0300
+++ ./smbd/aio.c	2015-01-02 17:21:25.000000000 +0200
@@ -24,9 +24,6 @@
 
 /* The signal we'll use to signify aio done. */
 #ifndef RT_SIGNAL_AIO
-#ifndef SIGRTMIN
-#define SIGRTMIN	NSIG
-#endif
 #define RT_SIGNAL_AIO	(SIGRTMIN+3)
 #endif
 
