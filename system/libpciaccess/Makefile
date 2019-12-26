#
# $Id$
#
PORTNAME=	libpciaccess
PORTVERSION=	0.13.5
CATEGORIES=	devel

MAINTAINER=	onborodin@gmail.com
COMMENT=	Generic PCI access library

CATEGORIES=	x11
DIST_SUBDIR=	x11/${X11_CATEGORY}/

X11_CATEGORY=	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/

#BUILD_DEPENDS=	${LOCALBASE}/share/pciids/pci.ids:misc/pciids
#RUN_DEPENDS=	${LOCALBASE}/share/pciids/pci.ids:misc/pciids

GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+=	--with-pciids-path=${LOCALBASE}/share/pciids

.include <bsd.port.mk>
#EOF

