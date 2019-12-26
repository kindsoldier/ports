#
# $Id$
#
PORTNAME=	xf86-video-scfb
PORTVERSION=	0.0.4
CATEGORIES=	x11-drivers

MAINTAINER=	ray@FreeBSD.org
COMMENT=	X.Org syscons display driver

USE_GITHUB=     yes
GH_ACCOUNT=     rayddteam
#GH_TAGNAME=     bdeb3bf

USES=		libtool
GNU_CONFIGURE= 	yes
DIST_SUBDIR=	xorg/driver
CONFIGURE_ENV+=	DRIVER_MAN_SUFFIX=4x 
CONFIGURE_ENV+=	DRIVER_MAN_DIR='$$(mandir)/man4'
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
#EOF
