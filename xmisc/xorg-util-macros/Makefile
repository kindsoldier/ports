#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11-org/xutil-xorg-cf-files/Makefile $
#
PORTNAME= 	util-macros
PORTVERSION=	1.18.0 #1.19.1
X11_CATEGORY= 	util
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
PKGNAMEPREFIX=  xorg-


MAINTAINER=	ziggi@inbox.ru
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config

USES+=		tar:bz2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/pkgconfig
	${INSTALL_DATA} ${WRKSRC}/xorg-macros.pc ${STAGEDIR}${PREFIX}/lib/pkgconfig


.include <bsd.port.mk>
#EOF
