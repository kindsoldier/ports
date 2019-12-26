--- ./zebra/zebra_mpls.c.orig	2019-01-08 10:34:59.000000000 +0200
+++ ./zebra/zebra_mpls.c	2019-09-25 23:34:10.442055000 +0200
@@ -2945,7 +2945,7 @@
 	mpls_enabled = 0;
 
 	if (mpls_kernel_init() < 0) {
-		zlog_warn("Disabling MPLS support (no kernel support)");
+//		zlog_warn("Disabling MPLS support (no kernel support)");
 		return;
 	}
 
