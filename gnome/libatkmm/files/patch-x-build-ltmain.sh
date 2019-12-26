--- ./build/ltmain.sh.orig	2015-11-29 22:04:44.456300339 +0200
+++ ./build/ltmain.sh	2018-08-22 07:13:12.611959000 +0200
@@ -7340,7 +7340,7 @@
 	    age="$number_minor"
 	    revision="$number_revision"
 	    ;;
-	  freebsd-aout|freebsd-elf|qnx|sunos)
+	  freebsd-aout|qnx|sunos)
 	    current="$number_major"
 	    revision="$number_minor"
 	    age="0"
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
