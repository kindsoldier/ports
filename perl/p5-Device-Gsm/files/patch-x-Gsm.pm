--- ./Gsm.pm.orig	2011-03-07 14:33:11.000000000 +0300
+++ ./Gsm.pm	2012-08-08 11:39:17.000000000 +0400
@@ -740,7 +740,9 @@
 
     # Select class of sms (normal or *flash sms*)
     my $class = $opt{'class'} || 'normal';
-    $class = $class eq 'normal' ? '00' : 'F0';
+    #SVI 2011-07-07. Patch for UCS2 encoding:
+    #$class = $class eq 'normal' ? '00' : 'F0';
+    $class = $class eq 'normal' ? '08' : '18';
 
     # TODO Validity period (now fixed to 4 days)
     my $vp = 'AA';
@@ -770,8 +772,10 @@
     $me->log->write('info', 'encoded dest. address is [' . $enc_da . ']');
 
     # Encode text
-    $text = Device::Gsm::Charset::iso8859_to_gsm0338($text);
-    my $enc_msg = Device::Gsm::Pdu::encode_text7($text);
+    #$text = Device::Gsm::Charset::iso8859_to_gsm0338($text);
+    #SVI 2011-07-07 patch for UCS2 encoding
+    #my $enc_msg = Device::Gsm::Pdu::encode_text7($text);
+    my $enc_msg = encode_text_UCS2($text);
     $me->log->write('info',
         'encoded 7bit text (w/length) is [' . $enc_msg . ']');
 
@@ -793,7 +797,7 @@
     # Sending main SMS command ( with length )
     my $len = ((length $pdu) >> 1) - 1;
 
-    #$me->log->write('info', 'AT+CMGS='.$len.' string sent');
+    $me->log->write('info', 'AT+CMGS='.$len.' string sent');
 
     # Select PDU format for messages
     $me->atsend(q[AT+CMGF=0] . Device::Modem::CR);
@@ -922,6 +926,18 @@
 
 }
 
+#SVI add function 2011-07-07
+sub encode_text_UCS2 {
+    return uc(unpack('H*', pack('C b*', length($_[0]))) . unpack('H*',$_[0]));
+#    uc
+#    unpack 'H*',
+#    pack 'C b*',
+#    length $_[0],
+#    join '',
+#    unpack '(b7)*', $_[0];
+}
+
+
 1;
 
 __END__
