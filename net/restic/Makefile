# $FreeBSD: head/sysutils/restic/Makefile 500306 2019-04-28 11:26:57Z swills $

PORTNAME=	restic
DISTVERSIONPREFIX=	v
DISTVERSION=	0.9.5
CATEGORIES=	sysutils

MAINTAINER=	gregf@hugops.pw
COMMENT=	Fast, secure, efficient backup program

USES=		go
USE_GITHUB=	yes

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}
GO_TARGET=	${GO_PKGNAME}/cmd/${PORTNAME}

PLIST_SUB=	PORTNAME=${PORTNAME}

post-install:
	${INSTALL_MAN} ${WRKSRC}/doc/man/* ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
