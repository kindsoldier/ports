--- ./ltmain.sh.orig	2016-10-24 23:48:22.000000000 +0200
+++ ./ltmain.sh	2017-02-19 10:02:19.604168000 +0200
@@ -7414,14 +7414,9 @@
 	  verstring="-compatibility_version $minor_current -current_version $minor_current.$revision"
 	  ;;
 
-	freebsd-aout)
+	freebsd*)
 	  major=".$current"
-	  versuffix=".$current.$revision";
-	  ;;
-
-	freebsd-elf)
-	  major=".$current"
-	  versuffix=".$current"
+	  versuffix=".$current";
 	  ;;
 
 	irix | nonstopux)
