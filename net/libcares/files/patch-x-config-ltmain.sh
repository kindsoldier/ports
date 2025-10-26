--- ./config/ltmain.sh.orig	2024-12-14 17:15:42.000000000 +0200
+++ ./config/ltmain.sh	2025-08-28 05:33:46.979609000 +0200
@@ -8906,15 +8906,15 @@
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
@@ -8995,15 +8995,9 @@
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
