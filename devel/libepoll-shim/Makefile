# Created by: Johannes Lundberg <johalun0@gmail.com>
# $FreeBSD: head/devel/libepoll-shim/Makefile 488686 2018-12-29 20:49:16Z zeising $

PORTNAME=	libepoll-shim
#PORTVERSION=	0.0.20181229
PORTVERSION=	0.0.20201229
CATEGORIES=	devel

MAINTAINER=	x11@FreeBSD.org
COMMENT=	epoll shim implemented using kevent

USE_GITHUB=	yes
#GH_ACCOUNT=	FreeBSDDesktop
#GH_PROJECT=	epoll-shim
#GH_TAGNAME=	212c17b

GH_ACCOUNT=	jiixyj
GH_PROJECT=	epoll-shim
GH_TAGNAME=	1c27d2d

USE_LDCONFIG=	yes

USES=		cmake compiler:c11

#MAKE_ARGS+=	INCSDIR=${PREFIX}/include/libepoll-shim/sys
#MAKE_ARGS+=	LIBDIR=${PREFIX}/lib WITHOUT_PROFILE=yes

.include <bsd.port.pre.mk>


post-patch:
	${REINPLACE_CMD} -e 's,libdata/pkgconfig,lib/pkgconfig,' ${WRKSRC}/CMakeLists.txt

#post-patch:
#.if "${CHOSEN_COMPILER_TYPE}" == "gcc"
#	${REINPLACE_CMD} -e 's|Wno-missing-variable-declarations|Wno-missing-declarations|' \
#		-e 's|-Wno-thread-safety-analysis||' ${WRKSRC}/Makefile
#.endif

#pre-install:
#	${MKDIR} ${STAGEDIR}/${PREFIX}/include/libepoll-shim/sys

.include <bsd.port.post.mk>
