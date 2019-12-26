#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/xdriver-xf86-input-keyboard/Makefile $
#
PORTNAME= 	xf86-input-keyboard
PORTVERSION=	1.9.0
X11_CATEGORY= 	driver
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config

BUILD_DEPENDS+= xorg-server>=0:x11/xserver18

BUILD_DEPENDS+= randrproto>=0:xproto/randrproto
BUILD_DEPENDS+= inputproto>=0:xproto/inputproto
BUILD_DEPENDS+= xproto>=0:xproto/xproto
BUILD_DEPENDS+= kbproto>=0:xproto/kbproto


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

post-patch:
	${REINPLACE_CMD} -e 's/pixman-1/pixman/' ${WRKSRC}/configure

.include <bsd.port.mk>
#EOF
