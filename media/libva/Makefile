# $FreeBSD: head/multimedia/libva/Makefile 441569 2017-05-24 09:41:39Z madpilot $

PORTNAME=	libva
PORTVERSION=	1.8.2
CATEGORIES=	multimedia

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	VAAPI wrapper and dummy driver

BUILD_DEPENDS=	${LOCALBASE}/include/linux/videodev2.h:media/libv4l
RUN_DEPENDS=	${LOCALBASE}/include/linux/videodev2.h:media/libv4l
LIB_DEPENDS=	libdrm.so:system/libdrm

USE_GITHUB=	yes
GH_ACCOUNT=	01org


USES=		autoreconf libtool gmake localbase pkgconfig tar:bzip2
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--program-prefix=va
USE_LDCONFIG=	yes
LDFLAGS+=	-lpthread
# prevent types conflict: videodev2.h vs. drm.h
CFLAGS+=	-DHAVE_LINUX_INTEGER_TYPES
CFLAGS+=	-DNDEBUG
INSTALL_TARGET=	install-strip

.include <bsd.port.pre.mk>


post-extract:
	${MKDIR} ${WRKSRC}/m4

post-patch:
	${REINPLACE_CMD} '/^export VA_HEADER_/d' \
		${WRKSRC}/doc/Makefile.am
	${REINPLACE_CMD} 's/-ldl//' ${WRKSRC}/va/Makefile.am

.include <bsd.port.post.mk>
#EOF
