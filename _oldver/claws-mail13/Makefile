#
# $Id$
#
PORTNAME=	claws-mail
PORTVERSION=	3.13.2
CATEGORIES=	mail news
#MASTER_SITES=	SF/sylpheed-claws/Claws%20Mail/${PORTVERSION}
MASTER_SITES=	http://www.claws-mail.org/download.php?file=releases/
#PKGNAMESUFFIX=	-ldap


MAINTAINER=	onborodin@gmail.com
COMMENT=	A lightweight and very featureful GTK+ based e-mail and news client


LIB_DEPENDS=	libgpgme.so:crypto/gpgme
LIB_DEPENDS+=	libassuan.so:crypto/libassuan
LIB_DEPENDS+=	libgcrypt.so:crypto/libgcrypt
LIB_DEPENDS+=	libgnutls.so:crypto/libgnutls
LIB_DEPENDS+=	libgpg-error.so:crypto/libgpg-error

LIB_DEPENDS+=	libglib.so:devel/libglib

LIB_DEPENDS+=	libltdl.so:devel/libtool
LIB_DEPENDS+=	libcanberra-gtk.so:gnome/libcanberra
LIB_DEPENDS+=	libcanberra.so:gnome/libcanberra

LIB_DEPENDS+=	libpoppler-glib.so:graph/libpoppler-glib
LIB_DEPENDS+=	libpoppler.so:graph/libpoppler

LIB_DEPENDS+=	libtiff.so:graph/libtiff
LIB_DEPENDS+=	libogg.so:media/libogg
LIB_DEPENDS+=	libvorbis.so:media/libvorbis
LIB_DEPENDS+=	libvorbisfile.so:media/libvorbis
LIB_DEPENDS+=	libcurl.so:net/libcurl
LIB_DEPENDS+=	libetpan.so:net/libetpan
LIB_DEPENDS+=	libenchant.so:text/libenchant
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre

LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libdbus.so:gnome/dbus
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib

LIB_DEPENDS+=	libnotify.so:gnome/libnotify
LIB_DEPENDS+=	libstartup-notification.so:xfce/libstartup-notification

LIB_DEPENDS+=	libsoup.so:gnome/libsoup
LIB_DEPENDS+=	libsoup-gnome.so:gnome/libsoup

RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils

#LIB_DEPENDS+=	libldap.so:net/openldap

USES+=		tar:xz
GNU_CONFIGURE=	yes
USES+=		gmake perl5

CONFIGURE_ARGS+= --program-transform-name=''

CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-manualdir=${DOCSDIR}/manual

CFLAGS+=	-std=gnu99
CFLAGS+= 	${PTHREAD_CFLAGS} -pthread -I${LOCALBASE}/include -I${LOCALBASE}/include/openldap
CPPFLAGS+=	${PTHREAD_CFLAGS} -pthread -I${LOCALBASE}/include -I${LOCALBASE}/include/openldap 
LDFLAGS+=	-pthread -L${LOCALBASE}/lib ${PTHREAD_LIBS}
LIBS+=		-L${LOCALBASE}/lib ${PTHREAD_LIBS}

CONFIGURE_ARGS+= --mandir=${PREFIX}/man

CONFIGURE_ARGS+= --disable-compface
CONFIGURE_ARGS+= --disable-dbus
CONFIGURE_ARGS+= --disable-jpilot
CONFIGURE_ARGS+= --disable-ldap
CONFIGURE_ARGS+= --disable-spamassassin-plugin
CONFIGURE_ARGS+= --disable-static
CONFIGURE_ARGS+= --disable-valgrind

CONFIGURE_ARGS+= --enable-bogofilter-plugin
CONFIGURE_ARGS+= --enable-enchant
CONFIGURE_ARGS+= --enable-gnutls
CONFIGURE_ARGS+= --enable-ipv6
CONFIGURE_ARGS+= --enable-libetpan

CONFIGURE_ARGS+= --enable-pgpmime-plugin
CONFIGURE_ARGS+= --enable-pgpcore-plugin
CONFIGURE_ARGS+= --enable-pgpinline-plugin
CONFIGURE_ARGS+= --enable-smime-plugin

RUN_DEPENDS+=		gpg:crypto/gnupg
RUN_DEPENDS+=		gpgv2:crypto/gnupg2

#CONFIGURE_ARGS+= --disable-pgpmime-plugin
#CONFIGURE_ARGS+= --disable-pgpcore-plugin
#CONFIGURE_ARGS+= --disable-pgpinline-plugin
#CONFIGURE_ARGS+= --disable-smime-plugin

#CONFIGURE_ARGS+=	--enable-maintainer-mode --enable-crash-dialog

CONFIGURE_ARGS+= --enable-startup-notification
#CONFIGURE_ARGS+= --disable-networkmanager-support
CONFIGURE_ARGS+= --disable-python-plugin
CONFIGURE_ARGS+= --disable-perl-plugin


FILES= ${WRKSRC}/configure

post-patch:
#	${REINPLACE_CMD} -e \
#		's|-lresolv||g; s|-lpisock\"|-liconv &|g' \
#		-e 's|-DGTK_DISABLE_DEPRECATED -DGDK_DISABLE_DEPRECATED||g' \
#		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|/etc|${LOCALBASE}&|g ; s|/usr/share|${LOCALBASE}/share|g' \
		${WRKSRC}/src/procmime.c
	${REINPLACE_CMD} -e "s|po intl src|po src| ; s:@CLAWS_GNOME2:#@CLAWS_GNOME2:g" ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e "s:-Wno-unused-function::" ${WRKSRC}/src/Makefile.in

	${REINPLACE_CMD} -e "/(GPGME_LIBS)/d" \
		${WRKSRC}/src/Makefile.in


	for f in `${FIND} ${WRKSRC}/tools -type f -print`; do \
		${REINPLACE_CMD} -e "s|/usr/bin/perl|${PERL}|" $$f; done

	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libIDL-2.0|libIDL|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libgnome-2.0|libgnome|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${WRKSRC}/configure

	${REINPLACE_CMD} -e 's|dbus-1|dbus|g' 	${FILES}
	${REINPLACE_CMD} -e 's|dbus-glib-1|dbus-glib|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libstartup-notification-1.0|libstartup-notification|g' 	${FILES}

	${REINPLACE_CMD} -e 's|webkit-1.0|webkit|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libsoup-2.4|libsoup|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libsoup-2.4|libsoup|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libsoup-gnome-2.4|libsoup-gnome|g' 	${WRKSRC}/configure


	${REINPLACE_CMD} -e 's|/etc|${LOCALBASE}&|g ; s|/usr/share|${LOCALBASE}/share|g' \
		${WRKSRC}/src/procmime.c
#	${REINPLACE_CMD} -e "/(GPGME_LIBS)/d" \
#		${WRKSRC}/src/Makefile.in

.include <bsd.port.pre.mk>

.if ${ARCH:Marmv6*}
CONFIGURE_ARGS+= --disable-fancy-plugin
CONFIGURE_ARGS+= --disable-pdf_viewer-plugin
.else
LIB_DEPENDS+=	libwebkitgtk.so:gnome/libwebkit-gtk2
.endif


post-install:
	${MKDIR} ${STAGEDIR}${DESKTOPDIR}
	${INSTALL_DATA} ${WRKSRC}/claws-mail.desktop ${STAGEDIR}${DESKTOPDIR}


PLIST=	${PKGDIR}/pkg-plist.${ARCH}


.include <bsd.port.post.mk>
#EOF
