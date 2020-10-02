# $FreeBSD: head/databases/mongodb42-tools/Makefile 545576 2020-08-21 08:57:31Z lwhsu $

PORTNAME=	mongodb42-tools
DISTVERSIONPREFIX=	r
DISTVERSION=	4.2.9
CATEGORIES=	databases

MAINTAINER=	ronald-lists@klop.ws
COMMENT=	Tools for MongoDB 4.2.x

ONLY_FOR_ARCHS=	aarch64 amd64 armv7 i386
ONLY_FOR_ARCHS_REASON=	not yet ported to other architectures

USES=		compiler:c++14-lang go localbase
USE_GITHUB=	yes
GH_ACCOUNT=	mongodb
GH_PROJECT=	mongo-tools

GO_BUILDFLAGS=	-tags "${USE_MY_TAGS}"
GO_PKGNAME=	github.com/${GH_ACCOUNT}/${GH_PROJECT}

GO_TARGET+=./bsondump/main:bsondump
GO_TARGET+=./mongodump/main:mongodump
GO_TARGET+=./mongoexport/main:mongoexport
GO_TARGET+=./mongofiles/main:mongofiles
GO_TARGET+=./mongoimport/main:mongoimport
GO_TARGET+=./mongoreplay/main:mongoreplay
GO_TARGET+=./mongorestore/main:mongorestore
GO_TARGET+=./mongostat/main:mongostat
GO_TARGET+=./mongotop/main:mongotop

.include <bsd.port.mk>
