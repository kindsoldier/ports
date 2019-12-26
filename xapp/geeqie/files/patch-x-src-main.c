--- ./src/main.c.orig	2012-08-12 23:13:41.000000000 +0300
+++ ./src/main.c	2014-12-29 02:21:39.000000000 +0200
@@ -714,7 +714,7 @@
 {
 	unsigned long pagesize = sysconf(_SC_PAGE_SIZE);
 	DEBUG_1("SIGBUS %p", info->si_addr);
-	mmap((void *)(((unsigned long)info->si_addr / pagesize) * pagesize), pagesize, PROT_READ | PROT_WRITE, MAP_FIXED | MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
+	mmap((void *)(((unsigned long)info->si_addr / pagesize) * pagesize), pagesize, PROT_READ | PROT_WRITE, MAP_FIXED | MAP_PRIVATE , -1, 0);
 }
 #endif
 
