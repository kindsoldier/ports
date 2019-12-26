--- ./ltmain.sh.orig	2014-12-23 10:55:10.000000000 +0200
+++ ./ltmain.sh	2017-05-11 13:12:10.844919000 +0200
@@ -7337,7 +7337,7 @@
 	    age="$number_minor"
 	    revision="$number_revision"
 	    ;;
-	  freebsd-aout|freebsd-elf|qnx|sunos)
+	  freebsd*|freebsd-elf|qnx|sunos)
 	    current="$number_major"
 	    revision="$number_minor"
 	    age="0"
@@ -7408,14 +7408,9 @@
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
