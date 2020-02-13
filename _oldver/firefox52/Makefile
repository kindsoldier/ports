#
# $Id$
#
PORTNAME=	firefox
DISTVERSION=	52.6.0
DISTVERSIONSUFFIX=esr.source
CATEGORIES=	www
MASTER_SITES+=	MOZILLA/${PORTNAME}/releases/${DISTVERSION}esr/source
MASTER_SITES+=	MOZILLA/${PORTNAME}/candidates/${DISTVERSION}esr-candidates/build2/source

MAINTAINER=	onborodin@gmail.com
COMMENT=	Web browser based on the browser portion of Mozilla


RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libsqlite3.so:data/sqlite3
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libevent.so:devel/libevent
LIB_DEPENDS+=	libffi.so:devel/libffi
LIB_DEPENDS+=	libgio.so:devel/libglib
LIB_DEPENDS+=	libgthread.so:devel/libglib
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libharfbuzz.so:gnome/libharfbuzz
LIB_DEPENDS+=	libpango.so:gnome/libpango
LIB_DEPENDS+=	libpangocairo.so:gnome/libpango
LIB_DEPENDS+=	libpangoft2.so:gnome/libpango
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libogg.so:media/libogg
#LIB_DEPENDS+=	libopus.so:media/libopus
LIB_DEPENDS+=	libvorbis.so:media/libvorbis
LIB_DEPENDS+=	libvorbisenc.so:media/libvorbis
LIB_DEPENDS+=	libhunspell.so:text/hunspell
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libiconv.so:text/libiconv
#LIB_DEPENDS+=	libicudata.so:devel/libicu
#LIB_DEPENDS+=	libicui18n.so:devel/libicu
#LIB_DEPENDS+=	libicuuc.so:devel/libicu
LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libstartup-notification.so:xfce/libstartup-notification
LIB_DEPENDS+=	libvpx.so:media/libvpx
#LIB_DEPENDS+=	libvorbisdec.so:media/libtremor

BUILD_DEPENDS+=	autoconf213:devel/autoconf213

WRKSRC:=		${WRKDIR}/${PORTNAME}-${DISTVERSION}esr

USES+=		tar:xz gmake
GNU_CONFIGURE=	yes

.include <bsd.port.pre.mk>

MOZILLA=	${PORTNAME}
MOZILLA_NAME=	Firefox

CONFIGURE_TARGET:=${ARCH:C/amd64/x86_64/}-portbld-${OPSYS:tl}${OSREL}
AUTOCONF=	autoconf213
ALL_TARGET=	build


MOZ_OBJDIR:=	${WRKSRC}/_obj
MOZ_MK_OPTIONS+= MOZ_OBJDIR=${MOZ_OBJDIR}

MOZ_OPTIONS+= --x-libraries=${LOCALBASE}/lib
MOZ_OPTIONS+= --x-includes=${LOCALBASE}/include
MOZ_OPTIONS+= --disable-pulseaudio
MOZ_OPTIONS+= --disable-rust

MOZ_OPTIONS+= --enable-application=browser
MOZ_OPTIONS+= --enable-official-branding

MOZ_OPTIONS+= --enable-strip
MOZ_OPTIONS+= --enable-install-strip
MOZ_OPTIONS+= --disable-webrtc
MOZ_OPTIONS+= --disable-debug
MOZ_OPTIONS+= --disable-debug-symbols
MOZ_OPTIONS+= --disable-dtrace
MOZ_OPTIONS+= --disable-gconf
MOZ_OPTIONS+= --disable-gnomeui
MOZ_OPTIONS+= --disable-libproxy
MOZ_OPTIONS+= --disable-profiling
MOZ_OPTIONS+= --disable-pulseaudio
MOZ_OPTIONS+= --disable-tests
MOZ_OPTIONS+= --disable-updater

MOZ_OPTIONS+= --enable-chrome-format=omni
MOZ_OPTIONS+= --enable-default-toolkit=cairo-gtk2
MOZ_OPTIONS+= --enable-extensions=default
MOZ_OPTIONS+= --enable-gio
MOZ_OPTIONS+= --enable-install-strip
MOZ_OPTIONS+= --enable-necko-protocols=default
MOZ_OPTIONS+= --enable-official-branding
MOZ_OPTIONS+= --enable-release
MOZ_OPTIONS+= --enable-startup-notification
MOZ_OPTIONS+= --enable-strip
MOZ_OPTIONS+= --enable-system-cairo
MOZ_OPTIONS+= --enable-system-ffi
MOZ_OPTIONS+= --enable-system-hunspell
MOZ_OPTIONS+= --enable-system-pixman
MOZ_OPTIONS+= --enable-system-sqlite

