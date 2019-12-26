# Created by: Ashish SHUKLA <wahjava@gmail.com>
# $FreeBSD: head/sysutils/squashfs-tools/Makefile 417667 2016-06-27 16:30:58Z ashish $

PORTNAME=	squashfs-tools
PORTVERSION=	4.3
CATEGORIES=	sysutils
MASTER_SITES=	SF/squashfs/squashfs/${DISTNAME}/
DISTNAME=	squashfs${PORTVERSION}
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	Set of tools to manipulate squashfs images

PLIST_FILES=	bin/mksquashfs bin/unsquashfs

#OPTIONS_DEFINE=	XZ LZO LZMA DOCS
#OPTIONS_DEFAULT=	XZ LZO LZMA
#XZ_DESC=	Build with XZ support
#LZO_DESC=	Build with LZO support
#LZMA_DESC=	Build with LZMA support

WRKSRC=		${WRKDIR}/${DISTNAME}/squashfs-tools
USE_CSTD=	gnu89
USES=		alias  gmake

.include <bsd.port.options.mk>

MAKE_ARGS+=	XZ_SUPPORT=1
MAKE_ARGS+=	LZO_SUPPORT=1 LZO_DIR=${LOCALBASE}

LIB_DEPENDS+=	liblzo2.so:arch/liblzo2

MASTER_SITES+=	SF/sevenzip/LZMA%20SDK/:lzma

DISTFILES+=	lzma922.tar.bz2:lzma
MAKE_ARGS+=	LZMA_SUPPORT=1 LZMA_DIR=${WRKDIR} EXTRA_CFLAGS="-D_7ZIP_ST"

post-patch:
	${REINPLACE_CMD} -e "s|^\(XATTR\)|# \1|g" \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
