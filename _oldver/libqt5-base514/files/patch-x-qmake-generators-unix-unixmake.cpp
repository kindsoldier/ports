--- ./qmake/generators/unix/unixmake.cpp.orig	2019-01-28 19:11:52.000000000 +0200
+++ ./qmake/generators/unix/unixmake.cpp	2019-03-17 19:22:28.499343000 +0200
@@ -597,7 +597,7 @@
                     && !project->isActiveConfig("plugin")
                     && !project->isActiveConfig("unversioned_libname")) {
                 if(project->isEmpty("QMAKE_HPUX_SHLIB")) {
-                    links << "$(TARGET0)" << "$(TARGET1)" << "$(TARGET2)";
+                    links << "$(TARGET0)";
                 } else {
                     links << "$(TARGET0)";
                 }
