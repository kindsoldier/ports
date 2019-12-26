#
# $Id$
#
PORTNAME=	tango-icon-theme-extras
PORTVERSION=	0.1.0
CATEGORIES=	x11-themes
MASTER_SITES=	http://tango.freedesktop.org/releases/ \
		${MASTER_SITE_GENTOO}
MASTER_SITE_SUBDIR=	distfiles


MAINTAINER=	onborodin@gmail.com
COMMENT=	A basic set of icons for the most common usage

BUILD_DEPENDS=	${LOCALBASE}/libexec/icon-name-mapping:xfce/icon-naming-utils
RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
BUILD_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
BUILD_DEPENDS+=	convert:graph/imagemagick


GNU_CONFIGURE=	yes
USES+=		gmake

RUN_DEPENDS+=	${LOCALBASE}/share/icons/Tango/index.theme:misc/tango-icon-theme


.include <bsd.port.mk>
#EOF

