--- ./src/decoder/dec_mac.cpp.orig	2015-04-19 14:49:49.000000000 +0200
+++ ./src/decoder/dec_mac.cpp	2015-11-18 08:01:50.542248000 +0200
@@ -174,7 +174,7 @@
 
 
 	int ret = 0;
-        wchar_t * pUTF16 = CAPECharacterHelper::GetUTF16FromANSI(filename);
+        wchar_t * pUTF16 = GetUTF16FromANSI(filename);
         pdecompress = CreateIAPEDecompress(pUTF16, &ret);
         free(pUTF16);
 
