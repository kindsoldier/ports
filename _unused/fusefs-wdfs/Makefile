# Created by: Gyorgy Teubel <tgyurci@freemail.hu>
# $FreeBSD: head/sysutils/fusefs-wdfs/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	wdfs
PORTVERSION=	1.4.2
DISTVERSIONPREFIX=v
CATEGORIES=	sysutils
PKGNAMEPREFIX=	fusefs-

MAINTAINER=	silverless@gmx.com
COMMENT=	Mount remote WebDAV directories with Fuse

LIB_DEPENDS=	libneon.so:net/libneon
LIB_DEPENDS+=	libglib.so:devel/libglib


GNU_CONFIGURE=	yes
USES=		pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	jmesmon
GH_TAGNAME=	3fa7035

PLIST_FILES=	bin/wdfs

post-patch:
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g' ${WRKSRC}/configure

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/wdfs ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
#EOF
