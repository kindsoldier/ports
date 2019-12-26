# Created by: michaelnottebrock@gmx.net and lioux@FreeBSD.org
# $FreeBSD: head/audio/portaudio/Makefile 494248 2019-03-01 09:40:24Z tobik $

PORTNAME=	portaudio
PORTVERSION=	19.6.0
CATEGORIES=	audio
MASTER_SITES=	http://www.portaudio.com/archives/
DISTNAME=	pa_stable_v190600_20161030
PKGNAMEPREFIX=  lib


MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Portable cross-platform Audio API

USES=	autoreconf dos2unix gmake  pathfix pkgconfig tar:tgz
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-dependency-tracking \
		--enable-cxx \
		--without-alsa
MAKE_ARGS=	EXAMPLES=""
WRKSRC=		${WRKDIR}/${PORTNAME}

MAKE_JOBS_UNSAFE=	yes

#LIB_DEPENDS=	libsndio.so:media/libsndio
#CONFIGURE_ARGS=	--with-sndio
CONFIGURE_ARGS+= --with-oss
CONFIGURE_ARGS+= --without-jack
CONFIGURE_ARGS+= --without-sndio

post-extract:
	${MKDIR} ${WRKSRC}/src/hostapi/sndio
	${CP} ${FILESDIR}/pa_sndio.c ${WRKSRC}/src/hostapi/sndio

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libportaudio.so \
		${STAGEDIR}${PREFIX}/lib/libportaudiocpp.so
	${INSTALL_DATA} ${FILESDIR}/pa_unix_oss.h ${STAGEDIR}${PREFIX}/include


.include <bsd.port.mk>
