#
# $Id: Makefile 1721 2008-08-29 12:53:33Z ziggi $
# $URL: file:///usr2/svn/ports5/@dont-used-ports/wxWidget/Makefile $
#
PORTNAME=	wxWidgets
PORTVERSION=	2.8.12
CATEGORIES=	x11-toolkits
MASTER_SITES+=	SF
MASTER_SITE_SUBDIR=	wxwindows/${PORTVERSION}/
PKGNAMEPREFIX=	lib

MAINTAINER= homeunix7@gmail.com
COMMENT=	Multiplatform C++ application framework

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libtiff.so:graph/libtiff


USES+= gmake 
GNU_CONFIGURE=	yes
INSTALLS_SHLIB=	yes
NO_MTREE=	yes

MAKE_ARGS+=	INSTALL_PROGRAM="install -o root -g wheel -m 555"

CONFIGURE_ARGS+=	--disable-precomp-headers
USE_CXXSTD=	gnu++98


CONFIGURE_ARGS+= --with-gtk=2
CONFIGURE_ARGS+= --enable-gtk2

CONFIGURE_ARGS+= --disable-compat26

CONFIGURE_ARGS+= --enable-plugins
CONFIGURE_ARGS+= --x-includes=${LOCALBASE}/include
CONFIGURE_ARGS+= --x-libraries=${LOCALBASE}/lib
CONFIGURE_ARGS+=    --enable-gui
CONFIGURE_ARGS+=    --enable-shared
CONFIGURE_ARGS+=    --enable-static
CONFIGURE_ARGS+=    --disable-debug
CONFIGURE_ARGS+=    --disable-profile
CONFIGURE_ARGS+= --enable-intl
CONFIGURE_ARGS+= --enable-sockets
CONFIGURE_ARGS+=  --enable-unicode
CONFIGURE_ARGS+=    --enable-protocol
CONFIGURE_ARGS+=    --enable-protocol-http
CONFIGURE_ARGS+=    --enable-protocol-ftp
CONFIGURE_ARGS+=    --enable-protocol-file
CONFIGURE_ARGS+=    --enable-threads
CONFIGURE_ARGS+=    --enable-help
CONFIGURE_ARGS+=    --enable-html
CONFIGURE_ARGS+=    --enable-htmlhelp
CONFIGURE_ARGS+=    --enable-image
CONFIGURE_ARGS+=    --enable-gif
CONFIGURE_ARGS+=    --enable-pcx
CONFIGURE_ARGS+=    --enable-iff
CONFIGURE_ARGS+=    --enable-pnm
CONFIGURE_ARGS+=    --enable-xpm

CONFIGURE_ARGS+=    --with-libpng
CONFIGURE_ARGS+=    --with-libjpeg
CONFIGURE_ARGS+=    --with-libtiff
CONFIGURE_ARGS+=    --with-libxpm
CONFIGURE_ARGS+=    --without-opengl
CONFIGURE_ARGS+=    --with-regex
CONFIGURE_ARGS+=    --with-zlib
CONFIGURE_ARGS+=    --with-expat
CONFIGURE_ARGS+=    --with-libiconv-prefix=${LOCALBASE}

CONFIGURE_ARGS+= --disable-mediactrl
CONFIGURE_ARGS+= --disable-gstreamer8

CONFIGURE_ARGS+= --with-gtkprint
CONFIGURE_ARGS+= --without-gnomeprint
CONFIGURE_ARGS+= --without-gnomevfs
CONFIGURE_ARGS+= --without-sdl

CPPFLAGS+= -I${LOCALBASE}/include
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CXXFLAGS+=	-I${LOCALBASE}/include

FILES= ${WRKSRC}/configure 
FILES2= ${WRKSRC}/Makefile.in

post-patch:
	${REINPLACE_CMD} -e 's!-\$$\(WX_RELEASE\)!\$$\(NULL_RELEASE\)!' `find ${WRKSRC} -name Makefile.in`

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
	${REINPLACE_CMD} -e 's|libart-2.0|libart|g' 	${FILES}

	${REINPLACE_CMD} -e 's|gtk+-unix-print-2.0|gtk+-unix-print|g' 	${FILES}

	    ${REINPLACE_CMD} -e 's|liboil-0.3|liboil|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gconftool-2|gconftool|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gstreamer-0.10|gstreamer|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gstreamer-base-0.10|gstreamer-base|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gstreamer-control-0.10|gstreamer-control|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gstreamer-check-0.10|gstreamer-check|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gstreamer-video-0.10|gstreamer-video|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gstreamer-interfaces-0.10|gstreamer-interfaces|g' ${FILES}

	    ${REINPLACE_CMD} -e 's|-$$GST_VERSION||g' ${FILES}
	${REINPLACE_CMD} -e 's|-\\$$GST_VERSION||g' ${FILES}

	${REINPLACE_CMD} -e 's,$$(WXDLLVERSIONTAG)$$(dll___targetsuf2),$$(WXDLLVERSIONTAG)$$(dll___targetsuf_tmp),'  ${FILES2}
	${REINPLACE_CMD} -e 's,$$(WXDLLVERSIONTAG)$$(dll___targetsuf3),$$(WXDLLVERSIONTAG)$$(dll___targetsuf2),'  ${FILES2}
	${REINPLACE_CMD} -e 's,$$(WXDLLVERSIONTAG)$$(dll___targetsuf_tmp),$$(WXDLLVERSIONTAG)$$(dll___targetsuf3),'  ${FILES2}
	${REINPLACE_CMD} -e 's,$$(WXDLLVERSIONTAG)$$(dll___targetsuf3) \\,$$(WXDLLVERSIONTAG)$$(dll___targetsuf2) \\,'  ${FILES2}
	${REINPLACE_CMD} -e '/SONAME_FLAG/s,$$(dll___targetsuf3),$$(dll___targetsuf2),'  ${FILES2}
	${REINPLACE_CMD} -e 's,ln -s,ln -sf,g'  ${FILES}
	${REINPLACE_CMD} -e 's,-$${WX_RELEASE},,g'  ${FILES} ${FILES2}
	${REINPLACE_CMD} -e '/LIBDIRNAME.*DLLPREFIX/s,$$(dll___targetsuf3),$$(dll___targetsuf2),'  ${FILES2}
	${REINPLACE_CMD} -e 's,-$$(WX_RELEASE),,g'  ${FILES2}

#	$(LIBDIRNAME)/$(DLLPREFIX)$(WXDLLNAMEPREFIXGUI)$(WXUNICODEFLAG)$(WXDEBUGFLAG)$(WX_LIB_FLAVOUR)$(WXCOMPILER)$(VENDORTAG)$(WXDLLVERSIONTAG)$(dll___targetsuf3)


post-install:
	cd ${WRKSRC}/contrib && ${GMAKE} install DESTDIR=${STAGEDIR}

.include <bsd.port.mk>
#EOF

