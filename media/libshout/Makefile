#
# $Id$
#
PORTNAME=	libshout
PORTVERSION=	2.3.1
CATEGORIES=	audio net
MASTER_SITES=	http://downloads.xiph.org/releases/libshout/
#DISTNAME=	libshout-${PORTVERSION}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Routines for connecting and transmitting data to the icecast server

LIB_DEPENDS+=	libogg.so:media/libogg
LIB_DEPENDS+=	libspeex.so:media/libspeex
LIB_DEPENDS+=	libtheora.so:media/libtheora
LIB_DEPENDS+=	libvorbis.so:media/libvorbis


CFLAGS+=	${PTHREAD_CFLAGS} -I${LOCALBASE}/include
LDFLAGS+=	${PTHREAD_LIBS} -L${LOCALBASE}/lib
INSTALLS_SHLIB=	yes
USES+=		gmake
GNU_CONFIGURE=	yes
CONFLICTS=	libshout-1.*

pre-configure:
	${REINPLACE_CMD} -e 's|-ffast-math||g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|^Requires: |Requires.private: |' ${WRKSRC}/shout.pc.in
	${REINPLACE_CMD} -e '/^AM_CPPFLAGS = / s|^\(.*\) \(@XIPH_CPPFLAGS@\) \(.*\)$$|\1 \3 \2|' ${WRKSRC}/examples/Makefile.in
	${REINPLACE_CMD} -e 's|#ifdef IPV6_V6ONLY|#if defined(__BSD_VISIBLE) \&\& defined(IPV6_V6ONLY)|' ${WRKSRC}/src/net/sock.c

.include <bsd.port.mk>
#EOF
