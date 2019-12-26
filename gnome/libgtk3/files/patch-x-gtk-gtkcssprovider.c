--- ./gtk/gtkcssprovider.c.orig	2019-01-23 22:46:13.000000000 +0200
+++ ./gtk/gtkcssprovider.c	2019-03-26 22:49:22.707317000 +0200
@@ -2038,7 +2038,7 @@
   gchar *path;
 
   if (variant)
-    file = g_strconcat ("gtk-", variant, ".css", NULL);
+    file = g_strdup ("gtk.css");
   else
     file = g_strdup ("gtk.css");
 
@@ -2052,7 +2052,7 @@
       if (i < 14)
         i = 0;
 
-      subsubdir = g_strdup_printf ("gtk-3.%d", i);
+      subsubdir = g_strdup_printf ("gtk3");
       path = g_build_filename (base, subsubdir, file, NULL);
       g_free (subsubdir);
 
