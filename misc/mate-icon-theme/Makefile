# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: head/x11-themes/mate-icon-theme/Makefile 501269 2019-05-11 17:33:51Z ericbsd $

PORTNAME=	mate-icon-theme
PORTVERSION=	1.22.1
CATEGORIES=	x11-themes mate
MASTER_SITES=	MATE
DIST_SUBDIR=	mate

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Collection of icons for the MATE desktop

BUILD_DEPENDS=	${LOCALBASE}/libexec/icon-name-mapping:xfce/icon-naming-utils
RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
BUILD_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2


PORTSCOUT=	limitw:1,even

USES=		gmake pkgconfig tar:xz
GNU_CONFIGURE=	yes

pre-install:
	${REINPLACE_CMD} -e 's|install: install-data|install:|g' \
		${WRKSRC}/po/Makefile

.include <bsd.port.mk>
