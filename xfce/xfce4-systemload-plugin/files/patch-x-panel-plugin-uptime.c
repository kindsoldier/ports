--- ./panel-plugin/uptime.c.orig	2012-04-18 16:41:36.000000000 +0300
+++ ./panel-plugin/uptime.c	2013-09-20 16:29:04.000000000 +0300
@@ -81,6 +81,7 @@
 #include <string.h>
 #include <sys/param.h>
 #include <sys/sysctl.h>
+#include <sys/time.h>
 #include <sys/types.h>
 #include <sys/vmmeter.h>
 #include <unistd.h>
