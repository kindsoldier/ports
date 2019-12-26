--- ./libgnomecanvas/gnome-canvas-shape.c.orig	2005-12-12 21:59:56.000000000 +0200
+++ ./libgnomecanvas/gnome-canvas-shape.c	2010-10-11 11:00:44.000000000 +0300
@@ -1343,7 +1343,7 @@
 {
 	GnomeCanvasShapePrivGdk * gdk;
 
-	g_assert (!((GnomeCanvasItem *)shape)->canvas->aa);
+	/*g_assert (!((GnomeCanvasItem *)shape)->canvas->aa);*/
 
 	gdk = shape->priv->gdk;
 
