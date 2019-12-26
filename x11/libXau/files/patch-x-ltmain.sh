--- ./ltmain.sh.orig	2005-12-21 08:57:56.000000000 +0200
+++ ./ltmain.sh	2014-11-29 16:15:25.000000000 +0200
@@ -2923,7 +2923,7 @@
 	    age="$number_minor"
 	    revision="$number_revision"
 	    ;;
-	  freebsd-aout|freebsd-elf|sunos)
+	  freebsd*|sunos)
 	    current="$number_major"
 	    revision="$number_minor"
 	    age="0"
@@ -2993,12 +2993,7 @@
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
