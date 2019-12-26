--- ./server/gam_node.h.orig	2007-07-04 16:36:49.000000000 +0300
+++ ./server/gam_node.h	2014-12-25 04:59:21.000000000 +0200
@@ -58,7 +58,7 @@
 void                  gam_node_set_is_dir          (GamNode         *node,
 						   gboolean        is_dir);
 	
-G_CONST_RETURN char  *gam_node_get_path            (GamNode         *node);
+const char           *gam_node_get_path            (GamNode         *node);
 
 GList                *gam_node_get_subscriptions   (GamNode         *node);
 
