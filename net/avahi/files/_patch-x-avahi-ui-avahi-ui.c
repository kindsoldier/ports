--- ./avahi-ui/avahi-ui.c.orig	2011-02-23 15:10:08.000000000 +0200
+++ ./avahi-ui/avahi-ui.c	2011-10-28 23:50:25.000000000 +0300
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
