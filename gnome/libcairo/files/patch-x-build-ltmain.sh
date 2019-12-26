--- ./build/ltmain.sh.orig	2013-11-06 06:28:59.000000000 +0300
+++ ./build/ltmain.sh	2017-05-12 15:49:25.215098000 +0200
@@ -7340,7 +7340,7 @@
 	    age="$number_minor"
 	    revision="$number_revision"
 	    ;;
-	  freebsd-aout|freebsd-elf|qnx|sunos)
+	  freebsd*|freebsd-elf|qnx|sunos)
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
