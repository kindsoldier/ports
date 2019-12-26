--- ./acconfig/ltmain.sh.orig	2004-07-20 02:01:47.000000000 +0300
+++ ./acconfig/ltmain.sh	2019-02-25 17:40:49.028344000 +0200
@@ -2925,7 +2925,7 @@
 	    age="$number_minor"
 	    revision="$number_revision"
 	    ;;
-	  freebsd-aout|freebsd-elf|sunos)
+	  freebsd*|sunos)
 	    current="$number_major"
 	    revision="$number_minor"
 	    age="0"
@@ -3000,12 +3000,7 @@
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
