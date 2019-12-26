#
# $Id: Makefile 2621 2009-09-28 06:39:57Z root $
# $URL: file:///usr2/svn/ports5/graphics-libs/libpoppler/Makefile $
#
PORTNAME=	poppler
PORTVERSION=	0.40.0
CATEGORIES=	graphics print
MASTER_SITES=	http://poppler.freedesktop.org/
PKGNAMEPREFIX=	lib
#PKGNAMESUFFIX=	-qt

MAINTAINER=	onborodin@gmail.com
COMMENT=	A PDF rendering library

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libtiff.so:graph/libtiff
LIB_DEPENDS+=	libcurl.so:net/libcurl
#LIB_DEPENDS+=	libcairo.so:gnome/libcairo
BUILD_DEPENDS+= ${LOCALBASE}/lib/pkgconfig/poppler-data.pc:graph/libpoppler-data/
RUN_DEPENDS+= ${LOCALBASE}/lib/pkgconfig/poppler-data.pc:graph/libpoppler-data/


USES+=		gmake
GNU_CONFIGURE=	yes
INSTALLS_SHLIB=	yes
USES+=		tar:xz
CPPFLAGS+= -I${LOCALBASE}/include -I${LOCALBASE}/include/freetype2
CPPFLAGS+= -I${LOCALBASE}/include ${PTHREAD_CFLAGS}
CPPFLAGS+= -I${LOCALBASE}/include/libpng
CFLAGS+= ${CPPFLAGS} -D__LONG_LONG_SUPPORTED=1
LDFLAGS+= -L${WRKSRC}/poppler -L${LOCALBASE}/lib -L${LOCALBASE}/lib ${PTHREAD_LIBS}
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --enable-libcurl
CONFIGURE_ARGS+= --enable-xpdf-headers
CONFIGURE_ARGS+= --enable-zlib
CONFIGURE_ARGS+= --disable-libopenjpeg
CONFIGURE_ARGS+= --disable-poppler-qt4
CONFIGURE_ARGS+= --disable-silent-rules
CONFIGURE_ARGS+= --enable-compile-warnings=no

CONFIGURE_ARGS+= --disable-cairo-output
CONFIGURE_ARGS+= --disable-poppler-glib

post-patch:
.for filename in Makefile.in configure *.pc.in
	for file in $$(${FIND} ${WRKSRC} -name '${filename}'); do \
	    ${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	$${file}; \
	    ${REINPLACE_CMD} -e 's|gmodule-export-2.0|gmodule-export|g' 	$${file}; \
	    ${REINPLACE_CMD} -e 's|gmodule-no-export-2.0|gmodule-no-export|g' 	$${file}; \
	    ${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	$${file}; \
	    ${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	$${file}; \
	    ${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|atk-1.0|atk|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|libcroco-0.6|libcroco|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|libgsf-1|libgsf|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|gdk-x11-2.0|gdk-x11|g' 		$${file}; \
	done
.endfor
	${REINPLACE_CMD} -e '/SUBDIRS/s|reference||g' 		${WRKSRC}/glib/Makefile.in


.include <bsd.port.mk>
#EOF

