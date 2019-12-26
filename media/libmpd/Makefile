#
# $Id$
#
PORTNAME=	libmpd
PORTVERSION=	11.8.17
CATEGORIES=	audio
MASTER_SITES+=	http://download.sarine.nl/Programs/gmpc/${PORTVERSION:R}.16/
MASTER_SITES+=	http://freebsd.unixfreunde.de/sources/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Abstraction around libmpdclient

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libglib.so:devel/libglib


GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES+=		gmake

FILES= ${WRKSRC}/configure ${WRKSRC}/*.pc.in


post-patch:
	${REINPLACE_CMD} -e 's,libmpd-1.0\/libmpd,libmpd,' \
		${WRKSRC}/src/Makefile.in

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
