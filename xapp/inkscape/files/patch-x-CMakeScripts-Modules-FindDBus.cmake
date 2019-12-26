--- ./CMakeScripts/Modules/FindDBus.cmake.orig	2018-03-11 22:38:09.000000000 +0200
+++ ./CMakeScripts/Modules/FindDBus.cmake	2018-08-22 14:30:00.337182000 +0200
@@ -25,25 +25,26 @@
     IF (PKG_CONFIG_FOUND)
       # use pkg-config to get the directories and then use these values
       # in the FIND_PATH() and FIND_LIBRARY() calls
-      pkg_check_modules(_DBUS_PC QUIET dbus-1)
+      pkg_check_modules(_DBUS_PC QUIET dbus)
     ENDIF (PKG_CONFIG_FOUND)
   ENDIF (NOT WIN32)
 
   FIND_PATH(DBUS_INCLUDE_DIR dbus/dbus.h
     ${_DBUS_PC_INCLUDE_DIRS}
     /usr/include
-    /usr/include/dbus-1.0
+    /usr/include/dbus
+    /usr/local/include/dbus
     /usr/local/include
   )
 
   FIND_PATH(DBUS_ARCH_INCLUDE_DIR dbus/dbus-arch-deps.h
     ${_DBUS_PC_INCLUDE_DIRS}
     /usr/lib${LIB_SUFFIX}/include
-    /usr/lib${LIB_SUFFIX}/dbus-1.0/include
+    /usr/lib${LIB_SUFFIX}/dbus/include
     /usr/lib64/include
-    /usr/lib64/dbus-1.0/include
+    /usr/lib64/dbus/include
     /usr/lib/include
-    /usr/lib/dbus-1.0/include
+    /usr/lib/dbus/include
   )
 
   FIND_LIBRARY(DBUS_LIBRARIES NAMES dbus-1 dbus
