--- ./zebra/zebra_mpls.c~	2022-08-30 19:53:45.000000000 +0200
+++ ./zebra/zebra_mpls.c	2022-09-23 15:34:45.989524000 +0200
@@ -4067,8 +4067,8 @@
 	mpls_pw_reach_strict = false;
 
 	if (mpls_kernel_init() < 0) {
-		flog_warn(EC_ZEBRA_MPLS_SUPPORT_DISABLED,
-			  "Disabling MPLS support (no kernel support)");
+		//flog_warn(EC_ZEBRA_MPLS_SUPPORT_DISABLED,
+		//	  "Disabling MPLS support (no kernel support)");
 		return;
 	}
 
