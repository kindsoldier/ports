# Created by: gno@yahoo-inc.com
# $FreeBSD: head/devel/json-c/Makefile 507372 2019-07-26 20:46:53Z gerald $

PORTNAME=	json-c
PORTVERSION=	0.13.1
CATEGORIES=	devel
MASTER_SITES=	https://s3.amazonaws.com/json-c_releases/releases/ \
		LOCAL/sunpoet
PKGNAMEPREFIX=  lib


MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	JSON (JavaScript Object Notation) implementation in C

USES=		autoreconf compiler:c11 cpe gmake libtool pathfix pkgconfig

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
TEST_TARGET=	check
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's| -Werror||g' ${WRKSRC}/Makefile.in

post-install:
	${INSTALL_DATA} ${WRKSRC}/json_object_private.h ${STAGEDIR}${PREFIX}/include/json-c/

.include <bsd.port.mk>
