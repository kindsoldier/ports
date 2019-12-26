# Created by: Andriy Gapon <avg@icyb.net.ua>
# $FreeBSD: head/sysutils/memtest86+/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	memtest86+
PORTVERSION=	5.01
CATEGORIES=	sysutils
MASTER_SITES=	http://www.memtest.org/download/${PORTVERSION}/

MAINTAINER=	avg@icyb.net.ua
COMMENT=	Stand-alone memory test for x86 architecture computers

ONLY_FOR_ARCHS=	i386 amd64

USES=	gmake
ALL_TARGET=	all iso

#USE_GCC=	yes #4.8
CC= gcc48
LD= gld
AS= gas

BOOT_DIR?=	/boot/opt

PLIST_FILES=	${BOOT_DIR}/memtest86+
PLIST_DIRS=	${BOOT_DIR}

.include <bsd.port.options.mk>

post-patch:
	${REINPLACE_CMD} -e 's|gcc|${CC}|' ${WRKSRC}/Makefile
#	${REINPLACE_CMD} -e 's|SERIAL_CONSOLE_DEFAULT 0|SERIAL_CONSOLE_DEFAULT 1|' ${WRKSRC}/config.h
#	${REINPLACE_CMD} -e 's|9600|115200|' ${WRKSRC}/config.h

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/mt${PORTVERSION:C/\.//}.iso ${STAGEDIR}${DATADIR}
	${MKDIR} ${STAGEDIR}${BOOT_DIR}
	${INSTALL_KLD} ${WRKSRC}/memtest ${STAGEDIR}${BOOT_DIR}/memtest86+

.include <bsd.port.mk>
#EOF
