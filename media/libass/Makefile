#
# $Id$
#
PORTNAME=	libass
PORTVERSION=	0.12.1
CATEGORIES=	multimedia devel

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Portable ASS/SSA subtitle renderer

LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libfribidi.so:text/libfribidi
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+=	libharfbuzz.so:gnome/libharfbuzz

USE_GITHUB=	yes
GH_ACCOUNT=	${PORTNAME}

USES=		tar:xz
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
PATHFIX_MAKEFILEIN=Makefile.am
INSTALL_TARGET=	install-strip

#ASM_BUILD_DEPENDS=${LOCALBASE}/bin/yasm:devel/yasm
#ASM_CONFIGURE_ENABLE=asm
#ASM_DESC?=	Use optimized ASM routines on x86/amd64

#LIB_DEPENDS+=	libenca.so:converters/enca
CONFIGURE_ARGS+= --disable-enca
CONFIGURE_ARGS+= --enable-harfbuzz
CONFIGURE_ARGS+= --enable-fontconfig

BUID_DEPENDS+=	autoconf:devel/autoconf
BUID_DEPENDS+=	automake:devel/automake


post-patch:
	cd ${WRKSRC} && autoreconf -i

.include <bsd.port.mk>
#EOF
