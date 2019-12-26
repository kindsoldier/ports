#
# $Id: Makefile 2401 2009-09-12 00:27:48Z root $
# $URL: file:///usr2/svn/ports5/graphics-libs/libpango/Makefile $
#
PORTNAME=	pango
PORTVERSION=    1.42.4
CATEGORIES=	x11-toolkits
MASTER_SITES+=	ftp://ftp.gnome.org/pub/GNOME/sources/pango/${PORTVERSION:R}/
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	An open-source framework for the layout and rendering of i18n text

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libffi.so:devel/libffi
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgmodule.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib
LIB_DEPENDS+=	libgthread.so:devel/libglib
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXft.so:x11/libXft
LIB_DEPENDS+=	libXrender.so:x11/libXrender
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig

LIB_DEPENDS+=	libcairo.so:gnome/libcairo
LIB_DEPENDS+=	libharfbuzz.so:gnome/libharfbuzz
LIB_DEPENDS+=	libfribidi.so:text/libfribidi


BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xextproto.pc:xproto/xextproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/fontsproto.pc:xproto/fontsproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/randrproto.pc:xproto/randrproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/renderproto.pc:xproto/renderproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/kbproto.pc:xproto/kbproto

BUILD_DEPENDS+= help2man:devel/help2man

GNU_CONFIGURE=	yes
USES+=		gmake compiler:c11 tar:xz
INSTALLS_SHLIB=	yes

CPPFLAGS+= 	-I${LOCALBASE}/include -I${LOCALBASE}/include/cairo
CFLAGS+= 	-I${LOCALBASE}/include  -I${LOCALBASE}/include/cairo
CONFIGURE_ARGS+= --enable-static
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --with-html-dir=${PREFIX}/share/doc 
CONFIGURE_ARGS+= --with-included-modules=no
CONFIGURE_ARGS+= --with-xft
LDFLAGS+=	-L${LOCALBASE}/lib

post-patch:
	${RM} ${WRKSRC}//pango-view/pango-view.1.in
.for filename in Makefile.in configure *.pc.in */Makefile.in
	for file in $$(${FIND} ${WRKSRC} -name '${filename}'); do \
	    ${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	$${file}; \
	    ${REINPLACE_CMD} -e 's|gmodule-export-2.0|gmodule-export|g' 	$${file}; \
	    ${REINPLACE_CMD} -e 's|gmodule-no-export-2.0|gmodule-no-export|g' 	$${file}; \
	    ${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	$${file}; \
	    ${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	$${file}; \
	    ${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|_2_0||g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|atk-@ATK_API_VERSION@|atk|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|atk-$$(ATK_API_VERSION)|atk|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|atk-1.0|atk|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|gtk-2.0|gtk|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|cairo-1.0|cairo|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|cairo-1|cairo|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|/pango.4:.0/pango|/pango|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|pango.4:.0|pango|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|pango.4:_0|pango|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|pango.4:_0|pango|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|-@PANGO_API_VERSION@||g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|-$$PANGO_API_VERSION||g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|-$$(PANGO_API_VERSION)||g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|_$$PANGO_API_VERSION||g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|_$$(PANGO_API_VERSION)||g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|/pango/$$(PANGO_MODULE_VERSION)|/pango|g' 	$${file}; \
	    ${REINPLACE_CMD} -e 's|-1.0.la|.la|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|_1_0_la|_la|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|pango-1.0|pango|g' 		$${file}; \
	done
.endfor
	${REINPLACE_CMD} -e '/^SUBDIRS/s|docs||' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e '/^SUBDIRS/s|doc||' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's/PANGO_BINARY_AGE=4000/PANGO_BINARY_AGE=4/g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's/VERSION_INFO="4000:4:4000"/VERSION_INFO="4:4:4"/g' ${WRKSRC}/configure

post-install:
	cd ${WRKSRC}/docs && ${GMAKE} install-man DESTDIR=${STAGEDIR}

.include <bsd.port.mk>
#EOF
