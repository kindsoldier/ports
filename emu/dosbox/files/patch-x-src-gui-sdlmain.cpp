--- ./src/gui/sdlmain.cpp.orig	2010-05-10 20:43:54.000000000 +0300
+++ ./src/gui/sdlmain.cpp	2018-07-31 12:42:20.835651000 +0200
@@ -51,7 +51,7 @@
 #include "cross.h"
 #include "control.h"
 
-#define MAPPERFILE "mapper-" VERSION ".map"
+#define MAPPERFILE "mapper.map"
 //#define DISABLE_JOYSTICK
 
 #if C_OPENGL
@@ -1134,10 +1134,10 @@
 #endif
 	const char * gl_ext = (const char *)glGetString (GL_EXTENSIONS);
 	if(gl_ext && *gl_ext){
-		sdl.opengl.packed_pixel=(strstr(gl_ext,"EXT_packed_pixels") > 0);
-		sdl.opengl.paletted_texture=(strstr(gl_ext,"EXT_paletted_texture") > 0);
+		sdl.opengl.packed_pixel=(strstr(gl_ext,"EXT_packed_pixels") != 0);
+		sdl.opengl.paletted_texture=(strstr(gl_ext,"EXT_paletted_texture") != 0);
 #if defined(NVIDIA_PixelDataRange)
-		sdl.opengl.pixel_data_range=(strstr(gl_ext,"GL_NV_pixel_data_range") >0 ) &&
+		sdl.opengl.pixel_data_range=(strstr(gl_ext,"GL_NV_pixel_data_range") != 0 ) &&
 			glPixelDataRangeNV && db_glAllocateMemoryNV && db_glFreeMemoryNV;
 		sdl.opengl.pixel_data_range = 0;
 #endif
