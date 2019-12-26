#
# $Id: Makefile 1285 2007-10-25 11:42:14Z root $
#
PORTNAME=	gscorefonts
PORTVERSION=	0.1
MASTER_SITES+=	ftp://ftp.unix7.pro/
CATEGORIES=	print

MAINTAINER=	onborodin@gmail.com
COMMENT=	Fonts for Aladdin Postscript interpreter version

FONTS_SUBDIR=	share/ghostscript/fonts
FONTMAP_SUBDIR= ${FONTS_SUBDIR}
FONTMAP_NAME=  Fontmap.GS

GNU_CONFIGURE=	yes
USES+=		gmake tar:xz
CONFIGURE_ARGS+=  --enable-install-afm
#CONFIGURE_ARGS+=  --enable-install-pfb
CONFIGURE_ARGS+=  --enable-fonts-dir=${PREFIX}/${FONTS_SUBDIR}
CONFIGURE_ARGS+=  --enable-install-fontmap
CONFIGURE_ARGS+=  --enable-fontmap-dir=${PREFIX}/${FONTMAP_SUBDIR}
CONFIGURE_ARGS+=  --enable-fontmap-filename=${FONTMAP_NAME}

PLIST_SUB+= FONTS_SUBDIR=${FONTS_SUBDIR}
PLIST_SUB+= FONTMAP_SUBDIR=${FONTMAP_SUBDIR}
PLIST_SUB+= FONTMAP_NAME=${FONTMAP_NAME}


do-fetch:
	${CP} ${FILESDIR}/${DISTNAME}${EXTRACT_SUFX} ${DISTDIR}

.include <bsd.port.mk>
#EOF
