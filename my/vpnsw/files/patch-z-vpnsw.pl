--- ./vpnsw.pl.orig	2019-10-20 18:35:25.847121000 +0200
+++ ./vpnsw.pl	2019-10-20 19:02:50.358951000 +0200
@@ -139,7 +139,7 @@
         #Common Name,Real Address,Bytes Received,Bytes Sent,Connected Since
         #c_MSK__Moscow__Personal__Kalinina,176.193.136.206:49675,1731236,1985610,Wed Oct 25 10:30:54 2017 
         my ($cn, $ipaddr, $recv, $sent, $total, $date) = $row 
-            =~ /([\w\-]{1,64}),([\/a-z0-9.]{1,64}):([0-9]{1,16}),([0-9]{1,16}),([0-9]{1,16}),([\w\: ]{1,20})/;
+            =~ /([ \w\-]{1,64}),([\/a-z0-9.]{1,64}):([0-9]{1,16}),([0-9]{1,16}),([0-9]{1,16}),([\w\: ]{1,20})/;
         $hash{$cn}{'ipaddr'} = $ipaddr if $cn;
         $hash{$cn}{'recv'} = $recv if $cn;
         $hash{$cn}{'sent'} = $sent if $cn;
@@ -149,7 +149,8 @@
         #Virtual Address,Common Name,Real Address,Last Ref
         #10.170.160.27,c_MSK__MSK__Personal__URS-Belousova,188.164.141.20:54440,Wed Oct 25 20:53:51 2017
         my ($local, $cn2, $ipaddr2, $some, $last) = $row 
-            =~ /^([0-9.]{1,64}),([\w\-]{1,64}),([0-9.]{1,64}):([0-9]{1,16}),([\w\: ]{1,20})/;
+            =~ /^([0-9.]{1,64}),([ \w\-_]{1,64}),([0-9.]{1,64}):([0-9]{1,16}),([\w\: ]{1,20})/;
+
         $hash{$cn2}{'local'} = $local if $local;
         $hash{$cn2}{'last'} = $last if $local;
 
