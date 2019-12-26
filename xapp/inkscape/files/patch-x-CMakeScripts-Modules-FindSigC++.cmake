--- ./CMakeScripts/Modules/FindSigC++.cmake.orig	2017-08-06 22:44:00.000000000 +0200
+++ ./CMakeScripts/Modules/FindSigC++.cmake	2018-08-22 08:50:22.329510000 +0200
@@ -21,11 +21,11 @@
   # in the FIND_PATH() and FIND_LIBRARY() calls
   if (${CMAKE_MAJOR_VERSION} EQUAL 2 AND ${CMAKE_MINOR_VERSION} EQUAL 4)
     include(UsePkgConfig)
-    pkgconfig(sigc++-2.0 _SIGC++_INCLUDEDIR _SIGC++_LIBDIR _SIGC++_LDFLAGS _SIGC++_CFLAGS)
+    pkgconfig(sigc++ _SIGC++_INCLUDEDIR _SIGC++_LIBDIR _SIGC++_LDFLAGS _SIGC++_CFLAGS)
   else (${CMAKE_MAJOR_VERSION} EQUAL 2 AND ${CMAKE_MINOR_VERSION} EQUAL 4)
     find_package(PkgConfig)
     if (PKG_CONFIG_FOUND)
-      pkg_check_modules(_SIGC++ sigc++-2.0)
+      pkg_check_modules(_SIGC++ sigc++)
     endif (PKG_CONFIG_FOUND)
   endif (${CMAKE_MAJOR_VERSION} EQUAL 2 AND ${CMAKE_MINOR_VERSION} EQUAL 4)
 
@@ -50,7 +50,7 @@
       /usr/include
       /usr/local/include
       /opt/local/include
-      /opt/local/lib/sigc++-2.0/include
+      /opt/local/lib/sigc++/include
       /sw/include
       /usr/lib/sigc++-2.0/include
       /usr/lib64/sigc++-2.0/include
@@ -58,7 +58,7 @@
 
   find_library(SIGC-2.0_LIBRARY
     NAMES
-      sigc-2.0
+      sigc
     PATHS
       ${_SIGC++_LIBDIR}
       /usr/lib
