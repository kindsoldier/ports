PORTNAME=	skopeo
DISTVERSIONPREFIX=	v
DISTVERSION=	1.11.1
CATEGORIES=	sysutils

MAINTAINER=	dfr@FreeBSD.org
COMMENT=	Inspect container images and repositories on registries
WWW=		https://github.com/containers

BUILD_DEPENDS+=	bash:lang/bash
BUILD_DEPENDS+=	curl:net/libcurl
BUILD_DEPENDS+=	go-md2man:text/go-md2man
LIB_DEPENDS=	libgpgme.so:security/gpgme
#RUN_DEPENDS=	${LOCALBASE}/etc/containers/containers.conf.sample:sysutils/containers-common

USES=		gmake go:modules,no_targets pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	containers
GH_PROJECT=	skopeo

do-install:
	${SETENV} ${MAKE_ENV} ${GO_ENV} ${GMAKE} -C ${WRKSRC} \
		DESTDIR=${STAGEDIR} GOCACHE=${TMPDIR}  \
		GO=${GO_CMD} install-binary install-docs install-completions
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/containers/registries.d
	${INSTALL_DATA} ${WRKSRC}/default.yaml ${STAGEDIR}${PREFIX}/etc/containers/registries.d/default.yaml

post-install: compress-man

.include <bsd.port.mk>
