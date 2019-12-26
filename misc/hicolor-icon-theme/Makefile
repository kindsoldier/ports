#
# $Id$
#
PORTNAME=	hicolor-icon-theme
PORTVERSION=	0.15
CATEGORIES=	misc gnome
MASTER_SITES=	http://icon-theme.freedesktop.org/releases/


MAINTAINER=	onborodin@gmail.com
COMMENT=	A high-color icon theme shell from the FreeDesktop project

GNU_CONFIGURE=	yes
USES+=		gmake tar:xz

SUB_FILES+=	pkg-install

PKG_INSTALL=	${WRKDIR}/pkg-install

ICON_SIZES=	16x16 22x22 24x24 32x32 36x36 48x48 64x64 72x72 96x96 128x128 192x192 256x256 scalable
ICON_CONTEXTS=	actions animations apps categories devices emblems emotes filesystems intl mimetypes places status stock
STOCK_SUBS=	chart code data form image io media navigation net object table text

SUB_LIST+=	ICON_SIZES="${ICON_SIZES}" 
SUB_LIST+=	ICON_CONTEXTS="${ICON_CONTEXTS}"
SUB_LIST+=	STOCK_SUBS="${STOCK_SUBS}"

.include <bsd.port.mk>
#EOF

