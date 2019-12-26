#
# $Id$
#
PORTNAME=	vlc
DISTVERSION=	2.2.8
CATEGORIES=	multimedia audio net www
MASTER_SITES+=	http://download.videolan.org/pub/videolan/${PORTNAME}/${DISTVERSION:S/a$//}/
MASTER_SITES+=	http://ftp.snt.utwente.nl/pub/software/videolan/${PORTNAME}/${DISTVERSION:S/a$//}/
MASTER_SITES+=	ftp://ftp.crans.org/pub/videolan/${PORTNAME}/${DISTVERSION:S/a$//}/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Qt4 based multimedia player and streaming server

#LIB_DEPENDS+=	libass.so:media/libass
LIB_DEPENDS+=	libxcb-keysyms.so:x11/libxcb-util-keysyms
LIB_DEPENDS+=	libvpx.so:media/libvpx

LIB_DEPENDS+=	libgnutls.so:crypto/libgnutls
LIB_DEPENDS+=	libssh2.so:net/libssh2
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libSDL.so:devel/libSDL
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgmp.so:math/libgmp
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libpng.so:graph/libpng

LIB_DEPENDS+=	libavcodec.so:media/ffmpeg
LIB_DEPENDS+=	libavformat.so:media/ffmpeg
LIB_DEPENDS+=	libavutil.so:media/ffmpeg
LIB_DEPENDS+=	libpostproc.so:media/ffmpeg
LIB_DEPENDS+=	libswresample.so:media/ffmpeg
LIB_DEPENDS+=	libswscale.so:media/ffmpeg

LIB_DEPENDS+=	libmp3lame.so:media/lame
LIB_DEPENDS+=	liba52.so:media/liba52
LIB_DEPENDS+=	libdca.so:media/libdca
LIB_DEPENDS+=	libdvbpsi.so:media/libdvbpsi
LIB_DEPENDS+=	libebml.so:text/libebml
LIB_DEPENDS+=	libfaac.so:media/libfaac
LIB_DEPENDS+=	libfaad.so:media/libfaad
LIB_DEPENDS+=	libFLAC.so:media/libflac
LIB_DEPENDS+=	libgsm.so:media/libgsm
LIB_DEPENDS+=	libkate.so:media/libkate
LIB_DEPENDS+=	libmad.so:media/libmad
LIB_DEPENDS+=	libmatroska.so:media/libmatroska
LIB_DEPENDS+=	libmodplug.so:media/libmodplug
LIB_DEPENDS+=	libmpcdec.so:media/libmusepack

LIB_DEPENDS+=	libogg.so:media/libogg

LIB_DEPENDS+=	libopencore-amrnb.so:media/libopencore-amr
LIB_DEPENDS+=	libopencore-amrwb.so:media/libopencore-amr
LIB_DEPENDS+=	libsamplerate.so:media/libsamplerate
LIB_DEPENDS+=	libshout.so:media/libshout
LIB_DEPENDS+=	libspeex.so:media/libspeex

LIB_DEPENDS+=	libspeexdsp.so:media/libspeexdsp

LIB_DEPENDS+=	libtag.so:media/libtag
LIB_DEPENDS+=	libtheora.so:media/libtheora
LIB_DEPENDS+=	libtheoradec.so:media/libtheora
LIB_DEPENDS+=	libtheoraenc.so:media/libtheora
LIB_DEPENDS+=	libtwolame.so:media/libtwolame
LIB_DEPENDS+=	libvorbis.so:media/libvorbis
LIB_DEPENDS+=	libvorbisenc.so:media/libvorbis
LIB_DEPENDS+=	libwavpack.so:media/libwavpack
LIB_DEPENDS+=	libx264.so:media/libx264
LIB_DEPENDS+=	libxvidcore.so:media/libxvid
LIB_DEPENDS+=	libidn.so:net/libidn

LIB_DEPENDS+=	libQtCore.so:xapp/libqt4
LIB_DEPENDS+=	libQtGui.so:xapp/libqt4

LIB_DEPENDS+=	libsmbclient.so:net/samba

