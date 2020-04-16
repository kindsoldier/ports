# $FreeBSD: head/devel/delve/Makefile 526107 2020-02-14 12:38:09Z dmgk $

PORTNAME=	delve
DISTVERSIONPREFIX=	v
DISTVERSION=	1.4.0
CATEGORIES=	devel

MAINTAINER=	dmitry.wagin@ya.ru
COMMENT=	Debugger for the Go programming language

ONLY_FOR_ARCHS=	amd64

USES=		go:modules

USE_GITHUB=	yes
GH_ACCOUNT=	go-delve

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}
GO_TARGET=	./cmd/dlv

PLIST_FILES=	bin/dlv

.include <bsd.port.mk>
