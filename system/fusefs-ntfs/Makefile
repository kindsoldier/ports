# Created by: Max Khon
# $FreeBSD: head/sysutils/fusefs-ntfs/Makefile 457269 2017-12-26 09:00:38Z amdmi3 $

PORTNAME=	ntfs
PORTVERSION=	2017.3.23
CATEGORIES=	sysutils
MASTER_SITES=	http://tuxera.com/opensource/
PKGNAMEPREFIX=	fusefs-
DISTNAME=	${PORTNAME}-3g_ntfsprogs-${PORTVERSION}

MAINTAINER=	freebsd@dussan.org
COMMENT=	Mount NTFS partitions (read/write) and disk images

#LIB_DEPENDS=	libuuid.so:system/libuuid

CONFLICTS_BUILD=	bonobo-1.*
CONFLICTS_INSTALL=	ntfsprogs-*

USES=	pkgconfig localbase:ldflags tar:tgz
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--exec-prefix=${PREFIX}
CONFIGURE_ARGS+= --disable-mount-helper
CONFIGURE_ARGS+= --disable-mtab
CONFIGURE_ARGS+= --with-fuse=external
CONFIGURE_ARGS+= --disable-ldconfig
CPPFLAGS+=	-I${WRKSRC}/include/ntfs-3g/

#EXTRA_PATCHES=	${FILESDIR}/extra-patch-ublio
#LIB_DEPENDS=	libublio.so:devel/libublio
#CFLAGS+=	-DUSE_UBLIO

post-patch:
	${REINPLACE_CMD} -e 's|ENODATA|ENOATTR|' \
		${WRKSRC}/libntfs-3g/object_id.c \
		${WRKSRC}/libntfs-3g/reparse.c \
		${WRKSRC}/libntfs-3g/security.c
	${REINPLACE_CMD} -e 's|\($$(AM_CFLAGS)\) \(-I$$(top_srcdir)/include/ntfs-3g\)|\2 \1|; \
		/install-exec-hook:/,/^$$/ s|^@.*||' ${WRKSRC}/libntfs-3g/Makefile.in

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libntfs-3g.so

.include <bsd.port.mk>