LIB_DEPENDS+=	libfribidi.so:text/libfribidi
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libxml2.so:text/libxml2

LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libX11-xcb.so:x11/libX11
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXcomposite.so:x11/libXcomposite
LIB_DEPENDS+=	libXcursor.so:x11/libXcursor
LIB_DEPENDS+=	libXdamage.so:x11/libXdamage
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXfixes.so:x11/libXfixes
LIB_DEPENDS+=	libXi.so:x11/libXi
LIB_DEPENDS+=	libXinerama.so:x11/libXinerama
LIB_DEPENDS+=	libXrandr.so:x11/libXrandr
LIB_DEPENDS+=	libXrender.so:x11/libXrender
LIB_DEPENDS+=	libXxf86vm.so:x11/libXxf86vm

#LIB_DEPENDS+=	libGL.so:graph/libmesa
#LIB_DEPENDS+=	libglapi.so:graph/libmesa
LIB_DEPENDS+=	libpixman.so:x11/libpixman
LIB_DEPENDS+=	libxshmfence.so:x11/libxshmfence

LIB_DEPENDS+=	libdbus.so:gnome/dbus
LIB_DEPENDS+=	libnotify.so:gnome/libnotify

LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libstartup-notification.so:xfce/libstartup-notification

RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils


INSTALL_TARGET=	install-strip
GNU_CONFIGURE=	yes
USES+=		tar:xz
USES+=		gmake

CONFIGURE_ENV+= ac_cv_search_pthread_rwlock_init=-pthread

CPPFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/libpng
CFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/libpng
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ARGS+= --disable-neon

#CONFIGURE_ENV+= ac_cv_env_EGL_CFLAGS_set=''
#CONFIGURE_ENV+= ac_cv_env_EGL_CFLAGS_value=''
#CONFIGURE_ENV+= ac_cv_env_EGL_LIBS_set=''
#CONFIGURE_ENV+= ac_cv_env_EGL_LIBS_value=''

#CONFIGURE_ENV+= ac_cv_env_GLES1_CFLAGS_set=''
#CONFIGURE_ENV+= ac_cv_env_GLES1_CFLAGS_value=''
#CONFIGURE_ENV+= ac_cv_env_GLES1_LIBS_set=''
#CONFIGURE_ENV+= ac_cv_env_GLES1_LIBS_value=''

#CONFIGURE_ENV+= ac_cv_env_GLES2_CFLAGS_set=''
#CONFIGURE_ENV+= ac_cv_env_GLES2_CFLAGS_value=''
#CONFIGURE_ENV+= ac_cv_env_GLES2_LIBS_set=''
#CONFIGURE_ENV+= ac_cv_env_GLES2_LIBS_value=''

#CONFIGURE_ENV+= ac_cv_env_GL_CFLAGS_set=''
#CONFIGURE_ENV+= ac_cv_env_GL_CFLAGS_value=''
#CONFIGURE_ENV+= ac_cv_env_GL_LIBS_set=''
#CONFIGURE_ENV+= ac_cv_env_GL_LIBS_value=''

CONFIGURE_ARGS+=--disable-skins2 --disable-libtar
CONFIGURE_ARGS+= --disable-aa
CONFIGURE_ARGS+= --disable-alsa
CONFIGURE_ARGS+= --disable-bonjour
CONFIGURE_ARGS+= --disable-caca
CONFIGURE_ARGS+= --disable-debug
CONFIGURE_ARGS+= --disable-dirac
CONFIGURE_ARGS+= --disable-directfb
CONFIGURE_ARGS+= --disable-dvbpsi
CONFIGURE_ARGS+= --disable-dvdnav
CONFIGURE_ARGS+= --disable-dvdread
CONFIGURE_ARGS+= --disable-fluidsynth
CONFIGURE_ARGS+= --disable-gnomevfs
CONFIGURE_ARGS+= --disable-goom
CONFIGURE_ARGS+= --disable-jack
CONFIGURE_ARGS+= --disable-libcddb
CONFIGURE_ARGS+= --disable-libmpeg2
CONFIGURE_ARGS+= --disable-live555
CONFIGURE_ARGS+= --disable-lua
CONFIGURE_ARGS+= --disable-ncurses
CONFIGURE_ARGS+= --disable-projectm
CONFIGURE_ARGS+= --disable-pulse
CONFIGURE_ARGS+= --disable-schroedinger
CONFIGURE_ARGS+= --disable-skins2 --disable-libtar
CONFIGURE_ARGS+= --disable-smbclient
CONFIGURE_ARGS+= --disable-svg
CONFIGURE_ARGS+= --disable-telx
CONFIGURE_ARGS+= --disable-update-check
CONFIGURE_ARGS+= --disable-upnp
CONFIGURE_ARGS+= --disable-v4l2
CONFIGURE_ARGS+= --disable-vcd
CONFIGURE_ARGS+= --disable-zvbi

