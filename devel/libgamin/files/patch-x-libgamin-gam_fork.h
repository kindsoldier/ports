--- ./libgamin/gam_fork.h.orig	2007-07-04 16:36:48.000000000 +0300
+++ ./libgamin/gam_fork.h	2014-12-25 04:59:21.000000000 +0200
@@ -32,6 +32,9 @@
 #endif
 
 int		gamin_fork_server	(const char *fam_client_id);
+#ifdef RUN_AS_EUID
+int		gamin_drop_privileges	(int to_uid, int to_gid);
+#endif
 
 #ifdef __cplusplus
 }
