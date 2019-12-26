#
# $Id$
#
PORTNAME=	unique
PORTVERSION=	1.1.6
CATEGORIES=	x11-toolkits
MASTER_SITES=	GNOME/sources/lib${PORTNAME}/${PORTVERSION:R}/
DISTNAME=	lib${PORTNAME}-${PORTVERSION}
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Library for single instance applications

LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libdbus.so:gnome/dbus
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib

USES+=		tar:bzip2
USES+=		gmake
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-maintainer-flags
CONFIGURE_ENV+=	CPPFLAGS="-I${LOCALBASE}/include" 
CONFIGURE_ENV+=	LDFLAGS="-L${LOCALBASE}/lib -ldbus-glib"

CONFIGURE_ARGS+= --disable-gtk-doc
CONFIGURE_ARGS+= --disable-silent-rules
#CONFIGURE_ARGS+= --enable-bacon=yes
CONFIGURE_ARGS+= --enable-dbus=yes
#CONFIGURE_ARGS+= --enable-introspection=yes

FILES= 	${WRKSRC}/configure ${WRKSRC}/Makefile.in  ${WRKSRC}/*/Makefile.in 
FILES+= ${WRKSRC}/*/*/Makefile.in ${WRKSRC}/*.pc.in

post-patch:
	${REINPLACE_CMD} -e 's|G_CONST_RETURN|const|g' \
		${WRKSRC}/unique/uniqueapp.c \
		${WRKSRC}/unique/uniquebackend.[ch] \
		${WRKSRC}/unique/uniqueinternals.h \
		${WRKSRC}/unique/uniquemessage.[ch]


	${REINPLACE_CMD} -e 's,glib-2.0,glib,g' ${FILES}
	${REINPLACE_CMD} -e 's,gtk+-2.0,gtk+,g' ${FILES}
	${REINPLACE_CMD} -e 's,dbus-glib-1,dbus-glib,g' ${FILES}
	${REINPLACE_CMD} -e 's,/unique-1.0/unique,/unique,g' ${FILES}

	${REINPLACE_CMD} -e 's,-@UNIQUE_API_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,UNIQUE_LT_VERSION_INFO=.*,UNIQUE_LT_VERSION_INFO="1:0:1",' ${FILES}

	${REINPLACE_CMD} -e 's,unique-1.0,unique,g' ${FILES}
	${REINPLACE_CMD} -e 's,unique_1_0,unique,g' ${FILES}

	${REINPLACE_CMD} -e 's|install:.*|install:|' ${WRKSRC}/doc*/Makefile.in

.include <bsd.port.mk>
#EOF
