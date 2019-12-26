# $FreeBSD: head/net/rclone/Makefile 499094 2019-04-16 14:23:15Z wg $

PORTNAME=	rclone
DISTVERSIONPREFIX=	v
DISTVERSION=	1.50.2
CATEGORIES=	net

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Sync files to and from various cloud services

USES=		go gmake
USE_GITHUB=	yes
GH_ACCOUNT=	ncw
GH_SUBDIR=	src/github.com/${GH_ACCOUNT_DEFAULT}/${PORTNAME}

do-build:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} GOPATH=${WRKSRC}/go go build .

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${PREFIX}/man/man1
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${PREFIX}/man/man1/


.include <bsd.port.mk>
