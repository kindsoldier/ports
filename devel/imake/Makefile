#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11-org/xutil-imake/Makefile $
#
PORTNAME= 	imake
PORTVERSION=	1.0.7
X11_CATEGORY= 	util
MASTER_SITES+=	http://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11r7/${X11_CATEGORY}/
#PKGNAMEPREFIX= xutil-

MAINTAINER=	ziggi@inbox.ru
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+=	tradcpp:devel/tradcpp

#RUN_DEPENDS+=	imake:devel/imake
RUN_DEPENDS+=	tradcpp:devel/tradcpp
RUN_DEPENDS+=	gccmakedep:devel/gccmakedep
RUN_DEPENDS+=	xorg-cf-files>=1.0:xmisc/xorg-cf-files


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ENV=	ac_cv_path_RAWCPP=tradcpp


.include <bsd.port.mk>
#EOF
