--- ./ltmain.sh.orig	2003-12-06 10:17:09.000000000 +0200
+++ ./ltmain.sh	2015-10-21 08:50:54.329665000 +0200
@@ -2285,12 +2285,7 @@
 	  verstring="-compatibility_version $minor_current -current_version $minor_current.$revision"
 	  ;;
 
-	freebsd-aout)
-	  major=".$current"
-	  versuffix=".$current.$revision";
-	  ;;
-
-	freebsd-elf)
+	freebsd*)
 	  major=".$current"
 	  versuffix=".$current";
 	  ;;
