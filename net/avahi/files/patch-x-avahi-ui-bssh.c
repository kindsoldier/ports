--- ./avahi-ui/bssh.c.orig	2010-08-26 03:51:39.023153000 +0300
+++ ./avahi-ui/bssh.c	2015-01-02 15:33:56.000000000 +0200
@@ -28,6 +28,10 @@
 #include <locale.h>
 #include <getopt.h>
 
+#undef G_DISABLE_DEPRECATED
+#include <glib/gmacros.h>
+
+
 #include <gtk/gtk.h>
 
 #include <avahi-client/client.h>
