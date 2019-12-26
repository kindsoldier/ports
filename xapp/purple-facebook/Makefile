# $FreeBSD: head/net-im/purple-facebook/Makefile 462014 2018-02-16 13:46:32Z swills $

PORTNAME=	purple-facebook
PORTVERSION=	0.9.5
CATEGORIES=	net-im
MASTER_SITES=	https://github.com/dequis/purple-facebook/releases/download/v${PORTVERSION}-${GITHASH}/
DISTNAME=	${PORTNAME}-${PORTVERSION}-${GITHASH}

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Facebook plugin for libpurple

LIB_DEPENDS+=	libpurple.so:xapp/pidgin
LIB_DEPENDS+=	libjson-glib.so:gnome/libjson-glib

GITHASH=	9ff9acf9fa14
USES=		autoreconf libtool gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

pre-patch:
	${REINPLACE_CMD} -e 's,glib-2.0,glib,' ${WRKSRC}/configure.ac
	${REINPLACE_CMD} -e 's,json-glib-1.0,json-glib,' ${WRKSRC}/configure.ac
	${REINPLACE_CMD} -e 's,purple-2,purple,' ${WRKSRC}/configure.ac


.include <bsd.port.mk>
