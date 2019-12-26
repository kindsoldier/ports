--- ./vapi/glib-2.0.vapi.orig	2011-05-31 22:04:03.000000000 +0300
+++ ./vapi/glib-2.0.vapi	2011-11-09 17:13:29.000000000 +0300
@@ -3018,6 +3018,8 @@
 		public static FileStream? open (string path, string mode);
 		[CCode (cname = "fdopen")]
 		public static FileStream? fdopen (int fildes, string mode);
+		[CCode (cname = "freopen", instance_pos = -1)]
+		public void reopen (string path, string mode);
 		[CCode (cname = "fprintf")]
 		[PrintfFormat ()]
 		public void printf (string format, ...);
