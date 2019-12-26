--- ./config/ltmain.sh.orig	2011-03-06 19:43:17.000000000 +0200
+++ ./config/ltmain.sh	2011-11-07 13:11:54.000000000 +0300
@@ -2076,14 +2076,6 @@
 	  func_execute_cmds "$postinstall_cmds" 'exit $?'
 	fi
 
-	# Install the pseudo-library for information purposes.
-	func_basename "$file"
-	name="$func_basename_result"
-	instname="$dir/$name"i
-	func_show_eval "$install_prog $instname $destdir/$name" 'exit $?'
-
-	# Maybe install the static library, too.
-	test -n "$old_library" && staticlibs="$staticlibs $dir/$old_library"
 	;;
 
       *.lo)
