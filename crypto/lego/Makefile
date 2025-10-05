PORTNAME=	lego
DISTVERSIONPREFIX=	v
DISTVERSION=	4.25.2
CATEGORIES=	security

MAINTAINER=	matt@matthoran.com
COMMENT=	Let's Encrypt client and ACME library written in Go
WWW=		https://github.com/go-acme/lego


#RUN_DEPENDS=	${LOCALBASE}/share/certs/ca-root-nss.crt:security/ca_root_nss

USES=		go:modules
GO_MODULE=	github.com/go-acme/lego/v4
GO_TARGET=	./cmd/lego
GO_BUILDFLAGS=	-ldflags '-X "main.version=${DISTVERSION}"'


.include <bsd.port.mk>
