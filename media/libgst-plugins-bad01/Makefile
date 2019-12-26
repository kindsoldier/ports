#
# $Id#
#

PORTNAME=	gst-plugins-bad
PORTVERSION=	0.10.23
CATEGORIES=	multimedia
MASTER_SITES=	http://gstreamer.freedesktop.org/src/${PORTNAME}/ GNOME
PKGNAMEPREFIX=	lib
PKGNAMESUFFIX=  01

MAINTAINER=	onborodin@gmail.com
COMMENT=	Development framework for creating media applications

BUILD_DEPENDS=	gflex:devel/gflex
BUILD_DEPENDS=	bison:devel/bison

LIB_DEPENDS+= libcairo.so:gnome/libcairo
LIB_DEPENDS+= libcroco.so:text/libcroco

LIB_DEPENDS+= libdca.so:media/libdca
LIB_DEPENDS+= libexpat.so:text/libexpat

LIB_DEPENDS+= libfaac.so:media/libfaac
LIB_DEPENDS+= libfaad.so:media/libfaad

LIB_DEPENDS+= libffi.so:devel/libffi
LIB_DEPENDS+= libFLAC.so:media/libflac

LIB_DEPENDS+= libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+= libfreetype.so:graph/libfreetype2

LIB_DEPENDS+= libgdk-pixbuf.so:gnome/libgdk-pixbuf
LIB_DEPENDS+= libgdk-pixbuf.so:gnome/libgtk2

LIB_DEPENDS+= libgio.so:devel/libglib
LIB_DEPENDS+= libglib.so:devel/libglib
LIB_DEPENDS+= libgmodule.so:devel/libglib
LIB_DEPENDS+= libgobject.so:devel/libglib
LIB_DEPENDS+= libgraphite2.so:graph/libgraphite2

LIB_DEPENDS+= libgsm.so:media/libgsm

LIB_DEPENDS+= libgstaudio01.so:media/libgst-plugins-base01
LIB_DEPENDS+= libgstbase01.so:media/libgstreamer01
LIB_DEPENDS+= libgstfft01.so:media/libgst-plugins-base01
LIB_DEPENDS+= libgstinterfaces01.so:media/libgst-plugins-base01
LIB_DEPENDS+= libgstpbutils01.so:media/libgst-plugins-base01
LIB_DEPENDS+= libgstreamer01.so:media/libgstreamer01
LIB_DEPENDS+= libgstriff01.so:media/libgst-plugins-base01
LIB_DEPENDS+= libgstrtp01.so:media/libgst-plugins-base01
LIB_DEPENDS+= libgstsdp01.so:media/libgst-plugins-base01
LIB_DEPENDS+= libgsttag01.so:media/libgst-plugins-base01
LIB_DEPENDS+= libgstvideo01.so:media/libgst-plugins-base01

LIB_DEPENDS+= libgthread.so:devel/libglib
LIB_DEPENDS+= libharfbuzz-icu.so:gnome/libharfbuzz
LIB_DEPENDS+= libharfbuzz.so:gnome/libharfbuzz

LIB_DEPENDS+= libiconv.so:text/libiconv

LIB_DEPENDS+= libintl.so:devel/gettext
LIB_DEPENDS+= libjasper.so:graph/libjasper
LIB_DEPENDS+= libjpeg.so:graph/libjpeg
LIB_DEPENDS+= libkate.so:media/libkate
LIB_DEPENDS+= libmodplug.so:media/libmodplug
LIB_DEPENDS+= libmpcdec.so:media/libmusepack

LIB_DEPENDS+= libogg.so:media/libogg
LIB_DEPENDS+= liboggkate.so:media/libkate

LIB_DEPENDS+= liboggz.so:media/liboggz
LIB_DEPENDS+= libopus.so:media/libopus
LIB_DEPENDS+= libpango.so:gnome/libpango
LIB_DEPENDS+= libpangocairo.so:gnome/libpango
LIB_DEPENDS+= libpangoft2.so:gnome/libpango

LIB_DEPENDS+= libpcre.so:text/libpcre
LIB_DEPENDS+= libpixman.so:x11/libpixman
LIB_DEPENDS+= libpng.so:graph/libpng
LIB_DEPENDS+= librsvg.so:graph/librsvg

#LIB_DEPENDS+= libSDL_net.so:net/libSDL_net
#LIB_DEPENDS+= libSDL_sound.so:media/libSDL_sound
#LIB_DEPENDS+= libSDL.so:devel/libSDL

LIB_DEPENDS+= libsndfile.so:media/libsndfile
LIB_DEPENDS+= libspandsp.so:net/libspandsp
LIB_DEPENDS+= libtiff.so:graph/libtiff
LIB_DEPENDS+= libvdpau.so:media/libvdpau
#LIB_DEPENDS+= libvdpau.so:multimedia/libvdpau

LIB_DEPENDS+= libvorbis.so:media/libvorbis
LIB_DEPENDS+= libvorbisenc.so:media/libvorbis
LIB_DEPENDS+= libvorbisfile.so:media/libvorbis

LIB_DEPENDS+= libvpx.so:media/libvpx

LIB_DEPENDS+= libX11.so:x11/libX11
LIB_DEPENDS+= libXau.so:x11/libXau
LIB_DEPENDS+= libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+= libXext.so:x11/libXext
LIB_DEPENDS+= libxml2.so:text/libxml2
LIB_DEPENDS+= libXrender.so:x11/libXrender

LIB_DEPENDS+= libxvidcore.so:media/libxvid



USES+=		tar:xz
USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --disable-tests
CONFIGURE_ARGS+= --disable-examples
CONFIGURE_ARGS+= --disable-failing-tests
CONFIGURE_ARGS+= --disable-gtk-doc
CONFIGURE_ARGS+= --disable-nls

CPPFLAGS+=      -I${LOCALBASE}/include
LDFLAGS+=       -L${LOCALBASE}/lib
CONFIGURE_ENV+= ac_cv_func_register_printf_function="no"
CONFIGURE_ENV+= FLEX_PATH="${LOCALBASE}/bin/gflex"
USE_LDCONFIG=	yes

PLIST_SUB=	VERSION="${GST_VERSION}"
GST_VERSION=	0.10

MAKE_ARGS+= INSTALL_PROGRAM="install -o root -g wheel -m 555"
MAKE_ARGS+= INSTALL_SCRIPT="install  -o root -g wheel -m 555"

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
	${REINPLACE_CMD} -e 's,gstaudio-0.10,gstaudio01,g' 	${FILES}

	${REINPLACE_CMD} -e 's,librsvg-2.0,librsvg,g' 	${FILES}

.include <bsd.port.mk>
#EOF
