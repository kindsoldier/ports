#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11-org/xfont-font-adobe-100dpi/Makefile $
#
PORTNAME= 	font-adobe-100dpi
PORTVERSION=	1.0.1
X11_CATEGORY= 	font
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
PKGNAMEPREFIX= xf-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= font-util>=0:xutil/font-util

RUN_DEPENDS+= bdftopcf:xutil/bdftopcf
RUN_DEPENDS+= mkfontdir:xutil/mkfontdir
RUN_DEPENDS+= mkfontscale:xutil/mkfontscale
RUN_DEPENDS+= ucs2any:xutil/font-util
RUN_DEPENDS+= fc-cache:x11/libfontconfig
BUILD_DEPENDS+= ${RUN_DEPENDS}

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir="${PREFIX}/man"
#CONFIGURE_ENV+= CFLAGS="${CFLAGS} -I${X11BASE}/include -I${LOCALBASE}/include"
#CONFIGURE_ENV+= LDFLAGS="-L${X11BASE}/lib -L${LOCALBASE}/lib"

.include <bsd.port.mk>
#EOF
