# Created by: Johannes Dieterich <jmd@FreeBSD.org>

PORTNAME=	drm-fbsd13-kmod
PORTVERSION=	5.4.144.g20220223
CATEGORIES=	graphics kld

MAINTAINER=	x11@FreeBSD.org
COMMENT=	DRM modules for the linuxkpi-based KMS components

ONLY_FOR_ARCHS=	aarch64 amd64 i386 powerpc64 powerpc64le
ONLY_FOR_ARCHS_REASON=	the new KMS components are only supported on amd64, i386, aarch64, and powerpc64

RUN_DEPENDS=	gpu-firmware-kmod>=g20200914:graphics/gpu-firmware-kmod

SOURCE_DESC=	Install kernel module sources

USES=		kmod uidfix compiler:c++11-lang

USE_GITHUB=	yes
GH_ACCOUNT=	freebsd
GH_PROJECT=	drm-kmod
GH_TAGNAME=	drm_v5.4.144_6

MAKE_ENV+=	MAKEOBJDIRPREFIX=${WRKSRC}/obj

pre-build:
	${MKDIR} ${WRKSRC}/obj
	cd ${WRKSRC}; \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} obj

.include <bsd.port.mk>
