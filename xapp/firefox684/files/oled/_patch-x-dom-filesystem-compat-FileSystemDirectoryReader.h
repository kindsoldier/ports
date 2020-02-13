--- ./dom/filesystem/compat/FileSystemDirectoryReader.h.orig	2017-05-13 12:16:08.917129000 +0200
+++ ./dom/filesystem/compat/FileSystemDirectoryReader.h	2017-05-13 12:15:55.586693000 +0200
@@ -10,6 +10,7 @@
 #include "mozilla/Attributes.h"
 #include "mozilla/ErrorResult.h"
 #include "mozilla/dom/BindingDeclarations.h"
+#include "mozilla/dom/FileSystemDirectoryEntry.h"
 #include "nsCycleCollectionParticipant.h"
 #include "nsWrapperCache.h"
 
