--- ./dialogs/appearance-settings/main.c.orig	2013-05-05 19:12:54.000000000 +0300
+++ ./dialogs/appearance-settings/main.c	2014-12-22 14:35:28.000000000 +0200
@@ -293,7 +293,7 @@
     GSList       *check_list = NULL;
 
     /* Determine current theme */
-    active_theme_name = xfconf_channel_get_string (xsettings_channel, "/Net/IconThemeName", "Rodent");
+    active_theme_name = xfconf_channel_get_string (xsettings_channel, "/Net/IconThemeName", "gnome");
 
     /* Determine directories to look in for icon themes */
     xfce_resource_push_path (XFCE_RESOURCE_ICONS, DATADIR G_DIR_SEPARATOR_S "icons");
@@ -427,7 +427,7 @@
         while ((file = g_dir_read_name (dir)) != NULL)
         {
             /* Build the theme style filename */
-            gtkrc_filename = g_build_filename (ui_theme_dirs[i], file, "gtk-2.0", "gtkrc", NULL);
+            gtkrc_filename = g_build_filename (ui_theme_dirs[i], file, "gtk", "gtkrc", NULL);
 
             /* Check if the gtkrc file exists and the theme is not already in the list */
             if (g_file_test (gtkrc_filename, G_FILE_TEST_EXISTS)
