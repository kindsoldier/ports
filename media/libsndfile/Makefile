#
# $Id: Makefile 2377 2009-09-08 11:13:30Z root $
# $URL: file:///usr2/svn/ports5/multimedia-libs/libsndfile/Makefile $
#
PORTNAME=	libsndfile
PORTVERSION=	1.0.28
CATEGORIES=	audio
MASTER_SITES=	http://www.mega-nerd.com/libsndfile/files/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Reading and writing files containing sampled sound (like WAV or AIFF)

LIB_DEPENDS+=	libFLAC.so:media/libflac
LIB_DEPENDS+=	libogg.so:media/libogg
LIB_DEPENDS+=	libvorbis.so:media/libvorbis
LIB_DEPENDS+=	libvorbisenc.so:media/libvorbis


GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --disable-gcc-pipe
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --disable-sqlite
CONFIGURE_ARGS+= --disable-alsa

CONFIGURE_ARGS+= --disable-gcc-pipe
CONFIGURE_ARGS+= --disable-octave
CONFIGURE_ARGS+= --program-transform-name=''
INSTALLS_SHLIB=	yes
MAKE_ARGS+= program_transform_name=""
CFLAGS+= -I${LOCALBASE}/include
LDFALGS+= -L${LOCALBASE}/lib

post-patch:
	${REINPLACE_CMD} -e '/^SUBDIRS =/s/ doc / /g' ${WRKSRC}/Makefile.in


.include <bsd.port.mk>
#EOF
