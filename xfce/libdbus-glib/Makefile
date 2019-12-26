#
# $Id$
#
PORTNAME=	dbus
PORTVERSION=	0.104
CATEGORIES=	devel gnome
MASTER_SITES=	http://dbus.freedesktop.org/releases/dbus-glib/
PKGNAMEPREFIX=	lib
PKGNAMESUFFIX=	-glib
DISTNAME=	${PORTNAME}${PKGNAMESUFFIX}-${PORTVERSION}

MAINTAINER=	onborodin@gmail.com
COMMENT=	GLib bindings for the D-BUS messaging system

LIB_DEPENDS+=	libgio.so:devel/libglib
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgmodule.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib

LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre

LIB_DEPENDS+=	libdbus.so:gnome/dbus

USES+=		gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS+= --with-test-socket-dir=${WRKDIR}
CONFIGURE_ARGS+= --disable-doxygen-docs
CONFIGURE_ARGS+= --disable-xml-docs
CONFIGURE_ARGS+= --disable-gtk-doc 
CONFIGURE_ARGS+= --with-html-dir=${PREFIX}/share/doc
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --disable-bash-completion 

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}

PLIST_FILES+=	man/man1/dbus-binding-tool.1.gz

FILES= ${WRKSRC}/configure ${WRKSRC}/*.pc.in


post-patch:
	${REINPLACE_CMD} -e 's|install:.*|install:|' ${WRKSRC}/doc/reference/Makefile.in
	cd ${WRKSRC} && ${CP} dbus-glib-1.pc.in dbus-glib.pc.in
	cd ${WRKSRC} && ${CP}  dbus-glib-1-uninstalled.pc.in  dbus-glib-uninstalled.pc.in
	${REINPLACE_CMD} -e 's,dbus-1.0,dbus,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,dbus-1,dbus,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,dbus-glib-1.0,dbus-glib,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,dbus-glib-1,dbus-glib,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
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


.include <bsd.port.mk>
#EOF
