# Created by: Chris Piazza <cpiazza@FreeBSD.org>
# $FreeBSD: head/multimedia/smpeg/Makefile 386312 2015-05-14 10:15:04Z mat $

PORTNAME=	smpeg
PORTVERSION=	0.4.4
CATEGORIES=	multimedia
MASTER_SITES=	ftp://sunsite.auc.dk/pub/os/linux/loki/open-source/smpeg/ GENTOO
PKGNAMEPREFIX=  lib

MAINTAINER=	acm@FreeBSD.org
COMMENT=	Free MPEG1 video player library with sound support

GNU_CONFIGURE=	yes
USES=		gmake libtool
USE_LDCONFIG=	yes
CONFIGURE_ENV+=	GLBASE="${LOCALBASE}"
CONFIGURE_ENV+= CC="${CXX}" 
CONFIGURE_ENV+= REAL_CC="${CC}"
CONFIGURE_ENV+= SDL_CONFIG="${SDL_CONFIG}"
CPPFLAGS+=	-I${LOCALBASE}/include

#If you want to try the opengl/gtk player (which doesn't seem to work)
#comment out the following line.
CONFIGURE_ARGS+= --disable-opengl-player
CONFIGURE_ARGS+= --disable-gtk-player
CONFIGURE_ARGS+= --enable-mmx

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libsmpeg.so.*


.include <bsd.port.mk>
