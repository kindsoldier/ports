--- ./smbd/aio.c.orig	2010-06-11 14:22:12.000000000 +0300
+++ ./smbd/aio.c	2011-11-16 18:21:33.000000000 +0300
@@ -24,9 +24,6 @@
 
 /* The signal we'll use to signify aio done. */
 #ifndef RT_SIGNAL_AIO
-#ifndef SIGRTMIN
-#define SIGRTMIN	NSIG
-#endif
 #define RT_SIGNAL_AIO	(SIGRTMIN+3)
 #endif
 
