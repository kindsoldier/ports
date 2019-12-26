#
# $Id: Makefile 2391 2009-09-11 17:57:53Z root $
# $URL: file:///usr2/svn/ports5/gnome-libs/libcairo/Makefile $
#
PORTNAME=	cairo
PORTVERSION=	1.14.8
CATEGORIES=	graphics
#MASTER_SITES=	http://cairographics.org/releases/
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Vector graphics library with cross-device output support

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libffi.so:devel/libffi
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib

LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libpng.so:graph/libpng

LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXrender.so:x11/libXrender
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+=	libpixman.so:x11/libpixman

LIB_DEPENDS+= libxcb-render-util.so:x11/libxcb-util-renderutil

LIBS+= -lXrender -lX11  -lXext

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/fontsproto.pc:xproto/fontsproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/randrproto.pc:xproto/randrproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/renderproto.pc:xproto/renderproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xextproto.pc:xproto/xextproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto


USES+=		tar:xz
GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --with-html-dir=${DOCSDIR} 

CONFIGURE_ARGS+= --enable-directfb=no
CONFIGURE_ARGS+= --enable-drm-xr=no
CONFIGURE_ARGS+= --enable-drm=no
CONFIGURE_ARGS+= --enable-egl=auto
CONFIGURE_ARGS+= --enable-fc=yes
CONFIGURE_ARGS+= --enable-ft=yes
CONFIGURE_ARGS+= --enable-gl=no
CONFIGURE_ARGS+= --enable-glx=no
CONFIGURE_ARGS+= --enable-gobject=auto
CONFIGURE_ARGS+= --enable-interpreter=yes
CONFIGURE_ARGS+= --enable-png=yes
CONFIGURE_ARGS+= --enable-ps=yes
CONFIGURE_ARGS+= --enable-pdf=yes
CONFIGURE_ARGS+= --enable-svg=yes
CONFIGURE_ARGS+= --enable-pthread=yes
CONFIGURE_ARGS+= --enable-script=no
CONFIGURE_ARGS+= --enable-symbol-lookup=auto
CONFIGURE_ARGS+= --enable-tee=yes
CONFIGURE_ARGS+= --enable-test-surfaces=no
CONFIGURE_ARGS+= --enable-trace=no
CONFIGURE_ARGS+= --enable-vg=no
CONFIGURE_ARGS+= --enable-wgl=auto
CONFIGURE_ARGS+= --enable-xcb-drm=no
CONFIGURE_ARGS+= --enable-xml=no

CONFIGURE_ARGS+= --enable-xcb=yes
CONFIGURE_ARGS+= --enable-xlib-xcb=yes

INSTALLS_SHLIB=	yes
CPPFLAGS+=	${PTHREAD_CFLAGS} -I${LOCALBASE}/include
CFLAGS+=	${PTHREAD_CFLAGS} -I${LOCALBASE}/include
LDFLAGS+=	${PTHREAD_LIBS} -L${LOCALBASE}/lib


post-patch:
.for file in configure
	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${WRKSRC}/${file}
	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${WRKSRC}/${file}
	${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' ${WRKSRC}/${file}
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${WRKSRC}/${file}
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${WRKSRC}/${file}
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${WRKSRC}/${file}
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' 	${WRKSRC}/${file}
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${WRKSRC}/${file}
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${WRKSRC}/${file}
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${WRKSRC}/${file}
	${REINPLACE_CMD} -e 's|libIDL-2.0|libIDL|g' 	${WRKSRC}/${file}
	${REINPLACE_CMD} -e 's|libgnome-2.0|libgnome|g' ${WRKSRC}/${file}
	${REINPLACE_CMD} -e 's|libgnomeui-2.0|libgnomeui|g' 	${WRKSRC}/${file}
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${WRKSRC}/${file}
	${REINPLACE_CMD} -e 's|gtk+-unix-print-2.0|gtk+-unix-print|g' 	${WRKSRC}/${file}
	${REINPLACE_CMD} -e 's|gdk-x11-2.0|gdk-x11|g' 	${WRKSRC}/${file}
	${REINPLACE_CMD} -e 's|pango.4:.0|pango|g' 	${WRKSRC}/${file}
	${REINPLACE_CMD} -e 's|pixman-1|pixman|g' 	${WRKSRC}/${file}
	${REINPLACE_CMD} -e 's|rsvg-2.0|rsvg|g' 	${WRKSRC}/${file}
	${REINPLACE_CMD} -e 's|CAIRO_LIBTOOL_VERSION_INFO=.*|CAIRO_LIBTOOL_VERSION_INFO=8:0:8|g' 	${WRKSRC}/${file}
.endfor


	${REINPLACE_CMD} -e '/^DIST_SUBDIRS/s, test,,' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
#EOF
