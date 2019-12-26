--- ./makefiles/subdir.mk.orig	2012-11-30 15:41:25.000000000 +0300
+++ ./makefiles/subdir.mk	2014-01-05 21:47:32.000000000 +0300
@@ -11,24 +11,24 @@
 .SUFFIXES: .cpp .M .m .o .h
 
 .cpp.o:
-	@echo -n 'Compiling $@ ...'
+#	@echo -n 'Compiling $@ ...'
 ifdef CFLAGS_NOARCH
-	@$(CC) -MM $(CFLAGS_PRE) $(INCLUDE) $< -o `basename $< .cpp`.d
-	@$(CC) -c $(CFLAGS) $(INCLUDE) $<
+	$(CXX) -MM $(CFLAGS_PRE) $(INCLUDE) $< -o `basename $< .cpp`.d
+	$(CXX) -c $(CFLAGS) $(INCLUDE) $<
 else
-	@$(CC) -MMD -c $(CFLAGS) $(INCLUDE) $<
+	$(CXX) -MMD -c $(CFLAGS) $(INCLUDE) $<
 endif
-	@echo ' OK'
+#	@echo ' OK'
 
 .M.o:
-	@echo -n 'Compiling $@ ...'
+#	@echo -n 'Compiling $@ ...'
 ifdef CFLAGS_NOARCH
-	@$(CC) -MM $(CFLAGS_PRE) $(INCLUDE) $< -o `basename $< .M`.d
-	@$(CC) -c $(CFLAGS) $(INCLUDE) $<
+	$(CC) -MM $(CFLAGS_PRE) $(INCLUDE) $< -o `basename $< .M`.d
+	$(CC) -c $(CFLAGS) $(INCLUDE) $<
 else
-	@$(CC) -MMD -c $(CFLAGS) $(INCLUDE) $<
+	$(CC) -MMD -c $(CFLAGS) $(INCLUDE) $<
 endif
-	@echo ' OK'
+#	@echo ' OK'
 
 .m.o:
 	@echo -n 'Compiling $@ ...'
@@ -43,6 +43,6 @@
 all: $(OBJECTS)
 
 clean:
-	@$(RM) *.o *.s *.ld *.d
+	$(RM) *.o *.s *.ld *.d
 
 -include *.d
