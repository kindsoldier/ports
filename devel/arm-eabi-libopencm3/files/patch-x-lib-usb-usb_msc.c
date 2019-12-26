--- ./lib/usb/usb_msc.c.orig	2019-04-15 14:41:21.000000000 +0200
+++ ./lib/usb/usb_msc.c	2019-04-21 17:44:41.036884000 +0200
@@ -435,6 +435,13 @@
 	}
 }
 
+
+static const uint8_t _spc3_inquiry_sn_response[20] = {
+	0x00, 0x80, 0x00, 0x10,
+	't','h','i','r','d',' ','p','i','n',' ','1','2','3','4','5','6'
+};
+
+
 static void scsi_inquiry(usbd_mass_storage *ms,
 			 struct usb_msc_trans *trans,
 			 enum trans_event event)
@@ -469,6 +476,12 @@
 				sizeof(_spc3_inquiry_response);
 
 			set_sbc_status_good(ms);
+		} else if (1 == evpd) {
+			trans->bytes_to_write = sizeof(_spc3_inquiry_sn_response);
+			memcpy(trans->msd_buf, _spc3_inquiry_sn_response, 
+						sizeof(_spc3_inquiry_sn_response));
+			trans->csw.csw.dCSWDataResidue = sizeof(_spc3_inquiry_sn_response);
+			set_sbc_status_good(ms);
 		} else {
 			/* TODO: Add VPD 0x83 support */
 			/* TODO: Add VPD 0x00 support */
@@ -476,6 +489,25 @@
 	}
 }
 
+static void scsi_read_format_capacities(usbd_mass_storage *ms, struct usb_msc_trans *trans, enum trans_event event)
+{
+	if (EVENT_CBW_VALID == event) {
+		trans->msd_buf[3] = 0x08;
+		trans->msd_buf[4] = ms->block_count >> 24;
+		trans->msd_buf[5] = 0xff & (ms->block_count >> 16);
+		trans->msd_buf[6] = 0xff & (ms->block_count >> 8);
+		trans->msd_buf[7] = 0xff & ms->block_count;
+
+		trans->msd_buf[8] =  0x02;
+		trans->msd_buf[9] = 0;
+		trans->msd_buf[10] = 0x02;
+		trans->msd_buf[11] = 0;
+		trans->bytes_to_write = 9;
+		set_sbc_status_good(ms);
+	}
+}
+
+
 static void scsi_command(usbd_mass_storage *ms,
 			 struct usb_msc_trans *trans,
 			 enum trans_event event)
@@ -526,6 +558,9 @@
 	case SCSI_WRITE_10:
 		scsi_write_10(ms, trans, event);
 		break;
+	case SCSI_READ_FORMAT_CAPACITIES:
+		scsi_read_format_capacities(ms, trans, event);
+		break;
 	default:
 		set_sbc_status(ms, SBC_SENSE_KEY_ILLEGAL_REQUEST,
 					SBC_ASC_INVALID_COMMAND_OPERATION_CODE,
