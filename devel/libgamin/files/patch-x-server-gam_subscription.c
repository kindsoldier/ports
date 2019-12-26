--- ./server/gam_subscription.c.orig	2007-07-04 16:36:49.000000000 +0300
+++ ./server/gam_subscription.c	2014-12-25 04:59:21.000000000 +0200
@@ -141,7 +141,7 @@
  * @param sub the GamSubscription
  * @returns The path being monitored.  It should not be freed.
  */
-G_CONST_RETURN char *
+const char *
 gam_subscription_get_path(GamSubscription * sub)
 {
     if (sub == NULL)
