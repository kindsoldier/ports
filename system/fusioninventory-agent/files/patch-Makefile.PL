--- ./Makefile.PL.orig	2017-12-26 10:52:37.000000000 +0200
+++ ./Makefile.PL	2018-06-28 12:03:33.967944000 +0200
@@ -158,21 +158,21 @@
     # for some reason, initialising variables from the global scope doesn't work
     %variables = (
         PREFIX               => '/usr/local',
-        INSTALLSCRIPT        => '$(PREFIX)/bin',
-        INSTALLSITESCRIPT    => '$(PREFIX)/bin',
-        INSTALLVENDORSCRIPT  => '$(PREFIX)/bin',
+        INSTALLSCRIPT        => '$(PREFIX)/bin',
+        INSTALLSITESCRIPT    => '$(PREFIX)/bin',
+        INSTALLVENDORSCRIPT  => '$(PREFIX)/bin',
         INSTALLLIB           => '$(DATADIR)/lib',
         INSTALLSITELIB       => '$(DATADIR)/lib',
         INSTALLVENDORLIB     => '$(DATADIR)/lib',
-        INSTALLMAN1DIR       => '$(PREFIX)/share/man/man1',
-        INSTALLSITEMAN1DIR   => '$(PREFIX)/share/man/man1',
-        INSTALLVENDORMAN1DIR => '$(PREFIX)/share/man/man1',
-        INSTALLMAN3DIR       => '$(PREFIX)/share/man/man3',
-        INSTALLSITEMAN3DIR   => '$(PREFIX)/share/man/man3',
-        INSTALLVENDORMAN3DIR => '$(PREFIX)/share/man/man3',
+        INSTALLMAN1DIR       => '$(PREFIX)/man/man1',
+        INSTALLSITEMAN1DIR   => '$(PREFIX)/man/man1',
+        INSTALLVENDORMAN1DIR => '$(PREFIX)/man/man1',
+        INSTALLMAN3DIR       => '$(PREFIX)/man/man3',
+        INSTALLSITEMAN3DIR   => '$(PREFIX)/man/man3',
+        INSTALLVENDORMAN3DIR => '$(PREFIX)/man/man3',
         SYSCONFDIR           => '$(PREFIX)/etc/fusioninventory',
         DATADIR              => '$(PREFIX)/share/fusioninventory',
-        LOCALSTATEDIR        => '$(PREFIX)/var/fusioninventory',
+        LOCALSTATEDIR        => '/var/run/fusioninventory',
     );
 
     # allow variables defined on command line to override defaults
