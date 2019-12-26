#
# $Id$
#
PORTNAME=	pkg
DISTVERSION=	1.10.5 #1.7.2
_PKG_VERSION=	${DISTVERSION}
CATEGORIES=	ports-mgmt
MASTER_SITES+=	http://files.etoilebsd.net/${PORTNAME}/
MASTER_SITES+=	LOCAL/portmgr
MASTER_SITES+=	http://mirror.shatow.net/freebsd/${PORTNAME}/

MAINTAINER=	pkg@FreeBSD.org
COMMENT=	Package manager

USE_LDCONFIG=	yes
USES=		tar:xz
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-maintainer-mode
INSTALL_TARGET=	install-strip

USE_SUBMAKE=	yes
CFLAGS+=	-Wno-error

EXTRA_PATCHES=	${FILESDIR}/extra-patch-docs_pkg.8

post-install:
	${MV} ${STAGEDIR}${PREFIX}/lib/libpkg_static.a ${STAGEDIR}${PREFIX}/lib/libpkg.a
	${RM} ${STAGEDIR}${PREFIX}/lib/libpkg_static.la
	${MV} ${STAGEDIR}${PREFIX}/sbin/pkg-static ${STAGEDIR}${PREFIX}/sbin/pkg

.include <bsd.port.mk>
#EOF
