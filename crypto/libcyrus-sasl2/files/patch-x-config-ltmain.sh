--- ./config/ltmain.sh.orig	2012-01-28 02:31:36.000000000 +0300
+++ ./config/ltmain.sh	2015-12-01 22:26:06.232491000 +0200
@@ -1755,12 +1755,7 @@
 	  versuffix=".$current.$revision"
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
