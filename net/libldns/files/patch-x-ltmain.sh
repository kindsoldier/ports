--- ltmain.sh.orig	2024-07-20 07:07:48.000000000 +0200
+++ ltmain.sh	2025-08-19 07:30:28.246440000 +0200
@@ -9088,13 +9088,13 @@
 	  #
 	  case $version_type in
 	  # correct linux to gnu/linux during the next big refactor
-	  darwin|freebsd-elf|linux|midnightbsd-elf|osf|windows|none)
+	  darwin|linux|midnightbsd-elf|osf|windows|none)
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
@@ -9177,15 +9177,9 @@
           esac
 	  ;;
 
-	freebsd-aout)
+	freebsd*)
 	  major=.$current
-	  versuffix=.$current.$revision
-	  ;;
-
-	freebsd-elf | midnightbsd-elf)
-	  func_arith $current - $age
-	  major=.$func_arith_result
-	  versuffix=$major.$age.$revision
+	  versuffix=.$current
 	  ;;
 
 	irix | nonstopux)
