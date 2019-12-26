--- ./ltmain.sh.orig	2015-09-05 21:10:02.000000000 +0200
+++ ./ltmain.sh	2019-12-23 15:08:56.883659000 +0200
@@ -8805,13 +8805,13 @@
 	  #
 	  case $version_type in
 	  # correct linux to gnu/linux during the next big refactor
-	  darwin|freebsd-elf|linux|osf|windows|none)
+	  darwin|linux|osf|windows|none)
 	    func_arith $number_major + $number_minor
 	    current=$func_arith_result
 	    age=$number_minor
 	    revision=$number_revision
 	    ;;
-	  freebsd-aout|qnx|sunos)
+	  freebsd*|qnx|sunos)
 	    current=$number_major
 	    revision=$number_minor
 	    age=0
@@ -8891,15 +8891,9 @@
           esac
 	  ;;
 
-	freebsd-aout)
+	freebsd*)
 	  major=.$current
-	  versuffix=.$current.$revision
-	  ;;
-
-	freebsd-elf)
-	  func_arith $current - $age
-	  major=.$func_arith_result
-	  versuffix=$major.$age.$revision
+	  versuffix=.$current
 	  ;;
 
 	irix | nonstopux)
