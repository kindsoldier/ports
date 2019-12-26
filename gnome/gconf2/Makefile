#
# $Id$
#
PORTNAME=	gconf2
PORTVERSION=	2.32.4
CATEGORIES=	devel gnome
MASTER_SITES=	GNOME
MASTER_SITE_SUBDIR=	sources/GConf/${PORTVERSION:C/^([0-9]+\.[0-9]+).*/\1/}
DISTNAME=	GConf-${PORTVERSION}
DIST_SUBDIR=	gnome2

MAINTAINER=	onborodin@gmail.com
COMMENT=	A configuration database system for GNOME

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libORBit.so:gnome/libORBit2
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libintl.so:devel/gettext


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS+= --with-html-dir=${PREFIX}/share/doc
CONFIGURE_ARGS+= --disable-gtk-doc
CONFIGURE_ARGS+= --enable-gconf-source=${PREFIX}/etc/gconf/schemas
CONFIGURE_ARGS+= --disable-defaults-service
CONFIGURE_ARGS+= --enable-gsettings-backend
CONFIGURE_ARGS+=--without-openldap
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


PLIST_FILES+=	man/man1/gconftool.1.gz
PLIST_FILES+=	man/man1/gsettings-data-convert.1.gz
PLIST_FILES+=	man/man1/gsettings-schema-convert.1.gz

FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/*.pc.in
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in 
FILES+= ${WRKSRC}/*/*service.in
FILES+= ${WRKSRC}/*/default.path.in

post-patch:
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

	${REINPLACE_CMD} -e 's|libglade-2.0|libglade|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gladeui-1.0|gladeui|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libxfce4util-1.0|libxfce4util|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libstartup-notification-1.0|libstartup-notification|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfconf-0|xfconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|exo-0.3|exo|g' 		${FILES}
	${REINPLACE_CMD} -e 's|dbus-1|dbus|g' 		${FILES}
	${REINPLACE_CMD} -e 's|dbus-glib-1|dbus-glib|g' ${FILES}
	${REINPLACE_CMD} -e 's|libwnck-1.0|libwnck|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfprint-1.0|xfprint|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfcegui4-1.0|xfcegui4|g' ${FILES}
	${REINPLACE_CMD} -e 's|libxfce4menu-0.1|libxfce4menu|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfce4panel-1.0|xfce4panel|g' 	${FILES}
	${REINPLACE_CMD} -e 's|thunarx-1|thunarx|g' 		${FILES}
	${REINPLACE_CMD} -e 's|thunar-vfs-1|thunar-vfs|g' 	${FILES}

	${REINPLACE_CMD} -e 's|ORBit-2.0|ORBit|g' 	${FILES}

	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconf-2|gconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconfd-2|gconfd|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconf-sanity-check-2|gconf-sanity-check|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconftool-2|gconftool|g' 	${FILES}

	${REINPLACE_CMD} -e 's|-$$(MAJOR_VERSION)||g' 	${FILES}
	${REINPLACE_CMD} -e 's|_$$(MAJOR_VERSION)||g' 	${FILES}
	${REINPLACE_CMD} -e 's|-@MAJOR_VERSION@||g' 	${FILES}

	${REINPLACE_CMD} -e 's|/$$(MAJOR_VERSION)||g' 	${FILES}
	${REINPLACE_CMD} -e 's|/$${MAJOR_VERSION}||g' 	${FILES}
	${REINPLACE_CMD} -e 's|/$$MAJOR_VERSION||g' 	${FILES}
	${REINPLACE_CMD} -e 's|/@MAJOR_VERSION@||g' 	${FILES}

	cd ${WRKSRC} && ${CP} gconf-2.m4.in  gconf.m4.in
	cd ${WRKSRC} && ${CP} gconf-2.0.pc.in gconf.pc.in

	cd ${WRKSRC}/doc && ${CP} gconftool-2.1 gconftool.1

	${REINPLACE_CMD} -e 's|install:.*|install:|' ${WRKSRC}/doc*/*/Makefile.in

#mkdir -p /usr/local/etc/gconf/gconf.xml.defaults
#chmod 755 /usr/local/etc/gconf/gconf.xml.defaults
#mkdir -p /usr/local/etc/gconf/gconf.xml.mandatory
#chmod 755 /usr/local/etc/gconf/gconf.xml.mandatory

.include <bsd.port.mk>
#EOF
