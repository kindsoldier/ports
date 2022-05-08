--- ./ctags/main/options.c.orig	2020-11-08 19:14:52.000000000 +0200
+++ ./ctags/main/options.c	2022-05-05 10:05:42.169554000 +0200
@@ -3415,6 +3415,7 @@
 	 * used the alternative for /bin/nm
 	 */
 	processExcludeOption (NULL, "*.o");
+	processExcludeOption (NULL, "*~");
 	processExcludeOption (NULL, "*.a");
 	processExcludeOption (NULL, "*.so");
 
