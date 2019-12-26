--- ./io/hpmud/musb.c.orig	2010-07-19 05:17:40.000000000 +0300
+++ ./io/hpmud/musb.c	2015-01-04 01:11:42.000000000 +0200
@@ -123,10 +123,16 @@
    {
       ret = usb_control_msg(dev, USB_ENDPOINT_IN, USB_REQ_GET_DESCRIPTOR, (USB_DT_STRING << 8) + index, 
                0x409, tbuf, sizeof(tbuf), LIBUSB_CONTROL_REQ_TIMEOUT);
-      if (ret==0)
+      if (ret==0
+#ifdef __FreeBSD__
+       || ret == -EIO
+#endif
+       )
       {
-         /* This retry is necessary for lj1000 and lj1005. des 12/12/07 */
-         BUG("get_string_descriptor zero result, retrying...");
+         /* This retry is necessary for lj1000 and lj1005. des 12/12/07
+         Also HP Photosmart 42xx seems to suffer transient errors with serial id */
+         BUG("get_string_descriptor error result %d, retrying in 2 secs...", ret);
+         sleep(2);
          continue;
       }
       break;
