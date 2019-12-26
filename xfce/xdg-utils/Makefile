#
# $Id$
#
PORTNAME=	xdg-utils
PORTVERSION=	1.0.2
CATEGORIES=	devel
MASTER_SITES=	http://portland.freedesktop.org/download/
EXTRACT_SUFX=	.tgz

MAINTAINER=	onborodin@gmail.com
COMMENT=	Tools to allow all applications to integrate with the free desktop

GNU_CONFIGURE=	yes
USES+=		gmake


PLIST_FILES+=	man/man1/xdg-desktop-icon.1.gz
PLIST_FILES+=	man/man1/xdg-desktop-menu.1.gz
PLIST_FILES+=	man/man1/xdg-email.1.gz
PLIST_FILES+=	man/man1/xdg-icon-resource.1.gz
PLIST_FILES+=	man/man1/xdg-mime.1.gz
PLIST_FILES+=	man/man1/xdg-open.1.gz
PLIST_FILES+=	man/man1/xdg-screensaver.1.gz


pre-patch:
	${RM} -f ${WRKSRC}/*/*.orig

post-patch:
	${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|' \
		${WRKSRC}/scripts/xdg-*

.include <bsd.port.mk>
#EOF

