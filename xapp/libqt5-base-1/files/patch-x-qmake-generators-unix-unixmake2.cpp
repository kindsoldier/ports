--- ./qmake/generators/unix/unixmake2.cpp.orig	2020-03-27 11:49:31.000000000 +0200
+++ ./qmake/generators/unix/unixmake2.cpp	2020-05-15 18:12:54.807060000 +0200
@@ -260,14 +260,12 @@
     } else if(!project->isActiveConfig("staticlib") && project->values("QMAKE_APP_FLAG").isEmpty()) {
         t << "TARGETA       = " << fileVar("TARGETA") << Qt::endl;
         if(!project->isEmpty("QMAKE_BUNDLE")) {
-            t << "TARGETD       = " << fileVar("TARGET_x.y") << Qt::endl;
+            t << "TARGETD       = " << fileVar("TARGET_x") << Qt::endl;
             t << "TARGET0       = " << fileVar("TARGET_") << Qt::endl;
         } else if (!project->isActiveConfig("unversioned_libname")) {
             t << "TARGET0       = " << fileVar("TARGET_") << Qt::endl;
             if (project->isEmpty("QMAKE_HPUX_SHLIB")) {
-                t << "TARGETD       = " << fileVar("TARGET_x.y.z") << Qt::endl;
-                t << "TARGET1       = " << fileVar("TARGET_x") << Qt::endl;
-                t << "TARGET2       = " << fileVar("TARGET_x.y") << Qt::endl;
+                t << "TARGETD       = " << fileVar("TARGET_x") << Qt::endl;
             } else {
                 t << "TARGETD       = " << fileVar("TARGET_x") << Qt::endl;
             }
@@ -598,7 +596,7 @@
             t << "\n\t";
 
             if (!project->isActiveConfig("unversioned_libname"))
-                t << "-$(DEL_FILE) $(TARGET) $(TARGET0) $(TARGET1) $(TARGET2)";
+                t << "-$(DEL_FILE) $(TARGET) $(TARGET0)";
             else
                 t << "-$(DEL_FILE) $(TARGET)";
 
@@ -606,9 +604,7 @@
 
             if (!project->isActiveConfig("unversioned_libname")) {
                 t << "\n\t"
-                  << varGlue("QMAKE_LN_SHLIB","-"," "," $(TARGET) $(TARGET0)") << "\n\t"
-                  << varGlue("QMAKE_LN_SHLIB","-"," "," $(TARGET) $(TARGET1)") << "\n\t"
-                  << varGlue("QMAKE_LN_SHLIB","-"," "," $(TARGET) $(TARGET2)");
+                  << varGlue("QMAKE_LN_SHLIB","-"," "," $(TARGET) $(TARGET0)");
             }
             if (!destdir.isEmpty()) {
                 t << "\n\t"
@@ -618,11 +614,7 @@
                 if (!project->isActiveConfig("unversioned_libname")) {
                     t << "\n\t"
                       << "-$(DEL_FILE) " << destdir << "$(TARGET0)\n\t"
-                      << "-$(DEL_FILE) " << destdir << "$(TARGET1)\n\t"
-                      << "-$(DEL_FILE) " << destdir << "$(TARGET2)\n\t"
-                      << "-$(MOVE) $(TARGET0) " << destdir << "$(TARGET0)\n\t"
-                      << "-$(MOVE) $(TARGET1) " << destdir << "$(TARGET1)\n\t"
-                      << "-$(MOVE) $(TARGET2) " << destdir << "$(TARGET2)";
+                      << "-$(MOVE) $(TARGET0) " << destdir << "$(TARGET0)";
                 }
             }
             if(!project->isEmpty("QMAKE_POST_LINK"))
@@ -762,14 +754,11 @@
             ProStringList commonSedArgs;
             if (!project->values("VERSION").isEmpty()) {
                 const ProString shortVersion =
-                    project->first("VER_MAJ") + "." +
-                    project->first("VER_MIN");
+                    project->first("VER_MAJ");
                 commonSedArgs << "-e \"s,@SHORT_VERSION@," << shortVersion << ",g\" ";
                 commonSedArgs << "-e \"s,\\$${QMAKE_SHORT_VERSION}," << shortVersion << ",g\" ";
                 const ProString fullVersion =
-                    project->first("VER_MAJ") + "." +
-                    project->first("VER_MIN") + "." +
-                    project->first("VER_PAT");
+                    project->first("VER_MAJ");
                 commonSedArgs << "-e \"s,@FULL_VERSION@," << fullVersion << ",g\" ";
                 commonSedArgs << "-e \"s,\\$${QMAKE_FULL_VERSION}," << fullVersion << ",g\" ";
             }
@@ -1188,6 +1177,7 @@
         }
         if(!project->isEmpty("TARGET"))
             project->values("TARGET").first().prepend(project->first("DESTDIR"));
+
     } else if (project->isActiveConfig("staticlib")) {
         project->values("PRL_TARGET") =
             project->values("TARGET").first().prepend(project->first("QMAKE_PREFIX_STATICLIB"));
@@ -1216,33 +1206,42 @@
                                         bundle_loc + project->first("TARGET");
             project->values("TARGET_").append(target);
             if (!project->isActiveConfig("shallow_bundle")) {
-                project->values("TARGET_x.y").append(project->first("QMAKE_BUNDLE") +
+                project->values("TARGET_x").append(project->first("QMAKE_BUNDLE") +
                                                           "/Versions/" +
                                                           project->first("QMAKE_FRAMEWORK_VERSION") +
                                                           bundle_loc + project->first("TARGET"));
             } else {
-                project->values("TARGET_x.y").append(target);
+                project->values("TARGET_x").append(target);
             }
         } else if(project->isActiveConfig("plugin")) {
+
             QString prefix;
+
             if(!project->isActiveConfig("no_plugin_name_prefix"))
                 prefix = "lib";
             project->values("PRL_TARGET").prepend(prefix + project->first("TARGET"));
-            project->values("TARGET_x.y.z").append(prefix +
+
+            project->values("TARGET_x").append(prefix +
                                                         project->first("TARGET") + "." +
                                                         project->first("QMAKE_EXTENSION_PLUGIN"));
-            if(project->isActiveConfig("lib_version_first"))
-                project->values("TARGET_x").append(prefix + project->first("TARGET") + "." +
-                                                        project->first("VER_MAJ") + "." +
-                                                        project->first("QMAKE_EXTENSION_PLUGIN"));
-            else
-                project->values("TARGET_x").append(prefix + project->first("TARGET") + "." +
-                                                        project->first("QMAKE_EXTENSION_PLUGIN") +
-                                                        "." + project->first("VER_MAJ"));
-            project->values("TARGET") = project->values("TARGET_x.y.z");
+
+            //if(project->isActiveConfig("lib_version_first"))
+            //    project->values("TARGET_x").append(prefix + project->first("TARGET") + "." +
+            //                                            project->first("VER_MAJ") + "." +
+            //                                            project->first("QMAKE_EXTENSION_PLUGIN"));
+            //else
+            //    project->values("TARGET_x").append(prefix + project->first("TARGET") + "." +
+            //                                            project->first("QMAKE_EXTENSION_PLUGIN") +
+            //                                            "." + project->first("VER_MAJ"));
+
+            project->values("TARGET") = project->values("TARGET_x");
+
+
         } else if (!project->isEmpty("QMAKE_HPUX_SHLIB")) {
+
             project->values("PRL_TARGET").prepend("lib" + project->first("TARGET"));
             project->values("TARGET_").append("lib" + project->first("TARGET") + ".sl");
+
             if(project->isActiveConfig("lib_version_first"))
                 project->values("TARGET_x").append("lib" + project->first("VER_MAJ") + "." +
                                                         project->first("TARGET"));
@@ -1250,38 +1249,27 @@
                 project->values("TARGET_x").append("lib" + project->first("TARGET") + "." +
                                                         project->first("VER_MAJ"));
             project->values("TARGET") = project->values("TARGET_x");
+
+
         } else if (!project->isEmpty("QMAKE_AIX_SHLIB")) {
             project->values("PRL_TARGET").prepend("lib" + project->first("TARGET"));
+
             project->values("TARGET_").append(project->first("QMAKE_PREFIX_STATICLIB") + project->first("TARGET")
                     + "." + project->first("QMAKE_EXTENSION_STATICLIB"));
             if(project->isActiveConfig("lib_version_first")) {
+
                 project->values("TARGET_x").append("lib" + project->first("TARGET") + "." +
                                                         project->first("VER_MAJ") + "." +
                                                         project->first("QMAKE_EXTENSION_SHLIB"));
-                project->values("TARGET_x.y").append("lib" + project->first("TARGET") + "." +
-                                                          project->first("VER_MAJ") +
-                                                          "." + project->first("VER_MIN") + "." +
-                                                          project->first("QMAKE_EXTENSION_SHLIB"));
-                project->values("TARGET_x.y.z").append("lib" + project->first("TARGET") + "." +
-                                                            project->first("VER_MAJ") + "." +
-                                                            project->first("VER_MIN") + "." +
-                                                            project->first("VER_PAT") + "." +
-                                                            project->first("QMAKE_EXTENSION_SHLIB"));
+
+
             } else {
                 project->values("TARGET_x").append("lib" + project->first("TARGET") + "." +
                                                         project->first("QMAKE_EXTENSION_SHLIB") +
                                                         "." + project->first("VER_MAJ"));
-                project->values("TARGET_x.y").append("lib" + project->first("TARGET") + "." +
-                                                          project->first("QMAKE_EXTENSION_SHLIB") +
-                                                          "." + project->first("VER_MAJ") +
-                                                          "." + project->first("VER_MIN"));
-                project->values("TARGET_x.y.z").append("lib" + project->first("TARGET") + "." +
-                                                            project->first("QMAKE_EXTENSION_SHLIB") + "." +
-                                                            project->first("VER_MAJ") + "." +
-                                                            project->first("VER_MIN") + "." +
-                                                            project->first("VER_PAT"));
             }
-            project->values("TARGET") = project->values("TARGET_x.y.z");
+            project->values("TARGET") = project->values("TARGET_x");
+
         } else {
             project->values("PRL_TARGET").prepend("lib" + project->first("TARGET"));
             project->values("TARGET_").append("lib" + project->first("TARGET") + "." +
@@ -1290,49 +1278,36 @@
                 project->values("TARGET_x").append("lib" + project->first("TARGET") + "." +
                                                         project->first("VER_MAJ") + "." +
                                                         project->first("QMAKE_EXTENSION_SHLIB"));
-                project->values("TARGET_x.y").append("lib" + project->first("TARGET") + "." +
-                                                          project->first("VER_MAJ") +
-                                                          "." + project->first("VER_MIN") + "." +
-                                                          project->first("QMAKE_EXTENSION_SHLIB"));
-                project->values("TARGET_x.y.z").append("lib" + project->first("TARGET") + "." +
-                                                            project->first("VER_MAJ") + "." +
-                                                            project->first("VER_MIN") +  "." +
-                                                            project->first("VER_PAT") + "." +
-                                                            project->first("QMAKE_EXTENSION_SHLIB"));
+
             } else {
                 project->values("TARGET_x").append("lib" + project->first("TARGET") + "." +
                                                         project->first("QMAKE_EXTENSION_SHLIB") +
                                                         "." + project->first("VER_MAJ"));
-                project->values("TARGET_x.y").append("lib" + project->first("TARGET") + "." +
-                                                      project->first("QMAKE_EXTENSION_SHLIB")
-                                                      + "." + project->first("VER_MAJ") +
-                                                      "." + project->first("VER_MIN"));
-                project->values("TARGET_x.y.z").append("lib" + project->first("TARGET") +
-                                                            "." +
-                                                            project->first(
-                                                                "QMAKE_EXTENSION_SHLIB") + "." +
-                                                            project->first("VER_MAJ") + "." +
-                                                            project->first("VER_MIN") +  "." +
-                                                            project->first("VER_PAT"));
             }
             if (project->isActiveConfig("unversioned_libname"))
                 project->values("TARGET") = project->values("TARGET_");
             else
-                project->values("TARGET") = project->values("TARGET_x.y.z");
+                project->values("TARGET") = project->values("TARGET_x");
         }
+
         if (!project->values("QMAKE_LFLAGS_SONAME").isEmpty()) {
             ProString soname;
+
             if(project->isActiveConfig("plugin")) {
+
                 if(!project->values("TARGET").isEmpty())
                     soname += project->first("TARGET");
+
+
             } else if(!project->isEmpty("QMAKE_BUNDLE")) {
-                soname += project->first("TARGET_x.y");
+                soname += project->first("TARGET_x");
             } else if(project->isActiveConfig("unversioned_soname")) {
                 soname = "lib" + project->first("QMAKE_ORIG_TARGET")
                     + "." + project->first("QMAKE_EXTENSION_SHLIB");
             } else if(!project->values("TARGET_x").isEmpty()) {
                 soname += project->first("TARGET_x");
             }
+
             if(!soname.isEmpty()) {
                 if(project->isActiveConfig("absolute_library_soname") &&
                    project->values("INSTALLS").indexOf("target") != -1 &&
@@ -1376,17 +1351,14 @@
             if(!project->isEmpty("QMAKE_LFLAGS_COMPAT_VERSION")) {
                 if(project->isEmpty("COMPAT_VERSION"))
                     project->values("QMAKE_LFLAGS") += QString(project->first("QMAKE_LFLAGS_COMPAT_VERSION") +
-                                                                    project->first("VER_MAJ") + "." +
-                                                                    project->first("VER_MIN"));
+                                                                    project->first("VER_MAJ"));
                 else
                     project->values("QMAKE_LFLAGS") += QString(project->first("QMAKE_LFLAGS_COMPAT_VERSION") +
                                                                     project->first("COMPATIBILITY_VERSION"));
             }
             if(!project->isEmpty("QMAKE_LFLAGS_VERSION")) {
                 project->values("QMAKE_LFLAGS") += QString(project->first("QMAKE_LFLAGS_VERSION") +
-                                                                project->first("VER_MAJ") + "." +
-                                                                project->first("VER_MIN") + "." +
-                                                                project->first("VER_PAT"));
+                                                                project->first("VER_MAJ"));
             }
             project->values("QMAKE_LFLAGS") += project->values("QMAKE_LFLAGS_SONAME");
         }
@@ -1481,7 +1453,7 @@
         t << fileVar("TARGET");
     } else {
         if (project->isEmpty("QMAKE_HPUX_SHLIB"))
-            t << fileVar("TARGET_x.y.z") << ' ';
+            t << fileVar("TARGET_x") << ' ';
         t << fileVar("TARGET_x") << ' ' << fileVar("TARGET_");
     }
     t << "'\n\n";
