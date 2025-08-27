--- ./ltmain.sh.orig	2024-11-20 22:08:44.000000000 +0200
+++ ./ltmain.sh	2025-08-27 17:38:11.866569000 +0200
@@ -9281,15 +9281,15 @@
 	  #
 	  case $version_type in
 	  # correct linux to gnu/linux during the next big refactor
-	  darwin|freebsd-elf|linux|midnightbsd-elf|osf|qnx|windows|none)
+	  darwin|linux|midnightbsd-elf|osf|qnx|windows|none)
 	    func_arith $number_major + $number_minor
 	    current=$func_arith_result
 	    age=$number_minor
 	    revision=$number_revision
 	    ;;
-	  freebsd-aout|sco|sunos)
+	  freebsd*|sco|sunos)
 	    current=$number_major
-	    revision=$number_minor
+	    revision=$number_major
 	    age=0
 	    ;;
 	  irix|nonstopux)
@@ -9370,17 +9370,10 @@
           esac
 	  ;;
 
-	freebsd-aout)
+	freebsd*)
 	  major=.$current
-	  versuffix=.$current.$revision
+	  versuffix=.$current
 	  ;;
-
-	freebsd-elf | midnightbsd-elf)
-	  func_arith $current - $age
-	  major=.$func_arith_result
-	  versuffix=$major.$age.$revision
-	  ;;
-
 	irix | nonstopux)
 	  if test no = "$lt_irix_increment"; then
 	    func_arith $current - $age
