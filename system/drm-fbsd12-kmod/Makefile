# Created by: Johannes Dieterich <jmd@FreeBSD.org>
# $FreeBSD: head/graphics/drm-fbsd12.0-kmod/Makefile 518003 2019-11-20 11:30:55Z zeising $

PORTNAME=	drm-fbsd12-kmod
#PORTVERSION=	4.16.g20191120
#PORTVERSION=	4.16.g20200221
PORTVERSION=	4.16.g20220126

CATEGORIES=	graphics

MAINTAINER=	x11@FreeBSD.org
COMMENT=	DRM modules for the linuxkpi-based KMS components

ONLY_FOR_ARCHS=	amd64 i386
ONLY_FOR_ARCHS_REASON=	the new KMS components are only supported on amd64 and i386

RUN_DEPENDS=	gpu-firmware-kmod>=g20180319:system/gpu-firmware-kmod12

USES=		kmod uidfix compiler:c++11-lang

USE_GITHUB=	yes
#GH_ACCOUNT=	FreeBSDDesktop
#GH_PROJECT=	kms-drm
#GH_TAGNAME=	8002522

GH_ACCOUNT=	freebsd
GH_PROJECT=	drm-kmod
GH_TAGNAME=	drm_v4.16-fbsd12


.include <bsd.port.options.mk>

#.if ${OPSYS} == FreeBSD && (${OSVERSION} < 1200058 || ${OSVERSION} > 1300000)
#IGNORE=		only supported on FreeBSD 12.
#.endif

PLIST=	${PKGDIR}/pkg-plist.${ARCH}


.include <bsd.port.mk>
