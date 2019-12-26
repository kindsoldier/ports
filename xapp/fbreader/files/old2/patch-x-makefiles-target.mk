--- ./makefiles/target.mk.orig	2014-01-05 21:16:20.000000000 +0300
+++ ./makefiles/target.mk	2014-01-05 23:29:19.000000000 +0300
@@ -1,4 +1,29 @@
 TARGET_ARCH = desktop
-UI_TYPE = gtk
-#TARGET_STATUS = debug
+UI_TYPE = qt4
+TARGET_STATUS = release
 ZLSHARED = no
+
+
+#BSD_INSTALL_DATA=install  -o root -g wheel -m 444 
+#BSD_INSTALL_LIB=install  -s -o root -g wheel -m 444 
+#BSD_INSTALL_MAN=install  -o root -g wheel -m 444
+#BSD_INSTALL_SCRIPT=install  -o root -g wheel -m 555 
+#CFLAGS=-fomit-frame-pointer -O2 -pipe -march=pentium4 -I/usr/local/include -I/usr/local/include/Qt4 -fno-strict-aliasing CPP=clang-cpp CPPFLAGS= LDFLAGS=-L /usr/local/lib CXX=clang++ CXXFLAGS=-fomit-frame-pointer -O2 -pipe -march=pentium4 -I/usr/local/include -I/usr/local/include/Qt4 -fno-strict-aliasing -O2 -pipe 
+#MANPREFIX=/usr/local BSD_INSTALL_PROGRAM=install  -s -o root -g wheel -m 555 
+#MOTIFLIB=-L/usr/local/lib -lXm -lXp
+#NO_LINT=YES
+#ROOTDIR=/data/ports9/applications/fbreader099/work/fbreader-0.99.4
+#TARGET_STATUS=
+
+#CC=clang
+#INSTALLDIR=/usr/local
+#LD=clang++
+#LDFLAGS=/usr/local/lib
+#LIBDIR=/usr/lib
+#LIBDIR=/usr/local/lib
+#LOCALBASE=/usr/local
+#PREFIX=/usr/local
+#SHELL=/bin/sh
+#TARGET_ARCH=desktop
+#UI_TYPE=qt4
+
