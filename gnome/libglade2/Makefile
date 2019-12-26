#
# $Id$
#
PORTNAME=	libglade2
PORTVERSION=	2.6.4 
CATEGORIES=	devel gnome
MASTER_SITES=	GNOME
MASTER_SITE_SUBDIR=	sources/${PORTNAME:S/2$//}/${PORTVERSION:C/..$//}
DISTNAME=	${PORTNAME:S/2$//}-${PORTVERSION}
DIST_SUBDIR=	gnome2

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNOME glade library

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libxml2.so:text/libxml2

LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS+= --with-html-dir=${PREFIX}/share/doc
CONFIGURE_ARGS+= --disable-gtk-doc 
CONFIGURE_ARGS+= --with-xml-catalog=${LOCALBASE}/share/sgml/catalog.xml
CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" LDFLAGS="-L${LOCALBASE}/lib"

PLIST_SUB+=	XMLCATALOG="${LOCALBASE}/bin/xmlcatalog" 
PLIST_SUB+=	CATALOG_PORTS_XML="${LOCALBASE}/share/sgml/catalog.xml"

FILES= ${WRKSRC}/configure ${WRKSRC}/*.pc.in


post-patch:
	${REINPLACE_CMD} -E 's/in (python.*)+ none/in none/' \
		${WRKSRC}/configure

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
	${REINPLACE_CMD} -e 's|glade-2.0|glade|g' 	${FILES} $$(${FIND} ${WRKSRC} -name Makefile.in)

	${REINPLACE_CMD} -e '/glademoduledir/s|/libglade/2.0|/libglade|g' \
	    ${FILES} $$(${FIND} ${WRKSRC} -name Makefile.in)

	${REINPLACE_CMD} -e 's|install:.*|install:|' ${WRKSRC}/doc/Makefile.in

	cd ${WRKSRC} && ${CP} libglade-2.0-uninstalled.pc.in libglade-uninstalled.pc.in
	cd ${WRKSRC} && ${CP} libglade-2.0.pc.in libglade.pc.in
	cd ${WRKSRC} && ${CP} glade-2.0.dtd glade.dtd

.include <bsd.port.mk>
#EOF
