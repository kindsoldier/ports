#
# $Id$
#
PORTNAME=	webkit
PORTVERSION=	2.4.11
CATEGORIES=	www
MASTER_SITES=	http://webkitgtk.org/releases/
PKGNAMESUFFIX=	-gtk2
DISTNAME=	${PORTNAME}gtk-${PORTVERSION}
PKGNAMEPREFIX=	lib

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Opensource browser engine using the GTK+ 2 toolkit

LIB_DEPENDS+=	libenchant.so:text/libenchant
LIB_DEPENDS+=	libcurl.so:net/libcurl

LIB_DEPENDS+= libgstaudio.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstpbutils.so:media/libgst-plugins-base
LIB_DEPENDS+= libgsttag.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstvideo.so:media/libgst-plugins-base

LIB_DEPENDS+= libgstreamer.so:media/libgstreamer
LIB_DEPENDS+= libgstbase.so:media/libgstreamer

LIB_DEPENDS+=	libsqlite3.so:data/sqlite3
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libsoup.so:gnome/libsoup
LIB_DEPENDS+=	libicui18n.so:devel/libicu
LIB_DEPENDS+=	libicuuc.so:devel/libicu
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+=	libGL.so:graph/libmesa
LIB_DEPENDS+=	libglapi.so:graph/libmesa
LIB_DEPENDS+=	libxshmfence.so:x11/libxshmfence
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libsecret.so:crypto/libsecret

LIB_DEPENDS+=	libwebp.so:graph/libwebp
LIB_DEPENDS+=	libXt.so:x11/libXt

BUILD_DEPENDS+= gperf:devel/gperf
BUILD_DEPENDS+= gflex:devel/gflex

#BUILD_DEPENDS+= ruby:lang/ruby

USES+=		perl5 gmake tar:xz ruby
USE_PERL5=	build
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_path_DOLT_BASH=""
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
INSTALL_TARGET=	install-strip

CONFIGURE_ARGS+= --disable-debug-symbols
CONFIGURE_ARGS+= --disable-debug
CONFIGURE_ARGS+= --disable-egl
CONFIGURE_ARGS+= --disable-gles2
CONFIGURE_ARGS+= --disable-geolocation
CONFIGURE_ARGS+= --disable-introspection
CONFIGURE_ARGS+= --disable-silent-rules
CONFIGURE_ARGS+= --disable-webkit2
CONFIGURE_ARGS+= --enable-svg-fonts
CONFIGURE_ARGS+= --disable-fast-malloc

CONFIGURE_ARGS+= --with-html-dir=${PREFIX}/share/gtk-doc/html/webkit
CONFIGURE_ARGS+= --with-gtk=2.0

MAKEFILE=	GNUmakefile
MAKE_ENV=	XDG_CACHE_HOME=${WRKDIR}


