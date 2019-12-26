--- ./gtksourceview/gtksourceview-utils.c.orig	2010-06-21 00:05:16.000000000 +0300
+++ ./gtksourceview/gtksourceview-utils.c	2010-09-22 23:09:53.000000000 +0300
@@ -24,7 +24,7 @@
 
 #include "gtksourceview-utils.h"
 
-#define SOURCEVIEW_DIR "gtksourceview-2.0"
+#define SOURCEVIEW_DIR "gtksourceview2"
 
 
 gchar **
@@ -54,7 +54,7 @@
 			g_ptr_array_add (dirs,
 					 g_strdup_printf ("%s/%s",
 							  home,
-							  ".gnome2/gtksourceview-1.0/language-specs"));
+							  ".gnome2/gtksourceview/language-specs"));
 		}
 	}
 #endif
