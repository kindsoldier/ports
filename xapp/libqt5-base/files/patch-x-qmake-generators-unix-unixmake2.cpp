--- ./qmake/generators/unix/unixmake2.cpp.orig	2019-01-28 19:11:52.000000000 +0200
+++ ./qmake/generators/unix/unixmake2.cpp	2019-03-17 19:22:28.501872000 +0200
@@ -285,19 +285,20 @@
         destd += '\\';
     t << "DESTDIR       = " << destd << endl;
     t << "TARGET        = " << fileVar("TARGET") << endl;
+
     if(project->isActiveConfig("plugin")) {
+
         t << "TARGETD       = " << fileVar("TARGET") << endl;
+
     } else if(!project->isActiveConfig("staticlib") && project->values("QMAKE_APP_FLAG").isEmpty()) {
         t << "TARGETA       = " << fileVar("TARGETA") << endl;
         if(!project->isEmpty("QMAKE_BUNDLE")) {
-            t << "TARGETD       = " << fileVar("TARGET_x.y") << endl;
+            t << "TARGETD       = " << fileVar("TARGET_x") << endl;
             t << "TARGET0       = " << fileVar("TARGET_") << endl;
         } else if (!project->isActiveConfig("unversioned_libname")) {
             t << "TARGET0       = " << fileVar("TARGET_") << endl;
             if (project->isEmpty("QMAKE_HPUX_SHLIB")) {
-                t << "TARGETD       = " << fileVar("TARGET_x.y.z") << endl;
-                t << "TARGET1       = " << fileVar("TARGET_x") << endl;
-                t << "TARGET2       = " << fileVar("TARGET_x.y") << endl;
+                t << "TARGETD       = " << fileVar("TARGET_x") << endl;
             } else {
                 t << "TARGETD       = " << fileVar("TARGET_x") << endl;
             }
@@ -625,7 +626,7 @@
             t << "\n\t";
 
             if (!project->isActiveConfig("unversioned_libname"))
-                t << "-$(DEL_FILE) $(TARGET) $(TARGET0) $(TARGET1) $(TARGET2)";
+                t << "-$(DEL_FILE) $(TARGET) $(TARGET0)";
             else
                 t << "-$(DEL_FILE) $(TARGET)";
 
@@ -633,9 +634,7 @@
 
             if (!project->isActiveConfig("unversioned_libname")) {
                 t << "\n\t"
-                  << varGlue("QMAKE_LN_SHLIB","-"," "," $(TARGET) $(TARGET0)") << "\n\t"
-                  << varGlue("QMAKE_LN_SHLIB","-"," "," $(TARGET) $(TARGET1)") << "\n\t"
-                  << varGlue("QMAKE_LN_SHLIB","-"," "," $(TARGET) $(TARGET2)");
+                  << varGlue("QMAKE_LN_SHLIB","-"," "," $(TARGET) $(TARGET0)");
             }
             if (!destdir.isEmpty()) {
                 t << "\n\t"
@@ -645,11 +644,7 @@
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
@@ -789,14 +784,11 @@
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
@@ -1211,6 +1203,7 @@
         }
         if(!project->isEmpty("TARGET"))
             project->values("TARGET").first().prepend(project->first("DESTDIR"));
+
     } else if (project->isActiveConfig("staticlib")) {
         project->values("PRL_TARGET") =
             project->values("TARGET").first().prepend(project->first("QMAKE_PREFIX_STATICLIB"));
@@ -1238,33 +1231,42 @@
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
@@ -1272,38 +1274,27 @@
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
@@ -1312,49 +1303,36 @@
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
@@ -1398,17 +1376,14 @@
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
@@ -1474,7 +1449,7 @@
         t << fileVar("TARGET");
     } else {
         if (project->isEmpty("QMAKE_HPUX_SHLIB"))
-            t << fileVar("TARGET_x.y.z") << ' ';
+            t << fileVar("TARGET_x") << ' ';
         t << fileVar("TARGET_x") << ' ' << fileVar("TARGET_");
     }
     t << "'\n\n";
