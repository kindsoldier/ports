# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/devel/librelp/Makefile 533103 2020-04-27 06:07:44Z matthew $

PORTNAME=	librelp
PORTVERSION=	1.6.0
CATEGORIES=	devel
MASTER_SITES=	http://download.rsyslog.com/librelp/

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	Reliable event logging protocol library

LIB_DEPENDS=		libgnutls.so:crypto/libgnutls
#CONFIGURE_ENABLE=	tls
#CONFIGURE_DISABLE=	tls-openssl
#CONFIGURE_ENV+=	OPENSSL_LIBS="-lssl -lcrypto"

CONFIGURE_ARGS+= --enable-tls=yes
CONFIGURE_ARGS+= --enable-tls-openssl=no


USES=		pkgconfig
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

PORT_VERBS=	relp

post-patch:
	${REINPLACE_CMD} -e '/CFLAGS/s| -g||g' ${WRKSRC}/configure

.include <bsd.port.mk>
