#
# $Id$
#
BASENAME=	e2fsprogs
PORTNAME=       libuuid
PORTVERSION=	1.46.6
CATEGORIES=	sysutils
MASTER_SITES=	SF/${BASENAME}/${BASENAME}/v${PORTVERSION}
DISTNAME=       ${BASENAME}-${PORTVERSION}

MAINTAINER=	ziggi@inbox.ru
COMMENT=	Utilities & library to manipulate ext2/3/4 filesystems

USES+=		gmake
USE_CSTD=	gnu89
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

WRKSRC=		${WRKDIR}/${DISTNAME}/lib/uuid

PATCH_WRKSRC=		${WRKSRC}/../../
CONFIGURE_WRKSRC=	${WRKSRC}/../../


.include <bsd.port.pre.mk>

.if ${ARCH} == "aarch64"
EXTRA_PATCHES+=	${FILESDIR}/extrapatch-no-sbrk
.endif

.include <bsd.port.post.mk>
#EOF
