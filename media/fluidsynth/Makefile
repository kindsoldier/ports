# Created by: Juha Nygard <juha.nygard1@netikka.fi>
# $FreeBSD: head/audio/fluidsynth/Makefile 499341 2019-04-19 09:19:25Z tobik $

PORTNAME=	fluidsynth
DISTVERSIONPREFIX=	v
DISTVERSION=	2.0.5
CATEGORIES=	audio

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Real-time software synthesizer based on the SoundFont 2 specifications

USES=		cmake gmake pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	FluidSynth
USE_LDCONFIG=	yes

#LIB_DEPENDS+= libasound.so:media/libalsa
LIB_DEPENDS+= libreadline.so:devel/libreadline
LIB_DEPENDS+= libsndfile.so:media/libsndfile
LIB_DEPENDS+= libglib.so:devel/libglib

RUN_DEPENDS+= fluid-soundfont>0:media/fluid-soundfont


CFLAGS+= -I${LOCALBASE}/include -pthread
LDFLAGS+= -L${LOCALBASE}/lib -lncurses -ltermcap
LDFLAGS+=	-lpthread

CMAKE_ARGS+= -Denable-midishare=OFF
CMAKE_ARGS+= -Denable-alsa=OFF
CMAKE_ARGS+= -Denable-dbus=OFF
CMAKE_ARGS+= -Denable-jack=OFF
CMAKE_ARGS+= -Denable-ladspa=OFF
CMAKE_ARGS+= -Denable-lash=OFF
CMAKE_ARGS+= -Denable-portaudio=OFF
CMAKE_ARGS+= -Denable-pulseaudio=OFF
CMAKE_ARGS+= -Denable-sndio=OFF

CMAKE_ARGS+= -Denable-libsndfile=ON
CMAKE_ARGS+= -Denable-readline=ON


FILES+= ${WRKSRC}/CMakeLists.txt

post-patch:
	${CP} ${FILESDIR}/fluid_sndio.c ${WRKSRC}/src/drivers/
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${FILES}


#do-configure:
#	cd ${WRKSRC} && env LDFLAGS="${LDFLAGS}" CFLAGS="${CFLAGS}" \
#	    cmake ${CMAKE_ARGS} .


.include <bsd.port.mk>
