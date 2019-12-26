--- ./ltmain.sh.orig	2015-02-17 07:53:12.000000000 +0200
+++ ./ltmain.sh	2016-02-22 18:30:13.239889000 +0200
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
@@ -8891,12 +8891,12 @@
           esac
 	  ;;
 
-	freebsd-aout)
+	freebsd*)
 	  major=.$current
-	  versuffix=.$current.$revision
+	  versuffix=.$current
 	  ;;
 
-	freebsd-elf)
+	freebsd-xxx)
 	  func_arith $current - $age
 	  major=.$func_arith_result
 	  versuffix=$major.$age.$revision
