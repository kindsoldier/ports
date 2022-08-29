--- ./bfd/elfxx-sparc.c.orig	2021-07-08 13:37:19.000000000 +0200
+++ ./bfd/elfxx-sparc.c	2022-08-29 08:25:58.046099000 +0200
@@ -3448,6 +3448,8 @@
 			      bfd_set_error (bfd_error_bad_value);
 			      return false;
 			    }
+			  if (bed->elf_osabi == ELFOSABI_FREEBSD)
+			    outrel.r_addend -= osec->vma;
 			}
 
 		      outrel.r_info = SPARC_ELF_R_INFO (htab, rel, indx,
