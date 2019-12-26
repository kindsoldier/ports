# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/sysutils/fusefs-ext2/Makefile 462394 2018-02-20 12:58:43Z ehaupt $

PORTNAME=	fusefs-ext2
PORTVERSION=	0.0.10
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	FUSE module to mount ext2, ext3 and ext4 with read write support

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	mke2fs:system/e2fsprogs
RUN_DEPENDS=	mke2fs:system/e2fsprogs

USES=		autoreconf libtool pkgconfig localbase:ldflags
USE_GITHUB=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include/e2fsprogs
LDFLAGS+=	-L${LOCALBASE}/lib/e2fsprogs -Wl,--rpath -Wl,${LOCALBASE}/lib/e2fsprogs

GH_PROJECT=	fuse-ext2
GH_ACCOUNT=	alperakcan

.include <bsd.port.mk>
#EOF

