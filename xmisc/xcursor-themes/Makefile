#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/xdata-xcursor-themes/Makefile $
#
PORTNAME= 	xcursor-themes
PORTVERSION=	1.0.3
X11_CATEGORY= 	data
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX=	xdata-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
RUN_DEPENDS+= xcursorgen:xutil/xcursorgen
BUILD_DEPENDS+= libXcursor>=0:x11/libXcursor
BUILD_DEPENDS+= ${RUN_DEPENDS}

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
#EOF
