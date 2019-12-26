--- ./gtk/gtkcomposetable.c.orig	2019-01-23 22:46:13.000000000 +0200
+++ ./gtk/gtkcomposetable.c	2019-03-26 21:58:27.035114000 +0200
@@ -519,7 +519,7 @@
 
   basename = g_strdup_printf ("%08x.cache", hash);
 
-  dir = g_build_filename (g_get_user_cache_dir (), "gtk-3.0", "compose", NULL);
+  dir = g_build_filename (g_get_user_cache_dir (), "gtk3", "compose", NULL);
   path = g_build_filename (dir, basename, NULL);
   if (g_mkdir_with_parents (dir, 0755) != 0)
     {
