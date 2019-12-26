--- ./zebra/kernel_socket.c.orig	2019-09-25 23:31:33.843852000 +0200
+++ ./zebra/kernel_socket.c	2019-09-25 23:31:43.144239000 +0200
@@ -859,8 +859,8 @@
 		mask->sa.sa_family = dest->sa.sa_family;
 
 	/* Assert read up to the end of pointer. */
-	if (pnt != end)
-		zlog_warn("rtm_read() doesn't read all socket data.");
+	//if (pnt != end)
+	//	zlog_warn("rtm_read() doesn't read all socket data.");
 
 	return rtm->rtm_flags;
 }
