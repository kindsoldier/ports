--- ./widget/gtk/nsWindow.cpp.orig	2015-01-09 06:38:28.000000000 +0200
+++ ./widget/gtk/nsWindow.cpp	2015-01-24 02:08:21.000000000 +0200
@@ -55,7 +55,7 @@
 
 #ifdef MOZ_ENABLE_STARTUP_NOTIFICATION
 #define SN_API_NOT_YET_FROZEN
-#include <startup-notification-1.0/libsn/sn.h>
+#include <startup-notification/libsn/sn.h>
 #endif
 
 #include "mozilla/Assertions.h"
