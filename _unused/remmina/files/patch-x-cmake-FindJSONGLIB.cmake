--- ./cmake/FindJSONGLIB.cmake.orig	2018-08-24 15:40:04.000000000 +0200
+++ ./cmake/FindJSONGLIB.cmake	2019-03-26 17:36:45.993874000 +0200
@@ -21,13 +21,13 @@
 
 include(FindPackageHandleStandardArgs)
 
-pkg_check_modules(PC_JSONGLIB json-glib-1.0)
+pkg_check_modules(PC_JSONGLIB json-glib)
 
 find_path(JSONGLIB_INCLUDE_DIR NAMES json-glib/json-glib.h
 	HINTS ${PC_JSONGLIB_INCLUDEDIR} ${PC_JSONGLIB_INCLUDE_DIRS}
 )
 
-find_library(JSONGLIB_LIBRARY NAMES json-glib-1.0
+find_library(JSONGLIB_LIBRARY NAMES json-glib
 	HINTS ${PC_JSONGLIB_LIBDIR} ${PC_JSONGLIB_LIBRARY_DIRS}
 )
 
