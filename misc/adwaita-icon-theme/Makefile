# Created by: Gustau Pérez i Querol <gustau.perez@gmail.com>
# $FreeBSD: head/x11-themes/adwaita-icon-theme/Makefile 439206 2017-04-23 08:35:28Z kwm $

PORTNAME=	adwaita-icon-theme
PORTVERSION=	3.28.0
CATEGORIES=	x11-themes gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GNOME Symbolic Icons

NO_ARCH=	yes
USES=		gmake pkgconfig tar:xz
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_path_GTK_ENCODE_SYMBOLIC_SVG="false"

RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2


post-install:
	${RM} -r ${STAGEDIR}${PREFIX}/lib/locale
	${RM} -r ${STAGEDIR}${PREFIX}/locale

.include <bsd.port.mk>
