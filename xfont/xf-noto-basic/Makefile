# $FreeBSD: head/x11-fonts/noto-basic/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	noto
PORTVERSION=	1.0.5
CATEGORIES=	x11-fonts
MASTER_SITES=	https://noto-website.storage.googleapis.com/pkgs/ \
		https://github.com/googlei18n/noto-emoji/raw/master/fonts/:emoji
PKGNAMESUFFIX=	-basic
DISTFILES=	Noto-hinted${EXTRACT_SUFX} \
		NotoColorEmoji.ttf:emoji \
		NotoEmoji-Regular.ttf:emoji
EXTRACT_ONLY=	Noto-hinted${EXTRACT_SUFX}
PKGNAMEPREFIX= xf-

RUN_DEPENDS+= mkfontscale:xutil/mkfontscale
RUN_DEPENDS+= mkfontdir:xutil/mkfontdir
RUN_DEPENDS+= fc-cache:x11/libfontconfig
BUILD_DEPENDS+= ${RUN_DEPENDS}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Google Noto Fonts family (Basic and Emoji)

USES=		zip

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

post-extract:
	${CP} ${DISTDIR}/NotoColorEmoji.ttf ${DISTDIR}/NotoEmoji-Regular.ttf ${WRKSRC}

FONTSDIR = ${PREFIX}//share/fonts/X11/TTF

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${BASIC_FONTS} ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
