--- ./widget/gtk/nsWindow.cpp~	2019-12-23 13:37:31.773253000 +0200
+++ ./widget/gtk/nsWindow.cpp	2019-12-23 20:47:57.801853000 +0200
@@ -62,7 +62,7 @@
 
 #ifdef MOZ_ENABLE_STARTUP_NOTIFICATION
 #define SN_API_NOT_YET_FROZEN
-#include <startup-notification-1.0/libsn/sn.h>
+#include <startup-notification/libsn/sn.h>
 #endif
 
 #include "mozilla/Assertions.h"
