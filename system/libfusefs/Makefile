#
# $Id$
#
PORTNAME=	fusefs
PORTVERSION=	2.9.3
CATEGORIES=	sysutils
#MASTER_SITES=	SF/fuse/fuse-2.X/${PORTVERSION}
PKGNAMEPREFIX=	lib
DISTNAME=	fuse-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	FUSE allows filesystem implementation in userspace

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	MOUNT_FUSE_PATH=${PREFIX}/sbin
CONFIGURE_ARGS+= --prefix=${PREFIX} 
CONFIGURE_ARGS+= --with-pkgconfigdir=${PREFIX}/lib/pkgconfig
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes
USES+=		gmake

post-install:
	${INSTALL_DATA} ${WRKSRC}/include/fuse_kernel.h ${STAGEDIR}${PREFIX}/include/fuse
	${MKDIR} ${STAGEDIR}${DOCSDIR}/libs

.include <bsd.port.mk>
#EOF

