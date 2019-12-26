--- ./sysdep/bsd/krt-sock.c.orig	2016-04-29 11:13:23.000000000 +0200
+++ ./sysdep/bsd/krt-sock.c	2016-08-08 00:36:59.159572000 +0200
@@ -167,17 +167,10 @@
 struct ks_msg
 {
   struct rt_msghdr rtm;
-  struct sockaddr_storage buf[RTAX_MAX];
+  struct  sockaddr buf[RTAX_MAX];
+//  struct sockaddr_storage buf[RTAX_MAX];
 };
 
-#define ROUNDUP(a) \
-        ((a) > 0 ? (1 + (((a) - 1) | (sizeof(long) - 1))) : sizeof(long))
-
-#define NEXTADDR(w, u) \
-        if (msg.rtm.rtm_addrs & (w)) {\
-          l = ROUNDUP(((struct sockaddr *)&(u))->sa_len);\
-          memmove(body, &(u), l); body += l;}
-
 #define GETADDR(p, F) \
   bzero(p, sizeof(*p));\
   if ((addrs & (F)) && ((struct sockaddr *)body)->sa_len) {\
@@ -185,6 +178,19 @@
     memcpy(p, body, (l > sizeof(*p) ? sizeof(*p) : l));\
     body += l;}
 
+#define ROUNDUP(a) \
+        ((a) > 0 ? (1 + (((a) - 1) | (sizeof(long) - 1))) : sizeof(long))
+
+#define NEXTADDR(w, u)						\
+	if (msg.rtm.rtm_addrs & (w)) {				\
+		l = (((struct sockaddr *)&(u))->sa_len == 0) ?	\
+		    sizeof(long) :				\
+		    1 + ((((struct sockaddr *)&(u))->sa_len - 1)	\
+			| (sizeof(long) - 1));			\
+		memmove(body, &(u), l); body += l;		\
+	}
+
+
 static int
 krt_send_route(struct krt_proto *p, int cmd, rte *e)
 {
