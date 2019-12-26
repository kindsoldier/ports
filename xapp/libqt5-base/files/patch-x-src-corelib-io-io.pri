--- ./src/corelib/io/io.pri.orig	2019-01-28 19:11:52.000000000 +0200
+++ ./src/corelib/io/io.pri	2019-03-17 19:22:28.511493000 +0200
@@ -198,6 +198,9 @@
             SOURCES += \
                 io/qstandardpaths_unix.cpp \
                 io/qstorageinfo_unix.cpp
+            freebsd {
+                LIBS += -lkvm -lprocstat
+            }
         }
 }
 
