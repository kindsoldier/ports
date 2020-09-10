# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/devel/liblogging/Makefile 435649 2017-03-08 00:25:39Z matthew $

PORTNAME=	liblogging
PORTVERSION=	1.0.6
CATEGORIES=	devel
MASTER_SITES=	http://download.rsyslog.com/liblogging/

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	Easy to use system logging library

GNU_CONFIGURE=	yes
USES=		pkgconfig

CONFIGURE_ARGS+=	--disable-journal --enable-rfc3195

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/liblogging-rfc3195.so.*
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/liblogging-stdlog.so.*

.include <bsd.port.mk>
