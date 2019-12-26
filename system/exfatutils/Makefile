# Created by: Alex Samorukov <samm@os2.kiev.ua>
# $FreeBSD: head/sysutils/exfat-utils/Makefile 465414 2018-03-23 23:19:53Z yuri $

PORTNAME=	exfat
DISTVERSIONPREFIX=	v
DISTVERSION=	1.2.8
CATEGORIES=	sysutils
PKGNAMESUFFIX=	utils

MAINTAINER=	samm@os2.kiev.ua
COMMENT=	Utilities to create, check, label and dump exFAT filesystem

#LIB_DEPENDS=	libublio.so:devel/libublio

USES=		autoreconf localbase pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	relan
GNU_CONFIGURE=	yes

post-patch:
	${REINPLACE_CMD} -e '/fuse/d' ${WRKSRC}/configure.ac
	${REINPLACE_CMD} -e 's/ fuse//' ${WRKSRC}/Makefile.am

.include <bsd.port.mk>
