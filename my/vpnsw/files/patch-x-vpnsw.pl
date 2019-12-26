--- ./vpnsw.pl.orig	2017-12-24 10:49:00.000000000 +0200
+++ ./vpnsw.pl	2019-09-20 16:31:26.215113000 +0200
@@ -182,6 +182,7 @@
     while (my $str = <HR>) { 
         $out .= $str;
     };
+    close HR;
     return $out;
 }
 
@@ -190,15 +191,9 @@
     my ($self, $name) = @_;
     return undef unless $name;
     my $osname = $Config{osname};
-    if ($osname =~ /bsd/) {
-        my $out = $self->system_comm("sudo service openvpn status $name 2>&1") || '';
-        return 'up' if $out =~ m/is running/;
-        return 'down' if $out =~ m/is not running/;
-    } else {
-        my $out = $self->system_comm("sudo systemctl status openvpn\@$name 2>&1") || '';
-        return 'up' if $out =~ m/Active: active/;
-        return 'down' if $out =~ m/Active: inactive/;
-    }
+    my $out = $self->system_comm("service openvpn status $name 2>&1") || '';
+    return 'up' if $out =~ m/is running/;
+    return 'down' if $out =~ m/is not running/;
     return undef;
 }
 
@@ -208,11 +203,7 @@
     return undef unless $name;
     my $osname = $Config{osname};
     my $out;
-    if ($osname =~ /bsd/) {
-        $out = $self->system_comm("sudo service openvpn start $name 2>&1") || '';
-    } else {
-        $out = $self->system_comm("sudo systemctl start openvpn\@$name 2>&1") || '';
-    }
+    $out = $self->system_comm("service openvpn start $name 2>&1") || '';
     $self->app->log->info("service_start: Start service $name with result $out");
     my $s = $self->service_status($name) || '';
     return 1 if $s eq 'up';
@@ -224,11 +215,7 @@
     return undef unless $name;
     my $osname = $Config{osname};
     my $out;
-    if ($osname =~ /bsd/) {
-        $out = $self->system_comm("sudo service openvpn stop $name 2>&1") || '';
-    } else {
-        $out = $self->system_comm("sudo systemctl stop openvpn\@$name 2>&1") || '';
-    }
+    $out = $self->system_comm("service openvpn stop $name 2>&1") || '';
     $self->app->log->info("service_start: Stop service $name with result $out");
     my $s = $self->service_status($name) || '';
     return 1 if $s eq 'down';
@@ -480,7 +467,7 @@
 $app->config(user => $user || '@APP_USER@');
 $app->config(group => $group || '@APP_GROUP@');
 
-$app->config(confdir => "/etc/openvpn");
+$app->config(confdir => "/usr/local/etc/openvpn");
 
 if (-r $app->config('conffile')) {
     $app->log->debug("Load configuration from ".$app->config('conffile'));
