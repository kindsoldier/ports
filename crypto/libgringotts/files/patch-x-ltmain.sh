--- ./ltmain.sh.orig	2003-02-13 16:33:06.000000000 +0200
+++ ./ltmain.sh	2017-06-01 02:04:38.590635000 +0200
@@ -2324,12 +2324,7 @@
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
