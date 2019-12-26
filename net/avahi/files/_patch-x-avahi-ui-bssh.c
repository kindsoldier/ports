--- ./avahi-ui/bssh.c.orig	2010-06-29 06:30:35.000000000 +0300
+++ ./avahi-ui/bssh.c	2011-10-28 23:50:25.000000000 +0300
@@ -28,6 +28,10 @@
 #include <locale.h>
 #include <getopt.h>
 
+#undef G_DISABLE_DEPRECATED
+#include <glib/gmacros.h>
+
+
 #include <gtk/gtk.h>
 
 #include <avahi-client/client.h>
