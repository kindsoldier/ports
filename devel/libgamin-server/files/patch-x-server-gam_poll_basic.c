--- ./server/gam_poll_basic.c.orig	2007-07-04 16:46:29.000000000 +0300
+++ ./server/gam_poll_basic.c	2014-12-25 04:59:21.000000000 +0200
@@ -345,7 +345,7 @@
 #ifdef ST_MTIM_NSEC
 		GAM_DEBUG(DEBUG_INFO, "%d %d : %d %d\n", node->sbuf.st_mtim.tv_sec, node->sbuf.st_mtim.tv_nsec, sbuf.st_mtim.tv_sec, sbuf.st_mtim.tv_nsec);
 #else
-		GAM_DEBUG(DEBUG_INFO, "%d : %d\n", node->sbuf.st_mtime, sbuf.st_mtim.tv_nsec);
+		GAM_DEBUG(DEBUG_INFO, "%d : %d\n", node->sbuf.st_mtime, sbuf.st_mtime);
 #endif /* ST_MTIM_NSEC */
 #endif /* VERBOSE_POLL */
 	}
