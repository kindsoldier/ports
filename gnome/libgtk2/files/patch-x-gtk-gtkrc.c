--- ./gtk/gtkrc.c.orig	2014-09-29 23:02:17.000000000 +0300
+++ ./gtk/gtkrc.c	2015-10-16 19:39:41.011997000 +0200
@@ -399,9 +399,9 @@
   var = g_getenv ("GTK_EXE_PREFIX");
 
   if (var)
-    path = g_build_filename (var, "lib", "gtk-2.0", GTK_BINARY_VERSION, type, NULL);
+    path = g_build_filename (var, "lib", "gtk", type, NULL);
   else
-    path = g_build_filename (GTK_LIBDIR, "gtk-2.0", GTK_BINARY_VERSION, type, NULL);
+    path = g_build_filename (GTK_LIBDIR, "gtk", type, NULL);
 
   return path;
 }
@@ -525,26 +525,26 @@
       const gchar * const *config_dirs;
       const gchar *config_dir;
 
-      str = g_build_filename (GTK_DATA_PREFIX, "share", "gtk-2.0", "gtkrc", NULL);
+      str = g_build_filename (GTK_DATA_PREFIX, "share", "gtk", "gtkrc", NULL);
       gtk_rc_add_default_file (str);
       g_free (str);
 
       config_dirs = g_get_system_config_dirs ();
       for (config_dir = *config_dirs; *config_dirs != NULL; config_dirs++)
         {
-          str = g_build_filename (config_dir, "gtk-2.0", "gtkrc", NULL);
+          str = g_build_filename (config_dir, "gtk", "gtkrc", NULL);
           gtk_rc_add_default_file (str);
           g_free (str);
         }
 
-      str = g_build_filename (GTK_SYSCONFDIR, "gtk-2.0", "gtkrc", NULL);
+      str = g_build_filename (GTK_SYSCONFDIR, "gtk", "gtkrc", NULL);
       gtk_rc_add_default_file (str);
       g_free (str);
 
       home = g_get_home_dir ();
       if (home)
 	{
-	  str = g_build_filename (home, ".gtkrc-2.0", NULL);
+	  str = g_build_filename (home, ".gtkrc", NULL);
 	  gtk_rc_add_default_file (str);
 	  g_free (str);
 	}
@@ -810,11 +810,11 @@
   gchar *subpath;
 
   if (type)
-    subpath = g_strconcat ("gtk-2.0-", type,
+    subpath = g_strconcat ("gtk-", type,
 			   G_DIR_SEPARATOR_S "gtkrc",
 			   NULL);
   else
-    subpath = g_strdup ("gtk-2.0" G_DIR_SEPARATOR_S "gtkrc");
+    subpath = g_strdup ("gtk" G_DIR_SEPARATOR_S "gtkrc");
   
   /* First look in the users home directory
    */
