#
# $Id$
#
PORTNAME=	gvfs
PORTVERSION=	1.22.3 #1.20.3
CATEGORIES=	devel gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNOME virtual file system

LIB_DEPENDS+=	libgcrypt.so:crypto/libgcrypt
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libgio.so:devel/libglib
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgmodule.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib
LIB_DEPENDS+=	libsmbclient.so:net/samba
LIB_DEPENDS+=	libavahi-client.so:net/avahi
LIB_DEPENDS+=	libavahi-common.so:net/avahi
LIB_DEPENDS+=	libavahi-glib.so:net/avahi
LIB_DEPENDS+=	libdbus.so:gnome/dbus


USES+=		tar:xz
USES+=		gmake
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS=	-L${LOCALBASE}/lib

#CONFIGURE_ARGS+= --disable-afc
CONFIGURE_ARGS+= --disable-bash-completion
CONFIGURE_ARGS+= --disable-bluray
CONFIGURE_ARGS+= --disable-cdda
CONFIGURE_ARGS+= --disable-fuse
CONFIGURE_ARGS+= --disable-gdu
CONFIGURE_ARGS+= --disable-goa
CONFIGURE_ARGS+= --disable-gphoto2
CONFIGURE_ARGS+= --disable-gtk
CONFIGURE_ARGS+= --disable-gudev
CONFIGURE_ARGS+= --disable-hal
CONFIGURE_ARGS+= --disable-keyring
CONFIGURE_ARGS+= --disable-libmtp
CONFIGURE_ARGS+= --disable-libsystemd-login
CONFIGURE_ARGS+= --disable-obexftp
CONFIGURE_ARGS+= --disable-udev
CONFIGURE_ARGS+= --disable-udisks2

CONFIGURE_ARGS+= --enable-avahi
CONFIGURE_ARGS+= --enable-archive
CONFIGURE_ARGS+= --enable-http
CONFIGURE_ARGS+= --enable-samba

LDFLAGS+=	-L${LOCALBASE}/lib



FILES= ${WRKSRC}/configure

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

	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${FILES}

	${REINPLACE_CMD} -e 's|gmodule-no-export-2.0|gmodule-no-export|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' 	${FILES}


	${REINPLACE_CMD} -e 's|gnome-keyring-1|gnome-keyring|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libsoup-gnome-2.4|libsoup-gnome|g' 	${FILES}

PLIST_FILES+=	man/man1/gvfs-less.1.gz
PLIST_FILES+=	man/man1/gvfs-cat.1.gz
PLIST_FILES+=	man/man1/gvfs-copy.1.gz
PLIST_FILES+=	man/man1/gvfs-info.1.gz
PLIST_FILES+=	man/man1/gvfs-ls.1.gz
PLIST_FILES+=	man/man1/gvfs-mime.1.gz
PLIST_FILES+=	man/man1/gvfs-mkdir.1.gz
PLIST_FILES+=	man/man1/gvfs-monitor-dir.1.gz
PLIST_FILES+=	man/man1/gvfs-monitor-file.1.gz
PLIST_FILES+=	man/man1/gvfs-mount.1.gz
PLIST_FILES+=	man/man1/gvfs-move.1.gz
PLIST_FILES+=	man/man1/gvfs-open.1.gz
PLIST_FILES+=	man/man1/gvfs-rename.1.gz
PLIST_FILES+=	man/man1/gvfs-rm.1.gz
PLIST_FILES+=	man/man1/gvfs-save.1.gz
PLIST_FILES+=	man/man1/gvfs-set-attribute.1.gz
PLIST_FILES+=	man/man1/gvfs-trash.1.gz
PLIST_FILES+=	man/man1/gvfs-tree.1.gz
PLIST_FILES+=	man/man1/gvfsd-fuse.1.gz
PLIST_FILES+=	man/man1/gvfsd-metadata.1.gz
PLIST_FILES+=	man/man1/gvfsd.1.gz
PLIST_FILES+=	man/man7/gvfs.7.gz


.include <bsd.port.mk>
#EOF

