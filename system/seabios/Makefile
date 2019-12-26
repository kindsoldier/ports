#
# $Id$
#
PORTNAME=	seabios
PORTVERSION=	1.9.3
CATEGORIES=	misc
MASTER_SITES=	http://code.coreboot.org/p/seabios/downloads/get/

MAINTAINER=	royger@FreeBSD.org
COMMENT=	Open source implementation of a 16bit X86 BIOS

BROKEN_powerpc64=	Does not build

USES=	gmake python:build


BUILD_DEPENDS+=	gcc:devel/gcc47

CC=	gcc47

MAKE_ARGS+=	AS=gas
MAKE_ARGS+=	LD=gld
MAKE_ARGS+=	OBJCOPY=gobjcopy
MAKE_ARGS+=	OBJDUMP=gobjdump
MAKE_ARGS+=	STRIP=gstrip
MAKE_ARGS+=	CPP=gcpp

MAKE_ARGS+=	HOSTCC="${CC}"
MAKE_ARGS+=	LD32BIT_FLAG="-melf_i386_fbsd"
MAKE_ARGS+=	PYTHON="${PYTHON_CMD}"
#USE_GCC=	yes

PLIST_FILES=	${DATADIR}/bios.bin

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/out/bios.bin ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
#EOF
