--- ./app/text/gimpfont.c.orig	2012-05-08 09:05:46.000000000 +0300
+++ ./app/text/gimpfont.c	2015-10-23 19:33:49.141120000 +0200
@@ -27,7 +27,7 @@
 
 #define PANGO_ENABLE_ENGINE  1   /* Argh */
 #include <pango/pango-ot.h>
-#include <freetype/tttables.h>
+#include <freetype2/tttables.h>
 
 #include "text-types.h"
 
