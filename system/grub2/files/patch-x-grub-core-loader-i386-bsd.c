--- ./grub-core/loader/i386/bsd.c.orig	2012-06-07 16:06:00.000000000 +0300
+++ ./grub-core/loader/i386/bsd.c	2015-10-14 15:40:30.986308000 +0200
@@ -1309,7 +1309,7 @@
       && phdr->p_type != PT_DYNAMIC)
       return 0;
 
-  paddr = phdr->p_paddr & 0xFFFFFF;
+  paddr = phdr->p_paddr & 0xFFFFFFF;
 
   if (paddr < kern_start)
     kern_start = paddr;
@@ -1333,7 +1333,7 @@
     }
 
   *do_load = 1;
-  phdr->p_paddr &= 0xFFFFFF;
+  phdr->p_paddr &= 0xFFFFFFF;
   paddr = phdr->p_paddr;
 
   *addr = (grub_addr_t) (paddr - kern_start + (grub_uint8_t *) kern_chunk_src);
@@ -1351,7 +1351,7 @@
       && phdr->p_type != PT_DYNAMIC)
     return 0;
 
-  paddr = phdr->p_paddr & 0xffffff;
+  paddr = phdr->p_paddr & 0xfffffff;
 
   if (paddr < kern_start)
     kern_start = paddr;
@@ -1375,7 +1375,7 @@
     }
 
   *do_load = 1;
-  paddr = phdr->p_paddr & 0xffffff;
+  paddr = phdr->p_paddr & 0xfffffff;
 
   *addr = (grub_addr_t) (paddr - kern_start + (grub_uint8_t *) kern_chunk_src);
 
@@ -1394,7 +1394,7 @@
     {
       grub_relocator_chunk_t ch;
 
-      entry = elf->ehdr.ehdr32.e_entry & 0xFFFFFF;
+      entry = elf->ehdr.ehdr32.e_entry & 0xFFFFFFF;
       err = grub_elf32_phdr_iterate (elf, filename,
 				     grub_bsd_elf32_size_hook, NULL);
       if (err)
