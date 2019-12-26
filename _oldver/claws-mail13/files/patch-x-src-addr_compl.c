--- ./src/addr_compl.c.orig	2015-10-11 10:19:33.000000000 +0200
+++ ./src/addr_compl.c	2015-10-24 19:48:44.544111000 +0200
@@ -24,6 +24,7 @@
 #endif
 #include "defs.h"
 
+#undef G_DISABLE_DEPRECATED
 #include <glib.h>
 #include <glib/gi18n.h>
 #include <gdk/gdkkeysyms.h>
