#
# $Id$
#
PORTNAME=	u-boot
PORTVERSION=	20160321
CATEGORIES=	sylvain
VALID_CATEGORIES+=sylvain
MASTER_SITES=	http://git.denx.de/ \
		LOCAL/loos/rpi2-boot-files:bootfiles
PKGNAMEPREFIX=	sylvain-
PKGNAMESUFFIX=	-rpi2
DISTFILES=	"?p=u-boot.git;a=snapshot;h=a119357c43a4d4bd0e488a701255bcfea8f8bf6c;sf=tgz" \
		rpi2-boot-files-2015.04.tar.bz2:bootfiles

MAINTAINER=	loos@FreeBSD.org
COMMENT=	Cross-build U-Boot loader for Raspberry Pi 2


BUILD_DEPENDS=	arm-eabi-gcc:devel/gcc-arm-eabi

NO_ARCH=	yes

WRKSRC=		${WRKDIR}/u-boot-a119357
USES=		gmake tar:bzip2
SSP_UNSAFE=	yes

WRK_BOOTFILES=	${WRKDIR}/rpi2-boot-files

U_BOOT_DIR=	share/u-boot/${PORTNAME}${PKGNAMESUFFIX}
#PLIST_FILES+= ${U_BOOT_DIR}/u-boot.bin
#PLIST_FILES+= ${U_BOOT_DIR}/README
#PLIST_FILES+= ${U_BOOT_DIR}/bootcode.bin
#PLIST_FILES+= ${U_BOOT_DIR}/fixup.dat
#PLIST_FILES+= ${U_BOOT_DIR}/fixup_cd.dat
#PLIST_FILES+= ${U_BOOT_DIR}/fixup_x.dat
#PLIST_FILES+= ${U_BOOT_DIR}/start.elf
#PLIST_FILES+= ${U_BOOT_DIR}/start_cd.elf
#PLIST_FILES+= ${U_BOOT_DIR}/start_x.elf
#PLIST_FILES+= ${U_BOOT_DIR}/config.txt
#PLIST_FILES+= ${U_BOOT_DIR}/LICENCE.broadcom

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
