--- ./include/libopencmsis/dispatch/irqhandlers.h.orig	2019-04-15 14:41:21.000000000 +0200
+++ ./include/libopencmsis/dispatch/irqhandlers.h	2019-04-21 17:44:41.032635000 +0200
@@ -20,39 +20,6 @@
 #elif defined(GD32F1X0)
 #	include <libopencmsis/gd32/f1x0/irqhandlers.h>
 
-#elif defined(EFM32TG)
-#	include <libopencmsis/efm32/efm32tg/irqhandlers.h>
-#elif defined(EFM32G)
-#	include <libopencmsis/efm32/efm32g/irqhandlers.h>
-#elif defined(EFM32HG)
-#	include <libopencmsis/efm32/efm32hg/irqhandlers.h>
-#elif defined(EFM32LG)
-#	include <libopencmsis/efm32/efm32lg/irqhandlers.h>
-#elif defined(EFM32GG)
-#	include <libopencmsis/efm32/efm32gg/irqhandlers.h>
-
-#elif defined(LPC13XX)
-#       include <libopencmsis/lpc13xx/irqhandlers.h>
-#elif defined(LPC17XX)
-#       include <libopencmsis/lpc17xx/irqhandlers.h>
-#elif defined(LPC43XX_M4)
-#       include <libopencmsis/lpc43xx/m4/irqhandlers.h>
-#elif defined(LPC43XX_M0)
-#       include <libopencmsis/lpc43xx/m0/irqhandlers.h>
-
-#elif defined(SAM3A)
-#       include <libopencmsis/sam/3a/irqhandlers.h>
-#elif defined(SAM3N)
-#       include <libopencmsis/sam/3n/irqhandlers.h>
-#elif defined(SAM3S)
-#       include <libopencmsis/sam/3s/irqhandlers.h>
-#elif defined(SAM3U)
-#       include <libopencmsis/sam/3u/irqhandlers.h>
-#elif defined(SAM3X)
-#       include <libopencmsis/sam/3x/irqhandlers.h>
-#elif defined(SAMD)
-#       include <libopencmsis/sam/d/irqhandlers.h>
-
 #elif defined(LM3S) || defined(LM4F)
 /* Yes, we use the same interrupt table for both LM3S and LM4F */
 #	include <libopencmsis/lm3s/irqhandlers.h>
