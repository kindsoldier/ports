#
# $Id$
#
PORTNAME=	libSDL_sound
PORTVERSION=	1.0.3
CATEGORIES=	audio
MASTER_SITES=	http://www.icculus.org/SDL_sound/downloads/
DISTNAME=	SDL_sound-${PORTVERSION}

MAINTAINER=	mva@FreeBSD.org
COMMENT=	SDL audio library and player for some popular sound file formats

LIB_DEPENDS+=	libSDL.so:devel/libSDL

LIB_DEPENDS+=	libogg.so:media/libogg
LIB_DEPENDS+=	libspeex.so:media/libspeex
LIB_DEPENDS+=	libvorbis.so:media/libvorbis
LIB_DEPENDS+=	libmodplug.so:media/libmodplug
LIB_DEPENDS+=	libFLAC.so:media/libflac


USES+=		gmake
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
INSTALL_TARGET=	install-strip

#OPTIONS_DEFINE=		FLAC MIKMOD MIDI MODPLUG PHYSFS SMPEG SPEEX VORBIS
#OPTIONS_DEFAULT=	FLAC MIKMOD MIDI MODPLUG PHYSFS SMPEG SPEEX VORBIS


.include <bsd.port.options.mk>

#CONFIGURE_ARGS+=--disable-flac
#CONFIGURE_ARGS+= --disable-mikmod
#CONFIGURE_ARGS+= --disable-modplug
CONFIGURE_ARGS+= --disable-physfs
CONFIGURE_ARGS+= --disable-smpeg
#CONFIGURE_ARGS+= --disable-speex
#CONFIGURE_ARGS+= --disable-midi
#CONFIGURE_ARGS+=--disable-ogg

post-patch:
	@${REINPLACE_CMD} 's|timidity.cfg|${PREFIX}/share/timidity/&|' \
		${WRKSRC}/decoders/timidity/options.h

.include <bsd.port.mk>
#EOF
