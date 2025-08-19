--- ./build-aux/ltmain.sh.orig	2020-07-05 14:04:08.000000000 +0200
+++ ./build-aux/ltmain.sh	2025-08-19 19:13:05.793415000 +0200
@@ -9024,15 +9024,15 @@
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
-	    revision=$number_minor
+	    revision=$number_major
 	    age=0
 	    ;;
 	  irix|nonstopux)
@@ -9110,9 +9110,9 @@
           esac
 	  ;;
 
-	freebsd-aout)
+	freebsd*)
 	  major=.$current
-	  versuffix=.$current.$revision
+	  versuffix=.$current
 	  ;;
 
 	freebsd-elf)
