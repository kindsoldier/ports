# Created by: jseger@FreeBSD.org
# $FreeBSD: head/print/freetype2/Makefile 435690 2017-03-08 15:26:28Z kwm $

PORTNAME=	freetype2
PORTVERSION=	2.10.2 #2.9.1
CATEGORIES=	print
MASTER_SITES+=	http://savannah.nongnu.org/download/freetype/
MASTER_SITES+=	SF/freetype/${PORTNAME}/${PORTVERSION:C/^([0-9]+\.[0-9]+\.[0-9]+).*/\1/}/
MASTER_SITES+=	http://sunsite.cnlab-switch.ch/ftp/mirror/freetype/freetype2/
MASTER_SITES+=	http://www.funet.fi/pub/mirrors/ftp.freetype.org/freetype2/
MASTER_SITES+=	http://ftp.sunet.se/pub/text-processing/freetype/freetype2/
MASTER_SITES+=	ftp://ftp.freetype.org/freetype/freetype2/
DISTNAME=	${PORTNAME:S/2//}-${PORTVERSION}
PKGNAMEPREFIX=  libqt

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Free and portable TrueType font rendering engine

USES=		gmake tar:xz #bzip2
MAKE_ENV=	TOP=""
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--without-harfbuzz
CONFIGURE_WRKSRC= ${WRKSRC}/builds/unix

SUB_FILES=	pkg-message

#CFLAGS+= -DFT_CONFIG_OPTION_SUBPIXEL_RENDERING
#CFLAGS+= -DAF_CONFIG_OPTION_TT_SIZE_METRICS
#CFLAGS+= -DT1_CONFIG_OPTION_OLD_ENGINE

.include <bsd.port.pre.mk>

MAKE_ARGS+= PROJECT=qtfreetype

post-patch:
	cd ${WRKSRC}/builds && ${CP} freetype.mk qtfreetype.mk

post-configure:
	cd ${BUILD_WRKSRC}; ${SETENV} ${MAKE_ENV} \
		${MAKE_CMD} ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} setup


post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/lib*freetype.so.*

.include <bsd.port.post.mk>
#EOF

