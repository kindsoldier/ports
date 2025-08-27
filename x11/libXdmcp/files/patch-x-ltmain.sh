--- ./ltmain.sh.orig	2012-03-08 06:46:47.000000000 +0300
+++ ./ltmain.sh	2014-11-29 16:22:55.000000000 +0200
@@ -7393,12 +7393,7 @@
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
 	  versuffix=".$current"
 	  ;;
