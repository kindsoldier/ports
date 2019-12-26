#
# $Id$
#
PORTNAME=	gnome-icon-theme-symbolic
PORTVERSION=	3.12.0
CATEGORIES=	x11-themes gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNOME Symbolic Icons


BUILD_DEPENDS=	icon-naming-utils>=0.8.7:xfce/icon-naming-utils
BUILD_DEPENDS+=	${LOCALBASE}/share/icons/hicolor/index.theme:misc/hicolor-icon-theme
RUN_DEPENDS+=	${LOCALBASE}/share/icons/hicolor/index.theme:misc/hicolor-icon-theme
RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2

#BUILD_DEPENDS+=	${LOCALBASE}/share/icons/gnome/index.theme:gnome/gnome-icon-theme
RUN_DEPENDS+=	${LOCALBASE}/share/icons/gnome/index.theme:misc/gnome-icon-theme


USES+=		gmake
USES+=		tar:xz
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_path_GIT="" ac_cv_path_INKSCAPE=""
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

post-patch:
	${REINPLACE_CMD} -e 's|(GTK_UPDATE_ICON_CACHE) -q |(GTK_UPDATE_ICON_CACHE) -q -t -f |'g \
		${WRKSRC}/Makefile.in


.include <bsd.port.mk>
#EOF
