#
# $Id$
#
PORTNAME=	pangomm
PORTVERSION=	2.40.1
CATEGORIES=	x11-toolkits
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2
PKGNAMEPREFIX=	lib

MAINTAINER= homeunix7@gmail.com
COMMENT=	C++ wrapper for Pango

LIB_DEPENDS+= libglibmm.so:devel/libglibmm
LIB_DEPENDS+= libpango.so:gnome/libpango
LIB_DEPENDS+= libcairomm.so:gnome/libcairomm


USES=	gmake tar:xz
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" LDFLAGS="-L${LOCALBASE}/lib"
CONFIGURE_ARGS=	--disable-documentation --enable-static=yes

FILES= ${WRKSRC}/configure ${WRKSRC}/*/*.pc.in ${WRKSRC}/Makefile.in ${WRKSRC}/*/Makefile.in \
${WRKSRC}/*/*/Makefile.in

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

	${REINPLACE_CMD} -e 's,glibmm-2.4,glibmm,g' ${FILES}
	${REINPLACE_CMD} -e 's,giomm-2.4,giomm,g' ${FILES}
	${REINPLACE_CMD} -e 's,xml++-2.6,xml++,g' ${FILES}
	${REINPLACE_CMD} -e 's,cairomm-1.0,cairomm,g' ${FILES}
	${REINPLACE_CMD} -e 's,sigc++-2.0,sigc++,g' ${FILES}
#	${REINPLACE_CMD} -e 's,sigc++-2.0,sigc++,g' ${FILES}

	${REINPLACE_CMD} -e 's,-1.0.pc,.pc,g' ${WRKSRC}/configure

	${REINPLACE_CMD} -e 's,pangomm-1.4,pangomm,g' ${WRKSRC}/configure


#	${REINPLACE_CMD} -e '/^SUBDIRS = /s/ docs//' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e '/^SUBDIRS = /s/ examples//' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e '/^SUBDIRS = /s/ tests//' ${WRKSRC}/Makefile.in

	${REINPLACE_CMD} -e 's,-@PANGOMM_API_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@PANGOMM_API_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$PANGOMM_API_VERSION,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$(PANGOMM_API_VERSION),,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$${PANGOMM_API_VERSION},,g' ${FILES}
	${REINPLACE_CMD} -e 's,_$$PANGOMM_API_VERSION,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_$$(PANGOMM_API_VERSION),,g' ${FILES}
	${REINPLACE_CMD} -e 's,_$${PANGOMM_API_VERSION},,g' ${FILES}

#	${REINPLACE_CMD} -e 's,-$$glibreq,,g' ${FILES}
#	${REINPLACE_CMD} -e '/^SUBDIRS = /s, $$(doc_subdirs),,' ${WRKSRC}/Makefile.in
#	${REINPLACE_CMD} -e 's,defs-2.4,defs,g' ${FILES}

#	cd ${WRKSRC} && ${CP} libxml++-2.6.pc.in libxml++.pc.in

#	cd ${WRKSRC}/data && for file in ${_PC};do ${CP} $${file} $$(${ECHO_CMD} $${file} | ${SED} -e 's,-1.0,,');done

	${REINPLACE_CMD} -e 's,pangomm-1.4,pangomm,g' ${WRKSRC}/configure

	${REINPLACE_CMD} -e 's,glibmm_generate_extra_defs-2.4,glibmm_generate_extra_defs,g' ${FILES}


.include <bsd.port.mk>
#EOF
