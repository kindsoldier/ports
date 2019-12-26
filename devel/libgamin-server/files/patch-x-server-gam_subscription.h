--- ./server/gam_subscription.h.orig	2007-07-04 16:36:49.000000000 +0300
+++ ./server/gam_subscription.h	2014-12-25 04:59:21.000000000 +0200
@@ -21,7 +21,7 @@
 
 int                  gam_subscription_get_reqno    (GamSubscription *sub);
 
-G_CONST_RETURN char *gam_subscription_get_path     (GamSubscription *sub);
+const char          *gam_subscription_get_path     (GamSubscription *sub);
 
 GamListener         *gam_subscription_get_listener (GamSubscription *sub);
 
