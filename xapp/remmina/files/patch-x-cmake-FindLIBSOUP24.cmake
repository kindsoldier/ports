--- ./cmake/FindLIBSOUP24.cmake.orig	2019-03-26 17:38:28.044386000 +0200
+++ ./cmake/FindLIBSOUP24.cmake	2019-03-26 17:38:54.731858000 +0200
@@ -21,7 +21,7 @@
 
 include(FindPackageHandleStandardArgs)
 
-pkg_check_modules(PC_LIBSOUP24 libsoup-2.4)
+pkg_check_modules(PC_LIBSOUP24 libsoup)
 
 
 find_path(LIBSOUP24_INCLUDE_DIR NAMES libsoup/soup.h
@@ -29,7 +29,7 @@
 )
 
 find_library(LIBSOUP24_LIBRARY
-	NAMES soup-2.4
+	NAMES soup
 	HINTS ${PC_LIBSOUP24_LIBDIR} ${PC_LIBSOUP24_LIBRARY_DIRS}
 	)
 
