--- ./qmake/generators/unix/unixmake2.cpp.orig	2015-05-07 16:14:42.000000000 +0200
+++ ./qmake/generators/unix/unixmake2.cpp	2019-03-22 13:54:51.701393000 +0200
@@ -247,10 +247,8 @@
         } else if(!project->isEmpty("QMAKE_SYMBIAN_SHLIB")) {
             t << "TARGETD       = " << escapeFilePath(var("TARGET")) << endl;
         } else if(project->isEmpty("QMAKE_HPUX_SHLIB")) {
-            t << "TARGETD       = " << escapeFilePath(var("TARGET_x.y.z")) << endl;
+            t << "TARGETD       = " << escapeFilePath(var("TARGET_x")) << endl;
             t << "TARGET0       = " << escapeFilePath(var("TARGET_")) << endl;
-            t << "TARGET1       = " << escapeFilePath(var("TARGET_x")) << endl;
-            t << "TARGET2       = " << escapeFilePath(var("TARGET_x.y")) << endl;
         } else {
             t << "TARGETD       = " << escapeFilePath(var("TARGET_x")) << endl;
             t << "TARGET0       = " << escapeFilePath(var("TARGET_")) << endl;
@@ -572,18 +570,14 @@
             t << endl << endl;
         } else if(project->isEmpty("QMAKE_HPUX_SHLIB")) {
             t << "\n\t"
-              << "-$(DEL_FILE) $(TARGET) $(TARGET0) $(TARGET1) $(TARGET2)" << "\n\t"
+              << "-$(DEL_FILE) $(TARGET) $(TARGET0)" << "\n\t"
               << var("QMAKE_LINK_SHLIB_CMD") << "\n\t";
-            t << varGlue("QMAKE_LN_SHLIB","-"," "," $(TARGET) $(TARGET0)")  << "\n\t"
-              << varGlue("QMAKE_LN_SHLIB","-"," "," $(TARGET) $(TARGET1)") << "\n\t"
-              << varGlue("QMAKE_LN_SHLIB","-"," "," $(TARGET) $(TARGET2)");
+            t << varGlue("QMAKE_LN_SHLIB","-"," "," $(TARGET) $(TARGET0)")  << "\n\t";
             if(!destdir.isEmpty())
                 t << "\n\t"
                   << "-$(DEL_FILE) " << destdir << "$(TARGET)\n\t"
                   << "-$(DEL_FILE) " << destdir << "$(TARGET0)\n\t"
-                  << "-$(DEL_FILE) " << destdir << "$(TARGET1)\n\t"
-                  << "-$(DEL_FILE) " << destdir << "$(TARGET2)\n\t"
-                  << "-$(MOVE) $(TARGET) $(TARGET0) $(TARGET1) $(TARGET2) " << destdir;
+                  << "-$(MOVE) $(TARGET) $(TARGET0) " << destdir;
             if(!project->isEmpty("QMAKE_POST_LINK"))
                 t << "\n\t" << var("QMAKE_POST_LINK");
             t << endl << endl;
@@ -1159,17 +1153,17 @@
                                                             project->first("VER_MIN") +  "." +
                                                             project->first("VER_PAT"));
             }
-            project->values("TARGET") = project->values("TARGET_x.y.z");
+            project->values("TARGET") = project->values("TARGET_x");
         }
         if(project->isEmpty("QMAKE_LN_SHLIB"))
-            project->values("QMAKE_LN_SHLIB").append("ln -s");
+            project->values("QMAKE_LN_SHLIB").append("ln -sf");
         if (!project->values("QMAKE_LFLAGS_SONAME").isEmpty()) {
             QString soname;
             if(project->isActiveConfig("plugin")) {
                 if(!project->values("TARGET").isEmpty())
                     soname += project->first("TARGET");
             } else if(!project->isEmpty("QMAKE_BUNDLE")) {
-                soname += project->first("TARGET_x.y");
+                soname += project->first("TARGET_x");
             } else if(!project->values("TARGET_x").isEmpty()) {
                 soname += project->first("TARGET_x");
             }
@@ -1313,8 +1307,6 @@
     if(project->isActiveConfig("plugin")) {
         t << var("TARGET");
     } else {
-        if (project->isEmpty("QMAKE_HPUX_SHLIB"))
-            t << var("TARGET_x.y.z") << " ";
         t << var("TARGET_x") << " " << var("TARGET_");
     }
     t << "'\n\n";
