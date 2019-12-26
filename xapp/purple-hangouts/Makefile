# Created by: José García Juanino <jjuanino@gmail.com>
# $FreeBSD: head/net-im/purple-hangouts/Makefile 491156 2019-01-25 15:57:59Z swills $

PORTNAME=	purple-hangouts
PORTVERSION=	20181202
CATEGORIES=	net-im
MASTER_SITES=	https://bitbucket.org/EionRobb/${PORTNAME}/get/
# Commit tag. Must be changed according with PORTVERSION.
DISTNAME=	cccf2f62d439

MAINTAINER=	jjuanino@gmail.com
COMMENT=	Hangouts plugin for libpurple

LIB_DEPENDS=	libpurple.so:pidgin/libpurple
LIB_DEPENDS=	libjson-glib.so:gnome/libjson-glib
LIB_DEPENDS=	libprotobuf-c.so:devel/protobuf-c

USES=		gmake zip
WRKSRC=		${WRKDIR}/EionRobb-${PORTNAME}-${DISTNAME}
USE_LDCONFIG=	yes
CFLAGS+=	-I${LOCALBASE}/include

post-patch:
	${REINPLACE_CMD} -e 's,glib-2.0,glib,' ${WRKSRC}/Makefile
	${REINPLACE_CMD} -e 's,json-glib-1.0,json-glib,' ${WRKSRC}/Makefile
	${REINPLACE_CMD} -e 's,purple-2,purple,' ${WRKSRC}/Makefile


post-install:
	${STRIP_CMD} ${STAGEDIR}${LOCALBASE}/lib/purple/libhangouts.so

.include <bsd.port.mk>
