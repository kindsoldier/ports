--- ./ltmain.sh.orig	2015-11-20 11:49:31.000000000 +0200
+++ ./ltmain.sh	2016-02-20 16:44:26.707052000 +0200
@@ -8805,13 +8805,13 @@
 	  #
 	  case $version_type in
 	  # correct linux to gnu/linux during the next big refactor
-	  darwin|freebsd-elf|linux|osf|windows|none)
+	  darwin|freebsd-xxx|linux|osf|windows|none)
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
@@ -8891,15 +8891,15 @@
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
-	  versuffix=$major.$age.$revision
+	  versuffix=$major
 	  ;;
 
 	irix | nonstopux)
