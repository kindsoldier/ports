#
# $id$
#
PORTNAME=	sox
PORTVERSION=	14.4.2
CATEGORIES=	audio
MASTER_SITES=	SF

MAINTAINER=	onborodin@gmail.com
COMMENT=	SOund eXchange - universal sound sample translator

CONFLICTS=	play-[0-9]*


LIB_DEPENDS+=	libltdl.so:devel/libtool
LIB_DEPENDS+=	libmp3lame.so:media/lame
LIB_DEPENDS+=	libamrnb.so:media/libamrnb
LIB_DEPENDS+=	libamrwb.so:media/libamrwb
LIB_DEPENDS+=	libao.so:media/libao
LIB_DEPENDS+=	libFLAC.so:media/libflac
LIB_DEPENDS+=	libid3tag.so:media/libid3tag
LIB_DEPENDS+=	libmad.so:media/libmad
LIB_DEPENDS+=	libogg.so:media/libogg
LIB_DEPENDS+=	libsndfile.so:media/libsndfile
LIB_DEPENDS+=	libtwolame.so:media/libtwolame
LIB_DEPENDS+=	libvorbis.so:media/libvorbis
LIB_DEPENDS+=	libvorbisenc.so:media/libvorbis
LIB_DEPENDS+=	libvorbisfile.so:media/libvorbis
LIB_DEPENDS+=	libwavpack.so:media/libwavpack
LIB_DEPENDS+=	libiconv.so:text/libiconv

#LIB_DEPENDS+=	libavcodec.so:media/ffmpeg
#LIB_DEPENDS+=	libavformat.so:media/ffmpeg
#LIB_DEPENDS+=	libavutil.so:media/ffmpeg
#LIB_DEPENDS+=	libswresample.so:media/ffmpeg



GNU_CONFIGURE=	yes
USES+=		gmake
CPPFLAGS+= -I${LOCALBASE}/include 
CPPFLAGS+= -I${LOCALBASE}/include/ffmpeg
LDFLAGS+= -L${LOCALBASE}/lib 
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --program-transform-name=''
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-lpthread -L${LOCALBASE}/lib
CONFIGURE_ARGS+=	--disable-stack-protector
CFLAGS+= -pthread

#CONFIGURE_ARGS+= --with-dyn-default
CONFIGURE_ARGS+= --without-alsa

# CONFIGURE_ARGS+= --with-amrnb=dyn
# CONFIGURE_ARGS+= --with-amrwb=dyn
# CONFIGURE_ARGS+= --with-ao=dyn
# CONFIGURE_ARGS+= --with-coreaudio=dyn
# CONFIGURE_ARGS+= --with-distro=distro
CONFIGURE_ARGS+= --without-ffmpeg
# CONFIGURE_ARGS+= --with-flac=dyn
# CONFIGURE_ARGS+= --with-gsm=dyn
# CONFIGURE_ARGS+= --with-ladspa-path
# CONFIGURE_ARGS+= --with-lpc10=dyn
# CONFIGURE_ARGS+= --with-mp3=dyn
# CONFIGURE_ARGS+= --with-oggvorbis=dyn
# CONFIGURE_ARGS+= --with-oss=dyn
# CONFIGURE_ARGS+= --with-pic
# CONFIGURE_ARGS+= --with-pkgconfigdir
CONFIGURE_ARGS+= --without-pulseaudio
# CONFIGURE_ARGS+= --with-sndfile=dyn
# CONFIGURE_ARGS+= --with-sndio=dyn
CONFIGURE_ARGS+= --without-sunaudio
# CONFIGURE_ARGS+= --with-waveaudio=dyn
#CONFIGURE_ARGS+= --with-wavpack=dyn

CONFIGURE_ARGS+= --with-id3tag
CONFIGURE_ARGS+= --without-ladspa
CONFIGURE_ARGS+= --with-lame
CONFIGURE_ARGS+= --with-mad
CONFIGURE_ARGS+= --with-magic
CONFIGURE_ARGS+= --without-png

CONFIGURE_ENV+=	ac_cv_header_gsm_h=no
CONFIGURE_ENV+=	ac_cv_header_gsm_gsm_h=no
CONFIGURE_ENV+=	ac_cv_lib_gsm_gsm_create=no

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man7 && ${LN} -sf  soxformat.7 soxeffect.7
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  sox.1 play.1
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  sox.1 rec.1

.include <bsd.port.mk>
#EOF
