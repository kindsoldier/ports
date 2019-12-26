--- ./config/ltmain.sh.orig	2012-11-06 14:54:03.000000000 +0300
+++ ./config/ltmain.sh	2017-05-27 21:14:02.359414000 +0200
@@ -6194,7 +6194,7 @@
 	    age="$number_minor"
 	    revision="$number_revision"
 	    ;;
-	  freebsd-aout|freebsd-elf|sunos)
+	  freebsd*|sunos)
 	    current="$number_major"
 	    revision="$number_minor"
 	    age="0"
@@ -6265,14 +6265,9 @@
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
