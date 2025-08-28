# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: head/devel/goprotobuf/Makefile 517745 2019-11-16 12:52:39Z dmgk $

PORTNAME=	protobuf-go
DISTNAME=	protobuf-go
DISTVERSIONPREFIX=	v
DISTVERSION=	1.36.8
CATEGORIES=	devel

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Go support for Google's protocol buffers

RUN_DEPENDS=	protoc:devel/protobuf

USES=		go

USE_GITHUB=	yes
GH_ACCOUNT=	protocolbuffers
GH_PROJECT=	protobuf-go
GH_SUBDIR=	github.com/protocolbuffers/protobuf-go

GO_TARGET=	./cmd/protoc-gen-go

.include <bsd.port.mk>
