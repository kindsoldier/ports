--- ./ltmain.sh.orig	2017-09-21 10:07:33.000000000 +0200
+++ ./ltmain.sh	2019-03-31 10:15:47.518350000 +0200
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
+	  qnx|sunos)
 	    current=$number_major
 	    revision=$number_minor
 	    age=0
@@ -8891,16 +8891,11 @@
           esac
 	  ;;
 
-	freebsd-aout)
+	freebsd*)
 	  major=.$current
-	  versuffix=.$current.$revision
+	  versuffix=.$current
 	  ;;
 
-	freebsd-elf)
-	  func_arith $current - $age
-	  major=.$func_arith_result
-	  versuffix=$major.$age.$revision
-	  ;;
 
 	irix | nonstopux)
 	  if test no = "$lt_irix_increment"; then
