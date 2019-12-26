--- ./admin/autotools/ltmain.sh.orig	2006-02-11 12:39:57.000000000 +0200
+++ ./admin/autotools/ltmain.sh	2016-04-01 01:34:45.761611000 +0200
@@ -3101,7 +3101,7 @@
 	    age="$number_minor"
 	    revision="$number_revision"
 	    ;;
-	  freebsd-aout|freebsd-elf|sunos)
+	  freebsd*|sunos)
 	    current="$number_major"
 	    revision="$number_minor"
 	    age="0"
@@ -3171,16 +3171,10 @@
 	  verstring="${wl}-compatibility_version ${wl}$minor_current ${wl}-current_version ${wl}$minor_current.$revision"
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
-
 	irix | nonstopux)
 	  major=`expr $current - $age + 1`
 
