--- ./makefiles/qsubdir.mk.orig	2012-11-30 15:41:25.000000000 +0300
+++ ./makefiles/qsubdir.mk	2014-01-05 21:32:57.000000000 +0300
@@ -11,18 +11,18 @@
 .SUFFIXES: .cpp .moc.cpp .moc.o .o .h
 
 .cpp.o:
-	@echo -n 'Compiling $@ ...'
-	@$(CC) -MMD -c $(CFLAGS) $(INCLUDE) $<
-	@echo ' OK'
+#	@echo -n 'Compiling $@ ...'
+	$(CXX) -MMD -c $(CFLAGS) $(INCLUDE) $<
+#	@echo ' OK'
 
 .h.moc.cpp:
-	@echo -n 'Generating $@ ...'
-	@$(MOC) $< -o $@
-	@echo ' OK'
+#	@echo -n 'Generating $@ ...'
+	$(MOC) $< -o $@
+#	@echo ' OK'
 
 all: $(OBJECTS) $(OBJMOC)
 
 clean:
-	@$(RM) *.o *.moc.cpp *.d
+	$(RM) *.o *.moc.cpp *.d
 
 -include *.d
