#
# $Id$
#
PORTNAME?=	gdk-pixbuf
PORTVERSION=	2.36.6
MASTER_SITES=	GNOME
CATEGORIES=	graphics
MASTER_SITE_SUBDIR=	sources/gdk-pixbuf/${PORTVERSION:R}
DISTNAME=	gdk-pixbuf-${PORTVERSION}
DIST_SUBDIR=	gnome
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT?=	A graphic library for GTK+

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libffi.so:devel/libffi
LIB_DEPENDS+=	libgio.so:devel/libglib
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgmodule.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib

LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libtiff.so:graph/libtiff
LIB_DEPENDS+=	libjasper.so:graph/libjasper

LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre

USES+=		tar:xz
USES+=		gmake
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-html-dir=${PREFIX}/share/doc --disable-gtk-doc
CONFIGURE_ARGS+= --disable-Bsymbolic
CONFIGURE_ARGS+= --disable-dependency-tracking
CONFIGURE_ARGS+= --disable-glibtest
CONFIGURE_ARGS+= --disable-silent-rules
CONFIGURE_ARGS+= --without-libjasper
CFLAGS+=	-I${LOCALBASE}/include  -I${LOCALBASE}/include/libpng
CPPFLAGS+=	-I${LOCALBASE}/include  -I${LOCALBASE}/include/libpng
LIBS+=		-L${LOCALBASE}/lib
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.pre.mk>

FILES+= ${WRKSRC}/configure 
FILES+= ${WRKSRC}/Makefile.in ${WRKSRC}/*/Makefile.in ${WRKSRC}/*/*/Makefile.in
FILES+= ${WRKSRC}/*.pc.in ${WRKSRC}/*/*/*.pc.in

post-patch:
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk|g' ${FILES}
	${REINPLACE_CMD} -e 's|gdk+-2.0|gdk|g' ${FILES}
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' ${FILES}
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' ${FILES}
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' ${FILES}
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' ${FILES}
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${FILES}
	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' ${FILES}
	${REINPLACE_CMD} -e 's|libgnome-2.0|libgnome|g' ${FILES}
	${REINPLACE_CMD} -e 's|libIDL-2.0|libIDL|g' ${FILES}
	${REINPLACE_CMD} -e 's|module-2.0|module|g' ${FILES}
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' ${FILES}
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' ${FILES}
	${REINPLACE_CMD} -e 's|gmodule-no-export-2.0|gmodule-no-export|g' ${FILES}

	${REINPLACE_CMD} -e 's,/$$(GDK_PIXBUF_BINARY_VERSION)/,/,g' ${FILES}
	${REINPLACE_CMD} -e 's,/$$(GDK_PIXBUF_BINARY_VERSION),,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$(GDK_PIXBUF_API_VERSION),,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$${GDK_PIXBUF_API_VERSION},,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$GDK_PIXBUF_API_VERSION,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_$$(GDK_PIXBUF_API_VERSION),,g' ${FILES}
	${REINPLACE_CMD} -e 's,_$${GDK_PIXBUF_API_VERSION},,g' ${FILES}
	${REINPLACE_CMD} -e 's,_$$GDK_PIXBUF_API_VERSION,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-@GDK_PIXBUF_API_VERSION@,,g' ${FILES}

	${REINPLACE_CMD} -e 's,-2.0,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_2_0,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_2_la,_la,g' ${FILES}
	${REINPLACE_CMD} -e 's,-2.la,.la,g' ${FILES}
	${REINPLACE_CMD} -e 's,gdk-pixbuf-xlib-2.0,gdk-pixbuf-xlib,g' ${FILES}
	${REINPLACE_CMD} -e 's,gdk-pixbuf-2.0,gdk-pixbuf,g' ${FILES}

	cd ${WRKSRC} && ${CP} gdk-pixbuf-2.0-uninstalled.pc.in  gdk-pixbuf-uninstalled.pc.in 
	cd ${WRKSRC} && ${CP} gdk-pixbuf-2.0.pc.in  gdk-pixbuf.pc.in 
	cd ${WRKSRC}/contrib/gdk-pixbuf-xlib && ${CP} gdk-pixbuf-xlib-2.0.pc.in gdk-pixbuf-xlib.pc.in

	${REINPLACE_CMD} -e 's,gdk_pixbuf_xlib\.la,gdk-pixbuf-xlib.la,g' ${FILES}
	${REINPLACE_CMD} -e 's,gdk_pixbuf\.la,gdk-pixbuf.la,g' ${FILES}

	${REINPLACE_CMD} -e 's,-lgdk_pixbuf_xlib,-lgdk-pixbuf-xlib,g' ${FILES}
	${REINPLACE_CMD} -e 's,-lgdk_pixbuf,-lgdk-pixbuf,g' ${FILES}
	${REINPLACE_CMD} -e '/install-data-am:/s,install-data-local,,g' ${WRKSRC}/doc*/*/*/Makefile.in
	${REINPLACE_CMD} -e 's,^LT_VERSION_INFO=.*,LT_VERSION_INFO="2:0:2",g' ${WRKSRC}/configure

post-install:
	${MKDIR} -p ${STAGEDIR}${PREFIX}/man/man1
	${INSTALL_DATA} ${WRKSRC}/docs/reference/gdk-pixbuf/gdk-pixbuf-csource.1 ${STAGEDIR}${PREFIX}/man/man1
	${INSTALL_DATA} ${WRKSRC}/docs/reference/gdk-pixbuf/gdk-pixbuf-query-loaders.1 ${STAGEDIR}${PREFIX}/man/man1

.include <bsd.port.post.mk>
#EOF