CONFIGURE_ARGS+= --enable-a52
CONFIGURE_ARGS+= --enable-avcodec
CONFIGURE_ARGS+= --enable-avformat

CONFIGURE_ARGS+= --enable-dbus

CONFIGURE_ARGS+= --enable-dca
CONFIGURE_ARGS+= --enable-dvbpsi
CONFIGURE_ARGS+= --enable-faad
CONFIGURE_ARGS+= --enable-flac
CONFIGURE_ARGS+= --enable-fontconfig
CONFIGURE_ARGS+= --enable-freetype
CONFIGURE_ARGS+= --enable-fribidi
CONFIGURE_ARGS+= --enable-libgcrypt
CONFIGURE_ARGS+= --enable-libxml2
CONFIGURE_ARGS+= --enable-mad --with-mad=${LOCALBASE}
CONFIGURE_ARGS+= --enable-mkv
CONFIGURE_ARGS+= --enable-mod
CONFIGURE_ARGS+= --enable-mpc
CONFIGURE_ARGS+= --enable-notify
CONFIGURE_ARGS+= --enable-ogg
CONFIGURE_ARGS+= --enable-optimizations
CONFIGURE_ARGS+= --enable-oss
CONFIGURE_ARGS+= --enable-png
CONFIGURE_ARGS+= --enable-postproc
CONFIGURE_ARGS+= --enable-realrtsp
CONFIGURE_ARGS+= --enable-run-as-root
CONFIGURE_ARGS+= --enable-sftp
CONFIGURE_ARGS+= --enable-shout
CONFIGURE_ARGS+= --enable-sout
CONFIGURE_ARGS+= --enable-speex
CONFIGURE_ARGS+= --enable-swscale
CONFIGURE_ARGS+= --disable-taglib
CONFIGURE_ARGS+= --enable-theora
CONFIGURE_ARGS+= --enable-twolame
CONFIGURE_ARGS+= --enable-vlc
CONFIGURE_ARGS+= --enable-vorbis
CONFIGURE_ARGS+= --enable-x264
CONFIGURE_ARGS+= --enable-xvideo


CONFIGURE_ARGS+= --enable-vpx
CONFIGURE_ARGS+= --disable-gst-decode
CONFIGURE_ARGS+= --disable-freerdp
CONFIGURE_ARGS+= --disable-shine
CONFIGURE_ARGS+= --disable-sid
CONFIGURE_ARGS+= --disable-mtp
CONFIGURE_ARGS+= --disable-svg
CONFIGURE_ARGS+= --disable-svgdec
CONFIGURE_ARGS+= --disable-libass

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --with-x

