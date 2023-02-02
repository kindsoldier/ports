--- ./data/templates/files/file.pm.orig	2022-12-17 00:46:59.967600000 +0200
+++ ./data/templates/files/file.pm	2022-12-16 19:09:22.848913000 +0200
@@ -0,0 +1,30 @@
+#
+#  Copyright 2022 Oleg Borodin  <borodin@unix7.org>
+#
+package Hello;
+
+use strict;
+use warnings;
+
+use Exporter qw(import);
+our @EXPORT_OK = qw(hello);
+
+sub hello {
+    print "hello\n";
+}
+
+sub new {
+    my $class = shift;
+    my $self = {
+    };
+    bless $self, $class;
+    return $self;
+}
+
+sub print {
+    my $class = shift;
+    print "hello\n";
+}
+
+1;
+#EOF
