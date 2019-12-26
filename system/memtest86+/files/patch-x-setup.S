--- ./setup.S.orig	2013-08-10 05:01:58.000000000 +0300
+++ ./setup.S	2018-03-28 08:48:10.760886000 +0200
@@ -50,7 +50,7 @@
      	jz	alt_a20_done
      	
      	/* set or clear bit1, the ALT_A20_GATE bit */
-     	movb	4(%esp), %ah
+     	addr32 movb	4(%esp), %ah
      	testb	%ah, %ah
      	jz	alt_a20_cont1
      	orb	$2, %al
