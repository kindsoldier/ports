# Created by: Johannes Dieterich <jmd@FreeBSD.org>
# $FreeBSD: head/graphics/gpu-firmware-kmod/Makefile 514545 2019-10-15 16:23:05Z jmd $

PORTNAME=	gpu-firmware-kmod
PORTVERSION=	g20191015
CATEGORIES=	graphics

MAINTAINER=	jmd@FreeBSD.org
COMMENT=	Firmware modules for the linuxkpi-based KMS components

USES=		kmod uidfix

USE_GITHUB=	yes
GH_ACCOUNT=	FreeBSDDesktop
GH_PROJECT=	kms-firmware
GH_TAGNAME=	81315fa

.include <bsd.port.pre.mk>

.if ${OPSYS} == FreeBSD && ${OSVERSION} >= 1200000 && ${OSVERSION} < 1200019
IGNORE=		not supported on older CURRENT, no kernel support
.endif

.include <bsd.port.post.mk>
