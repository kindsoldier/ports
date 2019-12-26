--- ./cmake/FindGTK3.cmake.orig	2018-08-24 15:40:04.000000000 +0200
+++ ./cmake/FindGTK3.cmake	2019-03-26 17:43:08.288012000 +0200
@@ -22,24 +22,24 @@
 
 # Gtk
 
-pkg_check_modules(PC_GTK3 gtk+-3.0)
+pkg_check_modules(PC_GTK3 gtk3)
 
 if(NOT PC_GTK3_FOUND)
 	set(_GTK3_found_all false)
 endif()
 
 find_path(GTK3_INCLUDE_DIR NAMES gtk/gtk.h
-	PATH_SUFFIXES gtk-3.0)
+	PATH_SUFFIXES gtk3)
 
-find_library(GTK3_LIBRARY NAMES gtk-3)
+find_library(GTK3_LIBRARY NAMES gtk3)
 
 # Gdk
 
-find_library(GDK3_LIBRARY NAMES gdk-3)
+find_library(GDK3_LIBRARY NAMES gdk3)
 
 # Gdk-Pixbuf
 
-pkg_check_modules(PC_GDKPIXBUF gdk-pixbuf-2.0)
+pkg_check_modules(PC_GDKPIXBUF gdk-pixbuf)
 
 if(NOT PC_GDKPIXBUF_FOUND)
 	set(_GTK3_found_all false)
@@ -47,9 +47,9 @@
 
 find_path(GDKPIXBUF_INCLUDE_DIR gdk-pixbuf/gdk-pixbuf.h
 	HINTS ${PC_GDKPIXBUF_INCLUDEDIR} ${PC_GDKPIXBUF_INCLUDE_DIRS}
-	PATH_SUFFIXES gdk-pixbuf-2.0)
+	PATH_SUFFIXES gdk-pixbuf)
 
-find_library(GDKPIXBUF_LIBRARY NAMES gdk_pixbuf-2.0
+find_library(GDKPIXBUF_LIBRARY NAMES gdk-pixbuf
 	HINTS ${PC_GDKPIXBUF_LIBDIR} ${PC_GDKPIXBUF_LIBRARY_DIRS})
 
 # Wayland client, if GTK3's pkg-config suggests it. We only need
@@ -75,9 +75,9 @@
 
 find_path(PANGO_INCLUDE_DIR pango/pango.h
 	HINTS ${PC_PANGO_INCLUDEDIR} ${PC_PANGO_INCLUDE_DIRS}
-	PATH_SUFFIXES pango-1.0)
+	PATH_SUFFIXES pango)
 
-find_library(PANGO_LIBRARY NAMES pango-1.0
+find_library(PANGO_LIBRARY NAMES pango
 	HINTS ${PC_PANGO_LIBDIR} ${PC_PANGO_LIBRARY_DIRS})
 
 # Cairo
@@ -101,9 +101,9 @@
 
 find_path(ATK_INCLUDE_DIR atk/atk.h
 	HINTS ${PC_ATK_INCLUDEDIR} ${PC_ATK_INCLUDE_DIRS}
-	PATH_SUFFIXES atk-1.0)
+	PATH_SUFFIXES atk)
 
-find_library(ATK_LIBRARY NAMES atk-1.0
+find_library(ATK_LIBRARY NAMES atk
 	HINTS ${PC_ATK_LIBDIR} ${PC_ATK_LIBRARY_DIRS})
 
 # Finalize
