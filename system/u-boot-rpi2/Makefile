#
# $Id$
#
PORTNAME=	u-boot
PORTVERSION=	2015.04
CATEGORIES=	sysutils
MASTER_SITES=	ftp://ftp.denx.de/pub/u-boot/ LOCAL/loos/rpi2-boot-files:bootfiles
PKGNAMESUFFIX=	-rpi2
DISTFILES+=	u-boot-${PORTVERSION}.tar.bz2
DISTFILES+=	rpi2-boot-files-2015.04.tar.bz2:bootfiles

MAINTAINER=	loos@FreeBSD.org
COMMENT=	Cross-build U-Boot loader for Raspberry Pi 2

#BUILD_DEPENDS=	arm-eabi-gcc:devel/gcc-arm-eabi

NO_ARCH=	yes

WRKSRC=		${WRKDIR}/u-boot-${DISTVERSION}
USES=		gmake tar:bzip2
SSP_UNSAFE=	yes

WRK_BOOTFILES=	${WRKDIR}/rpi2-boot-files

U_BOOT_DIR=	share/u-boot/${PORTNAME}${PKGNAMESUFFIX}
PLIST_FILES+= ${U_BOOT_DIR}/u-boot.bin
PLIST_FILES+= ${U_BOOT_DIR}/README
PLIST_FILES+= ${U_BOOT_DIR}/bootcode.bin
PLIST_FILES+= ${U_BOOT_DIR}/fixup.dat
PLIST_FILES+= ${U_BOOT_DIR}/fixup_cd.dat
PLIST_FILES+= ${U_BOOT_DIR}/fixup_x.dat
PLIST_FILES+= ${U_BOOT_DIR}/start.elf
PLIST_FILES+= ${U_BOOT_DIR}/start_cd.elf
PLIST_FILES+= ${U_BOOT_DIR}/start_x.elf
PLIST_FILES+= ${U_BOOT_DIR}/config.txt
PLIST_FILES+= ${U_BOOT_DIR}/LICENCE.broadcom

MAKE_ARGS+= ARCH=arm CROSS_COMPILE=arm-eabi-

do-configure:
	cd ${WRKSRC}; ${GMAKE} rpi_2_defconfig

# The output of the u-boot build process is u-boot.bin.  Older firmware
# versions require a standard header, but the recent versions (our case)
# are capable of booting u-boot.bin directly.  Also copy the entire
# contents of the bootfiles distribution (these are proprietary binary
# files required to boot).
IMGFILE=${STAGEDIR}/${PREFIX}/${U_BOOT_DIR}/u-boot.img
do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/${U_BOOT_DIR}
	${CP} ${WRKSRC}/u-boot.bin ${STAGEDIR}/${PREFIX}/${U_BOOT_DIR}/
	${CP} ${DESCR} ${STAGEDIR}/${PREFIX}/${U_BOOT_DIR}/README
	${CP} ${WRK_BOOTFILES}/* ${STAGEDIR}/${PREFIX}/${U_BOOT_DIR}/

.include <bsd.port.mk>
#EOF
