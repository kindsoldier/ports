--- ./ltmain.sh.orig	2001-09-21 19:49:36.000000000 +0300
+++ ./ltmain.sh	2016-02-26 16:41:18.070232000 +0200
@@ -2240,12 +2240,12 @@
 	  verstring="-compatibility_version $minor_current -current_version $minor_current.$revision"
 	  ;;
 
-	freebsd-aout)
-	  major=".$current"
-	  versuffix=".$current.$revision";
-	  ;;
+#	freebsd-aout)
+#	  major=".$current"
+#	  versuffix=".$current.$revision";
+#	  ;;
 
-	freebsd-elf)
+	freebsd*)
 	  major=".$current"
 	  versuffix=".$current";
 	  ;;
