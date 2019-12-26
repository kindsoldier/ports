--- ./ltmain.sh.orig	2018-12-07 12:37:57.000000000 +0000
+++ ./ltmain.sh	2019-02-05 08:01:08.583504000 +0000
@@ -8951,13 +8951,13 @@
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
@@ -9040,15 +9040,9 @@
           esac
 	  ;;
 
-	freebsd-aout)
-	  major=.$current
-	  versuffix=.$current.$revision
-	  ;;
-
-	freebsd-elf)
-	  func_arith $current - $age
-	  major=.$func_arith_result
-	  versuffix=$major.$age.$revision
+	freebsd*)
+	  major=.7 #$age
+	  versuffix=.7 #$age
 	  ;;
 
 	irix | nonstopux)
