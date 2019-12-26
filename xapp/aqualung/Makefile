#
# $Id: Makefile 2621 2009-09-28 06:39:57Z root $
#
PORTNAME=	aqualung
PORTVERSION=	1.0 #0.9.0.11
DISTNAME=	${PORTNAME}-${PORTVERSION:S/.0./beta/}
CATEGORIES=	audio
DISTVERSION=	${PORTVERSION:S/.0./beta/}
MASTER_SITES+=	SF 

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libglib.so:devel/libglib

LIB_DEPENDS+=	libmp3lame.so:media/lame
LIB_DEPENDS+=	libFLAC.so:media/libflac
LIB_DEPENDS+=	libmac.so:media/libmac
LIB_DEPENDS+=	libmad.so:media/libmad
LIB_DEPENDS+=	libmpcdec.so:media/libmusepack
LIB_DEPENDS+=	libogg.so:media/libogg
LIB_DEPENDS+=	liboggz.so:media/liboggz
LIB_DEPENDS+=	libsamplerate.so:media/libsamplerate
LIB_DEPENDS+=	libsndfile.so:media/libsndfile
LIB_DEPENDS+=	libspeex.so:media/libspeex
LIB_DEPENDS+=	libvorbis.so:media/libvorbis
LIB_DEPENDS+=	libwavpack.so:media/libwavpack

LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libmodplug.so:media/libmodplug


MAINTAINER=	onborodin@gmail.com
COMMENT=	Music player with rich features


USES+=		gmake
GNU_CONFIGURE=	yes
CPPFLAGS+= -I${LOCALBASE}/include -I${LOCALBASE}/include/ffmpeg
LDFLAGS+= -L${LOCALBASE}/lib 
CFLAGS+= -I${LOCALBASE}/include -I${LOCALBASE}/include/ffmpeg

#CONFIGURE_ARGS+= --disable-jack-mgmt
#CONFIGURE_ARGS+= --disable-loop
#CONFIGURE_ARGS+= --disable-podcast
#CONFIGURE_ARGS+= --disable-systray
#CONFIGURE_ARGS+= --disable-transcoding
CONFIGURE_ARGS+= --with-flac
CONFIGURE_ARGS+= --with-lame
CONFIGURE_ARGS+= --with-mac
CONFIGURE_ARGS+= --with-mod
CONFIGURE_ARGS+= --with-mpc
CONFIGURE_ARGS+= --with-mpeg
CONFIGURE_ARGS+= --with-oss
CONFIGURE_ARGS+= --with-sndfile
CONFIGURE_ARGS+= --without-sndio
CONFIGURE_ARGS+= --with-speex
CONFIGURE_ARGS+= --with-src
CONFIGURE_ARGS+= --with-vorbis
CONFIGURE_ARGS+= --with-vorbisenc
CONFIGURE_ARGS+= --with-wavpack

CONFIGURE_ARGS+= --without-alsa
CONFIGURE_ARGS+= --without-cdda
CONFIGURE_ARGS+= --without-cddb
CONFIGURE_ARGS+= --without-ifp
CONFIGURE_ARGS+= --without-jack
CONFIGURE_ARGS+= --without-ladspa
CONFIGURE_ARGS+= --without-lavc
CONFIGURE_ARGS+= --without-lua
CONFIGURE_ARGS+= --without-pulse

CONFIGURE_ARGS+= --enable-debug


CONFIGURE_ARGS+= --mandir=${PREFIX}/man

post-patch:
	${ECHO_CMD} "#include <sys/stat.h>" >> ${WRKSRC}/src/common.h
	${ECHO_CMD} "#include <sys/types.h>" >> ${WRKSRC}/src/common.h
	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libIDL-2.0|libIDL|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libgnome-2.0|libgnome|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libart-2.0|libart|g' 	${WRKSRC}/configure

ICON_SRC_DIR=	${WRKSRC}/src/img

#work/aqualung-0.9beta11/src/img/icon_16.png
#work/aqualung-0.9beta11/src/img/icon_24.png
#work/aqualung-0.9beta11/src/img/icon_32.png
#work/aqualung-0.9beta11/src/img/icon_48.png
#work/aqualung-0.9beta11/src/img/icon_64.png

post-install:
	${MKDIR} ${PREFIX}/share/applications ${STAGEDIR}${PREFIX}/share/pixmaps
	${INSTALL_DATA} ${FILESDIR}/${PORTNAME}.desktop ${STAGEDIR}${PREFIX}/share/applications/

	${MKDIR} ${STAGEDIR}${PREFIX}/share/pixmaps
	${INSTALL_DATA} ${ICON_SRC_DIR}/icon_48.png \
	    ${STAGEDIR}${PREFIX}/share/pixmaps/${PORTNAME}.png

.for N in 16 24 32 48 64
	${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/hicolor/${N}x${N}/apps
	${INSTALL_DATA} ${ICON_SRC_DIR}/icon_${N}.png \
	    ${STAGEDIR}${PREFIX}/share/icons/hicolor/${N}x${N}/apps/${PORTNAME}.png
.endfor


.include <bsd.port.mk>
#EOF
