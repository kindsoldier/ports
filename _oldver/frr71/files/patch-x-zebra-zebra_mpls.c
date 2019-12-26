--- ./zebra/zebra_mpls.c.orig	2019-06-18 08:10:14.000000000 +0200
+++ ./zebra/zebra_mpls.c	2019-09-28 17:17:16.282278000 +0200
@@ -3071,8 +3071,8 @@
 	mpls_enabled = 0;
 
 	if (mpls_kernel_init() < 0) {
-		flog_warn(EC_ZEBRA_MPLS_SUPPORT_DISABLED,
-			  "Disabling MPLS support (no kernel support)");
+//		flog_warn(EC_ZEBRA_MPLS_SUPPORT_DISABLED,
+//			  "Disabling MPLS support (no kernel support)");
 		return;
 	}
 
