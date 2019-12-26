--- ./Modules/FindGTK2.cmake.orig	2014-01-16 20:15:08.000000000 +0300
+++ ./Modules/FindGTK2.cmake	2016-03-22 06:58:59.772385000 +0200
@@ -172,22 +172,22 @@
     set(_gtk_packages
         # If these ever change, things will break.
         ${GTK2_ADDITIONAL_SUFFIXES}
-        glibmm-2.4
-        glib-2.0
-        atk-1.0
-        atkmm-1.6
+        glibmm
+        glib
+        atk
+        atkmm
         cairo
-        cairomm-1.0
-        gdk-pixbuf-2.0
-        gdkmm-2.4
-        giomm-2.4
-        gtk-2.0
-        gtkmm-2.4
-        libglade-2.0
-        libglademm-2.4
-        pango-1.0
-        pangomm-1.4
-        sigc++-2.0
+        cairomm
+        gdk-pixbuf
+        gdkmm
+        giomm
+        gtk
+        gtkmm
+        libglade
+        libglademm
+        pango
+        pangomm
+        sigc++
     )
 
     #
@@ -200,7 +200,7 @@
     set(_suffixes)
     foreach(_d ${_gtk_packages})
         list(APPEND _suffixes ${_d})
-        list(APPEND _suffixes ${_d}/include) # for /usr/lib/gtk-2.0/include
+        list(APPEND _suffixes ${_d}/include) # for /usr/lib/gtk/include
     endforeach()
 
     if(GTK2_DEBUG)
@@ -221,6 +221,10 @@
             /usr/local/lib
             /usr/lib64
             /usr/lib
+            /usr/X11R7/lib
+            /usr/local/lib
+            /usr/X11R7/include
+            /usr/local/include
             /opt/gnome/include
             /opt/gnome/lib
             /opt/openwin/include
