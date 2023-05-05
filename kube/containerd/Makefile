PORTNAME=	containerd
DISTVERSIONPREFIX=v
DISTVERSION=	1.7.0
CATEGORIES=	sysutils

MAINTAINER=	decke@FreeBSD.org
COMMENT=	Open and reliable container runtime
WWW=		https://containerd.io/

BUILD_DEPENDS=	bash:lang/bash

USES=		cpe gmake go:modules,no_targets
USE_GITHUB=	yes
GH_SUBDIR=	src/github.com/containerd/containerd

USE_RC_SUBR=	containerd

MAKE_ENV=	${GO_ENV} GOFLAGS="${GO_BUILDFLAGS}" VERSION="${DISTVERSION}"

do-install:
	cd ${WRKSRC} && ${SETENV} DESTDIR="${STAGEDIR}" ${MAKE_CMD} install

.include <bsd.port.mk>
