--- ./exo/exo-thumbnail-preview.c.orig	2012-12-27 15:50:31.000000000 +0300
+++ ./exo/exo-thumbnail-preview.c	2015-01-19 16:50:50.000000000 +0200
@@ -221,8 +221,8 @@
     }
 
   /* try to load the frame image */
-  frame = gdk_pixbuf_new_from_file (DATADIR G_DIR_SEPARATOR_S "pixmaps" G_DIR_SEPARATOR_S "exo-"
-                                    LIBEXO_VERSION_API G_DIR_SEPARATOR_S "exo-thumbnail-frame.png", NULL);
+  frame = gdk_pixbuf_new_from_file (DATADIR G_DIR_SEPARATOR_S "pixmaps" G_DIR_SEPARATOR_S "exo"
+                                     G_DIR_SEPARATOR_S "exo-thumbnail-frame.png", NULL);
   if (G_LIKELY (frame != NULL))
     {
       /* add a frame to the thumbnail */
