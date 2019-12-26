--- ./qmake/generators/integrity/gbuild.cpp.orig	2015-05-07 16:14:42.000000000 +0200
+++ ./qmake/generators/integrity/gbuild.cpp	2019-03-22 13:54:51.696937000 +0200
@@ -410,7 +410,7 @@
             filepath.remove(project->values("QT_SOURCE_TREE").first());
             filepath.remove(0, 1);
         }
-        s += "\n\t:preexecShellSafe='${QT_BUILD_DIR}/bin/moc ";
+        s += "\n\t:preexecShellSafe='${QT_BUILD_DIR}/bin/moc-qt4 ";
         s += "-nn ";
         s += varGlue("DEFINES", "-D", " -D", " ");
         s += varGlue("INCLUDEPATH", "-I", " -I", " ");
