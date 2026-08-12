--- ./ltmain.sh.orig	2004-02-17 03:51:24.000000000 +0200
+++ ./ltmain.sh	2014-12-31 15:14:05.000000000 +0200
@@ -2904,7 +2904,7 @@
 	    age="$number_minor"
 	    revision="$number_revision"
 	    ;;
-	  freebsd-aout|freebsd-elf|sunos)
+	  freebsd*|freebsd-elf|sunos)
 	    current="$number_major"
 	    revision="$number_minor"
 	    age="0"
@@ -2974,12 +2974,7 @@
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
