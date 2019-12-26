#
# $Id$
#
PORTNAME=	libsecret
PORTVERSION=	0.18.3
CATEGORIES=	security gnome
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Library to access the secret service API

#BUILD_DEPENDS=	docbook-xsl>=0:textproc/docbook-xsl \
#		vala:lang/vala
LIB_DEPENDS=	libgcrypt.so:crypto/libgcrypt

USES=		gmake  tar:xz
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--disable-introspection
INSTALL_TARGET=	install-strip
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib

FILES+=	${WRKSRC}/configure
FILES+=	${WRKSRC}/Makefile.in
FILES+=	${WRKSRC}/*/*.pc.in




post-patch:
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
	${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' 	${FILES}

	${REINPLACE_CMD} -e 's|secret_@SECRET_MAJOR@|secret|g' 	${FILES}
	${REINPLACE_CMD} -e 's|secret-@SECRET_MAJOR@|secret|g' 	${FILES}
	${REINPLACE_CMD} -e 's|secret-$$(SECRET_MAJOR)|secret|g' 	${FILES}


.include <bsd.port.mk>
#EOF
