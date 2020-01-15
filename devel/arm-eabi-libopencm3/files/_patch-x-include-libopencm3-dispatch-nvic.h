--- ./include/libopencm3/dispatch/nvic.h.orig	2019-04-15 14:41:21.000000000 +0200
+++ ./include/libopencm3/dispatch/nvic.h	2019-04-21 17:44:41.028540000 +0200
@@ -21,58 +21,6 @@
 #elif defined(STM32L4)
 #	include <libopencm3/stm32/l4/nvic.h>
 
-#elif defined(GD32F1X0)
-#	include <libopencm3/gd32/f1x0/nvic.h>
-
-#elif defined(EFM32TG)
-#	include <libopencm3/efm32/tg/nvic.h>
-#elif defined(EFM32G)
-#	include <libopencm3/efm32/g/nvic.h>
-#elif defined(EFM32LG)
-#	include <libopencm3/efm32/lg/nvic.h>
-#elif defined(EFM32GG)
-#	include <libopencm3/efm32/gg/nvic.h>
-#elif defined(EFM32HG)
-#	include <libopencm3/efm32/hg/nvic.h>
-#elif defined(EFM32WG)
-#	include <libopencm3/efm32/wg/nvic.h>
-#elif defined(EZR32WG)
-#	include <libopencm3/efm32/ezr32wg/nvic.h>
-
-#elif defined(LPC13XX)
-#	include <libopencm3/lpc13xx/nvic.h>
-#elif defined(LPC17XX)
-#	include <libopencm3/lpc17xx/nvic.h>
-#elif defined(LPC43XX_M4)
-#	include <libopencm3/lpc43xx/m4/nvic.h>
-#elif defined(LPC43XX_M0)
-#	include <libopencm3/lpc43xx/m0/nvic.h>
-
-#elif defined(SAM3A)
-#	include <libopencm3/sam/3a/nvic.h>
-#elif defined(SAM3N)
-#	include <libopencm3/sam/3n/nvic.h>
-#elif defined(SAM3S)
-#	include <libopencm3/sam/3s/nvic.h>
-#elif defined(SAM3U)
-#	include <libopencm3/sam/3u/nvic.h>
-#elif defined(SAM3X)
-#	include <libopencm3/sam/3x/nvic.h>
-#elif defined(SAM4L)
-#	include <libopencm3/sam/4l/nvic.h>
-#elif defined(SAMD)
-#	include <libopencm3/sam/d/nvic.h>
-
-#elif defined(LM3S) || defined(LM4F)
-/* Yes, we use the same interrupt table for both LM3S and LM4F */
-#	include <libopencm3/lm3s/nvic.h>
-
-#elif defined(MSP432E4)
-#   include <libopencm3/msp432/e4/nvic.h>
-
-#elif defined(VF6XX)
-#	include <libopencm3/vf6xx/nvic.h>
-
 #else
 #	warning"no interrupts defined for chipset; NVIC_IRQ_COUNT = 0"
 
