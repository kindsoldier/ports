--- ./libguile/threads.c.orig	2010-12-13 19:24:40.000000000 +0200
+++ ./libguile/threads.c	2019-01-20 20:28:47.698950000 +0200
@@ -631,7 +631,7 @@
 
 #if SCM_USE_PTHREAD_THREADS
 
-#if HAVE_PTHREAD_ATTR_GETSTACK && HAVE_PTHREAD_GETATTR_NP
+#if HAVE_PTHREAD_ATTR_GETSTACK && (HAVE_PTHREAD_GETATTR_NP || HAVE_PTHREAD_ATTR_GET_NP)
 /* This method for GNU/Linux and perhaps some other systems.
    It's not for MacOS X or Solaris 10, since pthread_getattr_np is not
    available on them.  */
@@ -644,8 +644,15 @@
   void *start, *end;
   size_t size;
 
+#if HAVE_PTHREAD_ATTR_GET_NP
+  pthread_attr_init (&attr);
+  pthread_attr_get_np (pthread_self (), &attr);
+  pthread_attr_getstack (&attr, &start, &size);
+  pthread_attr_destroy (&attr);
+#elif HAVE_PTHREAD_GETATTR_NP
   pthread_getattr_np (pthread_self (), &attr);
   pthread_attr_getstack (&attr, &start, &size);
+#endif
   end = (char *)start + size;
 
   /* XXX - pthread_getattr_np from LinuxThreads does not seem to work
