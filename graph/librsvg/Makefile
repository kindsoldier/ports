# Created by: Ade Lovett <ade@FreeBSD.org>
# $FreeBSD: head/graphics/librsvg2/Makefile 316407 2013-04-24 07:35:40Z ak $
#   $MCom: ports/graphics/librsvg2/Makefile,v 1.147 2012/10/16 08:58:47 kwm Exp $

PORTNAME=	librsvg
PORTVERSION=	2.36.4
CATEGORIES=	graphics gnome
MASTER_SITES=	GNOME
#PKGNAMESUFFIX=	2
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Library for parsing and rendering SVG vector-graphic files

LIB_DEPENDS+=	libcroco.so:text/libcroco
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libxml2.so:text/libxml2

LIB_DEPENDS+=	libgdk-pixbuf.so:gnome/libgdk-pixbuf
LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

#BUILD_DEPENDS+= automake:devel/automake
#BUILD_DEPENDS+= autoconf:devel/autoconf
#BUILD_DEPENDS+= libtoolize:devel/libtool


GNU_CONFIGURE=	yes
USES+=		tar:xz
USES+=		gmake
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ARGS+= --with-svgz --with-croco
CONFIGURE_ARGS+= --disable-gtk-theme
#CONFIGURE_ARGS+= --disable-pixbuf-loader
CONFIGURE_ARGS+= --disable-Bsymbolic
CONFIGURE_ARGS+= --enable-introspection=no
CONFIGURE_ARGS+= --enable-vala=no



FILES+=	${WRKSRC}/configure

FILES+=	${WRKSRC}/Makefile.in
FILES+=	${WRKSRC}/*/Makefile.in
FILES+=	${WRKSRC}/*/*/Makefile.in
FILES+=	${WRKSRC}/*.pc.in



post-patch:
	${REINPLACE_CMD} -e 's|GTK3_REQUIRED=3.0.0|GTK3_REQUIRED=9.90.0|g' \
		${WRKSRC}/configure

	    ${REINPLACE_CMD} -e 's,RSVG_LT_VERSION_INFO=.*,RSVG_LT_VERSION_INFO=2:0:2,' ${WRKSRC}/configure

	    ${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 		${FILES}
	    ${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${FILES}
	    ${REINPLACE_CMD} -e 's|gmodule-export-2.0|gmodule-export|g' 	${FILES}
	    ${REINPLACE_CMD} -e 's|gmodule-no-export-2.0|gmodule-no-export|g' 	${FILES}
	    ${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${FILES}
	    ${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${FILES}
	    ${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${FILES}
	    ${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' 		${FILES}
	    ${REINPLACE_CMD} -e 's|atk-1.0|atk|g' 		${FILES}
	    ${REINPLACE_CMD} -e 's|gtk-2.0|gtk|g' 		${FILES}
	    ${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 		${FILES}
	    ${REINPLACE_CMD} -e 's|libcroco-0.6|libcroco|g' 		${FILES}
	    ${REINPLACE_CMD} -e 's|atk-1.0|atk|g' 		${FILES}
	    ${REINPLACE_CMD} -e 's|gtk-2.0|gtk|g' 		${FILES}
	    ${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' 		${FILES}
	    ${REINPLACE_CMD} -e 's|gdk-x11-2.0|gdk-x11|g' 		${FILES}
	    ${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 		${FILES}

	    ${REINPLACE_CMD} -e 's|$$(libdir)/gtk-2.0/$$(GTK_VERSION)|$$(libdir)/gtk|g' 	${FILES}
	    ${REINPLACE_CMD} -e 's|$$(libdir)/gtk/$$(GTK_VERSION)|$$(libdir)/gtk|g' 	${FILES}

	    ${REINPLACE_CMD} -e 's|_2_0||g' 		${FILES}
	    ${REINPLACE_CMD} -e 's|_2_la|_la|g' 		${FILES}

	    ${REINPLACE_CMD} -e 's|rsvg-2.0|rsvg|g' 		${FILES}
	    ${REINPLACE_CMD} -e 's|rsvg-2|rsvg|g' 		${FILES}
	    ${REINPLACE_CMD} -e 's|libgsf-1|libgsf|g' 		${FILES}

	${REINPLACE_CMD} -e 's,/librsvg/librsvg,/librsvg,g' 		${FILES}

	${REINPLACE_CMD} -e 's,-@RSVG_API_VERSION@,,g' 		${FILES}
	${REINPLACE_CMD} -e 's,-@RSVG_API_MAJOR_VERSION@,,g' 	${FILES}
	${REINPLACE_CMD} -e 's,_@RSVG_API_MAJOR_VERSION@,,g' 	${FILES}
	${REINPLACE_CMD} -e 's,_@RSVG_API_MAJOR_VERSION@_,_,g' 	${FILES}
	${REINPLACE_CMD} -e 's,-$$(RSVG_API_MAJOR_VERSION),,g' 	${FILES}
	${REINPLACE_CMD} -e 's,-$${RSVG_API_VERSION},,g' 	${FILES}
	${REINPLACE_CMD} -e 's,-$$(RSVG_API_VERSION),,g' 	${FILES}

	${REINPLACE_CMD} -e 's,$$gdk_pixbuf_moduledir/$$gtk_binary_version/,$$gdk_pixbuf_moduledir/,' 	${FILES}
	${REINPLACE_CMD} -e 's,gtk/$$(GTK2_BINARY_VERSION)/,gtk/,' 	${FILES}

	${REINPLACE_CMD} -e 's,/librsvg/librsvg,/librsvg,g' 		${FILES}





.include <bsd.port.mk>
