--- ./src/gui/kernel/qapplication_x11.cpp.orig	2015-05-07 16:14:43.000000000 +0200
+++ ./src/gui/kernel/qapplication_x11.cpp	2019-03-22 13:54:51.781169000 +0200
@@ -2417,7 +2417,7 @@
         // At 95 DPI, a 12 point font should be 16 pixels tall - in which case a 17
         // pixel font is a closer match than a 12 pixel font
         int ptsz = (X11->use_xrender
-                    ? 9
+                    ? 10
                     : (int) (((QX11Info::appDpiY() >= 95 ? 17. : 12.) *
                               72. / (float) QX11Info::appDpiY()) + 0.5));
 
