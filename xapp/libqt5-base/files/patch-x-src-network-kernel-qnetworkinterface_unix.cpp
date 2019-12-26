--- ./src/network/kernel/qnetworkinterface_unix.cpp.orig	2019-01-28 19:11:52.000000000 +0200
+++ ./src/network/kernel/qnetworkinterface_unix.cpp	2019-03-17 19:22:28.516745000 +0200
@@ -420,12 +420,24 @@
 #endif // QT_PLATFORM_UIKIT
 QT_END_INCLUDE_NAMESPACE
 
-static int openSocket(int &socket)
+template<int address_family> struct SockPuppet
 {
-    if (socket == -1)
-        socket = qt_safe_socket(AF_INET, SOCK_DGRAM, 0);
-    return socket;
-}
+
+    int socket{-1};
+
+    int open() 
+    {
+        if (socket == -1)
+            socket = qt_safe_socket(address_family, SOCK_DGRAM, 0);
+        return socket;
+    }
+
+    ~SockPuppet()
+    {
+        if (socket != -1)
+            qt_safe_close(socket);
+    }
+};
 
 static QNetworkInterface::InterfaceType probeIfType(int socket, int iftype, struct ifmediareq *req)
 {
@@ -480,15 +492,8 @@
 static QList<QNetworkInterfacePrivate *> createInterfaces(ifaddrs *rawList)
 {
     QList<QNetworkInterfacePrivate *> interfaces;
-    union {
-        struct ifmediareq mediareq;
-        struct ifreq req;
-    };
-    int socket = -1;
-
-    // ensure both structs start with the name field, of size IFNAMESIZ
-    Q_STATIC_ASSERT(sizeof(mediareq.ifm_name) == sizeof(req.ifr_name));
-    Q_ASSERT(&mediareq.ifm_name == &req.ifr_name);
+    SockPuppet<AF_INET> socket;
+    SockPuppet<AF_LOCAL> localSocket;
 
     // on NetBSD we use AF_LINK and sockaddr_dl
     // scan the list for that family
@@ -503,13 +508,22 @@
             iface->flags = convertFlags(ptr->ifa_flags);
             iface->hardwareAddress = iface->makeHwAddress(sdl->sdl_alen, (uchar*)LLADDR(sdl));
 
-            qstrncpy(mediareq.ifm_name, ptr->ifa_name, sizeof(mediareq.ifm_name));
-            iface->type = probeIfType(openSocket(socket), sdl->sdl_type, &mediareq);
-            iface->mtu = getMtu(socket, &req);
+            {
+                ifmediareq req;
+                memset(&req, 0, sizeof(req));
+                strncpy(req.ifm_name, ptr->ifa_name, sizeof(req.ifm_name));
+                iface->type = probeIfType(socket.open(), sdl->sdl_type, &req);
+            }
+            {
+                ifreq req;
+                memset(&req, 0, sizeof(req));
+                strncpy(req.ifr_name, ptr->ifa_name, sizeof(req.ifr_name));
+                req.ifr_addr.sa_family = AF_LOCAL;
+                iface->mtu = getMtu(localSocket.open(), &req);
+            }
+
         }
 
-    if (socket != -1)
-        qt_safe_close(socket);
     return interfaces;
 }
 
@@ -608,7 +622,7 @@
 {
     QList<QNetworkInterfacePrivate *> interfaces;
 
-    ifaddrs *interfaceListing;
+    ifaddrs *interfaceListing = nullptr;
     if (getifaddrs(&interfaceListing) == -1) {
         // error
         return interfaces;
