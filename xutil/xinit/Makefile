#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/xorg-xinit/Makefile $
#
PORTNAME= 	xinit
PORTVERSION=	1.3.4
X11_CATEGORY= 	app
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
#RUN_DEPENDS+= xauth:xutil/scripts
#RUN_DEPENDS+= xinit:xutil/xinit
RUN_DEPENDS+= twm:xutil/twm
RUN_DEPENDS+= xauth:xutil/xauth
RUN_DEPENDS+= xclock:xutil/xclock
RUN_DEPENDS+= xmodmap:xutil/xmodmap
RUN_DEPENDS+= xrdb:xutil/xrdb

BUILD_DEPENDS+= ${RUN_DEPENDS}
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/kbproto.pc:xproto/kbproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/pthread-stubs.pc:x11/libpthread-stubs

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp

#USE_X_PREFIX=	yes
USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ARGS+= --with-xrdb=${PREFIX}/bin/xrdb
CONFIGURE_ARGS+= --with-xmodmap=${PREFIX}/bin/xmodmap
CONFIGURE_ARGS+= --with-twm=${PREFIX}/bin/twm
CONFIGURE_ARGS+= --with-xclock=${PREFIX}/bin/xclock
CONFIGURE_ARGS+= --with-xterm=${PREFIX}/bin/xterm
CONFIGURE_ARGS+= --with-xserver=${PREFIX}/sbin/X


PLIST_FILES+=	man/man1/startx.1.gz
PLIST_FILES+=	man/man1/xinit.1.gz

.include <bsd.port.mk>
#EOF
