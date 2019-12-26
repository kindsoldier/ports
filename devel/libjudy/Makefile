#
# $Id$
#
PORTNAME=	Judy
PORTVERSION=	1.0.5
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME:tl}/${PORTNAME:tl}/${PORTNAME}-${PORTVERSION}
PKGNAMEPREFIX=	lib

MAINTAINER=	ports@FreeBSD.org
COMMENT=	General purpose dynamic array

USES=		gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
MAKE_JOBS_UNSAFE=	yes
INSTALL_TARGET=	install-strip

WRKSRC=	${WRKDIR}/${PORTNAME:tl}-${PORTVERSION}


.include <bsd.port.pre.mk>

.if ${ARCH} == "i386"
CONFIGURE_ARGS+=	--enable-32-bit
.elif ${ARCH} == "amd64" || ${ARCH} == "ia64" || ${ARCH} == "sparc64"
CONFIGURE_ARGS+=	--enable-64-bit
.endif

.include <bsd.port.post.mk>
#EOF
