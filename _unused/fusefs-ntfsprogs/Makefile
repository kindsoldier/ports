#
# $Id$
#
PORTNAME=	ntfsprogs
PORTVERSION=	2.0.0
CATEGORIES=	sysutils
MASTER_SITES=	SF/linux-ntfs/NTFS%20Tools%20and%20Library/${PORTVERSION}
PKGPREFIX=  fusefs-


MAINTAINER=	ports@FreeBSD.org
COMMENT=	Utilities and library to manipulate NTFS partitions

LIB_DEPENDS+=	libfuse.so:system/libfusefs
LIB_DEPENDS+=	libiconv.so:text/libiconv

CONFLICTS_INSTALL=	fusefs-ntfs-*

USES+=		tar:bzip2
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


.include <bsd.port.pre.mk>

.if ${ARCH} == "i386"
CFLAGS:=	${CFLAGS:C/-O.?/-O0/g}
.endif

CONFIGURE_ARGS+= --disable-gnome-vfs
CONFIGURE_ARGS+= --disable-uuid
#CFLAGS+=	-DUSE_UBLIO
CFLAGS+=	-DUSE_LOCK

.include <bsd.port.post.mk>
#EOF