SHEBANG_FILES= \
	Source/JavaScriptCore/create_hash_table \
	Source/JavaScriptCore/inspector/scripts/xxd.pl \
	Source/WebCore/css/*.pl \
	Source/WebCore/dom/*.pl \
	Source/WebCore/make-hash-tools.pl \
	Source/WebCore/page/make_settings.pl \
	Source/WebCore/platform/text/mac/make-charset-table.pl \
	Source/WebKit2/Scripts/generate-forwarding-headers.pl \
	Source/WebCore/bindings/scripts/*.p[lm] \
	Source/JavaScriptCore/create_hash_table

BROWSER_PLUGINS_DIR?=  ${LOCALBASE}/lib/browser-plugins/webkit-gtk2

.include <bsd.port.options.mk>

.if ${ARCH} == powerpc64
CFLAGS+=	-mminimal-toc
.endif

.if ${ARCH} == armv6
CXXFLAGS+= -DWTF_CPU_ARM_TRADITIONAL=1 
CXXFLAGS+= -DCPU_ARM_TRADITIONAL=1
CXXFLAGS+= -DARM_TRADITIONAL=1

CFLAGS+= -DWTF_CPU_ARM_TRADITIONAL=1 
CFLAGS+= -DCPU_ARM_TRADITIONAL=1
CFLAGS+= -DARM_TRADITIONAL=1
.endif


.include <bsd.port.pre.mk>

CONFIGURE_ENV+=	FLEX="${LOCALBASE}/bin/gflex"
#CXXFLAGS+=	-Wno-c++11-extensions # Shutup warning spam
#CXXFLAGS+=	-Qunused-arguments

FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/*/*/*/*.in
FILES+= ${WRKSRC}/GNUmake*.in

.if ${ARCH} == i386 && ! ${CFLAGS:M-march=*}
# Needed for __atomic_fetch_add_8
CFLAGS+=	-march=i586
.endif

#.if ${CHOSEN_COMPILER_TYPE} == clang
CXXFLAGS+=	-Wno-c++11-extensions # Shutup warning spam
CXXFLAGS+=	-Qunused-arguments
#.endif


post-patch:
	${REINPLACE_CMD} -e 's|%%BROWSER_PLUGINS_DIR%%|${BROWSER_PLUGINS_DIR}|' \
		${WRKSRC}/Source/WebCore/plugins/PluginDatabase.cpp

	${REINPLACE_CMD} -e 's,module-2.0,module,g' 	${FILES}
	${REINPLACE_CMD} -e 's,-\\$$GTK_API_VERSION,,g' 	${FILES}
	${REINPLACE_CMD} -e 's,-$$GTK_API_VERSION,,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gconf-2.0,gconf,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gdk-2.0,gdk,g' 		${FILES}
	${REINPLACE_CMD} -e 's,gdk-pixbuf-2.0,gdk-pixbuf,g' ${FILES}
	${REINPLACE_CMD} -e 's,gio-2.0,gio,g' 		${FILES}
	${REINPLACE_CMD} -e 's,gio-unix-2.0,gio-unix,g' 		${FILES}
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gmodule-2.0,gmodule,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gnome-vfs-2.0,gnome-vfs,g' ${FILES}
	${REINPLACE_CMD} -e 's,gobject-2.0,gobject,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gthread-2.0,gthread,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gtk+-2.0,gtk+,g' 	${FILES}
	${REINPLACE_CMD} -e 's,libIDL-2.0,libIDL,g' 	${FILES}
	${REINPLACE_CMD} -e 's,libgnome-2.0,libgnome,g' ${FILES}
	${REINPLACE_CMD} -e 's,libxml-2.0,libxml2,g' 	${FILES}
	${REINPLACE_CMD} -e 's,libart-2.0,libart,g' 	${FILES}

	${REINPLACE_CMD} -e 's,libglade-2.0,libglade,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gladeui-1.0,gladeui,g' 	${FILES}
	${REINPLACE_CMD} -e 's,libxfce4util-1.0,libxfce4util,g' 	${FILES}
	${REINPLACE_CMD} -e 's,libstartup-notification-1.0,libstartup-notification,g' 	${FILES}
	${REINPLACE_CMD} -e 's,xfconf-0,xfconf,g' 	${FILES}
	${REINPLACE_CMD} -e 's,exo-0.3,exo,g' 		${FILES}
	${REINPLACE_CMD} -e 's,dbus-1,dbus,g' 		${FILES}
	${REINPLACE_CMD} -e 's,dbus-glib-1,dbus-glib,g' ${FILES}
	${REINPLACE_CMD} -e 's,libwnck-1.0,libwnck,g' 	${FILES}
	${REINPLACE_CMD} -e 's,xfprint-1.0,xfprint,g' 	${FILES}
	${REINPLACE_CMD} -e 's,xfcegui4-1.0,xfcegui4,g' ${FILES}
	${REINPLACE_CMD} -e 's,libxfce4menu-0.1,libxfce4menu,g' 	${FILES}
	${REINPLACE_CMD} -e 's,xfce4panel-1.0,xfce4panel,g' 	${FILES}
	${REINPLACE_CMD} -e 's,thunarx-1,thunarx,g' 		${FILES}
	${REINPLACE_CMD} -e 's,thunar-vfs-1,thunar-vfs,g' 	${FILES}

	${REINPLACE_CMD} -e 's,gtk+-unix-print-2.0,gtk+-unix-print,g' 	${FILES}

	${REINPLACE_CMD} -e 's,gconftool-2,gconftool,g' ${FILES}

	${REINPLACE_CMD} -e 's,libsoup-2.4,libsoup,g' ${FILES}
	${REINPLACE_CMD} -e 's,webkit-1.0,webkit,g' ${FILES}

	${REINPLACE_CMD} -e 's,gstreamer-1.0,gstreamer,g' ${FILES}
	${REINPLACE_CMD} -e 's,gstreamer-plugins-base-1.0,gstreamer-plugins-base,g' ${FILES}
	${REINPLACE_CMD} -e 's,gstreamer-app-1.0,gstreamer-app,g' ${FILES}
	${REINPLACE_CMD} -e 's,gstreamer-audio-1.0,gstreamer-audio,g' ${FILES}
	${REINPLACE_CMD} -e 's,gstreamer-fft-1.0,gstreamer-fft,g' ${FILES}
	${REINPLACE_CMD} -e 's,gstreamer-base-1.0,gstreamer-base,g' ${FILES}
	${REINPLACE_CMD} -e 's,gstreamer-pbutils-1.0,gstreamer-pbutils,g' ${FILES}
	${REINPLACE_CMD} -e 's,gstreamer-video-1.0,gstreamer-video,g' ${FILES}

	${REINPLACE_CMD} -e 's,-$${WEBKITGTK_API_VERSION},,g' ${FILES}
	${REINPLACE_CMD} -e 's,-@WEBKITGTK_API_VERSION@,,g' ${FILES}

	${REINPLACE_CMD} -e 's,-@WEBKITGTK_API_MAJOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,.@WEBKITGTK_API_MINOR_VERSION@.la,.la,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@WEBKITGTK_API_MAJOR_VERSION@.la,.la,g' ${FILES}

	${REINPLACE_CMD} -e 's,-$$GST_API_VERSION,,g' ${WRKSRC}/configure

	${REINPLACE_CMD} -e 's,gstreamer-plugins-base-$$GST_API_VERSION,gstreamer-plugins-base,g'  ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,gstreamer-plugins-base-\\$$GST_API_VERSION,gstreamer-plugins-base,g'  ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,gstreamer-plugins-base$$GST_API_VERSION,gstreamer-plugins-base,g'  ${WRKSRC}/configure


	${REINPLACE_CMD} -e 's,libsecret-1,libsecret,g' ${FILES}
	${REINPLACE_CMD} -e 's,geoclue-2.0,geoclude,g' ${FILES}
	${REINPLACE_CMD} -e 's,gio-unix-2.0,gio-unix,g' 		${FILES}

#post-install:
#	${INSTALL_PROGRAM} ${WRKSRC}/Programs/GtkLauncher \
#		${STAGEDIR}${PREFIX}/bin/GtkLauncher

.include <bsd.port.post.mk>
#EOF
