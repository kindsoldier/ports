--- ./plugins/check_disk.c.orig	2019-10-12 15:42:56.945286000 +0200
+++ ./plugins/check_disk.c	2019-10-12 15:42:56.946532000 +0200
@@ -188,7 +188,7 @@
   perf = strdup ("");
   stat_buf = malloc(sizeof *stat_buf);
 
-  setlocale (LC_ALL, "");
+  setlocale (LC_ALL, ""); setlocale(LC_NUMERIC, "C");
   bindtextdomain (PACKAGE, LOCALEDIR);
   textdomain (PACKAGE);
 
