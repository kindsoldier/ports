--- ./libgnome/gnome-util.c.orig	2009-12-06 15:28:27.000000000 +0200
+++ ./libgnome/gnome-util.c	2015-10-22 09:13:34.855535000 +0200
@@ -79,11 +79,11 @@
 	const char shells [][14] = {
 		/* Note that on some systems shells can also
 		 * be installed in /usr/bin */
-		"/bin/bash", "/usr/bin/bash",
-		"/bin/zsh", "/usr/bin/zsh",
-		"/bin/tcsh", "/usr/bin/tcsh",
-		"/bin/ksh", "/usr/bin/ksh",
-		"/bin/csh", "/bin/sh"
+		"/usr/local/bin/bash",
+		"/usr/local/bin/zsh",
+		"/usr/local/bin/ksh",
+		0
+
 	};
 
 	if (geteuid () == getuid () &&
