--- ./gdk-pixbuf/queryloaders.c.orig	2016-10-22 05:38:28.000000000 +0200
+++ ./gdk-pixbuf/queryloaders.c	2017-05-12 15:06:10.058144000 +0200
@@ -245,7 +245,7 @@
         gchar *result = g_strdup (g_getenv ("GDK_PIXBUF_MODULE_FILE"));
 
         if (!result)
-                result = g_build_filename (GDK_PIXBUF_LIBDIR, "gdk-pixbuf-2.0", GDK_PIXBUF_BINARY_VERSION, "loaders.cache", NULL);
+                result = g_build_filename (GDK_PIXBUF_LIBDIR, "gdk-pixbuf", "loaders.cache", NULL);
 
         return result;
 }
