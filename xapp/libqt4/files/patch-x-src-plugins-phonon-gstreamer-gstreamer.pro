--- ./src/plugins/phonon/gstreamer/gstreamer.pro.orig	2015-05-07 16:14:48.000000000 +0200
+++ ./src/plugins/phonon/gstreamer/gstreamer.pro	2019-03-22 13:54:51.815707000 +0200
@@ -9,7 +9,7 @@
 
 # GStreamer
 QMAKE_CXXFLAGS += $$QT_CFLAGS_GSTREAMER
-LIBS += $$QT_LIBS_GSTREAMER -lgstinterfaces-0.10 -lgstvideo-0.10 -lgstbase-0.10 -lgstaudio-0.10
+LIBS += $$QT_LIBS_GSTREAMER -lgstinterfaces -lgstvideo -lgstbase -lgstaudio
 
 PHONON_GSTREAMER_DIR = $$QT_SOURCE_TREE/src/3rdparty/phonon/gstreamer
 
