#
# $id$
#
PORTNAME=	gnome-keyring
PORTVERSION=	2.32.1
CATEGORIES=	security gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	onborodin@gmail.com
COMMENT=	A program that keeps passwords and other secrets

LIB_DEPENDS+=	libgcrypt.so:crypto/libgcrypt
LIB_DEPENDS+=	libgpg-error.so:crypto/libgpg-error
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libdbus.so:gnome/dbus

LIB_DEPENDS+=	libintl.so:devel/gettext


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--with-pam-dir="${PREFIX}/lib"
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
#GCONF_SCHEMAS=	gnome-keyring.schemas
CONFIGURE_ARGS+= --disable-silent-rules
CONFIGURE_ARGS+= --disable-dependency-tracking
CONFIGURE_ARGS+= --with-root-certs="${LOCALBASE}/etc/ca-bundle.crt"



FILES= ${WRKSRC}/configure
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in 
FILES+= ${WRKSRC}/*/*/Makefile.in
FILES+= ${WRKSRC}/*/*.pc.in

post-patch:
	${REINPLACE_CMD} -e 's,gconf-2.0,gconf,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gdk-2.0,gdk,g' 		${FILES}
	${REINPLACE_CMD} -e 's,gdk-pixbuf-2.0,gdk-pixbuf,g' ${FILES}
	${REINPLACE_CMD} -e 's,gio-2.0,gio,g' 		${FILES}
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gmodule-2.0,gmodule,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gnome-vfs-2.0,gnome-vfs,g' ${FILES}
	${REINPLACE_CMD} -e 's,gobject-2.0,gobject,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gthread-2.0,gthread,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gtk+-2.0,gtk+,g' 	${FILES}
	${REINPLACE_CMD} -e 's,libIDL-2.0,libIDL,g' 	${FILES}
	${REINPLACE_CMD} -e 's,libgnome-2.0,libgnome,g' ${FILES}
	${REINPLACE_CMD} -e 's,libxml-2.0,libxml2,g' 	${FILES}
	${REINPLACE_CMD} -e 's,libart-2.0,libart,g' 	${FILES}

	${REINPLACE_CMD} -e 's,libglade-2.0,libglade,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gladeui-1.0,gladeui,g' 	${FILES}
	${REINPLACE_CMD} -e 's,libxfce4util-1.0,libxfce4util,g' 	${FILES}
	${REINPLACE_CMD} -e 's,libstartup-notification-1.0,libstartup-notification,g' 	${FILES}
	${REINPLACE_CMD} -e 's,xfconf-0,xfconf,g' 	${FILES}
	${REINPLACE_CMD} -e 's,exo-0.3,exo,g' 		${FILES}
	${REINPLACE_CMD} -e 's,dbus-1,dbus,g' 		${FILES}
	${REINPLACE_CMD} -e 's,dbus-glib-1,dbus-glib,g' ${FILES}
	${REINPLACE_CMD} -e 's,libwnck-1.0,libwnck,g' 	${FILES}
	${REINPLACE_CMD} -e 's,xfprint-1.0,xfprint,g' 	${FILES}
	${REINPLACE_CMD} -e 's,xfcegui4-1.0,xfcegui4,g' ${FILES}
	${REINPLACE_CMD} -e 's,libxfce4menu-0.1,libxfce4menu,g' 	${FILES}
	${REINPLACE_CMD} -e 's,xfce4panel-1.0,xfce4panel,g' 	${FILES}
	${REINPLACE_CMD} -e 's,thunarx-1,thunarx,g' 		${FILES}
	${REINPLACE_CMD} -e 's,thunar-vfs-1,thunar-vfs,g' 	${FILES}

	${REINPLACE_CMD} -e 's,gnome-keyring-1,gnome-keyring,' 	${FILES}
#	cd ${WRKSRC}/library && ${CP} gnome-keyring-1.pc.in gnome-keyring.pc.in
#	cd ${WRKSRC}/library && ${CP} gnome-keyring-1-uninstalled.pc.in gnome-keyring-uninstalled.pc.in

	${REINPLACE_CMD} -e 's,install:.*,install:,' ${WRKSRC}/doc*/Makefile.in

	${REINPLACE_CMD} -e 's,gcr-0,gcr,' 	${FILES}
	${REINPLACE_CMD} -e 's,gp11-0,gp11,' 	${FILES}

	${REINPLACE_CMD} -e 's,gtk+-2.0,gtk+,g' 	${FILES}

	${REINPLACE_CMD} -e 's,gtk+-$$GTK_API_VERSION,gtk+,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gtk+-@GTK_API_VERSION@,gtk+,g' 	${FILES}

	${REINPLACE_CMD} -e '/pkgconfig_DATA =/s,-$$(GCR_MAJOR),,g' 	${FILES}
	${REINPLACE_CMD} -e '/pkgconfig_DATA =/s,-$$(GP11_MAJOR),,g' 	${FILES}

.include <bsd.port.mk>
#EOF
