#
# $Id$
#
PORTNAME=	libsoup
PORTVERSION=	2.52.2
CATEGORIES=	devel gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	onborodin@gmail.com
COMMENT=	A SOAP (Simple Object Access Protocol) implementation in C


LIB_DEPENDS+=	libintl.so:devel/gettext

LIB_DEPENDS+=	libgio.so:devel/libglib
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgmodule.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib

LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libxml2.so:text/libxml2

LIB_DEPENDS+=	libgcrypt.so:crypto/libgcrypt
LIB_DEPENDS+=	libgpg-error.so:crypto/libgpg-error
LIB_DEPENDS+=	libsqlite3.so:data/sqlite3

RUN_DEPENDS+=	${LOCALBASE}/lib/gio/modules/libgiognutls.so:gnome/libglib-networking
BUILD_DEPENDS+=	${LOCALBASE}/lib/gio/modules/libgiognutls.so:gnome/libglib-networking

#BUILD_DEPENDS+=	valac:devel/vala

USES+=		tar:xz
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --with-html-dir=${PREFIX}/share/doc
CONFIGURE_ARGS+= --disable-gtk-doc

CPPFLAGS+=	-I${LOCALBASE}/include ${GLIB_CPPFLAGS}
LDFLAGS+=	-L${LOCALBASE}/lib ${GLIB_LIBS}
CONFIGURE_ARGS+= --with-gnome
CONFIGURE_ARGS+= --disable-more-warnings
CONFIGURE_ARGS+= --enable-introspection=no
CONFIGURE_ARGS+= --enable-vala=no


PLIST_SUB=	VERSION="2.4"


P=${WRKSRC}/configure ${WRKSRC}/*.in

post-patch:
	${REINPLACE_CMD} -e 's|-Wmissing-include-dirs||g ; \
	    	s|" == "|" = "|g' \
		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,/libsoup-2.4/libsoup,/libsoup/libsoup,' ${WRKSRC}/libsoup/Makefile.in
#	${REINPLACE_CMD} -e 's,{includedir}/libsoup,{includedir}/libsoup,' ${WRKSRC}/*.pc.in

	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${WRKSRC}/configure 
	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${WRKSRC}/configure ${P}
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${WRKSRC}/configure ${P}
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gmodule-no-export-2.0|gmodule-no-export|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|$$module-2.0|$$module|g' 	${WRKSRC}/configure

	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${WRKSRC}/configure ${P}
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${WRKSRC}/configure ${P}
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libIDL-2.0|libIDL|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libgnome-2.0|libgnome|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${WRKSRC}/configure ${P}
	${REINPLACE_CMD} -e 's|gtk+-unix-print-2.0|gtk+-unix-print|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-x11-2.0|gdk-x11|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-pixbuf-xlib-2.0|gdk-pixbuf-xlib|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|soup-2.4|soup|g' 	${WRKSRC}/*.in ${WRKSRC}/*/*.in \
		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|soup-gnome-2.4|soup-gnome|g' 	${WRKSRC}/*.in ${WRKSRC}/*/*.in \
		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libsoup_2_4|libsoup|g' 	${WRKSRC}/*.in ${WRKSRC}/*/*.in
	${REINPLACE_CMD} -e 's|-Wmissing-include-dirs||g ; \
	    	s|" == "|" = "|g' \
		${WRKSRC}/configure
	for file in ${WRKSRC}/*-2.4.pc.in;do ${CP} $$file $$(${ECHO} $$file | ${SED} -e 's/-2.4.pc/.pc/');done

	${REINPLACE_CMD} -e '/^SUBDIRS/s|docs||' ${WRKSRC}/Makefile.in

	${REINPLACE_CMD} -e 's|libproxy-1.0|libproxy|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gnome-keyring-1|gnome-keyring|g' ${WRKSRC}/configure

	${REINPLACE_CMD} -e 's|gnome-2.4|gnome|g' ${WRKSRC}/*.pc.in
	cd ${WRKSRC}/libsoup && ${CP} libsoup-2.4.sym libsoup.sym
	cd ${WRKSRC}/libsoup && ${CP} libsoup-gnome-2.4.sym libsoup-gnome.sym
	


.include <bsd.port.mk>
#EOF
