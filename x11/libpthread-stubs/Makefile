#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/libpthread-stubs/Makefile $
#
PORTNAME= 	libpthread-stubs
PORTVERSION=	0.4
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
MASTER_SITES=	http://xcb.freedesktop.org/dist/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	${CFLAGS} -pthread  -I${LOCALBASE}/include
LDFLAGS+=	-pthread -L${LOCALBASE}/lib


.include <bsd.port.mk>
#EOF
