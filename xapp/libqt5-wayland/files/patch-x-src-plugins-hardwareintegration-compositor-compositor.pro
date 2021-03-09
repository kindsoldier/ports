--- ./src/plugins/hardwareintegration/compositor/compositor.pro.orig	2020-10-27 10:02:11.000000000 +0200
+++ ./src/plugins/hardwareintegration/compositor/compositor.pro	2021-02-23 08:35:28.609805000 +0200
@@ -1,8 +1,8 @@
 TEMPLATE = subdirs
 QT_FOR_CONFIG += waylandcompositor-private
 
-qtConfig(wayland-dmabuf-client-buffer): \
-    SUBDIRS += linux-dmabuf-unstable-v1
+#qtConfig(wayland-dmabuf-client-buffer): \
+#    SUBDIRS += linux-dmabuf-unstable-v1
 qtConfig(wayland-egl): \
     SUBDIRS += wayland-egl
 qtConfig(wayland-brcm): \
