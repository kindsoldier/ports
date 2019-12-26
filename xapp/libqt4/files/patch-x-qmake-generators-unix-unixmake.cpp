--- ./qmake/generators/unix/unixmake.cpp.orig	2015-05-07 16:14:42.000000000 +0200
+++ ./qmake/generators/unix/unixmake.cpp	2019-03-22 13:54:51.699020000 +0200
@@ -757,7 +757,7 @@
         if(project->isEmpty("QMAKE_CYGWIN_SHLIB")) {
             if(!project->isActiveConfig("staticlib") && !project->isActiveConfig("plugin")) {
                 if(project->isEmpty("QMAKE_HPUX_SHLIB")) {
-                    links << "$(TARGET0)" << "$(TARGET1)" << "$(TARGET2)";
+                    links << "$(TARGET0)";
                 } else {
                     links << "$(TARGET0)";
                 }
