--- ./src/polkitbackend/polkitbackendactionpool.c.orig	2015-06-23 18:57:15.000000000 +0200
+++ ./src/polkitbackend/polkitbackendactionpool.c	2016-03-11 10:32:32.859350000 +0200
@@ -89,7 +89,7 @@
 
 typedef struct
 {
-  /* directory with .policy files, e.g. /usr/share/polkit-1/actions */
+  /* directory with .policy files, e.g. /usr/share/polkit/actions */
   GFile *directory;
 
   GFileMonitor *dir_monitor;
