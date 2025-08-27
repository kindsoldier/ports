#
# $Id: Makefile 834 2007-08-27 08:11:11Z root $
# $URL: file:///usr2/svn/ports5/x11/libICE/Makefile $
#
PORTNAME= 	libICE
PORTVERSION=	1.0.9
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= xproto>=0:xproto/xproto
BUILD_DEPENDS+= xtransproto>=0:xproto/xtransproto

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


CONFIGURE_ARGS+= --disable-docs
CONFIGURE_ARGS+= --disable-specs

CONFIGURE_ARGS+= --enable-ipv6
#CONFIGURE_ARGS+= --enable-local-transport
#CONFIGURE_ARGS+= --enable-tcp-transport
#CONFIGURE_ARGS+= --enable-unix-transport

.include <bsd.port.mk>
#EOF
