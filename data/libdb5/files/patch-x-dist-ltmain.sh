--- ./dist/ltmain.sh.orig	2016-03-28 21:45:49.000000000 +0200
+++ ./dist/ltmain.sh	2017-06-12 15:20:27.326303000 +0200
@@ -7322,7 +7322,7 @@
 	    age="$number_minor"
 	    revision="$number_revision"
 	    ;;
-	  freebsd-aout|freebsd-elf|qnx|sunos)
+	  freebsd*|freebsd-elf|qnx|sunos)
 	    current="$number_major"
 	    revision="$number_minor"
 	    age="0"
@@ -7393,14 +7393,9 @@
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
