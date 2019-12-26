--- ./src/arm/sysv.S.orig	2013-03-16 11:19:39.000000000 +0000
+++ ./src/arm/sysv.S	2016-01-28 10:52:59.261407000 +0000
@@ -228,7 +228,7 @@
 #if defined(__SOFTFP__) || defined(__ARM_EABI__)
 	cmpne	r3, #FFI_TYPE_DOUBLE
 #endif
-	stmeqia	r2, {r0, r1}
+	stmiaeq	r2, {r0, r1}
 
 #if !defined(__SOFTFP__) && !defined(__ARM_EABI__)
 	beq	LSYM(Lepilogue)
@@ -410,7 +410,7 @@
 	beq	LSYM(Lepilogue_vfp)
 
 	cmp	r3, #FFI_TYPE_SINT64
-	stmeqia	r2, {r0, r1}
+	stmiaeq	r2, {r0, r1}
 	beq	LSYM(Lepilogue_vfp)
 
 	cmp	r3, #FFI_TYPE_FLOAT
