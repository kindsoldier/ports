--- ./src/backend/jit/llvm/llvmjit_inline.cpp.orig	2022-02-07 23:15:36.000000000 +0200
+++ ./src/backend/jit/llvm/llvmjit_inline.cpp	2022-02-23 20:23:06.814278000 +0200
@@ -609,6 +609,16 @@
 			elog(FATAL, "failed to materialize metadata");
 
 		/*
+		 * Don't inline functions with thread-local variables until
+		 * related crashes are investigated (see BUG #16696)
+		 */
+		if (rv->isThreadLocal()) {
+			ilog(DEBUG1, "cannot inline %s due to thread-local variable %s",
+				F.getName().data(), rv->getName().data());
+			return false;
+		}
+
+		/*
 		 * Don't inline functions that access thread local variables.  That
 		 * doesn't work on current LLVM releases (but might in future).
 		 */
