#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11-org/xutil-gccmakedep/Makefile $
#
PORTNAME= 	gccmakedep
PORTVERSION=	1.0.2
X11_CATEGORY= 	util
MASTER_SITES+=	http://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11r7/${X11_CATEGORY}/
#PKGNAMEPREFIX= xorg-

MAINTAINER= homeunix7@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

BUILD_DEPENDS=	tradcpp:devel/tradcpp

PLIST_FILES=	bin/gccmakedep man/man1/gccmakedep.1.gz
CONFIGURE_ENV+=	ac_cv_path_RAWCPP=tradcpp

.include <bsd.port.mk>
#EOF
