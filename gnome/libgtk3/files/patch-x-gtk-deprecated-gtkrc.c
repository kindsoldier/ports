--- ./gtk/deprecated/gtkrc.c.orig	2019-01-23 22:46:13.000000000 +0200
+++ ./gtk/deprecated/gtkrc.c	2019-03-26 22:01:54.278944000 +0200
@@ -722,9 +722,9 @@
   var = g_getenv ("GTK_EXE_PREFIX");
 
   if (var)
-    path = g_build_filename (var, "lib", "gtk-3.0", GTK_BINARY_VERSION, type, NULL);
+    path = g_build_filename (var, "lib", "gtk3", GTK_BINARY_VERSION, type, NULL);
   else
-    path = g_build_filename (_gtk_get_libdir (), "gtk-3.0", GTK_BINARY_VERSION, type, NULL);
+    path = g_build_filename (_gtk_get_libdir (), "gtk3", GTK_BINARY_VERSION, type, NULL);
 
   return path;
 }
