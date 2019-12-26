--- ./server/gam_server.c.orig	2007-07-04 16:36:49.000000000 +0300
+++ ./server/gam_server.c	2014-12-25 04:59:21.000000000 +0200
@@ -32,7 +32,7 @@
 #include "gam_server.h"
 #include "gam_channel.h"
 #include "gam_subscription.h"
-#include "gam_poll_generic.h"
+#include "gam_poll_basic.h"
 #ifdef ENABLE_INOTIFY
 #include "gam_inotify.h"
 #endif
@@ -200,7 +200,8 @@
 			return gam_poll_add_subscription (sub);
 		else
 #endif
-			return gam_kernel_add_subscription (sub);
+			/*return gam_kernel_add_subscription (sub);*/
+			return gam_poll_add_subscription (sub);
 	} else {
 		gam_fs_mon_type type;
 		type = gam_fs_get_mon_type (path);
@@ -243,7 +244,8 @@
 			return gam_poll_remove_subscription (sub);
 		else
 #endif
-			return gam_kernel_remove_subscription(sub);
+			/*return gam_kernel_remove_subscription(sub);*/
+			return gam_poll_remove_subscription (sub);
 	} else {
 		gam_fs_mon_type type;
 		type = gam_fs_get_mon_type (path);
@@ -438,7 +440,7 @@
 GamPollHandler
 gam_server_get_poll_handler (void)
 {
-	return __gam_kernel_handler;
+	return __gam_poll_handler;
 }
 
 gboolean
