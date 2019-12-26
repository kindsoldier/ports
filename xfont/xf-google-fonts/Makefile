# $FreeBSD: head/x11-fonts/google-fonts/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	google-fonts
DISTVERSION=	20190118
CATEGORIES=	x11-fonts
PKGNAMEPREFIX=  xf-

MAINTAINER=	dg@syrec.org
COMMENT=	Collection of freely redistributable TrueType fonts from Google

RUN_DEPENDS+= mkfontscale:xutil/mkfontscale
RUN_DEPENDS+= mkfontdir:xutil/mkfontdir
RUN_DEPENDS+= fc-cache:x11/libfontconfig
BUILD_DEPENDS+= ${RUN_DEPENDS}


NO_ARCH=	yes
NO_BUILD=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	google
GH_PROJECT=	fonts
GH_TAGNAME=	1ebe5dc

SUB_FILES=	pkg-message

FONTSDIR = ${PREFIX}/share/fonts/X11/TTF

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	${FIND} ${WRKSRC} -name '*.ttf' |${XARGS} -J@ ${INSTALL_DATA} @ ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
