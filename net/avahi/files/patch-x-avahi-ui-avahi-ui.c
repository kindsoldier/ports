--- ./avahi-ui/avahi-ui.c.orig	2011-02-18 20:04:10.251546000 +0200
+++ ./avahi-ui/avahi-ui.c	2015-01-02 15:33:56.000000000 +0200
@@ -27,6 +27,9 @@
 #include <stdarg.h>
 #include <net/if.h>
 
+#undef G_DISABLE_DEPRECATED
+#include <glib/gmacros.h>
+
 #include <gtk/gtk.h>
 
 #include <avahi-glib/glib-watch.h>
@@ -43,6 +46,7 @@
 #include "../avahi-utils/stdb.h"
 #endif
 
+
 /* todo: i18n, HIGify */
 
 struct _AuiServiceDialogPrivate {
