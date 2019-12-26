--- ./src/mpc.h.orig	2009-08-14 08:23:29.000000000 +0300
+++ ./src/mpc.h	2011-02-24 15:46:21.000000000 +0200
@@ -38,6 +38,8 @@
 #  define DEFAULT_PORT "6600"
 #endif /* DEFAULT_PORT */
 
+#define DEFAULT_FORMAT "%artist%--%date%--%album%--%track%--%title%"
+
 #ifndef DEFAULT_FORMAT
 #  define DEFAULT_FORMAT "[%name%: &[%artist% - ]%title%]|%name%|[%artist% - ]%title%|%file%"
 #endif /* DEFAULT_FORMAT */
