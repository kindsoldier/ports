--- ./widget/gtk/nsWindow.cpp.orig	2020-01-15 21:33:08.152934000 +0200
+++ ./widget/gtk/nsWindow.cpp	2020-01-15 21:36:33.967878000 +0200
@@ -66,7 +66,7 @@
 
 #ifdef MOZ_ENABLE_STARTUP_NOTIFICATION
 #  define SN_API_NOT_YET_FROZEN
-#  include <startup-notification-1.0/libsn/sn.h>
+#  include <startup-notification/libsn/sn.h>
 #endif
 
 #include "mozilla/Assertions.h"
