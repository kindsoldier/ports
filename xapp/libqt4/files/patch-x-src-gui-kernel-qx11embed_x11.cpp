--- ./src/gui/kernel/qx11embed_x11.cpp.orig	2015-05-07 16:14:43.000000000 +0200
+++ ./src/gui/kernel/qx11embed_x11.cpp	2019-03-22 13:54:51.783679000 +0200
@@ -275,7 +275,7 @@
     QTLWExtra* topData() { return d_func()->topData(); }
 };
 
-static unsigned int XEMBED_VERSION = 0;
+static quint32 XEMBED_VERSION = 0;
 
 enum QX11EmbedMessageType {
     XEMBED_EMBEDDED_NOTIFY = 0,
@@ -483,7 +483,7 @@
                     | ExposureMask | StructureNotifyMask
                     | SubstructureNotifyMask | PropertyChangeMask);
 
-    long data[] = {XEMBED_VERSION, XEMBED_MAPPED};
+    quint32 data[] = {XEMBED_VERSION, XEMBED_MAPPED};
     XChangeProperty(x11Info().display(), internalWinId(), ATOM(_XEMBED_INFO),
                     ATOM(_XEMBED_INFO), 32, PropModeReplace,
                     (unsigned char*) data, 2);
@@ -1578,7 +1578,7 @@
 {
     Q_D(QX11EmbedContainer);
     if (d->client) {
-        long data[] = {XEMBED_VERSION, XEMBED_MAPPED};
+        quint32 data[] = {XEMBED_VERSION, XEMBED_MAPPED};
 	XChangeProperty(x11Info().display(), d->client, ATOM(_XEMBED_INFO), ATOM(_XEMBED_INFO), 32,
 			PropModeReplace, (unsigned char *) data, 2);
     }
@@ -1594,7 +1594,7 @@
 {
     Q_D(QX11EmbedContainer);
     if (d->client) {
-        long data[] = {XEMBED_VERSION, XEMBED_MAPPED};
+        quint32 data[] = {XEMBED_VERSION, XEMBED_MAPPED};
 	XChangeProperty(x11Info().display(), d->client, ATOM(_XEMBED_INFO), ATOM(_XEMBED_INFO), 32,
 			PropModeReplace, (unsigned char *) data, 2);
     }
