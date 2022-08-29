--- ./bfd/elfnn-aarch64.c.orig	2021-07-08 13:37:19.000000000 +0200
+++ ./bfd/elfnn-aarch64.c	2022-08-29 08:25:58.042625000 +0200
@@ -4851,7 +4851,9 @@
       off = h->got.offset;
       BFD_ASSERT (off != (bfd_vma) - 1);
       if (!WILL_CALL_FINISH_DYNAMIC_SYMBOL (dyn, bfd_link_pic (info), h)
-	  || (bfd_link_pic (info)
+	  || ((bfd_link_pic (info)
+	      || (!bfd_link_relocatable (info)
+		  && (info->export_dynamic || info->dynamic)))
 	      && SYMBOL_REFERENCES_LOCAL (info, h))
 	  || (ELF_ST_VISIBILITY (h->other)
 	      && h->root.type == bfd_link_hash_undefweak))
@@ -9428,6 +9430,14 @@
 	  rela.r_addend = (h->root.u.def.value
 			   + h->root.u.def.section->output_section->vma
 			   + h->root.u.def.section->output_offset);
+	}
+      else if (!bfd_link_relocatable (info)
+	    && (info->export_dynamic || info->dynamic)
+	    && SYMBOL_REFERENCES_LOCAL (info, h))
+	{
+	  BFD_ASSERT ((h->got.offset & 1) != 0);
+	  rela.r_info = ELFNN_R_INFO (h->dynindx, AARCH64_R (GLOB_DAT));
+	  rela.r_addend = 0;
 	}
       else
 	{
