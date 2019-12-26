# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/audio/musescore/Makefile 498720 2019-04-12 14:45:39Z adridg $

PORTNAME=	musescore
DISTVERSION=	3.2.3 #3.0.5 #3.2.3
CATEGORIES=	audio
MASTER_SITES+=	https://github.com/musescore/MuseScore/releases/download/v${DISTVERSION}/
MASTER_SITES+=	http://ftp.osuosl.org/pub/musescore/releases/MuseScore-${DISTVERSION}/
DISTNAME=	MuseScore-${DISTVERSION}

MAINTAINER=	adridg@FreeBSD.org
COMMENT=	Free music composition & notation software

LIB_DEPENDS+=	libmp3lame.so:audio/lame
LIB_DEPENDS+=	libsndfile.so:audio/libsndfile
LIB_DEPENDS+=	libvorbis.so:audio/libvorbis
LIB_DEPENDS+=	libogg.so:audio/libogg
#LIB_DEPENDS+=	libfreetype.so:print/freetype2

RUN_DEPENDS+=    libqt5-base>=${QT5_VERSION}:xapp/libqt5-base
RUN_DEPENDS+=    libqt5-declarative>=${QT5_VERSION}:xapp/libqt5-declarative
RUN_DEPENDS+=    libqt5-svg>=${QT5_VERSION}:xapp/libqt5-svg
RUN_DEPENDS+=    libqt5-xmlpatterns>=${QT5_VERSION}:xapp/libqt5-xmlpatterns

BUILD_DEPENDS+= ${RUN_DEPENDS}

USES=		cmake gmake compiler:c++11-lib pkgconfig zip

# Each release gets a subdir containing the distfiles for that release,
# so hope that scanning the parent dir finds new ones.
PORTSCOUT=	site:http://ftp.osuosl.org/pub/musescore/releases/
NO_WRKSUBDIR=	yes

#DATADIR=	${PREFIX}/share/mscore-${PORTVERSION:R}

ALL_TARGET=	lrelease manpages all

CMAKE_ARGS+=	-DUSE_SYSTEM_FREETYPE="OFF"
CMAKE_ARGS+=	-DBUILD_PORTMIDI=OFF
CMAKE_ARGS+=	-DBUILD_PCH=OFF
CMAKE_ARGS+=	-DDOWNLOAD_SOUNDFONT=OFF

LIB_DEPENDS=	libasound.so:media/libalsa
#LIB_DEPENDS=	libportaudio.so:media/libportaudio


CMAKE_ARGS+=	-DBUILD_ALSA=ON
CMAKE_ARGS+=	-DBUILD_JACK=OFF
CMAKE_ARGS+=	-DBUILD_PORTAUDIO=ON
CMAKE_ARGS+=	-DBUILD_PULSEAUDIO=OFF
CMAKE_ARGS+=	-DBUILD_WEBENGINE=OFF

CFLAGS+= -I${LOCALBASE}/include 
LDFLAGS+= -L${LOCALBASE}/lib

.include <bsd.port.pre.mk>

.if ${CHOSEN_COMPILER_TYPE} == clang
CXXFLAGS+=	-Wno-inconsistent-missing-override
.endif

post-patch:
	${REINPLACE_CMD} -e 's,portaudio-2.0,portaudio,g' ${WRKSRC}/CMakeLists.txt
	${FIND} ${WRKSRC} -name "CMakeLists.txt" -print0 | ${XARGS} -0 \
		${REINPLACE_CMD} -e \
		'/RELEASE/s|-O2 ||; \
		 /COMPILE_FLAGS/s|-g ||; \
		 s|share/man|man|; \
		 /COMPILE_FLAGS/s|$${PCH_INCLUDE} |-include $${PROJECT_BINARY_DIR}/all.h |'
	${REINPLACE_CMD} -e \
		's|<errno.h>|<cerrno>| ; \
		 s|<limits.h>|<climits>| ; \
		 s|<math.h>|<cmath>| ; \
		 s|<stdio.h>|<cstdio>|' ${WRKSRC}/all.h

.include <bsd.port.post.mk>
