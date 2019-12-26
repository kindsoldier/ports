#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/xdata-xkbdata/Makefile $
#
PORTNAME= 	encodings
PORTVERSION=	1.0.4
X11_CATEGORY= 	font
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
PKGNAMEPREFIX=	xfont-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= ${RUN_DEPENDS}
#RUN_DEPENDS+= xkbcomp:x11/xorg-xkbcomp

RUN_DEPENDS+=	mkfontscale:xutil/mkfontscale


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
#EOF
