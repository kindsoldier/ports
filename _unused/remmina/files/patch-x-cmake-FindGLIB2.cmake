--- ./cmake/FindGLIB2.cmake.orig	2018-08-24 15:40:04.000000000 +0200
+++ ./cmake/FindGLIB2.cmake	2019-03-26 17:36:02.531773000 +0200
@@ -21,7 +21,7 @@
 
 # Glib
 
-pkg_check_modules(PC_GLIB2 glib-2.0>=2.30)
+pkg_check_modules(PC_GLIB2 glib>=2.30)
 
 if(NOT PC_GLIB2_FOUND)
 	set(_GLIB_found_all false)
@@ -29,19 +29,19 @@
 
 find_path(GLIB2_INCLUDE_DIR_PART1 NAMES glib.h
 	HINTS ${PC_GLIB2_INCLUDEDIR} ${PC_GLIB2_INCLUDE_DIRS}
-	PATH_SUFFIXES glib-2.0)
+	PATH_SUFFIXES glib)
 
 find_path(GLIB2_INCLUDE_DIR_PART2 NAMES glibconfig.h
 	HINTS ${PC_GLIB2_INCLUDEDIR} ${PC_GLIB2_INCLUDE_DIRS}
-	PATH_SUFFIXES glib-2.0/include)
+	PATH_SUFFIXES glib/include)
 
 set(GLIB2_INCLUDE_DIR ${GLIB2_INCLUDE_DIR_PART1} ${GLIB2_INCLUDE_DIR_PART2})
 
-find_library(GLIB2_LIBRARY NAMES glib-2.0)
+find_library(GLIB2_LIBRARY NAMES glib)
 
 # GIO
 
-pkg_check_modules(PC_GIO gio-2.0)
+pkg_check_modules(PC_GIO gio)
 
 if(NOT PC_GIO_FOUND)
 	set(_GLIB_found_all false)
@@ -49,14 +49,14 @@
 
 find_path(GIO_INCLUDE_DIR gio/gio.h
 	HINTS ${PC_GIO_INCLUDEDIR} ${PC_GIO_INCLUDE_DIRS}
-	PATH_SUFFIXES gio-2.0)
+	PATH_SUFFIXES gio)
 
-find_library(GIO_LIBRARY NAMES gio-2.0
+find_library(GIO_LIBRARY NAMES gio
 	HINTS ${PC_GIO_LIBDIR} ${PC_GIO_LIBRARY_DIRS})
 
 # gobject
 
-pkg_check_modules(PC_GOBJECT gobject-2.0)
+pkg_check_modules(PC_GOBJECT gobject)
 
 if(NOT PC_GOBJECT_FOUND)
 	set(_GLIB_found_all false)
@@ -64,14 +64,14 @@
 
 find_path(GOBJECT_INCLUDE_DIR gobject/gobject.h
 	HINTS ${PC_GOBJECT_INCLUDEDIR} ${PC_GOBJECT_INCLUDE_DIRS}
-	PATH_SUFFIXES gobject-2.0)
+	PATH_SUFFIXES gobject)
 
-find_library(GOBJECT_LIBRARY NAMES gobject-2.0
+find_library(GOBJECT_LIBRARY NAMES gobject
 	HINTS ${PC_GOBJECT_LIBDIR} ${PC_GOBJECT_LIBRARY_DIRS})
 
 # gmodule
 
-pkg_check_modules(PC_GMODULE gmodule-2.0)
+pkg_check_modules(PC_GMODULE gmodule)
 
 if(NOT PC_GMODULE_FOUND)
 	set(_GLIB_found_all false)
@@ -79,14 +79,14 @@
 
 find_path(GMODULE_INCLUDE_DIR gmodule.h
 	HINTS ${PC_GMODULE_INCLUDEDIR} ${PC_GMODULE_INCLUDE_DIRS}
-	PATH_SUFFIXES gmodule-2.0)
+	PATH_SUFFIXES gmodule)
 
-find_library(GMODULE_LIBRARY NAMES gmodule-2.0
+find_library(GMODULE_LIBRARY NAMES gmodule
 	HINTS ${PC_GMODULE_LIBDIR} ${PC_GMODULE_LIBRARY_DIRS})
 
 # gthread
 
-pkg_check_modules(PC_GTHREAD gthread-2.0)
+pkg_check_modules(PC_GTHREAD gthread)
 
 if(NOT PC_GTHREAD_FOUND)
 	set(_GLIB_found_all false)
@@ -94,9 +94,9 @@
 
 find_path(GTHREAD_INCLUDE_DIR glib/gthread.h
 	HINTS ${PC_GTHREAD_INCLUDEDIR} ${PC_GTHREAD_INCLUDE_DIRS}
-	PATH_SUFFIXES gthread-2.0)
+	PATH_SUFFIXES gthread)
 
-find_library(GTHREAD_LIBRARY NAMES gthread-2.0
+find_library(GTHREAD_LIBRARY NAMES gthread
 	HINTS ${PC_GTHREAD_LIBDIR} ${PC_GTHREAD_LIBRARY_DIRS})
 
 # Finalize
