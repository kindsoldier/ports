# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: head/devel/goprotobuf/Makefile 517745 2019-11-16 12:52:39Z dmgk $

PORTNAME=	protobuf-go
DISTNAME=	goprotobuf
DISTVERSIONPREFIX=	v
DISTVERSION=	1.1.0
CATEGORIES=	devel

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Go support for Google's protocol buffers

RUN_DEPENDS=	protoc:devel/protobuf

USES=		go

USE_GITHUB=	yes
GH_ACCOUNT=	golang
GH_PROJECT=	protobuf
GH_SUBDIR=	src/github.com/golang/protobuf
GH_TUPLE=	google:go-genproto:02b4e95:genproto/src/google.golang.org/genproto

GO_TARGET=	./protoc-gen-go

MAKE_ENV+= GO111MODULE=auto

.include <bsd.port.mk>
