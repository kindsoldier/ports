# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: head/devel/goprotobuf/Makefile 517745 2019-11-16 12:52:39Z dmgk $

PORTNAME=	protobuf-go-rpc
DISTNAME=	grpc-go
DISTVERSIONPREFIX=	v
DISTVERSION=	1.75.0
CATEGORIES=	devel

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Go support for Google's protocol buffers

RUN_DEPENDS=	protoc:devel/protobuf

USES=		go

USE_GITHUB=	yes
GH_ACCOUNT=	grpc
GH_PROJECT=	grpc-go
GH_SUBDIR=	google.golang.org/grpc

GO_TARGET=	./cmd/protoc-gen-go-grpc

post-extract:
	${RM} -fv ${WRKSRC}/cmd/protoc-gen-go-grpc/go.*

.include <bsd.port.mk>

