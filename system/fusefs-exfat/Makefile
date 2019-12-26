# Created by: Alex Samorukov <samm@freebsd.org>
# $FreeBSD: head/sysutils/fusefs-exfat/Makefile 514411 2019-10-13 18:16:38Z samm $

PORTNAME=	exfat
DISTVERSIONPREFIX=	v
DISTVERSION=	1.3.0
CATEGORIES=	sysutils
PKGNAMEPREFIX=	fusefs-

MAINTAINER=	samm@freebsd.org
COMMENT=	Full-featured exFAT FS implementation as a FUSE module

#LIB_DEPENDS=	libublio.so:devel/libublio

USES=		autoreconf fuse localbase pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	relan
GNU_CONFIGURE=	yes
MAKE_ARGS=	SUBDIRS="libexfat fuse"

.include <bsd.port.mk>
