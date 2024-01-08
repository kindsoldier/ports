--- ./lib/libdvbv5/dvb-v5.h.orig	2024-01-07 22:46:34.945012000 +0200
+++ ./lib/libdvbv5/dvb-v5.h	2024-01-07 22:53:39.034516000 +0200
@@ -14,17 +14,20 @@
 	char *name;
 };
 extern struct fe_status_name fe_status_name[7];
-const char *fe_code_rate_name[14];
-const char *fe_modulation_name[15];
-const char *fe_transmission_mode_name[10];
-const unsigned fe_bandwidth_name[8];
-const char *fe_guard_interval_name[12];
-const char *fe_hierarchy_name[6];
-const char *fe_voltage_name[4];
-const char *fe_tone_name[3];
-const char *fe_inversion_name[4];
-const char *fe_pilot_name[4];
-const char *fe_rolloff_name[5];
-const char *dvb_v5_name[71];
-const char *delivery_system_name[20];
+
+extern const char *fe_code_rate_name[14];
+extern const char *fe_modulation_name[15];
+extern const char *fe_transmission_mode_name[10];
+extern const unsigned fe_bandwidth_name[8];
+extern const char *fe_guard_interval_name[12];
+extern const char *fe_hierarchy_name[6];
+extern const char *fe_voltage_name[4];
+extern const char *fe_tone_name[3];
+extern const char *fe_inversion_name[4];
+extern const char *fe_pilot_name[4];
+extern const char *fe_rolloff_name[5];
+extern const char *dvb_v5_name[71];
+extern const char *delivery_system_name[20];
+
+
 #endif
