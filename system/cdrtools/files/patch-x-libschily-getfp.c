--- ./libschily/getfp.c.orig	2008-06-14 01:32:03.000000000 +0300
+++ ./libschily/getfp.c	2018-06-10 14:33:47.205047000 +0200
@@ -52,7 +52,7 @@
 
 EXPORT	void	**___fpoff	__PR((char *cp));
 
-EXPORT void **
+EXPORT __noinline void **
 getfp()
 {
 		long	**dummy[1];
@@ -69,7 +69,7 @@
  * We need this function to fool GCCs check for returning addresses
  * from outside the functions local address space.
  */
-EXPORT void **
+EXPORT __noinline void **
 ___fpoff(cp)
 	char	*cp;
 {
