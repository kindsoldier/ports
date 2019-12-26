--- backend/usb-libusb.c.orig	2016-06-14 19:45:32.000000000 +0200
+++ backend/usb-libusb.c	2016-09-08 08:05:20.739056000 +0200
@@ -1441,7 +1441,7 @@ open_device(usb_printer_t *printer,	/* I
   * works without the module attached.
   */
 
-  errcode = libusb_kernel_driver_active(printer->handle, printer->iface);
+  errcode = 0;
   if (errcode == 0)
     printer->usblp_attached = 0;
   else if (errcode == 1)
