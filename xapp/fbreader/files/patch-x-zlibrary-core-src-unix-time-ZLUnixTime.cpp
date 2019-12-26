--- ./zlibrary/core/src/unix/time/ZLUnixTime.cpp.orig	2012-11-30 15:41:25.000000000 +0300
+++ ./zlibrary/core/src/unix/time/ZLUnixTime.cpp	2015-02-12 19:00:40.000000000 +0200
@@ -17,17 +17,16 @@
  * 02110-1301, USA.
  */
 
-#include <sys/timeb.h>
-#include <time.h>
+#include <sys/time.h>
 
 #include <ZLTime.h>
 
 #include "ZLUnixTime.h"
 
 ZLTime ZLUnixTimeManager::currentTime() const {
-	struct timeb timeB;
-	ftime(&timeB);
-	return ZLTime((long)timeB.time, timeB.millitm);
+	struct timeval timeB;
+	gettimeofday(&timeB,NULL);
+	return ZLTime((long)timeB.tv_sec, timeB.tv_usec/1000);
 }
 
 short ZLUnixTimeManager::hoursBySeconds(long seconds) const {
