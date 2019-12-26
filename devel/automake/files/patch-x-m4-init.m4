--- ./m4/init.m4.orig	2018-02-26 22:38:27.000000000 +0200
+++ ./m4/init.m4	2019-09-16 16:22:38.623010000 +0200
@@ -77,9 +77,9 @@
 # Some tools Automake needs.
 AC_REQUIRE([AM_SANITY_CHECK])dnl
 AC_REQUIRE([AC_ARG_PROGRAM])dnl
-AM_MISSING_PROG([ACLOCAL], [aclocal-${am__api_version}])
+AM_MISSING_PROG([ACLOCAL], [aclocal])
 AM_MISSING_PROG([AUTOCONF], [autoconf])
-AM_MISSING_PROG([AUTOMAKE], [automake-${am__api_version}])
+AM_MISSING_PROG([AUTOMAKE], [automake])
 AM_MISSING_PROG([AUTOHEADER], [autoheader])
 AM_MISSING_PROG([MAKEINFO], [makeinfo])
 AC_REQUIRE([AM_PROG_INSTALL_SH])dnl
