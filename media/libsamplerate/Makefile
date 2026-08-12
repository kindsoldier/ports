#
# $Id: Makefile 2376 2009-09-08 10:53:34Z root $
# $URL$
#
PORTNAME=	libsamplerate
PORTVERSION=	0.1.9
CATEGORIES=	audio
MASTER_SITES=	http://www.mega-nerd.com/libsamplerate/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Secret Rabbit Code: a Sample Rate Converter for audio

LIB_DEPENDS+= libfftw3.so:math/libfftw3
LIB_DEPENDS+= libsndfile.so:media/libsndfile

GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS=	--disable-gcc-pipe
CFLAGS= -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
MAKE_ARGS+= program_transform_name=""
CONFIGURE_ARGS+= --program-transform-name=""
INSTALLS_SHLIB=	yes

.include <bsd.port.mk>
#EOF
