# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/sysutils/fusefs-ext2/Makefile 503060 2019-05-30 08:51:10Z ehaupt $

PORTNAME=	fusefs-ext2
PORTVERSION=	0.0.10
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	FUSE module to mount ext2, ext3 and ext4 with read write support

BUILD_DEPENDS=	mke2fs:system/e2fsprogs
RUN_DEPENDS=	mke2fs:system/e2fsprogs

USES=		autoreconf libtool fuse pkgconfig localbase:ldflags
USE_GITHUB=	yes

GH_PROJECT=	fuse-ext2
GH_ACCOUNT=	alperakcan
GH_TAGNAME=	ea7bacf

GNU_CONFIGURE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include/e2fsprogs
LDFLAGS+=	-L${LOCALBASE}/lib/e2fsprogs -Wl,--rpath -Wl,${LOCALBASE}/lib/e2fsprogs

.include <bsd.port.mk>
