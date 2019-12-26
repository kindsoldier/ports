--- ./libgnomevfs/xdgmime.c.orig	2010-02-09 14:16:14.000000000 +0200
+++ ./libgnomevfs/xdgmime.c	2015-01-05 21:19:09.000000000 +0200
@@ -254,7 +254,7 @@
 
   xdg_data_dirs = getenv ("XDG_DATA_DIRS");
   if (xdg_data_dirs == NULL)
-    xdg_data_dirs = "/usr/local/share/:/usr/share/";
+    xdg_data_dirs = "/usr/local/share/";
 
   ptr = xdg_data_dirs;
 
