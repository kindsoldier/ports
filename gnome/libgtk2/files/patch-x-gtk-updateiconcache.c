--- ./gtk/updateiconcache.c.orig	2014-09-29 23:02:17.000000000 +0300
+++ ./gtk/updateiconcache.c	2015-10-16 19:38:10.694153000 +0200
@@ -1553,7 +1553,7 @@
   if (!validate_file (tmp_cache_path))
     {
       g_printerr (_("The generated cache was invalid.\n"));
-      /*g_unlink (tmp_cache_path);*/
+      g_unlink (tmp_cache_path);
       exit (1);
     }
 
