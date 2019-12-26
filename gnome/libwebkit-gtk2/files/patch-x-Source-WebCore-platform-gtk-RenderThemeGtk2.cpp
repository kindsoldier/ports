--- ./Source/WebCore/platform/gtk/RenderThemeGtk2.cpp.orig	2016-04-10 08:48:37.000000000 +0200
+++ ./Source/WebCore/platform/gtk/RenderThemeGtk2.cpp	2016-10-19 23:30:37.562657000 +0200
@@ -40,12 +40,22 @@
 #include "PaintInfo.h"
 #include "PlatformContextCairo.h"
 #include "RenderElement.h"
+#include "RenderBox.h"
 #include "TextDirection.h"
 #include "UserAgentStyleSheets.h"
 #include "WidgetRenderingContext.h"
 #include <gdk/gdk.h>
 #include <gtk/gtk.h>
 
+//+ #include "PaintInfo.h"
+//+ #include "PlatformContextCairo.h"
+//+ #include "RenderElement.h"
+//++#include "RenderBox.h"
+//+ #include "TextDirection.h"
+//+ #include "UserAgentStyleSheets.h"
+//+ #include "WidgetRenderingContext.h"
+
+
 namespace WebCore {
 
 // This is the default value defined by GTK+, where it was defined as MIN_ARROW_WIDTH in gtkspinbutton.c.
