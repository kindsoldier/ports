--- ./src/3rdparty/webkit/Source/WebKit/qt/WebCoreSupport/NotificationPresenterClientQt.cpp.orig	2015-05-07 16:14:45.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebKit/qt/WebCoreSupport/NotificationPresenterClientQt.cpp	2019-03-22 13:54:51.762821000 +0200
@@ -211,9 +211,9 @@
         QPixmap pixmap;
         if (bytes.length() && pixmap.loadFromData(bytes)) {
             QIcon icon(pixmap);
-            wrapper->m_notificationIcon = new QSystemTrayIcon(icon);
+            wrapper->m_notificationIcon = adoptPtr(new QSystemTrayIcon(icon));
         } else
-            wrapper->m_notificationIcon = new QSystemTrayIcon();
+            wrapper->m_notificationIcon = adoptPtr(new QSystemTrayIcon());
 #endif
     }
 