MOZ_OPTIONS+= --with-intl-api
MOZ_OPTIONS+= --with-pthreads
MOZ_OPTIONS+= --with-system-jpeg=${LOCALBASE}
MOZ_OPTIONS+= --with-system-libevent
MOZ_OPTIONS+= --with-system-zlib
MOZ_OPTIONS+= --with-system-bz2

#MOZ_OPTIONS+= --with-system-ogg
#MOZ_OPTIONS+= --with-system-vorbis
#MOZ_OPTIONS+= --with-system-tremor
#MOZ_OPTIONS+= --with-system-theora
MOZ_OPTIONS+= --with-system-libvpx

MOZ_OPTIONS+= --with-oss
MOZ_OPTIONS+= --prefix="${PREFIX}"
#MOZ_OPTIONS+= ${CONFIGURE_TARGET}

MOZ_EXPORT+= PERL="${PERL}"
MOZ_EXPORT+= ac_cv_path_PERL=${PERL}
MOZ_EXPORT+= ac_cv_path_PERL_PATH=${PERL}
MOZ_EXPORT+= PERL_USE_UNSAFE_INC=1
MOZ_EXPORT+= PKG_CONFIG=pkgconf
MOZ_EXPORT+= PYTHON=${LOCALBASE}/bin/python2.7
MOZ_EXPORT+= XDG_DATA_HOME=${WRKDIR}
MOZ_EXPORT+= XDG_CONFIG_HOME=${WRKDIR}
MOZ_EXPORT+= HOME=${WRKDIR}
MOZ_EXPORT+= SHELL=/bin/sh
MOZ_EXPORT+= CONFIG_SHELL=/bin/sh
MOZ_EXPORT+= MOZ_JEMALLOC3=1
MOZ_EXPORT+= MOZ_JEMALLOC4=1
MOZ_EXPORT+= MOZ_GOOGLE_API_KEY=AIzaSyBsp9n41JLW8jCokwn7vhoaMejDFRd1mp8

CFLAGS+= -O2
MOZ_OPTIONS+= --enable-optimize="-O2"
MOZ_MK_OPTIONS+= MOZ_MAKE_FLAGS="-j${MAKE_JOBS_NUMBER}"

MAKE_CMD=	gmake
MOZCONFIG=	${WRKSRC}/.mozconfig

CONFIGURE_ENV+= CC=clang
CONFIGURE_ENV+= CXX=clang++

BUILD_WRKSRC=${MOZ_OBJDIR}


FILES= ${WRKSRC}/old-configure

