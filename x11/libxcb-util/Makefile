#
# $Id$
#
PORTNAME=	xcb-util
PORTVERSION=	0.4.0 #0.3.9
CATEGORIES=	x11
MASTER_SITES=	http://xcb.freedesktop.org/dist/
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	A module with libxcb/libX11 extension/replacement libraries

LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp

LIB_DEPENDS+=	libxcb-render.so:x11/libxcb
LIB_DEPENDS+=	libxcb-shm.so:x11/libxcb
LIB_DEPENDS+=	libxcb.so:x11/libxcb

#LIB_DEPENDS+=	libxcb-atom.so:x11/libxcb-util
#LIB_DEPENDS+=	libxcb-aux.so:x11/libxcb-util
#LIB_DEPENDS+=	libxcb-event.so:x11/libxcb-util
#LIB_DEPENDS+=	libxcb-property.so:x11/libxcb-util


#BUILD_DEPENDS=	${LOCALBASE}/bin/gperf:devel/gperf


USES+=		tar:bzip2
USES+=		gmake
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
#CONFIGURE_ENV=	GPERF="${LOCALBASE}/bin/gperf"

.include <bsd.port.mk>
#EOF
