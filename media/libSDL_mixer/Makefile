# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/audio/sdl_mixer/Makefile 432169 2017-01-22 22:27:54Z rene $

PORTNAME=	libSDL_mixer
PORTVERSION=	1.2.12
CATEGORIES=	audio
MASTER_SITES=	http://www.libsdl.org/projects/SDL_mixer/release/
DISTNAME=	SDL_mixer-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Sample multi-channel audio mixer library

USES=		gmake pathfix pkgconfig
GNU_CONFIGURE=	yes
LDFLAGS+=	-L${LOCALBASE}/lib
CPPFLAGS+=	-I${LOCALBASE}/include
USE_LDCONFIG=	yes

#OPTIONS_DEFINE=		SMPEG FLAC TIMIDITYPLUS
#OPTIONS_DEFAULT=	SMPEG FLAC MIKMOD
#OPTIONS_RADIO=		MOD OGG
#OPTIONS_RADIO_MOD=	MIKMOD MODPLUG
#OPTIONS_RADIO_OGG=	VORBIS TREMOR
#
#.if defined(MACHINE_CPU) && ${MACHINE_CPU:Msoftfp}
#OPTIONS_DEFAULT+=	TREMOR
#.else
#OPTIONS_DEFAULT+=	VORBIS
#.endif

#TIMIDITYPLUS_RUN_DEPENDS_OFF=	${LOCALBASE}/lib/timidity/timidity.cfg:audio/timidity
#TIMIDITYPLUS_RUN_DEPENDS=	${LOCALBASE}/share/timidity/timidity.cfg-eawpats:audio/eawpats
#TIMIDITYPLUS_VARS_OFF=		CONFIG_FILE=${LOCALBASE}/lib/timidity/timidity.cfg
#TIMIDITYPLUS_VARS=		CONFIG_FILE=${LOCALBASE}/share/timidity/timidity.cfg-eawpats

CONFIGURE_ARGS+= --enable-music-mod-modplug
CONFIGURE_ARGS+= --enable-music-flac
CONFIGURE_ARGS+= --enable-music-mp3
CONFIGURE_ARGS+= --enable-music-ogg
CONFIGURE_ARGS+= --enable-music-timidity-midi #=no


LIB_DEPENDS+=	libFLAC.so:media/libflac
LIB_DEPENDS+=	libmikmod.so:media/libmikmod
LIB_DEPENDS+=	libmodplug.so:media/libmodplug
LIB_DEPENDS+=	libsmpeg.so:media/libsmpeg
LIB_DEPENDS+=	libvorbis.so:media/libvorbis

post-patch:
	${REINPLACE_CMD} -e 's|%%CONFIG_FILE%%|${CONFIG_FILE}|g' \
		${WRKSRC}/timidity/config.h
	${REINPLACE_CMD} -e 's|"modplug.h"|"libmodplug/modplug.h"|' \
		${WRKSRC}/music_modplug.h

.include <bsd.port.mk>
#EOF
