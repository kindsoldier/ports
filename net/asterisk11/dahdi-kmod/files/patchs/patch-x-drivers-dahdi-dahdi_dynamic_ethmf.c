--- ./drivers/dahdi/dahdi_dynamic_ethmf.c.orig	2012-03-26 20:40:58.000000000 +0300
+++ ./drivers/dahdi/dahdi_dynamic_ethmf.c	2014-09-27 21:19:40.000000000 +0300
@@ -494,13 +494,13 @@
 		}
 
 #if defined(__FreeBSD__)
-		MGETHDR(m, M_DONTWAIT, MT_DATA);
+		MGETHDR(m, M_NOWAIT, MT_DATA);
 		if (m == NULL) {
 			rcu_read_unlock();
 			ethmf_errors_inc();
 			return;
 		}
-		MCLGET(m, M_DONTWAIT);
+		MCLGET(m, M_NOWAIT);
 
 		/* copy ethernet header and reserve space for ztdeth header */
 		bcopy(dev->dev_addr, &eh.ether_shost, sizeof(eh.ether_shost));
