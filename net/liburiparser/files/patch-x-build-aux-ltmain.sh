--- ./build-aux/ltmain.sh.orig	2013-05-13 02:41:46.000000000 +0300
+++ ./build-aux/ltmain.sh	2015-10-29 18:38:57.972016000 +0200
@@ -7408,12 +7408,7 @@
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
