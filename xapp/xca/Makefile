#
# $Id$
#
PORTNAME=	xca
PORTVERSION=	2.1.2
CATEGORIES=	security
DISTVERSIONPREFIX=	RELEASE.


MAINTAINER=	freebsd@nagilum.org
COMMENT=	Graphical certification authority

LIB_DEPENDS+=	libltdl.so:devel/libtool
LIB_DEPENDS+=	libQtCore.so:xapp/libqt4
LIB_DEPENDS+=	libQtGui.so:xapp/libqt4

USE_GITHUB=	yes
GH_ACCOUNT=	chris2511


USES+=		gmake pgsql
GNU_CONFIGURE=	yes
CPPFLAGS+= -I. -I.. -I${WRKSRC}/ui -I${LOCALBASE}/include/Qt4
CPPFLAGS+= -I${LOCALBASE}/include
CFLAGS+= -I${LOCALBASE}/include 
LDFLAGS+= -L${LOCALBASE}/lib -lpthread -lcrypto -lltdl

USE_CXXSTD=	c++11

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --with-openssl=/usr
CONFIGURE_ARGS+= --with-qt=${LOCALBASE}
CONFIGURE_ARGS+= --with-qt-version=4

DESTDIRNAME=	destdir

.include <bsd.port.pre.mk>


post-patch:
#	${REINPLACE_CMD} -e 's|malloc.h|stdlib.h|' ${WRKSRC}/lib/import.cpp
	${REINPLACE_CMD} -e 's,<family>Arial</family>,<family>Sans</family>,' ${WRKSRC}/ui/*.ui
	${REINPLACE_CMD} -e 's,<pointsize>14</pointsize>,<pointsize>12</pointsize>,' ${WRKSRC}/ui/*.ui
	cd ${WRKSRC} && ./bootstrap
	${REINPLACE_CMD} -e '/^CFLAGS/s|-O2||' ${WRKSRC}/Local.mak.in
	${REINPLACE_CMD} -e '/install/s|-D|-c|' ${WRKSRC}/img/Makefile

pre-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/pixmaps/

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/xca*


.include <bsd.port.post.mk>
#EOF
