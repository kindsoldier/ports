--- ./ltmain.sh.orig	2014-06-24 17:53:15.000000000 +0300
+++ ./ltmain.sh	2025-08-28 18:45:04.454748000 +0200
@@ -7388,7 +7388,7 @@
 	    age="$number_minor"
 	    revision="$number_revision"
 	    ;;
-	  freebsd-aout|freebsd-elf|qnx|sunos)
+	  freebsd-*|freebsd-elf|qnx|sunos)
 	    current="$number_major"
 	    revision="$number_minor"
 	    age="0"
@@ -7459,15 +7459,11 @@
 	  verstring="-compatibility_version $minor_current -current_version $minor_current.$revision"
 	  ;;
 
-	freebsd-aout)
+	freebsd*)
 	  major=".$current"
-	  versuffix=".$current.$revision";
+	  versuffix=".$current";
 	  ;;
 
-	freebsd-elf)
-	  major=".$current"
-	  versuffix=".$current"
-	  ;;
 
 	irix | nonstopux)
 	  if test "X$lt_irix_increment" = "Xno"; then
