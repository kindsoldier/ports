--- ./CMakeScripts/DefineDependsandFlags.cmake.orig	2017-08-06 22:44:00.000000000 +0200
+++ ./CMakeScripts/DefineDependsandFlags.cmake	2018-08-22 08:42:32.820395000 +0200
@@ -36,7 +36,7 @@
 endif()
 
 find_package(PkgConfig REQUIRED)
-pkg_check_modules(INKSCAPE_DEP REQUIRED pangocairo pangoft2 fontconfig gthread-2.0 gsl gmodule-2.0)
+pkg_check_modules(INKSCAPE_DEP REQUIRED pangocairo pangoft2 fontconfig gthread gsl gmodule)
 
 list(APPEND INKSCAPE_LIBS ${INKSCAPE_DEP_LDFLAGS})
 list(APPEND INKSCAPE_INCS_SYS ${INKSCAPE_DEP_INCLUDE_DIRS})
@@ -204,7 +204,7 @@
 endif()
 
 if(WITH_DBUS)
-    pkg_check_modules(DBUS dbus-1 dbus-glib-1)
+    pkg_check_modules(DBUS dbus dbus-glib)
     if(DBUS_FOUND)
     list(APPEND INKSCAPE_LIBS ${DBUS_LDFLAGS})
     list(APPEND INKSCAPE_INCS_SYS ${DBUS_INCLUDE_DIRS} ${CMAKE_BINARY_DIR}/src/extension/dbus/)
@@ -291,13 +291,13 @@
     )
 else()
     pkg_check_modules(GTK REQUIRED
-                     gtkmm-2.4>=2.24
-                     gdkmm-2.4
-                     gtk+-2.0
-                     gdk-2.0
+                     gtkmm>=2.24
+                     gdkmm
+                     gtk+
+                     gdk
                      )
     list(APPEND INKSCAPE_CXX_FLAGS ${GTK_CFLAGS_OTHER})
-    pkg_check_modules(GTKSPELL2 gtkspell-2.0)
+    pkg_check_modules(GTKSPELL2 gtkspell)
     if("${GTKSPELL2_FOUND}")
         message("Using GtkSpell 2")
         add_definitions(${GTKSPELL2_CFLAGS_OTHER})
