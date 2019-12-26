#
# $Id$
#
PORTNAME=	evince
PORTVERSION=	2.32.0
CATEGORIES=	graphics print gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNOME 2 multi-format document viewer


LIB_DEPENDS+=	libgcrypt.so:crypto/libgcrypt
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgconf.so:gnome/gconf2
LIB_DEPENDS+=	libgnome-keyring.so:gnome/libgnome-keyring
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libpoppler-glib.so:graph/libpoppler-glib
LIB_DEPENDS+=	libspectre.so:graph/libspectre
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libdjvulibre.so:graph/libdjvulibre
LIB_DEPENDS+=	libgs.so:print/ghostscript
LIB_DEPENDS+=	libcurl.so:net/libcurl


BUILD_DEPENDS+=	intltool-extract:devel/intltool
#BUILD_DEPENDS+=	scrollkeeper-config:gnome/scrollkeeper
BUILD_DEPENDS+=	gnome-doc-tool:gnome/gnome-doc-utils
RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils
RUN_DEPENDS+=	gconftool:gnome/gconf2

BUILD_DEPENDS+= ${LOCALBASE}/lib/pkgconfig/gnome-icon-theme.pc:misc/gnome-icon-theme

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
USES+=		tar:bzip2
USES+=		gmake

EXTRA_CFLAGS+= -DWITH_SMCLIENT=0
CPPFLAGS+=	-I${LOCALBASE}/include ${EXTRA_CFLAGS}
LDFLAGS+=	-L${LOCALBASE}/lib

#CONFIGURE_ARGS+= --disable-schemas-compile
#CONFIGURE_ARGS+= --disable-schemas-install
#CONFIGURE_ARGS+= --disable-schemas-install
#CONFIGURE_ARGS+= --disable-scrollkeeper
CONFIGURE_ARGS+= --disable-dependency-tracking
CONFIGURE_ARGS+= --disable-dvi
CONFIGURE_ARGS+= --disable-gtk-doc
CONFIGURE_ARGS+= --disable-impress
CONFIGURE_ARGS+= --disable-nautilus
CONFIGURE_ARGS+= --disable-silent-rules
CONFIGURE_ARGS+= --enable-dbus
CONFIGURE_ARGS+= --enable-djvu
CONFIGURE_ARGS+= --enable-pixbuf
CONFIGURE_ARGS+= --enable-t1lib
CONFIGURE_ARGS+= --with-gconf
CONFIGURE_ARGS+= --with-keyring


PLIST_FILES+=	man/man1/evince.1.gz

FILES+= ${WRKSRC}/configure 
FILES+= ${WRKSRC}/*.pc.in
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in

post-patch:
	${REINPLACE_CMD} -e 's|execinfo.h|#|g' \
		${WRKSRC}/configure
	${REINPLACE_CMD} -e '/^DOC_MODULE_VERSION/d' \
		${WRKSRC}/help/reference/libdocument/Makefile.in \
		${WRKSRC}/help/reference/libview/Makefile.in

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

	${REINPLACE_CMD} -e 's,gtk+-unix-print-2.0,gtk+-unix-print,g' 	${FILES}

	${REINPLACE_CMD} -e 's,-@EV_API_VERSION@,,g' 	${FILES}

	${REINPLACE_CMD} -e 's,-$${EV_API_VERSION},,g' 	${FILES}
	${REINPLACE_CMD} -e 's,-$$(EV_API_VERSION),,g' 	${FILES}
	${REINPLACE_CMD} -e 's,-$$EV_API_VERSION,,g' 	${FILES}
	${REINPLACE_CMD} -e 's,_$${EV_API_VERSION},,g' 	${FILES}
	${REINPLACE_CMD} -e 's,_$$(EV_API_VERSION),,g' 	${FILES}

	${REINPLACE_CMD} -e 's,/@EV_BINARY_VERSION@/,/,g' 	${FILES}
	${REINPLACE_CMD} -e 's,/@EV_BINARY_VERSION@,,g' 	${FILES}

	${REINPLACE_CMD} -e 's,/@EV_API_VERSION@,/,g' 	${FILES}
	${REINPLACE_CMD} -e 's,/$${EV_API_VERSION},/,g' 	${FILES}
	${REINPLACE_CMD} -e 's,/$$(EV_API_VERSION),/,g' 	${FILES}

	${REINPLACE_CMD} -e 's,gconf-2.0,gconf,g' 	${FILES}
	${REINPLACE_CMD} -e 's,libIDL-2.0,libIDL,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gconftool-2,gconftool,g' ${FILES}

	${REINPLACE_CMD} -e 's,gnome-keyring-1,gnome-keyring,g' 	${FILES}

	${REINPLACE_CMD} -e 's,gdk-$$GTK_API_VERSION,gdk,' 	${FILES}
	${REINPLACE_CMD} -e 's,gtk+-$$GTK_API_VERSION,gtk+,' 	${FILES}
	${REINPLACE_CMD} -e 's,gtk+-unix-print-$$GTK_API_VERSION,gtk+-unix-print,' 	${FILES}

	${REINPLACE_CMD} -e 's,gtk+-@GTK_API_VERSION@,gtk+,' 	${FILES}
	${REINPLACE_CMD} -e 's,gdk-@GTK_API_VERSION@,gdk,' 	${FILES}



	${REINPLACE_CMD} -e 's,gdk-\\$$GTK_API_VERSION,gdk,' 	${FILES}
	${REINPLACE_CMD} -e 's,gtk+-\\$$GTK_API_VERSION,gtk+,' 	${FILES}
	${REINPLACE_CMD} -e 's,gtk+-unix-print-\\$$GTK_API_VERSION,gtk+-unix-print,' 	${FILES}

	${REINPLACE_CMD} -e 's,-2.32,,g' 	${FILES}
	${REINPLACE_CMD} -e '/backend/s,/evince/3,/evince,g' ${FILES}

	${REINPLACE_CMD} -e 's,^install:.*,install:,g' 	${WRKSRC}/*/reference/*/Makefile.in

#post-configure:
#	cd ${WRKSRC} && ${CP} evince-document-2.32.pc evince-document.pc
#	cd ${WRKSRC} && ${CP} evince-view-2.32.pc evince-view.pc


PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
SUB_FILES+= 	pkg-install pkg-deinstall

post-install:
	${REINPLACE_CMD} -e 's,^Name\(\[.*\]\)=.*,Name\1=Evince,g' ${STAGEDIR}${PREFIX}/share/applications/evince.desktop

.include <bsd.port.mk>
#EOF


