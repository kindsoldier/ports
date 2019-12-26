#
# $Id$
#
PORTNAME=	gtkspell
PORTVERSION=	2.0.16
CATEGORIES=	textproc gnome
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	marcus
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	A GTK+ 2 spell checking component


LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libenchant.so:text/libenchant
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2


#LIB_DEPENDS+=	libatk.so:devel-libs/libatk
#LIB_DEPENDS+=	libgio.so:devel-libs/libglib2
#LIB_DEPENDS+=	libglib.so:devel-libs/libglib2
#LIB_DEPENDS+=	libgmodule.so:devel-libs/libglib2
#LIB_DEPENDS+=	libgobject.so:devel-libs/libglib2
#LIB_DEPENDS+=	libgthread.so:devel-libs/libglib2
LIB_DEPENDS+=	libintl.so:devel/gettext
#LIB_DEPENDS+=	libcairo.so:graphics-libs/libcairo

#LIB_DEPENDS+=	libfreetype.so:graphics-libs/libfreetype

#LIB_DEPENDS+=	libpango.so:graphics-libs/libpango
#LIB_DEPENDS+=	libpangocairo.so:graphics-libs/libpango
#LIB_DEPENDS+=	libpangoft2.so:graphics-libs/libpango

#LIB_DEPENDS+=	libpixman.so:graphics-libs/libpixman
#LIB_DEPENDS+=	libpng.so:graphics-libs/libpng
#LIB_DEPENDS+=	libexpat.so:sgml-libs/libexpat

#LIB_DEPENDS+=	libenchant.so:text-libs/libenchant

#LIB_DEPENDS+=	libiconv.so:text-libs/libiconv
#LIB_DEPENDS+=	libpcre.so:text-libs/libpcre

#LIB_DEPENDS+=	libgdk-pixbuf.so:x11-toolkits/libgtk2
#LIB_DEPENDS+=	libgdk-x11.so:x11-toolkits/libgtk2
#LIB_DEPENDS+=	libgtk-x11.so:x11-toolkits/libgtk2


USES+=		gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

post-patch:
	${REINPLACE_CMD} -e '/^SUBDIRS/ s|docs||' ${WRKSRC}/Makefile.in
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
	    ${REINPLACE_CMD} -e 's|gtkspell-2.0|gtkspell|g' 		$${file}; \
	done
.endfor
	cd ${WRKSRC} && ${CP} gtkspell-2.0.pc.in gtkspell.pc.in


.include <bsd.port.mk>
#EOF
