#
# $Id$
#
PORTNAME=	ms-corefonts
PORTVERSION=	1.3
CATEGORIES=	x11-fonts
MASTER_SITES+=	SF/corefonts/the%20fonts/final:group1
MASTER_SITES+=	ftp://ftp.botik.ru/rented/znamensk/distributions/ftp.vsu.ru/pub/tex/font-packs/mscore/:group1
MASTER_SITES+=	http://download.microsoft.com/download/ie6sp1/finrel/6_sp1/W98NT42KMeXP/EN-US/:group2
PKGNAMEPREFIX=	xf-

DISTFILES+=	andale32.exe:group1
DISTFILES+=	arial32.exe:group1
DISTFILES+=	arialb32.exe:group1
DISTFILES+=	comic32.exe:group1
DISTFILES+=	courie32.exe:group1
DISTFILES+=	georgi32.exe:group1
DISTFILES+=	impact32.exe:group1
DISTFILES+=	times32.exe:group1
DISTFILES+=	trebuc32.exe:group1
DISTFILES+=	verdan32.exe:group1
DISTFILES+=	webdin32.exe:group1
#DISTFILES+=	ielpkth.cab:group2

DIST_SUBDIR=	${PORTNAME}

RUN_DEPENDS+= mkfontscale:xutil/mkfontscale
RUN_DEPENDS+= mkfontdir:xutil/mkfontdir
RUN_DEPENDS+= fc-cache:x11/libfontconfig
BUILD_DEPENDS+= ${RUN_DEPENDS}


MAINTAINER=	onborodin@gmail.com
COMMENT=	TrueType core fonts for the Web

EXTRACT_DEPENDS=	cabextract:arch/cabextract
#BUILD_DEPENDS=	fc-cache:x11-fonts/fontconfig
#RUN_DEPENDS=	fc-cache:x11-fonts/fontconfig

NO_BUILD=	yes
RESTRICTED=	Restrictive license - cannot sell for profit or distribute in modified form

EXTRACT_CMD=		${LOCALBASE}/bin/cabextract
EXTRACT_BEFORE_ARGS=	-qLF '*.ttf' -d ${WRKSRC}
EXTRACT_AFTER_ARGS=

#PREFIX=	${X11BASE}

FONTSDIR=	${PREFIX}/share/fonts/X11/TTF

PLIST_SUB+=	FONTSDIR="${FONTSDIR:S|${PREFIX}/||}"

#SUB_LIST=	FONTSDIR="${FONTSDIR}"
#SUB_FILES=	pkg-message

FONTS_SCALEFILE= ${FILESDIR}/fonts.scale


#.SILENT:

#post-extract:
#	${EXTRACT_CMD} -qLF '*.txt' -d ${WRKSRC} ${DISTDIR}/webdin32.exe

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.ttf ${STAGEDIR}${FONTSDIR}
#	${INSTALL_DATA} ${FONTS_SCALEFILE} ${FONTSDIR}/fonts.dir
#	${INSTALL_DATA} ${FONTS_SCALEFILE} ${FONTSDIR}/fonts.scale

#post-install:
#	${LOCALBASE}/bin/fc-cache -f -v ${STAGEDIR}${FONTSDIR}
#	${LOCALBASE}/bin/mkfontdir ${STAGEDIR}${FONTSDIR}
#	${LOCALBASE}/bin/mkfontscale ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
#EOF
