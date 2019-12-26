--- ./src/fg_internal.h.orig	2014-12-22 18:27:02.000000000 +0200
+++ ./src/fg_internal.h	2016-02-18 08:40:26.948673000 +0200
@@ -967,6 +967,7 @@
 void        fgInitialiseJoysticks( void );
 void        fgJoystickClose( void );
 void        fgJoystickPollWindow( SFG_Window* window );
+void        fgJoystickRawRead( SFG_Joystick* joy, int* buttons, float* axes );
 
 /* InputDevice Initialisation and Closure */
 int         fgInputDeviceDetect( void );
