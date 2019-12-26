--- ./common/compat.c.orig	2015-10-19 11:32:31.000000000 +0200
+++ ./common/compat.c	2016-03-28 20:07:37.247139000 +0200
@@ -34,12 +34,6 @@
 
 #include "config.h"
 
-/*
- * This is needed to expose pthread_mutexattr_settype and PTHREAD_MUTEX_DEFAULT
- * on older pthreads implementations
- */
-#define _XOPEN_SOURCE 700
-
 #include "compat.h"
 
 #include <assert.h>