CONFIGURE_ARGS+= --disable-alsa
CONFIGURE_ARGS+= --disable-chromaprint
CONFIGURE_ARGS+= --disable-crystalhd
CONFIGURE_ARGS+= --disable-dc1394
CONFIGURE_ARGS+= --disable-decklink
CONFIGURE_ARGS+= --disable-directfb
CONFIGURE_ARGS+= --disable-dv1394
CONFIGURE_ARGS+= --disable-egl
CONFIGURE_ARGS+= --disable-fdkaac
CONFIGURE_ARGS+= --disable-gles1
CONFIGURE_ARGS+= --disable-gles2
CONFIGURE_ARGS+= --disable-kai
CONFIGURE_ARGS+= --disable-kva
CONFIGURE_ARGS+= --disable-libvnc
CONFIGURE_ARGS+= --disable-opencv
CONFIGURE_ARGS+= --disable-projectm
CONFIGURE_ARGS+= --disable-quicksync
CONFIGURE_ARGS+= --disable-silent-rules
CONFIGURE_ARGS+= --disable-telx
CONFIGURE_ARGS+= --disable-tiger
CONFIGURE_ARGS+= --disable-tremor
CONFIGURE_ARGS+= --disable-udev
CONFIGURE_ARGS+= --disable-update-check
CONFIGURE_ARGS+= --disable-vcdx
CONFIGURE_ARGS+= --disable-vsxu
CONFIGURE_ARGS+= --disable-wasapi
CONFIGURE_ARGS+= --disable-x26410b

CONFIGURE_ARGS+= --disable-gles2
CONFIGURE_ARGS+= --disable-gles1
CONFIGURE_ARGS+= --disable-vdpau


WITH_CDROM_DEVICE?=/dev/cd0
WITH_DVD_DEVICE?=/dev/cd0

CONFIGURE_ENV+= ac_cv_path_MOC=moc-qt4
CONFIGURE_ENV+= ac_cv_path_UIC=uic-qt4
CONFIGURE_ENV+= ac_cv_path_RCC=rcc-qt4

CONFIGURE_ENV+= QT_CFLAGS="-I${LOCALBASE}/include/Qt4 -I${LOCALBASE}/include/Qt4/QtCore -I${LOCALBASE}/include/Qt4/QtGui -DQT_SHARED"
CONFIGURE_ENV+= QT_LIBS="-L${LOCALBASE}/lib -lQtGui -lQtCore"

post-patch:
# XXX FreeBSD doesn't have strerror_l() - use the android version of error.c
	${CP} ${WRKSRC}/src/android/error.c ${WRKSRC}/src/posix

	${REINPLACE_CMD} \
		-e '\|LIBS|s|-lrt||' \
		-e 's|LIBS="-llirc_client|LIBS="$$LIBS_lirc|' \
		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|/dev/cdrom|${WITH_CDROM_DEVICE}|g' \
		-e 's|/dev/dvd|${WITH_DVD_DEVICE}|g' \
		${WRKSRC}/src/libvlc-module.c
	${RM} -rf ${WRKSRC}/modules/access/v4l2/linux
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|librsvg-2.0|librsvg|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|schroedinger-1.0|schroedinger|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|dbus-glib-1|dbus-glib|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|dbus-1|dbus|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libstartup-notification-1.0|libstartup-notification|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|librsvg-2.0|librsvg|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|schroedinger-1.0|schroedinger|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|-O4|-O2|g' 	${WRKSRC}/configure
#	${REINPLACE_CMD} -e 's|moc-qt4|moc|g' 	${WRKSRC}/configure
#	${REINPLACE_CMD} -e 's|qmake-qt4|qmake|g' 	${WRKSRC}/configure
#	${REINPLACE_CMD} -e 's|uic-qt4|uic|g' 	${WRKSRC}/configure
#	${REINPLACE_CMD} -e 's|rcc-qt4|rcc|g' 	${WRKSRC}/configure
#	${REINPLACE_CMD} -e 's|rcc44|rcc|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libproxy-1.0|libproxy|g' 	${WRKSRC}/configure


post-install:
#	@(cd ${STAGEDIR}${PREFIX} && ${FIND} -s lib/vlc -not -name '*.la' \
#		-type f -o -type l >> ${TMPPLIST})
#	${SETENV} PKG_PREFIX=${PREFIX} ${SH} -x \
#	    ${PKGINSTALL} ${PORTNAME} POST-INSTALL


post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  vlc.1 qvlc.1
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  vlc.1 cvlc.1
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  vlc.1 rvlc.1

.include <bsd.port.pre.mk>


#PLIST=	${PKGDIR}/pkg-plist.${ARCH}

.include <bsd.port.post.mk>
#EOF
