--- ./ltmain.sh.orig	2000-08-03 04:21:14.000000000 +0300
+++ ./ltmain.sh	2016-12-04 20:43:42.947993000 +0200
@@ -1736,14 +1736,14 @@
 	  versuffix=".$current.$revision"
 	  ;;
 
-	freebsd-aout)
+	freebsd*)
 	  major=".$current"
-	  versuffix=".$current.$revision";
+	  versuffix=".$current";
 	  ;;
 
 	freebsd-elf)
-	  major=".$current"
-	  versuffix=".$current";
+	  major=.$(($current - $age))
+	  versuffix="$major.$age.$revision"
 	  ;;
 
 	windows)
