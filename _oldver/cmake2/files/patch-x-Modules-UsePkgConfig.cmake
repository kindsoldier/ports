--- ./Modules/UsePkgConfig.cmake.orig	2014-01-16 20:15:08.000000000 +0300
+++ ./Modules/UsePkgConfig.cmake	2016-03-22 06:56:23.842710000 +0200
@@ -5,7 +5,7 @@
 # PKGCONFIG(package includedir libdir linkflags cflags)
 #
 # Calling PKGCONFIG will fill the desired information into the 4 given arguments,
-# e.g. PKGCONFIG(libart-2.0 LIBART_INCLUDE_DIR LIBART_LINK_DIR LIBART_LINK_FLAGS LIBART_CFLAGS)
+# e.g. PKGCONFIG(libart LIBART_INCLUDE_DIR LIBART_LINK_DIR LIBART_LINK_FLAGS LIBART_CFLAGS)
 # if pkg-config was NOT found or the specified software package doesn't exist, the
 # variable will be empty when the function returns, otherwise they will contain
 # the respective information
