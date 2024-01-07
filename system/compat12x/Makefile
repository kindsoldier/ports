PORTNAME=	compat12x
PORTVERSION=	12.2.1202000.20210406
CATEGORIES=	misc
MASTER_SITES=	LOCAL/jkim
PKGNAMESUFFIX=	-${ARCH}
DISTNAME=	${PORTNAME}-${ARCH}-${PORTVERSION}

MAINTAINER=	jkim@FreeBSD.org
COMMENT=	Convenience package to install the compat12x libraries

USES=		tar:xz
NO_BUILD=	yes
ONLY_FOR_ARCHS=	aarch64 amd64 armv6 armv7 i386 powerpc
PLIST=		${PKGDIR}/pkg-plist.${ARCH}
TARGET_DIR=	${PREFIX}/lib/compat
TARGET32_DIR=	${PREFIX}/lib32/compat
USE_LDCONFIG=	${TARGET_DIR}

.include <bsd.port.pre.mk>

.if ${OSREL:R} < 12
IGNORE=		is for FreeBSD 12.x and newer
.endif

do-install:
	${MKDIR} -m 0755 ${STAGEDIR}${TARGET_DIR}
	cd ${WRKSRC}/lib && ${INSTALL_LIB} *.so.* ${STAGEDIR}${TARGET_DIR}

.include <bsd.port.post.mk>
