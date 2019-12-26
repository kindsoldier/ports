--- ./app/base/base-utils.c.orig	2012-05-08 09:05:45.000000000 +0300
+++ ./app/base/base-utils.c	2015-10-23 19:36:43.734164000 +0200
@@ -112,7 +112,7 @@
 char *
 get_backtrace (void)
 {
-#ifdef G_OS_UNIX
+#ifdef G_OS_LINUX
   void     *functions[MAX_FUNC];
   char    **function_names;
   int       n_functions;
