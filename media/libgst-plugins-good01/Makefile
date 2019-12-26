#
# $Id#
#

PORTNAME=	gst-plugins-good
PORTVERSION=	0.10.31
CATEGORIES=	multimedia
MASTER_SITES=	http://gstreamer.freedesktop.org/src/${PORTNAME}/ GNOME
PKGNAMEPREFIX=	lib
PKGNAMESUFFIX=  01

MAINTAINER=	onborodin@gmail.com
COMMENT=	Development framework for creating media applications

BUILD_DEPENDS=	gflex:devel/gflex
BUILD_DEPENDS=	bison:devel/bison

LIB_DEPENDS+=	libsoup-gnome.so:gnome/libsoup
LIB_DEPENDS+=	libwavpack.so:media/libwavpack

LIB_DEPENDS+=	libglib.so:devel/libglib

LIB_DEPENDS+=	libFLAC.so:media/libflac
LIB_DEPENDS+=	libgstaudio01.so:media/libgst-plugins-base01

LIB_DEPENDS+=	libgstfft01.so:media/libgst-plugins-base01
LIB_DEPENDS+=	libgstinterfaces01.so:media/libgst-plugins-base01
LIB_DEPENDS+=	libgstnetbuffer01.so:media/libgst-plugins-base01
LIB_DEPENDS+=	libgstpbutils01.so:media/libgst-plugins-base01
LIB_DEPENDS+=	libgstriff01.so:media/libgst-plugins-base01
LIB_DEPENDS+=	libgstrtp01.so:media/libgst-plugins-base01
LIB_DEPENDS+=	libgstrtsp01.so:media/libgst-plugins-base01
LIB_DEPENDS+=	libgstsdp01.so:media/libgst-plugins-base01
LIB_DEPENDS+=	libgsttag01.so:media/libgst-plugins-base01
LIB_DEPENDS+=	libgstvideo01.so:media/libgst-plugins-base01

LIB_DEPENDS+=	libgstbase01.so:media/libgstreamer01

LIB_DEPENDS+=	libogg.so:media/libogg
LIB_DEPENDS+=	libspeex.so:media/libspeex
LIB_DEPENDS+=	libtag.so:media/libtag


USES+=		tar:xz
USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --disable-tests
CONFIGURE_ARGS+= --disable-examples
CONFIGURE_ARGS+= --disable-failing-tests
CONFIGURE_ARGS+= --disable-gtk-doc

CPPFLAGS+=      -I${LOCALBASE}/include
LDFLAGS+=       -L${LOCALBASE}/lib
#CONFIGURE_ENV+= ac_cv_func_register_printf_function="no"
CONFIGURE_ENV+= FLEX_PATH="${LOCALBASE}/bin/gflex"
USE_LDCONFIG=	yes

PLIST_SUB=	VERSION="${GST_VERSION}"
GST_VERSION=	0.10

MAKE_ARGS+= INSTALL_PROGRAM="install -o root -g wheel -m 555"
MAKE_ARGS+= INSTALL_SCRIPT="install  -o root -g wheel -m 555"

CONFIGURE_ARGS+= --without-check
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --disable-debug
CONFIGURE_ARGS+= --disable-silent-rules
CONFIGURE_ARGS+= --disable-aalib
CONFIGURE_ARGS+= --disable-aalibtest
CONFIGURE_ARGS+= --disable-directsound
CONFIGURE_ARGS+= --disable-dv1394
CONFIGURE_ARGS+= --disable-esd
CONFIGURE_ARGS+= --disable-flx
CONFIGURE_ARGS+= --disable-gconf
CONFIGURE_ARGS+= --disable-gconftool
CONFIGURE_ARGS+= --disable-gdk_pixbuf
CONFIGURE_ARGS+= --disable-gdk_pixbuf3
CONFIGURE_ARGS+= --disable-goom
CONFIGURE_ARGS+= --disable-goom2k1
CONFIGURE_ARGS+= --disable-gst_v4l2
CONFIGURE_ARGS+= --disable-hal
CONFIGURE_ARGS+= --disable-libcaca
CONFIGURE_ARGS+= --disable-libdv
CONFIGURE_ARGS+= --disable-osx_audio
CONFIGURE_ARGS+= --disable-osx_video
CONFIGURE_ARGS+= --disable-pulse
CONFIGURE_ARGS+= --disable-shout2
CONFIGURE_ARGS+= --disable-sunaudio
CONFIGURE_ARGS+= --disable-valgrind

FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in
FILES+= ${WRKSRC}/*/*/*/Makefile.in
FILES+= ${WRKSRC}/pkgconfig/*.pc.in
FILES+= ${WRKSRC}/po/Makevars

post-patch:
	${REINPLACE_CMD} -e 's,gio-2.0,gio,g' 		${FILES}
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gmodule-2.0,gmodule,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gobject-2.0,gobject,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gthread-2.0,gthread,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gmodule-no-export-2.0,gmodule-no-export,g' 	${FILES}

	${REINPLACE_CMD} -e 's,-@GST_MAJORMINOR@,01,g' 	${FILES}
	${REINPLACE_CMD} -e 's,_@GST_MAJORMINOR@,01,g' 	${FILES}
	${REINPLACE_CMD} -e 's,-$$(GST_MAJORMINOR),01,g' 	${FILES}
	${REINPLACE_CMD} -e 's,-$$GST_MAJORMINOR,01,g' 	${FILES}

	${REINPLACE_CMD} -e 's,gir-1.0,gir,g' 	${FILES}
	${REINPLACE_CMD} -e 's,girepository-1.0,girepository,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gstpbutils-0.10,gstpbutils01,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gstinterfaces-0.10,gstinterfaces01,g' 	${FILES}

.include <bsd.port.mk>
#EOF
