#
# $Id: Makefile 833 2007-08-27 07:41:15Z root $
# $URL: file:///usr2/svn/ports5/x11/xdriver-xf86-video-vesa/Makefile $
#
PORTNAME= 	xf86-video-vesa
PORTVERSION=	2.3.4
X11_CATEGORY= 	driver
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

#BUILD_DEPENDS+=	pkg-config:devel/pkg-config
#BUILD_DEPENDS+= xf86driproto>=0:xproto/xf86driproto
#BUILD_DEPENDS+= xf86dgaproto>=0:xproto/xf86dgaproto
#BUILD_DEPENDS+= fontsproto>=0:xproto/fontsproto
#BUILD_DEPENDS+= randrproto>=0:xproto/randrproto
#BUILD_DEPENDS+= renderproto>=0:xproto/renderproto
#BUILD_DEPENDS+= xextproto>=0:xproto/xextproto
#BUILD_DEPENDS+= xextproto>=0:xproto/xextproto
#BUILD_DEPENDS+= xineramaproto>=0:xproto/xineramaproto
#BUILD_DEPENDS+= xorg-server>=0:x11/xserver18
#BUILD_DEPENDS+= xproto>=0:xproto/xproto
#BUILD_DEPENDS+= libX11>=0:x11/libX11
#BUILD_DEPENDS+= libXvMC>=0:x11/libXvMC

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CFLAGS=		-I${LOCALBASE}/include

.include <bsd.port.mk>
#EOF
