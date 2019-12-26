#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/libXau/Makefile $
#
PORTNAME= 	libXau
PORTVERSION=	1.0.0
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= xproto>=0:xproto/xproto

RUN_DEPENDS+= xproto>=0:xproto/xproto

USE_X_PREFIX=	yes
USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+=	man/man3/Xau.3.gz


PLIST_FILES+=	man/man3/XauDisposeAuth.3.gz
PLIST_FILES+=	man/man3/XauFileName.3.gz
PLIST_FILES+=	man/man3/XauGetAuthByAddr.3.gz
PLIST_FILES+=	man/man3/XauGetBestAuthByAddr.3.gz
PLIST_FILES+=	man/man3/XauLockAuth.3.gz
PLIST_FILES+=	man/man3/XauReadAuth.3.gz
PLIST_FILES+=	man/man3/XauUnlockAuth.3.gz
PLIST_FILES+=	man/man3/XauWriteAuth.3.gz

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xau.3 XauDisposeAuth.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xau.3 XauFileName.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xau.3 XauGetAuthByAddr.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xau.3 XauGetBestAuthByAddr.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xau.3 XauLockAuth.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xau.3 XauReadAuth.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xau.3 XauUnlockAuth.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xau.3 XauWriteAuth.3
	cd ${STAGEDIR}/${PREFIX}/lib && ${LN} -sf libXau.so.? libXau.so

.include <bsd.port.mk>
#EOF
