#
# $Id$
#
PORTNAME=	glibmm
PORTVERSION=	2.50.1 #2.28.2
CATEGORIES=	devel
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2
PKGNAMEPREFIX=	lib

MAINTAINER= homeunix7@gmail.com
COMMENT=	C++ interfaces for glib2

BUILD_DEPENDS=	gm4:${PORTSDIR}/text/gm4

LIB_DEPENDS+= libglib.so:devel/libglib
LIB_DEPENDS+= libsigc.so:devel/libsigc++
LIB_DEPENDS+= libintl.so:devel/gettext
LIB_DEPENDS+= libpcre.so:text/libpcre


USE_PERL5=	build
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
USES+=   gmake tar:xz
CONFIGURE_ARGS=	--enable-static --disable-documentation

FILES= ${WRKSRC}/configure ${WRKSRC}/*/*.pc.in ${WRKSRC}/*/Makefile.in \
${WRKSRC}/*/*/Makefile.in ${WRKSRC}/Makefile.in

post-patch:
	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' ${FILES}
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${FILES}
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${FILES}
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libIDL-2.0|libIDL|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libgnome-2.0|libgnome|g' ${FILES}
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gtk+-unix-print-2.0|gtk+-unix-print|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gdk-x11-2.0|gdk-x11|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gdk-pixbuf-xlib-2.0|gdk-pixbuf-xlib|g' 	${FILES}

#	${REINPLACE_CMD} -e '/^SUBDIRS = /s/ docs//' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e '/^SUBDIRS = /s/ examples//' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e '/^SUBDIRS = /s/ tests//' ${WRKSRC}/Makefile.in


	${REINPLACE_CMD} -e 's,-@GIOMM_API_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@GIOMM_API_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$GIOMM_API_VERSION,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$(GIOMM_API_VERSION),,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$${GIOMM_API_VERSION},,g' ${FILES}

	${REINPLACE_CMD} -e 's,_$$GIOMM_API_VERSION,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_$$(GIOMM_API_VERSION),,g' ${FILES}
	${REINPLACE_CMD} -e 's,_$${GIOMM_API_VERSION},,g' ${FILES}

	${REINPLACE_CMD} -e 's,-@GLIBMM_API_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@GLIBMM_API_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$GLIBMM_API_VERSION,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$(GLIBMM_API_VERSION),,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$${GLIBMM_API_VERSION},,g' ${FILES}

	${REINPLACE_CMD} -e 's,_$$GLIBMM_API_VERSION,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_$$(GLIBMM_API_VERSION),,g' ${FILES}
	${REINPLACE_CMD} -e 's,_$${GLIBMM_API_VERSION},,g' ${FILES}

	${REINPLACE_CMD} -e 's,sigc++-2.0,sigc++,g' ${FILES}

	${REINPLACE_CMD} -e 's,-$$glibreq,,g' ${FILES}


	${REINPLACE_CMD} -e '/^SUBDIRS = /s, $$(doc_subdirs),,' ${WRKSRC}/Makefile.in

	${REINPLACE_CMD} -e 's,glibmm-2.4,glibmm,g' ${FILES}
	${REINPLACE_CMD} -e 's,giomm-2.4,giomm,g' ${FILES}

	${REINPLACE_CMD} -e 's,_2_4_,_,g' ${FILES}

	${REINPLACE_CMD} -e 's,defs-2.4,defs,g' ${FILES}

.include <bsd.port.mk>
#EOF

