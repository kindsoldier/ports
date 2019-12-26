--- ./build-aux/ltmain.sh.orig	2015-02-16 16:34:50.000000000 +0200
+++ ./build-aux/ltmain.sh	2015-11-08 17:03:49.654606000 +0200
@@ -8891,15 +8891,10 @@
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
