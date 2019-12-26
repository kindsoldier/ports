--- ./makefiles/gtksubdir.mk.orig	2012-11-30 15:41:25.000000000 +0300
+++ ./makefiles/gtksubdir.mk	2015-02-12 19:00:40.000000000 +0200
@@ -11,18 +11,18 @@
 .SUFFIXES: .c .cpp .o .h
 
 .c.o:
-	@echo -n 'Compiling $@ ...'
-	@$(CC) -MMD -c $(CFLAGS) $(INCLUDE) $<
-	@echo ' OK'
+#	echo -n 'Compiling $@ ...'
+	$(CC) -MMD -c $(CFLAGS) $(INCLUDE) $<
+#	echo ' OK'
 
 .cpp.o:
-	@echo -n 'Compiling $@ ...'
-	@$(CC) -MMD -c $(CFLAGS) $(INCLUDE) $<
-	@echo ' OK'
+#	echo -n 'Compiling $@ ...'
+	$(CXX) -MMD -c $(CFLAGS) $(INCLUDE) $<
+#	echo ' OK'
 
 all: $(OBJECTS)
 
 clean:
-	@$(RM) *.o *.d
+	$(RM) *.o *.d
 
 -include *.d
