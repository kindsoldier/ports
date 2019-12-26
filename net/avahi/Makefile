#
# $Id$
#
PORTNAME=	avahi
PORTVERSION=	0.6.31
CATEGORIES?=	net dns
MASTER_SITES=	http://www.avahi.org/download/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Service discovery on a local network

LIB_DEPENDS+=	libdaemon.so:devel/libdaemon
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libdbus.so:gnome/dbus

BUILD_DEPENDS+=	intltool-merge:devel/intltool

USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --with-distro=freebsd
CONFIGURE_ARGS+= --with-dbus-system-socket=unix:path=/var/run/dbus/system_bus_socket
CONFIGURE_ARGS+= --disable-monodoc
CONFIGURE_ARGS+= --disable-doxygen-doc
CONFIGURE_ARGS+= --disable-doxygen-dot
CONFIGURE_ARGS+= --localstatedir=/var

CONFIGURE_ARGS+= --disable-stack-protector
CONFIGURE_ARGS+= --enable-compat-libdns_sd
CONFIGURE_ARGS+= --enable-compat-howl
#CONFIGURE_ARGS+= --enable-autoipd
CONFIGURE_ARGS+= --disable-gtk
CONFIGURE_ARGS+= --disable-gtk3
CONFIGURE_ARGS+= --disable-python
CONFIGURE_ARGS+= --disable-qt3
CONFIGURE_ARGS+= --disable-qt4
CONFIGURE_ARGS+= --disable-mono


CPPFLAGS+=	-I${LOCALBASE}/include -DHAVE_KQUEUE ${PTHREAD_CFLAGS}
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}

CONFIGURE_ARGS+= --with-autoipd-group=avahi
CONFIGURE_ARGS+= --with-autoipd-user=avahi
CONFIGURE_ARGS+= --with-avahi-group=avahi
CONFIGURE_ARGS+= --with-avahi-priv-access-group=wheel
CONFIGURE_ARGS+= --with-avahi-user=avahi

CONFIGURE_ARGS+= --enable-glib
CONFIGURE_ARGS+= --enable-gobject
CONFIGURE_ARGS+= --enable-dbus
CONFIGURE_ARGS+= --disable-gdbm

FILES+= ${WRKSRC}/configure 
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*.pc.in

post-patch:
	${REINPLACE_CMD} -e 's|/etc|${PREFIX}/etc|' \
		${WRKSRC}/man/*.*
	${RM} -f ${WRKSRC}/man/*.bak
	${REINPLACE_CMD} -e 's|-ldl||g ; s|netdev|network|g' \
		${WRKSRC}/configure \
		${WRKSRC}/avahi-client/Makefile.in \
		${WRKSRC}/avahi-daemon/Makefile.in
#	${FIND} ${WRKSRC} -name Makefile.in | ${XARGS} ${REINPLACE_CMD} -e 's|(LIBINTL)|(INTLLIBS)|g ; \
#		s|(LIBICONV)|(LTLIBICONV)|g'

#	${REINPLACE_CMD} -e 's|%%RC_SUBR%%|/etc/rc.subr| ; \
#	    	s|%%GNOME_SUBR%%|${GNOME_SUBR}|' \
#		${WRKSRC}/initscript/freebsd/avahi-dnsconfd.sh.in \
#		${WRKSRC}/initscript/freebsd/avahi-daemon.sh.in
	${REINPLACE_CMD} -e 's|dbus_connection_disconnect|dbus_connection_close|g' \
	    	${WRKSRC}/avahi-client/client.c \
		${WRKSRC}/avahi-daemon/dbus-protocol.c
	${REINPLACE_CMD} -e 's|^_||g' \
		${WRKSRC}/avahi-ui/*.desktop.in.in
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
	${REINPLACE_CMD} -e 's|@PTHREAD_LIBS@|${PTHREAD_LIBS}|' ${WRKSRC}/*.pc.in
	${REINPLACE_CMD} -e 's|@PTHREAD_CFLAGS@|${PTHREAD_CFLAGS}|' ${WRKSRC}/*.pc.in


AVAHI_PKGCONFIG+= avahi-client.pc
AVAHI_PKGCONFIG+= avahi-compat-howl.pc
AVAHI_PKGCONFIG+= avahi-compat-libdns_sd.pc
AVAHI_PKGCONFIG+= avahi-core.pc
AVAHI_PKGCONFIG+= avahi-glib.pc
AVAHI_PKGCONFIG+= avahi-gobject.pc
AVAHI_PKGCONFIG+= avahi-qt3.pc
AVAHI_PKGCONFIG+= avahi-qt4.pc
AVAHI_PKGCONFIG+= avahi-sharp.pc
AVAHI_PKGCONFIG+= avahi-ui-gtk3.pc
AVAHI_PKGCONFIG+= avahi-ui-sharp.pc
AVAHI_PKGCONFIG+= avahi-ui.pc


post-build:
.for file in ${AVAHI_PKGCONFIG}
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${GMAKE} \
		${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} ${file}
.endfor

#avahi-pre-su-install:
#	${MKDIR} ${PREFIX}/lib/avahi
#	${TOUCH} -f ${PREFIX}/lib/avahi/.keep


post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/avahi-daemon/avahi-daemon.conf ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/avahi-daemon/hosts ${STAGEDIR}${EXAMPLESDIR}
	${MKDIR} ${LOCALBASE}/share/dbus/system-services
	${INSTALL_DATA} ${FILESDIR}/org.freedesktop.Avahi.service \
	    	${STAGEDIR}${LOCALBASE}/share/dbus/system-services

	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  avahi-browse.1 avahi-browse-domains.1
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  avahi-publish.1 avahi-publish-address.1
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  avahi-publish.1 avahi-publish-service.1
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  avahi-resolve.1 avahi-resolve-address.1
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  avahi-resolve.1 avahi-resolve-host-name.1

PORTEXAMPLES=	*

.include <bsd.port.mk>
#EOF
