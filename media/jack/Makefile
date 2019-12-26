# Created by: Tilman Linneweh <arved@FreeBSD.org>
# $FreeBSD: head/audio/jack/Makefile 503442 2019-06-04 06:17:58Z bapt $

PORTNAME=	jackit
PORTVERSION=	0.125.0
CATEGORIES=	audio

MASTER_SITES+= http://jackaudio.org/downloads/
DISTNAME= jack-audio-connection-kit-${PORTVERSION}

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Low latency audio server

LIB_DEPENDS+=	libsndfile.so:media/libsndfile
LIB_DEPENDS+=	libsamplerate.so:media/libsamplerate
LIB_DEPENDS+=	libcelt0.so:media/libcelt
#LIB_DEPENDS=	libsndio.so:media/libsndio

USES=	autoreconf
USES+= bdb:5  readline
USES+=  compiler:c11 gmake  libtool
#USES+= pkgconfig

#USE_GITHUB=	yes

#GH_ACCOUNT=	jackaudio
#GH_PROJECT=	jack1
#GH_TAGNAME=	90f9dd3
#GH_TUPLE=	jackaudio:headers:07f1ecf:h/jack
#GH_TUPLE+=	jackaudio:tools:8d13c31:t/tools
#GH_TUPLE+=	jackaudio:example-clients:7fa0890:e/example-clients
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
USE_RC_SUBR=	jackd

CONFIGURE_ARGS+= --enable-optimize
CONFIGURE_ARGS+= --enable-force-install
CONFIGURE_ARGS+= --with-default-tmpdir=/tmp

CONFIGURE_ARGS+= --enable-oss

CONFIGURE_ARGS+= --disable-portaudio
CONFIGURE_ARGS+= --disable-sndio
CONFIGURE_ARGS+= --disable-alsa
#CONFIGURE_ARGS+= --without-barrier
CONFIGURE_ARGS+= --enable-debug

CC=gcc

CFLAGS=	-DOPTION_COOKEDMODE
CFLAGS+=		-I${BDB_INCLUDE_DIR}
LIBS+=			-L${BDB_LIB_DIR}
INSTALL_TARGET=		install-strip

post-patch:
	${RM} ${WRKSRC}/doc/reference/html/*

post-build:
	${RM} ${WRKSRC}/doc/reference/html/dir__2F*

.include <bsd.port.mk>
