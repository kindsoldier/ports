# $FreeBSD: head/x11-fonts/noto-extra/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	noto
PORTVERSION=	1.0.5
CATEGORIES=	x11-fonts
MASTER_SITES=	https://noto-website.storage.googleapis.com/pkgs/
DISTNAME=	Noto-hinted
PKGNAMESUFFIX=	-extra
PKGNAMEPREFIX= xf-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Google Noto Fonts family (Extra)

USES=		zip


RUN_DEPENDS+= mkfontscale:xutil/mkfontscale
RUN_DEPENDS+= mkfontdir:xutil/mkfontdir
RUN_DEPENDS+= fc-cache:x11/libfontconfig
BUILD_DEPENDS+= ${RUN_DEPENDS}


NO_ARCH=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

BASIC_FONTS+=	NotoColorEmoji.ttf
BASIC_FONTS+=	NotoEmoji-Regular.ttf
BASIC_FONTS+=	NotoMono-Regular.ttf
BASIC_FONTS+=	NotoSans-Bold.ttf
BASIC_FONTS+=	NotoSans-BoldItalic.ttf
BASIC_FONTS+=	NotoSans-Italic.ttf
BASIC_FONTS+=	NotoSans-Regular.ttf
BASIC_FONTS+=	NotoSansLinearB-Regular.ttf
BASIC_FONTS+=	NotoSansSymbols-Regular.ttf
BASIC_FONTS+=	NotoSerif-Bold.ttf
BASIC_FONTS+=	NotoSerif-BoldItalic.ttf
BASIC_FONTS+=	NotoSerif-Italic.ttf
BASIC_FONTS+=	NotoSerif-Regular.ttf

FONTSDIR = ${PREFIX}//share/fonts/X11/TTF

post-extract:
	cd ${WRKSRC} && ${RM} ${BASIC_FONTS}

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.ttf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
