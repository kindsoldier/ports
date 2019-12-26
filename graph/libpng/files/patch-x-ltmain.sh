--- ./ltmain.sh.orig	2017-05-12 12:50:03.177104000 +0200
+++ ./ltmain.sh	2017-05-12 12:50:38.075987000 +0200
@@ -8886,15 +8886,9 @@
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
