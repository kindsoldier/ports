--- ./src/corelib/tools/qtimezoneprivate_tz.cpp.orig	2019-01-28 19:11:52.000000000 +0200
+++ ./src/corelib/tools/qtimezoneprivate_tz.cpp	2019-03-17 19:22:28.514930000 +0200
@@ -1071,6 +1071,17 @@
         }
     }
 
+    // On many FreeBSD systems, /etc/localtime is a regular file while the actual name is in /var/db/zoneinfo
+    if (ianaId.isEmpty()) {
+        QFile tzif(QStringLiteral("/var/db/zoneinfo"));
+        if (tzif.open(QIODevice::ReadOnly)) {
+            // TODO QTextStream inefficient, replace later
+            QTextStream ts(&tzif);
+            if (!ts.atEnd())
+                ianaId = ts.readLine().toUtf8();
+        }
+    }
+
     // On some Red Hat distros /etc/localtime is real file with name held in /etc/sysconfig/clock
     // in a line like ZONE="Europe/Oslo" or TIMEZONE="Europe/Oslo"
     if (ianaId.isEmpty()) {
