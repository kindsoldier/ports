--- ./drivers/dahdi/dahdi_dynamic_eth.c.orig	2012-03-26 20:40:58.000000000 +0300
+++ ./drivers/dahdi/dahdi_dynamic_eth.c	2014-09-27 21:19:40.000000000 +0300
@@ -191,10 +191,10 @@
 		dev = z->dev;
 		spin_unlock_irqrestore(&zlock, flags);
 #if defined(__FreeBSD__)
-		MGETHDR(m, M_DONTWAIT, MT_DATA);
+		MGETHDR(m, M_NOWAIT, MT_DATA);
 		if (m != NULL) {
 			if (sizeof(eh) + sizeof(zh) + msglen >= MINCLSIZE) {
-				MCLGET(m, M_DONTWAIT);
+				MCLGET(m, M_NOWAIT);
 			}
 
 			/* copy ethernet header */
