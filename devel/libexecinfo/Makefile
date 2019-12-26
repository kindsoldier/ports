#
# $Id$
#
PORTNAME=	libexecinfo
PORTVERSION=	1.1
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	itetcu

MAINTAINER=	itetcu@FreeBSD.org
COMMENT=	Library for inspecting program's backtrace

USES+=		tar:bzip2
USE_LDCONFIG=	yes
CFLAGS=		-fno-omit-frame-pointer
MAKE_FLAGS=	LIBDIR=${PREFIX}/lib INCLUDEDIR=${PREFIX}/include

pre-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib
	${MKDIR} ${STAGEDIR}${PREFIX}/include


.include <bsd.port.mk>
#EOF
