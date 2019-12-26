--- ./mozilla/widget/gtk/nsWindow.cpp.orig	2017-05-08 11:30:06.099052000 +0200
+++ ./mozilla/widget/gtk/nsWindow.cpp	2017-05-08 11:29:47.789013000 +0200
@@ -63,7 +63,7 @@
 
 #ifdef MOZ_ENABLE_STARTUP_NOTIFICATION
 #define SN_API_NOT_YET_FROZEN
-#include <startup-notification-1.0/libsn/sn.h>
+#include <startup-notification/libsn/sn.h>
 #endif
 
 #include "mozilla/Assertions.h"