do-configure:
	cd ${WRKSRC} && ${LOCALBASE}/bin/autoconf213 old-configure.in > old-configure
	cd ${WRKSRC}/js/src && ${LOCALBASE}/bin/autoconf213 old-configure.in > old-configure

	${REINPLACE_CMD} -e 's|pixman-1|pixman|g'	${FILES}
	${REINPLACE_CMD} -e 's|bonobo-2.0|bonobo|g'	${FILES}
	${REINPLACE_CMD} -e 's|bonobo-activation-2.0|bonobo-activation|g'	${FILES}
	${REINPLACE_CMD} -e 's|dbus-1|dbus|g' 		${FILES}
	${REINPLACE_CMD} -e 's|dbus-glib-1|dbus-glib|g' ${FILES}
	${REINPLACE_CMD} -e 's|exo-0.3|exo|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconf-2|gconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconf-sanity-check-2|gconf-sanity-check|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconfd-2|gconfd|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconftool-2|gconftool|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gdk-x11-2.0|gdk-x11|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gtk-x11-2.0|gtk-x11|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' ${FILES}
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' ${FILES}
	${REINPLACE_CMD} -e 's|gladeui-1.0|gladeui|g' 	${FILES}
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gmodule-export-2.0|gmodule-export|g'	${FILES}
	${REINPLACE_CMD} -e 's|gmodule-no-export-2.0|gmodule-no-export|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gnome-2.0|gnome|g'	${FILES}
	${REINPLACE_CMD} -e 's|gnome-2|gnome|g'	${FILES}
	${REINPLACE_CMD} -e 's|gnome-keyring-1|gnome-keyring|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${FILES}
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gtk+-unix-print-2.0|gtk+-unix-print|g' ${FILES}
	${REINPLACE_CMD} -e 's|libIDL-2.0|libIDL|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libart-2.0|libart|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libglade-2.0|libglade|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libgnome-2.0|libgnome|g' ${FILES}
	${REINPLACE_CMD} -e 's|libgnomeui-2.0|libgnomeui|g'	${FILES}
	${REINPLACE_CMD} -e 's|libgnomeui-2.0|libgnomeui|g'	${FILES}
	${REINPLACE_CMD} -e 's|libgnomeui-2.0|libgnomeui|g'	${FILES}
	${REINPLACE_CMD} -e 's|libgtop-2.0|libgtop|g'	${FILES}
	${REINPLACE_CMD} -e 's|libsoup-gnome-2.4|libsoup-gnome|g' ${FILES}
	${REINPLACE_CMD} -e 's|libstartup-notification-1.0|libstartup-notification|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libwnck-1.0|libwnck|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libxfce4menu-0.1|libxfce4menu|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libxfce4util-1.0|libxfce4util|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${FILES}
	${REINPLACE_CMD} -e 's|soup-2.4|soup|g' 	${FILES}
	${REINPLACE_CMD} -e 's|soup-gnome-2.4|soup-gnome|g' 	${FILES}
	${REINPLACE_CMD} -e 's|unique-1.0|unique|g'	${FILES}
	${REINPLACE_CMD} -e 's|webkit-1.0|webkit|g' ${FILES}
	${REINPLACE_CMD} -e 's|xfce4panel-1.0|xfce4panel|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfcegui4-1.0|xfcegui4|g' ${FILES}
	${REINPLACE_CMD} -e 's|xfconf-0|xfconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfprint-1.0|xfprint|g' 	${FILES}

	${RM} -f ${MOZCONFIG}
	@for opt in ${MOZ_OPTIONS}; do echo "ac_add_options $${opt}" >> ${MOZCONFIG};done
	@for moz_opt in ${MOZ_MK_OPTIONS}; do echo "mk_add_options $${moz_opt}" >> ${MOZCONFIG};done
	@for moz_exp in ${MOZ_EXPORT}; do echo "export $${moz_exp}" >> ${MOZCONFIG};done
	${MKDIR} ${MOZ_OBJDIR}

	cd ${MOZ_OBJDIR} && ${SETENV} ${CONFIGURE_ENV} ../configure ${CONFIGURE_ARGS}


do-build:
	cd ${MOZ_OBJDIR} && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS}

do-install:
	cd ${MOZ_OBJDIR} && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} ${INSTALL_TARGET} \
	        DESTDIR=${STAGEDIR}

MOZILLA_ICON=	${MOZILLA}.png
MOZILLA_ICON_SRC=	${PREFIX}/lib/${MOZILLA}/chrome/icons/default/default48.png
MOZILLA_ICON_SRC_DIR=${WRKSRC}/browser/branding/official/


post-install:
	${SED} -e 's|@MOZILLA_ICON@|${MOZILLA_ICON}|;s|@MOZILLA_NAME@|${MOZILLA_NAME}|;s|@MOZILLA@|${MOZILLA}|' \
		< ${FILESDIR}/${MOZILLA}.desktop.in > ${WRKDIR}/${MOZILLA}.desktop

	${MKDIR} ${STAGEDIR}${PREFIX}/share/applications
	${INSTALL_DATA} ${WRKDIR}/${MOZILLA}.desktop ${STAGEDIR}${PREFIX}/share/applications
	${MKDIR} ${STAGEDIR}${PREFIX}/share/pixmaps
	${INSTALL_DATA} ${MOZILLA_ICON_SRC_DIR}/default48.png \
		${STAGEDIR}${PREFIX}/share/pixmaps/${MOZILLA_ICON}
	${INSTALL_DATA} ${MOZILLA_ICON_SRC_DIR}/default48.png \
	    ${STAGEDIR}${PREFIX}/share/pixmaps/${MOZILLA}.png

.for N in 16 22 24 32 48 256
	${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/hicolor/${N}x${N}/apps
	${INSTALL_DATA} ${MOZILLA_ICON_SRC_DIR}/default${N}.png \
	    ${STAGEDIR}${PREFIX}/share/icons/hicolor/${N}x${N}/apps/${MOZILLA}.png
.endfor

.include <bsd.port.post.mk>
#EOF

