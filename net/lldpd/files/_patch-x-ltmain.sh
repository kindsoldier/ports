--- ./ltmain.sh.orig	2015-11-05 14:39:06.597517000 +0200
+++ ./ltmain.sh	2015-11-05 14:42:09.737119000 +0200
@@ -7414,14 +7414,9 @@
 	  verstring="-compatibility_version $minor_current -current_version $minor_current.$revision"
 	  ;;
 
-	freebsd-aout)
-	  major=".$current"
-	  versuffix=".$current.$revision";
-	  ;;
-
-	freebsd-elf)
+	freebsd*)
 	  major=.$(($current - $age))
-	  versuffix="$major.$age.$revision"
+	  versuffix="$major"
 	  ;;
 
 	irix | nonstopux)
