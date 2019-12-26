--- ./src/3rdparty/webkit/Source/WebCore/platform/graphics/filters/arm/FELightingNEON.cpp.orig	2015-05-07 16:14:46.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebCore/platform/graphics/filters/arm/FELightingNEON.cpp	2019-03-22 13:54:51.736761000 +0200
@@ -398,7 +398,7 @@
     "vmin.f32 " TMP2_D0 ", " TMP2_D0 ", " CONST_ONE_HI_D NL
     "vmul.f32 " TMP3_Q ", " COLOR_Q ", " TMP2_D0 "[1]" NL
     "vcvt.u32.f32 " TMP3_Q ", " TMP3_Q NL
-    "vmov.u32 r2, r3, " TMP3_S0 ", " TMP3_S1 NL
+    "vmov r2, r3, " TMP3_S0 ", " TMP3_S1 NL
     // The color values are stored in-place.
     "strb r2, [" PIXELS_R ", #-11]" NL
     "strb r3, [" PIXELS_R ", #-10]" NL
