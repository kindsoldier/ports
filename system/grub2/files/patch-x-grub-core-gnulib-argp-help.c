--- ./grub-core/gnulib/argp-help.c.orig	2012-02-26 21:05:11.000000000 +0300
+++ ./grub-core/gnulib/argp-help.c	2016-09-20 12:15:06.866640000 +0200
@@ -463,8 +463,8 @@
       hol->short_options = malloc (num_short_options + 1);
 
       assert (hol->entries && hol->short_options);
-      if (SIZE_MAX <= UINT_MAX)
-        assert (hol->num_entries <= SIZE_MAX / sizeof (struct hol_entry));
+//      if (SIZE_MAX <= UINT_MAX)
+//        assert (hol->num_entries <= SIZE_MAX / sizeof (struct hol_entry));
 
       /* Fill in the entries.  */
       so = hol->short_options;
@@ -877,8 +877,8 @@
             malloc (hol_so_len + strlen (more->short_options) + 1);
 
           assert (entries && short_options);
-          if (SIZE_MAX <= UINT_MAX)
-            assert (num_entries <= SIZE_MAX / sizeof (struct hol_entry));
+//          if (SIZE_MAX <= UINT_MAX)
+//            assert (num_entries <= SIZE_MAX / sizeof (struct hol_entry));
 
           __mempcpy (__mempcpy (entries, hol->entries,
                                 hol->num_entries * sizeof (struct hol_entry)),
