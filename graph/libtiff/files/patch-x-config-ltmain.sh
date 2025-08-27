--- ./config/ltmain.sh.orig	2015-02-08 00:35:46.118491243 +0200
+++ ./config/ltmain.sh	2016-02-07 07:53:38.539524000 +0200
@@ -8746,17 +8746,12 @@
 	  #
 	  case $version_type in
 	  # correct linux to gnu/linux during the next big refactor
-	  darwin|freebsd-elf|linux|osf|windows|none)
+	  darwin|freebsd*|linux|osf|windows|none)
 	    func_arith $number_major + $number_minor
 	    current=$func_arith_result
 	    age=$number_minor
 	    revision=$number_revision
 	    ;;
-	  freebsd-aout|qnx|sunos)
-	    current=$number_major
-	    revision=$number_minor
-	    age=0
-	    ;;
 	  irix|nonstopux)
 	    func_arith $number_major + $number_minor
 	    current=$func_arith_result
@@ -8832,15 +8827,10 @@
           esac
 	  ;;
 
-	freebsd-aout)
-	  major=.$current
-	  versuffix=.$current.$revision
-	  ;;
-
-	freebsd-elf)
+	freebsd*)
 	  func_arith $current - $age
 	  major=.$func_arith_result
-	  versuffix=$major.$age.$revision
+	  versuffix=$major
 	  ;;
 
 	irix | nonstopux)
