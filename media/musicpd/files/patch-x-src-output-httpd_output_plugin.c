--- ./src/output/httpd_output_plugin.c.orig	2011-10-09 14:43:52.000000000 +0300
+++ ./src/output/httpd_output_plugin.c	2011-11-09 13:32:57.000000000 +0300
@@ -32,6 +32,7 @@
 #include <assert.h>
 
 #include <sys/types.h>
+#include <sys/socket.h>
 #include <unistd.h>
 #include <errno.h>
 
