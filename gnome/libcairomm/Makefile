#
# $Id$
#
PORTNAME=	cairomm
PORTVERSION=	1.12.2
CATEGORIES=	graphics
MASTER_SITES=	http://cairographics.org/releases/
PKGNAMEPREFIX=	lib


MAINTAINER= homeunix7@gmail.com
COMMENT=	C++ interface to cairo

#LIB_DEPENDS+= libsigc.0:devel-libs/libsigc++

LIB_DEPENDS+= libcairo.so:gnome/libcairo

LIB_DEPENDS+= libfreetype.so:graph/libfreetype2
LIB_DEPENDS+= libpixman.so:x11/libpixman
LIB_DEPENDS+= libpng.so:graph/libpng
LIB_DEPENDS+= libX11.so:x11/libX11
LIB_DEPENDS+= libXau.so:x11/libXau
LIB_DEPENDS+= libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+= libXrender.so:x11/libXrender
LIB_DEPENDS+= libfontconfig.so:x11/libfontconfig


USE_LDCONFIG=	yes
USES+= gmake 
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" LDFLAGS="-L${LOCALBASE}/lib"
#		AUTOMAKE="${TRUE}" AUTOCONF="${TRUE}" DOXYGEN="${TRUE}"

CONFIGURE_ARGS+=	--disable-documentation

FILES= ${WRKSRC}/configure ${WRKSRC}/data/*.pc.in ${WRKSRC}/Makefile.in ${WRKSRC}/*/Makefile.in

_PC+= cairomm-1.0.pc.in
_PC+= cairomm-ft-1.0.pc.in
_PC+= cairomm-pdf-1.0.pc.in
_PC+= cairomm-png-1.0.pc.in
_PC+= cairomm-ps-1.0.pc.in
_PC+= cairomm-quartz-1.0.pc.in
_PC+= cairomm-quartz-font-1.0.pc.in
_PC+= cairomm-quartz-image-1.0.pc.in
_PC+= cairomm-svg-1.0.pc.in
_PC+= cairomm-win32-1.0.pc.in
_PC+= cairomm-win32-font-1.0.pc.in
_PC+= cairomm-xlib-1.0.pc.in
_PC+= cairomm-xlib-xrender-1.0.pc.in



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

	${REINPLACE_CMD} -e 's,-1.0.pc,.pc,g' ${WRKSRC}/configure


#	${REINPLACE_CMD} -e '/^SUBDIRS = /s/ docs//' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e '/^SUBDIRS = /s/ examples//' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e '/^SUBDIRS = /s/ tests//' ${WRKSRC}/Makefile.in

	${REINPLACE_CMD} -e 's,-@CAIROMM_API_VERSION@,,g' ${FILES}
#	${REINPLACE_CMD} -e 's,_@LIBXMLXX_API_VERSION@,,g' ${FILES}
#	${REINPLACE_CMD} -e 's,-$$LIBXMLXX_API_VERSION,,g' ${FILES}
#	${REINPLACE_CMD} -e 's,-$$(LIBXMLXX_API_VERSION),,g' ${FILES}
#	${REINPLACE_CMD} -e 's,-$${LIBXMLXX_API_VERSION},,g' ${FILES}
#	${REINPLACE_CMD} -e 's,_$$LIBXMLXX_API_VERSION,,g' ${FILES}
#	${REINPLACE_CMD} -e 's,_$$(LIBXMLXX_API_VERSION),,g' ${FILES}
#	${REINPLACE_CMD} -e 's,_$${LIBXMLXX_API_VERSION},,g' ${FILES}

#	${REINPLACE_CMD} -e 's,-$$glibreq,,g' ${FILES}
#	${REINPLACE_CMD} -e '/^SUBDIRS = /s, $$(doc_subdirs),,' ${WRKSRC}/Makefile.in
#	${REINPLACE_CMD} -e 's,defs-2.4,defs,g' ${FILES}

#	cd ${WRKSRC} && ${CP} libxml++-2.6.pc.in libxml++.pc.in

	cd ${WRKSRC}/data && for file in ${_PC};do ${CP} $${file} $$(${ECHO_CMD} $${file} | ${SED} -e 's,-1.0,,');done

.include <bsd.port.mk>
#EOF
