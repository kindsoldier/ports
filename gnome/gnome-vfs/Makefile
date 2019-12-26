#
# $Id$
#
PORTNAME=	gnome-vfs
PORTVERSION=	2.24.4
CATEGORIES=	devel gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNOME Virtual File System

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgconf.so:gnome/gconf2
LIB_DEPENDS+=	libsmbclient.so:net/samba
LIB_DEPENDS+=	libavahi-glib.so:net/avahi
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libintl.so:devel/gettext

RUN_DEPENDS+=	${LOCALBASE}/lib/pkgconfig/gnome-mime-data.pc:gnome/gnome-mime-data
BUILD_DEPENDS+=	${LOCALBASE}/lib/pkgconfig/gnome-mime-data.pc:gnome/gnome-mime-data
BUILD_DEPENDS+=	intltool-extract:devel/intltool

LIB_DEPENDS+=	libORBit.so:gnome/libORBit2
LIB_DEPENDS+=	libfam.so:devel/libgamin
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgmodule.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib
LIB_DEPENDS+=	libgthread.so:devel/libglib
LIB_DEPENDS+=	libxml2.so:text/libxml2
#LIB_DEPENDS+=	libiconv.so:text-libs/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libdbus.so:gnome/dbus
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libgconf.so:gnome/gconf2
LIB_DEPENDS+=	libsmbclient.so:net/samba
LIB_DEPENDS+=	libavahi-client.so:net/avahi
LIB_DEPENDS+=	libavahi-common.so:net/avahi
LIB_DEPENDS+=	libavahi-glib.so:net/avahi

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

CONFIGURE_ARGS+= --enable-openssl
CONFIGURE_ARGS+= --with-openssl-libs=/usr/lib
CONFIGURE_ARGS+= --disable-gnutls
CONFIGURE_ARGS+= --with-libgnutls-prefix=${LOCALBASE}

CONFIGURE_ARGS+= --disable-fam
CONFIGURE_ARGS+= --enable-ipv6
CONFIGURE_ARGS+= --enable-avahi
CONFIGURE_ARGS+= --disable-howl
CONFIGURE_ARGS+= --disable-hal
CONFIGURE_ARGS+= --enable-samba
#CONFIGURE_ARGS+= --with-hal-mount=/sbin/mount
#CONFIGURE_ARGS+= --with-hal-umount=/sbin/umount
CPPFLAGS+=	${PTHREAD_CFLAGS} -I${LOCALBASE}/include -DPTHREAD_LIB=\"${PTHREAD_LIBS}\"
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}

_SCHEMAS+= ${PREFIX}/etc/gconf/schemas/desktop_default_applications.schemas
_SCHEMAS+= ${PREFIX}/etc/gconf/schemas/desktop_gnome_url_handlers.schemas
_SCHEMAS+= ${PREFIX}/etc/gconf/schemas/system_dns_sd.schemas
_SCHEMAS+= ${PREFIX}/etc/gconf/schemas/system_http_proxy.schemas
_SCHEMAS+= ${PREFIX}/etc/gconf/schemas/system_smb.schemas

FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in
FILES+= ${WRKSRC}/*.pc.in


post-patch:
	${REINPLACE_CMD} -e 's|@PTHREAD_LIB@|${PTHREAD_LIBS}|' \
		${WRKSRC}/gnome-vfs-2.0.pc.in ${WRKSRC}/gnome-vfs-module-2.0.pc.in
	${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g' ${WRKSRC}/libgnomevfs/Makefile.in
	${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g ; \
		s|%%LOCALBASE%%|${LOCALBASE}|g' \
		${WRKSRC}/libgnomevfs/xdgmime.c \
		${WRKSRC}/libgnomevfs/gnome-vfs-hal-mounts.c
	${REINPLACE_CMD} -e 's|-lacl||g' ${WRKSRC}/configure
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
	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconftool-2|gconftool|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gmodule-no-export-2.0|gmodule-no-export|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gnome-mime-data-2.0|gnome-mime-data|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gnome-keyring-1|gnome-keyring|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libsoup-gnome-2.4|libsoup-gnome|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gnome-mime-data-2.0|gnome-mime-data|g' 	${FILES}
	cd ${WRKSRC} && ${CP} gnome-vfs-2.0.pc.in gnome-vfs.pc.in
	cd ${WRKSRC} && ${CP} gnome-vfs-module-2.0.pc.in gnome-vfs-module.pc.in
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${FILES}
	${REINPLACE_CMD} -e 's|gnome-vfs-module-2.0|gnome-vfs-module|g' ${FILES}
	${REINPLACE_CMD} -e 's|gnome-vfs-2|gnome-vfs|g' ${FILES}
	${REINPLACE_CMD} -e 's|gnome-vfs-module-2|gnome-vfs-module|g' ${FILES}
	${REINPLACE_CMD} -e 's|-2.la|.la|g' ${FILES}
	${REINPLACE_CMD} -e 's|gnomevfs-2|gnomevfs|g' ${FILES}
#libgnomevfsincludedir = $(includedir)/gnome-vfs-2.0/libgnomevfs
#libgnomevfsmoduleincludedir = $(includedir)/gnome-vfs-module-2.0/libgnomevfs
#	${REINPLACE_CMD} -e 's,^LIBGNOMEVFS_VERSION=.*,LIBGNOMEVFS_VERSION=2,g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,^LIBGNOMEVFS_CURRENT=.*,LIBGNOMEVFS_CURRENT=2,g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,^LIBGNOMEVFS_REVISION=.*,LIBGNOMEVFS_REVISION=0,g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,^LIBGNOMEVFS_AGE=.*,LIBGNOMEVFS_AGE=2,g' ${WRKSRC}/configure
#	${REINPLACE_CMD} -e 's,VERSION=$$LIBGNOMEVFS_VERSION,VERSION=${PORTVERSION},g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|install:.*|install:|' ${WRKSRC}/doc*/Makefile.in
	${REINPLACE_CMD} -e 's| -ldl||' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|-DG_DISABLE_DEPRECATED||g' \
		${WRKSRC}/*/Makefile.in



PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
SUB_FILES+= 	pkg-install pkg-deinstall

.include <bsd.port.mk>
#EOF

