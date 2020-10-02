# $FreeBSD: head/devel/go-bindata/Makefile 529269 2020-03-27 17:17:50Z swills $

PORTNAME=	go-bindata
PORTVERSION=	3.1.3
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Generates Go code from any file

USES=		go:modules

USE_GITHUB=	yes
GH_TUPLE=	golang:lint:fdd1cda4f05f:golang_lint/vendor/golang.org/x/lint \
		golang:tools:a911d9008d1f:golang_tools/vendor/golang.org/x/tools \
		kisielk:errcheck:v1.2.0:kisielk_errcheck/vendor/github.com/kisielk/errcheck

GO_TARGET=	./go-bindata

PLIST_FILES=	bin/go-bindata

.include <bsd.port.mk>
