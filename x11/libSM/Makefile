#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/libSM/Makefile $
#
PORTNAME= 	libSM
PORTVERSION=	1.2.2
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

#BUILD_DEPENDS+=	pkg-config:devel/pkg-config
#BUILD_DEPENDS+= libICE>=0:x11/libICE
#BUILD_DEPENDS+= xproto>=0:xproto/xproto

LIB_DEPENDS+=	libICE.so:x11/libICE

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+= --disable-docs
CONFIGURE_ARGS+= --disable-specs



.include <bsd.port.mk>
#EOF
