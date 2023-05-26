# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: head/devel/goprotobuf/Makefile 517745 2019-11-16 12:52:39Z dmgk $

PORTNAME=	protobuf-go-rpc
DISTNAME=	grpc-go
DISTVERSIONPREFIX=	v
DISTVERSION=	1.55.0
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

#@MAKE_ENV+= GO111MODULE=auto


#do-build:
#	cd ${WRKSRC} && \
#	${SETENV} ${MAKE_ENV} ${GO_ENV} ${GO_CMD} build ${GO_BUILDFLAGS} -o ${GO_WRKDIR_BIN}/${GO_TARGET}

#do-install:
#	${INSTALL_PROGRAM} ${GO_WRKDIR_BIN}/${GO_TARGET} ${STAGEDIR}${PREFIX}/bin/${GO_TARGET}




.include <bsd.port.mk>

