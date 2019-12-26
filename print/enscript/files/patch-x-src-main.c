--- ./src/main.c.orig	2010-06-02 01:19:18.000000000 +0300
+++ ./src/main.c	2010-08-31 14:21:37.000000000 +0300
@@ -239,7 +239,7 @@
  * Select font to be used to print the standard simple header.
  */
 char *HFname = "Courier-Bold";
-FontPoint HFpt = {10.0, 10.0};
+FontPoint HFpt = {11.0, 11.0};
 
 /*
  * -g, --print-anyway
@@ -811,6 +811,8 @@
   {{"vms", NULL, NULL},			ENC_VMS, 		'\n', 8},
   {{"hp8", NULL, NULL},			ENC_HP8,		'\n', 8},
   {{"koi8", NULL, NULL},		ENC_KOI8,		'\n', 8},
+  {{"koi8-r", NULL, NULL},		ENC_KOI8,		'\n', 8},
+  {{"koi8-ru", NULL, NULL},		ENC_KOI8,		'\n', 8},
   {{"ps", "PS", NULL},			ENC_PS, 		'\n', 8},
   {{"pslatin1", "ISOLatin1Encoding", NULL},	ENC_ISO_8859_1,	'\n', 8},
 
@@ -980,8 +982,9 @@
 	    strerror (errno)));
 
   /* Defaults for some options. */
+  afm_path 		= xstrdup (LIBRARY "/afm");
   media_name 		= xstrdup ("A4");
-  encoding_name		= xstrdup ("88591");
+  encoding_name		= xstrdup ("koi8");
   npf_name		= xstrdup ("octal");
   page_label_format	= xstrdup ("short");
   ul_style_str		= xstrdup ("outline");
@@ -1043,7 +1046,7 @@
    */
 
   /* Global config. */
-#define CFG_FILE_NAME "enscript.cfg"
+#define CFG_FILE_NAME "enscript.conf"
   if (!read_config (SYSCONFDIR, CFG_FILE_NAME))
     {
       int saved_errno = errno;
@@ -1064,16 +1067,19 @@
 	    {
 	      /* Maybe we are not installed yet, let's try `../lib'
                  and `../../lib'. */
-	      if (!read_config ("../lib", CFG_FILE_NAME)
-		  && !read_config ("../../lib", CFG_FILE_NAME))
+	      if (!read_config ("../lib", CFG_FILE_NAME)
+		  && !read_config ("../../lib", CFG_FILE_NAME))
 		{
 		  /* No luck, report error from the original config file. */
 		  ERROR ((stderr, _("couldn't read config file \"%s/%s\": %s"),
 			  enscript_library, CFG_FILE_NAME,
 			  strerror (saved_errno)));
+		  ERROR ((stderr, _("\tin %s"), SYSCONFDIR));
+		  ERROR ((stderr, _("couldn't read config file \"%s/%s\": %s"),
+			  enscript_library, "enscript.conf",
+			  strerror (saved_errno)));
 		  ERROR ((stderr,
 			  _("I did also try the following directories:")));
-		  ERROR ((stderr, _("\t%s"), SYSCONFDIR));
 		  ERROR ((stderr, _("\t%s"), enscript_library));
 		  ERROR ((stderr, _("\t%s"), buffer_ptr (&buffer)));
 		  ERROR ((stderr, _("\t../lib")));
@@ -1166,7 +1172,12 @@
 
   /* Default font for landscape, 2 column printing is Courier 7. */
   if (!user_body_font_defined && landscape && num_columns > 1)
-    Fpt.w = Fpt.h = 7.0;
+    { Fpt.w = Fpt.h = 7.0; } 
+    else if (!user_body_font_defined && !landscape && num_columns > 1) 
+    { Fpt.w = Fpt.h = 5.0; }
+    else if (!user_body_font_defined && num_columns == 1) 
+    { Fpt.w = Fpt.h = 11.0; };
+
 
   /* Cache for font AFM information. */
   afm_cache = strhash_init ();
