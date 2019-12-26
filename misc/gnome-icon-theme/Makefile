#
# $Id$
#
PORTNAME=	gnome-icon-theme
PORTVERSION=	3.12.0
CATEGORIES=	misc gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	onborodin@gmail.com
COMMENT=	A collection of icons for the GNOME 2 desktop

BUILD_DEPENDS=	icon-naming-utils>=0.8.7:xfce/icon-naming-utils
BUILD_DEPENDS+=	${LOCALBASE}/share/icons/hicolor/index.theme:misc/hicolor-icon-theme
RUN_DEPENDS+=	${LOCALBASE}/share/icons/hicolor/index.theme:misc/hicolor-icon-theme
RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2

USES+=		tar:xz
USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-icon-mapping
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


.include <bsd.port.mk>
#EOF

