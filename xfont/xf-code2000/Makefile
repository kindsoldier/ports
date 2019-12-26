# Created by: Thierry Thomas <thierry@pompo.net>
# $FreeBSD: head/x11-fonts/code2000/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	code2000
PORTVERSION=	1.171
CATEGORIES=	x11-fonts
MASTER_SITES=	LOCAL/thierry/${DIST_SUBDIR}
DISTFILES=	${PORTNAME:tu}${EXTRACT_SUFX:tu}
DIST_SUBDIR=	${PORTNAME}-${PORTVERSION}
PKGNAMEPREFIX=   xf-

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Shareware demo Unicode TrueType font

RUN_DEPENDS+= mkfontscale:xutil/mkfontscale
RUN_DEPENDS+= mkfontdir:xutil/mkfontdir
RUN_DEPENDS+= fc-cache:x11/libfontconfig
BUILD_DEPENDS+= ${RUN_DEPENDS}


USES=		zip
SUB_FILES=	pkg-message
NO_BUILD=	yes
NO_ARCH=	yes

post-extract:
	${MKDIR} ${WRKSRC}
#	${MV} ${WRKDIR}/CODE2000.TTF ${WRKSRC}/${FONTNAME}.ttf
#	${MV} ${WRKDIR}/CODE2000.HTM ${WRKSRC}/${FONTNAME}.html

FONTSDIR = ${PREFIX}//share/fonts/X11/TTF

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKDIR}/CODE2000.TTF ${STAGEDIR}${FONTSDIR}/code2000.ttf

.include <bsd.port.mk>
