--- ./lib/screenshooter-dialogs.c.orig	2014-12-20 11:23:33.000000000 +0200
+++ ./lib/screenshooter-dialogs.c	2015-11-19 11:42:51.979363000 +0200
@@ -231,7 +231,7 @@
   GFile *file;
   gchar *base_name;
   gchar *datetime;
-  const gchar *strftime_format = "%Y-%m-%d_%H-%M-%S";
+  const gchar *strftime_format = "%Y-%m-%d--%H-%M-%S";
 
   gint i;
 
@@ -248,7 +248,7 @@
   if (!timestamp)
     base_name = g_strconcat (title, ".png", NULL);
   else
-    base_name = g_strconcat (title, "_", datetime, ".png", NULL);
+    base_name = g_strconcat (title, "-", datetime, ".png", NULL);
 
   file = g_file_get_child (directory, base_name);
 
@@ -271,7 +271,7 @@
       if (!timestamp)
          base_name = g_strconcat (title, extension, NULL);
        else
-         base_name = g_strconcat (title, "_", datetime, extension, NULL);
+         base_name = g_strconcat (title, "-", datetime, extension, NULL);
 
       file = g_file_get_child (directory, base_name);
 
