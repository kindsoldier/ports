# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: head/devel/goprotobuf/Makefile 517745 2019-11-16 12:52:39Z dmgk $

PORTNAME=	protobuf-go
DISTNAME=	protobuf-go
DISTVERSIONPREFIX=	v
DISTVERSION=	1.30.0
CATEGORIES=	devel

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Go support for Google's protocol buffers

RUN_DEPENDS=	protoc:devel/protobuf

USES=		go

USE_GITHUB=	yes
GH_ACCOUNT=	protocolbuffers
GH_PROJECT=	protobuf-go
GH_SUBDIR=	github.com/protocolbuffers/protobuf-go
GH_TUPLE=	golang:protobuf:v1.5.0:golang_protobuf/vendor/github.com/golang/protobuf \
		golang:xerrors:9bdfabe68543:golang_xerrors/vendor/golang.org/x/xerrors \
		google:go-cmp:v0.5.5:google_go_cmp/vendor/github.com/google/go-cmp

GO_TARGET=	./cmd/protoc-gen-go

.include <bsd.port.mk>
