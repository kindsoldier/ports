#
# $Id$
#
PORTNAME=	upower
PORTVERSION=	0.99.4
CATEGORIES=	sysutils
MASTER_SITES=	http://upower.freedesktop.org/releases/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	D-Bus daemon for simplifying power management tasks

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS=	libpolkit-gobject.so:gnome/polkit
LIB_DEPENDS=	libdbus-glib.so:xfce/libdbus-glib

USES=		gmake tar:xz
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS+=	--disable-gtk-doc
CONFIGURE_ARGS+=	--localstatedir=/var
CONFIGURE_ARGS+=	--with-backend=freebsd
CONFIGURE_ARGS+=	--without-idevice
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
INSTALL_TARGET=	install-strip

CONFIGURE_ARGS+=	--enable-man-pages
#BUILD_DEPENDS+= docbook-sgml>0:textproc/docbook-sgml
#BUILD_DEPENDS+= docbook-xml>0:textproc/docbook-xml
#BUILD_DEPENDS+= ${LOCALBASE}/share/xsl/docbook/manpages/docbook.xsl:textproc/docbook-xsl

FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in
FILES+= ${WRKSRC}/*.pc.in


post-patch:
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' 	${FILES}
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${FILES}
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${FILES}
	${REINPLACE_CMD} -e 's|dbus-1|dbus|g' 		${FILES}
	${REINPLACE_CMD} -e 's|dbus-glib-1|dbus-glib|g' ${FILES}

	${REINPLACE_CMD} -e 's,polkit-gobject-1,polkit-gobject,g'  ${FILES}
	${REINPLACE_CMD} -e 's,polkit-1,polkit,g'  ${FILES} 

.include <bsd.port.mk>
#EOF
