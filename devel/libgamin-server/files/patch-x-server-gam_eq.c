--- ./server/gam_eq.c.orig	2007-07-04 16:36:49.000000000 +0300
+++ ./server/gam_eq.c	2014-12-25 04:59:21.000000000 +0200
@@ -124,7 +124,7 @@
 {
 	gboolean done_work = FALSE;
 	if (!eq)
-		return;
+		return FALSE;
 
 #ifdef GAM_EQ_VERBOSE
 	GAM_DEBUG(DEBUG_INFO, "gam_eq: Flushing event queue for %s\n", gam_connection_get_pidname (conn));
