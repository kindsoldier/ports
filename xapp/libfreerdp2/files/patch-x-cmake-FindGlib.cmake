--- ./cmake/FindGlib.cmake.orig	2016-11-24 16:45:22.000000000 +0200
+++ ./cmake/FindGlib.cmake	2017-06-08 09:22:07.424761000 +0200
@@ -9,22 +9,22 @@
 include(LibFindMacros)
 
 # Use pkg-config to get hints about paths
-libfind_pkg_check_modules(Glib_PKGCONF glib-2.0)
+libfind_pkg_check_modules(Glib_PKGCONF glib)
 
 # Main include dir
 find_path(Glib_INCLUDE_DIR
 		  NAMES glib.h
 		  PATHS ${Glib_PKGCONF_INCLUDE_DIRS} ${GLIB_ROOT_DIR}
-		  PATH_SUFFIXES glib-2.0
+		  PATH_SUFFIXES glib
 		 )
 
 # Finally the library itself
 find_library(Glib_LIBRARY
-			 NAMES glib-2.0 gstreamer_android
+			 NAMES glib gstreamer_android
 			 PATHS ${Glib_PKGCONF_LIBRARY_DIRS} ${GLIB_ROOT_DIR}
 			)
 find_library(Gobject_LIBRARY
-			 NAMES gobject-2.0 gstreamer_android
+			 NAMES gobject gstreamer_android
 			 PATHS ${Glib_PKGCONF_LIBRARY_DIRS} ${GLIB_ROOT_DIR}
 			)
 
