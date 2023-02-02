--- ./data/templates/files/file.pl.orig	2022-12-12 21:37:08.520578000 +0200
+++ ./data/templates/files/file.pl	2022-12-17 00:46:42.275540000 +0200
@@ -0,0 +1,45 @@
+#!/usr/bin/env perl
+
+{fileheader}
+
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
+
+package main;
+
+use lib "libs";
+
+use strict;
+use warnings;
+use Hello::More qw(hello);
+use Hello;
+
+hello();
+
+my $hello = Hello->new;
+$hello->print;
