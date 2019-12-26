--- ./lib/error.c.orig	2000-08-03 04:21:13.000000000 +0300
+++ ./lib/error.c	2016-12-04 20:40:12.412865000 +0200
@@ -80,7 +80,12 @@
 
 /* The calling program should define program_name and set it to the
    name of the executing program.  */
+# ifdef __FreeBSD__
+extern char *__progname;
+# define program_name __progname
+# else
 extern char *program_name;
+# endif
 
 # ifdef HAVE_STRERROR_R
 #  define __strerror_r strerror_r
