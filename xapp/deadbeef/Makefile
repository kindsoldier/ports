# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: head/audio/deadbeef/Makefile 507372 2019-07-26 20:46:53Z gerald $

PORTNAME=	deadbeef
PORTVERSION=	0.7.2
CATEGORIES=	audio
MASTER_SITES=	SF/${PORTNAME}/

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Ultimate music player for Unix-like systems

RUN_DEPENDS+= freepats>=0:media/freepats

LIB_DEPENDS+= libjansson.so:devel/libjansson
LIB_DEPENDS+= libdbus.so:gnome/dbus
LIB_DEPENDS+= libintl.so:devel/gettext
LIB_DEPENDS+= libiconv.so:text/libiconv


LIB_DEPENDS+= libavcodec.so:media/ffmpeg
LIB_DEPENDS+= libavformat.so:media/ffmpeg
LIB_DEPENDS+= libavutil.so:media/ffmpeg
LIB_DEPENDS+= libfaad.so:media/libfaad
LIB_DEPENDS+= libFLAC.so:media/libflac
LIB_DEPENDS+= libgsm.so:media/libgsm
LIB_DEPENDS+= libmad.so:media/libmad
LIB_DEPENDS+= libmodplug.so:media/libmodplug
LIB_DEPENDS+= libmp3lame.so:media/lame
LIB_DEPENDS+= libmpg123.so:media/mpg123
LIB_DEPENDS+= libogg.so:media/libogg
LIB_DEPENDS+= libopencore-amrnb.so:media/libopencore-amr
LIB_DEPENDS+= libopencore-amrwb.so:media/libopencore-amr
LIB_DEPENDS+= libopus.so:media/libopus

LIB_DEPENDS+= libsamplerate.so:media/libsamplerate

LIB_DEPENDS+= libsndfile.so:media/libsndfile
LIB_DEPENDS+= libspeex.so:media/libspeex
LIB_DEPENDS+= libswresample.so:media/ffmpeg
LIB_DEPENDS+= libtheoradec.so:media/libtheora
LIB_DEPENDS+= libtheoraenc.so:media/libtheora

LIB_DEPENDS+= libva-drm.so:media/libva
LIB_DEPENDS+= libva-x11.so:media/libva
LIB_DEPENDS+= libva.so:media/libva

LIB_DEPENDS+= libvorbis.so:media/libvorbis
LIB_DEPENDS+= libwavpack.so:media/libwavpack
LIB_DEPENDS+= libx264.so:media/libx264
LIB_DEPENDS+= libx265.so:media/libx265
LIB_DEPENDS+= libxvidcore.so:media/libxvid

LIB_DEPENDS+= libgtk-x11.so:gnome/libgtk2

RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils


GNU_CONFIGURE=	yes
USES=		compiler:c11  gmake pkgconfig shebangfix tar:bzip2
USE_LDCONFIG=	yes
CPPFLAGS+=	-I../dumb/dumb-kode54/include -I../../plugins/libmp4ff \
		-I../../plugins/gme/game-music-emu-0.6pre \
		-I./sidplay-libs/libsidplay/include/sidplay \
		-I${LOCALBASE}/include
CFLAGS+=	-Wno-narrowing
LDFLAGS_i386=	-Wl,-z,notext
LIBS+=		-L${LOCALBASE}/lib -lexecinfo -lintl
SHEBANG_FILES=	yasmwrapper.sh
INSTALL_TARGET=	install-strip


CONFIGURE_ARGS+= --disable-alsa
CONFIGURE_ARGS+= --disable-nullout
CONFIGURE_ARGS+= --disable-static

