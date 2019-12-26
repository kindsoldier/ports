--- ./ltmain.sh.orig	2003-05-22 14:39:36.000000000 +0300
+++ ./ltmain.sh	2016-07-07 10:09:36.209948000 +0200
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
