--- ./cmake/FindGStreamer_1_0.cmake.orig	2017-06-08 11:43:30.174917000 +0200
+++ ./cmake/FindGStreamer_1_0.cmake	2017-06-08 11:44:35.465509000 +0200
@@ -78,9 +78,9 @@
 # 1.1. Find headers and libraries
 set(GLIB_ROOT_DIR ${GSTREAMER_1_0_ROOT_DIR})
 find_package(Glib REQUIRED)
-#FIND_GSTREAMER_COMPONENT(GSTREAMER_1_0 gstreamer-1.0 gstreamer-1.0)
-pkg_check_modules (GSTREAMER_1_0 gstreamer-1.0)
-FIND_GSTREAMER_COMPONENT(GSTREAMER_1_0_BASE gstreamer-base-1.0 gstbase-1.0)
+#FIND_GSTREAMER_COMPONENT(GSTREAMER_1_0 gstreamer gstreamer)
+pkg_check_modules (GSTREAMER_1_0 gstreamer)
+FIND_GSTREAMER_COMPONENT(GSTREAMER_1_0_BASE gstreamer-base gstbase)
 
 # 1.2. Check Gstreamer version
 if (GSTREAMER_1_0_INCLUDE_DIRS)
@@ -111,11 +111,11 @@
 # 2. Find Gstreamer plugins
 # -------------------------
 
-FIND_GSTREAMER_COMPONENT(GSTREAMER_1_0_APP gstreamer-app-1.0 gstapp-1.0)
-FIND_GSTREAMER_COMPONENT(GSTREAMER_1_0_AUDIO gstreamer-audio-1.0 gstaudio-1.0)
-FIND_GSTREAMER_COMPONENT(GSTREAMER_1_0_FFT gstreamer-fft-1.0 gstfft-1.0)
-FIND_GSTREAMER_COMPONENT(GSTREAMER_1_0_PBUTILS gstreamer-pbutils-1.0 gstpbutils-1.0)
-FIND_GSTREAMER_COMPONENT(GSTREAMER_1_0_VIDEO gstreamer-video-1.0 gstvideo-1.0)
+FIND_GSTREAMER_COMPONENT(GSTREAMER_1_0_APP gstreamer-app gstapp)
+FIND_GSTREAMER_COMPONENT(GSTREAMER_1_0_AUDIO gstreamer-audio gstaudio)
+FIND_GSTREAMER_COMPONENT(GSTREAMER_1_0_FFT gstreamer-fft gstfft)
+FIND_GSTREAMER_COMPONENT(GSTREAMER_1_0_PBUTILS gstreamer-pbutils gstpbutils)
+FIND_GSTREAMER_COMPONENT(GSTREAMER_1_0_VIDEO gstreamer-video gstvideo)
 
 # ------------------------------------------------
 # 3. Process the COMPONENTS passed to FIND_PACKAGE