#CONFIGURE_ARGS+= --disable-wildmidi
#CONFIGURE_ARGS+= --disable-aac
#CONFIGURE_ARGS+= --disable-adplug
#CONFIGURE_ARGS+= --disable-alac
CONFIGURE_ARGS+= --disable-artwork --disable-artwork-imlib2
CONFIGURE_ARGS+= --disable-cdda
#CONFIGURE_ARGS+= --disable-converter
#CONFIGURE_ARGS+= --disable-dca
CONFIGURE_ARGS+= --disable-dumb
#CONFIGURE_ARGS+= --disable-flac
#CONFIGURE_ARGS+= --disable-gme
CONFIGURE_ARGS+= --disable-gtk3
#CONFIGURE_ARGS+= --disable-hotkeys
CONFIGURE_ARGS+= --disable-lfm
#CONFIGURE_ARGS+= --disable-libmad
#CONFIGURE_ARGS+= --disable-libmpg123
#CONFIGURE_ARGS+= --disable-m3u
#CONFIGURE_ARGS+= --disable-mms
#CONFIGURE_ARGS+= --disable-mono2stereo
#CONFIGURE_ARGS+= --disable-musepack
#CONFIGURE_ARGS+= --disable-nls
#CONFIGURE_ARGS+= --disable-pltbrowser
#CONFIGURE_ARGS+= --disable-psf
CONFIGURE_ARGS+= --disable-pulse
#CONFIGURE_ARGS+= --disable-sc68
CONFIGURE_ARGS+= --disable-shellexec
#CONFIGURE_ARGS+= --disable-shn
#CONFIGURE_ARGS+= --disable-sndfile
#CONFIGURE_ARGS+= --disable-src
#CONFIGURE_ARGS+= --disable-supereq
#CONFIGURE_ARGS+= --disable-tta
#CONFIGURE_ARGS+= --disable-vfs-curl
#CONFIGURE_ARGS+= --disable-vfs-zip
#CONFIGURE_ARGS+= --disable-vorbis
#CONFIGURE_ARGS+= --disable-vtx
#CONFIGURE_ARGS+= --disable-wavpack
#CONFIGURE_ARGS+= --disable-wma
CONFIGURE_ARGS+= --enable-gtk2
CONFIGURE_ARGS+= --enable-sc68

#CONFIGURE_ARGS+= --with-timidity-cfg=/usr/local/share/timidity/timidity.cfg

.include <bsd.port.options.mk>

FILES= ${WRKSRC}/configure


post-patch:
# Do not link to libsupc++ which may be PIC-unsafe (breaks 64-bit arches)
	${REINPLACE_CMD} -e 's, -lsupc++,,' \
		${WRKSRC}/plugins/adplug/Makefile.in \
		${WRKSRC}/plugins/gme/Makefile.in \
		${WRKSRC}/plugins/sid/Makefile.in \
		${WRKSRC}/plugins/supereq/Makefile.in
	${REINPLACE_CMD} -e 's,/etc/timidity++/timidity-freepats.cfg:/etc/timidity/freepats.cfg:/etc/timidity/,${LOCALBASE}/share/,' \
		${WRKSRC}/plugins/wildmidi/wildmidiplug.c
# Clang accepts `-msse2' command line option even on !x86, need better check
	${REINPLACE_CMD} -e '25177s,^,#include <xmmintrin.h>,' \
		${WRKSRC}/configure
	${REINPLACE_CMD} -e '/chnresolv/s,const char,signed &,' \
		${WRKSRC}/plugins/adplug/adplug/s3m.cpp \
		${WRKSRC}/plugins/adplug/adplug/s3m.h
	${REINPLACE_CMD} -e "/sampleConvertTable/s,int8_t,u&, ; \
		86,+1 { s,',,g; s,\\\\x,0x,g; }" \
		${WRKSRC}/plugins/sid/sidplay-libs/libsidplay/src/xsid/xsid.cpp \
		${WRKSRC}/plugins/sid/sidplay-libs/libsidplay/src/xsid/xsid.h
# Fix build with libzip-1.0
	${REINPLACE_CMD} 's,zip_file_t,zip_file_DB,g' \
		${WRKSRC}/plugins/vfs_zip/vfs_zip.c


	${REINPLACE_CMD} -e 's,gio-2.0,gio,g' 		${FILES}
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gmodule-2.0,gmodule,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gobject-2.0,gobject,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gthread-2.0,gthread,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gtk+-2.0,gtk+,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gtk-X11-2.0,gtk-x11,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gdk-2.0,gdk,g' 		${FILES}
	${REINPLACE_CMD} -e 's,gdk-X11-2.0,gdk-x11,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gdk_pixbuf-2.0,gdk-pixbuf,g' ${FILES}
	${REINPLACE_CMD} -e 's,pango-1.0,pango,g' 	${FILES}

.include <bsd.port.mk>
