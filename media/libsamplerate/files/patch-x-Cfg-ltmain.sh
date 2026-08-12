--- ./Cfg/ltmain.sh.orig	2016-08-20 14:34:31.000000000 +0200
+++ ./Cfg/ltmain.sh	2017-03-15 17:29:34.888316000 +0200
@@ -8811,13 +8811,13 @@
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
@@ -8900,17 +8900,11 @@
           esac
 	  ;;
 
-	freebsd-aout)
+	freebsd*)
 	  major=.$current
 	  versuffix=.$current.$revision
 	  ;;
 
-	freebsd-elf)
-	  func_arith $current - $age
-	  major=.$func_arith_result
-	  versuffix=$major.$age.$revision
-	  ;;
-
 	irix | nonstopux)
 	  if test no = "$lt_irix_increment"; then
 	    func_arith $current - $age
