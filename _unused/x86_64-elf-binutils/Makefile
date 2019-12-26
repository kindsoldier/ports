#
# $Id$
#
PORTNAME=	binutils
PORTVERSION=	2.32
CATEGORIES=	devel
MASTER_SITES=	http://ftp.gnu.org/gnu/binutils/
PKGNAMEPREFIX=	${TARGET}-

MAINTAINER= homeunix7@gmail.com
COMMENT=	GNU binary tools for ${TARGET:U}

LIB_DEPENDS+=	libgmp.so:math/libgmp
LIB_DEPENDS+=	libmpfr.so:math/libmpfr

TARGET=x86_64-elf

CONFIGURE_TARGET=#
USES+=		gmake tar:bz2
GNU_CONFIGURE=	yes
CFLAGS+=	-I${WRKSRC}/include -I${LOCALBASE}/include
CPPFLAGS+=	-I${WRKSRC}/include -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+= --target=${TARGET}
CONFIGURE_ARGS+= --with-system-zlib
CONFIGURE_ARGS+= --disable-werror
CONFIGURE_ARGS+= --with-gmp=${LOCALBASE}
CONFIGURE_ARGS+= --with-mpfr=${LOCALBASE}
CONFIGURE_ARGS+= --disable-nls
CONFIGURE_ARGS+= --infodir=${PREFIX}/info/${TARGET}
CONFIGURE_ARGS+= --disable-shared

PLIST_SUB+= TARGET=${TARGET}
PLIST_SUB+= VERSION=${PORTVERSION}

.include <bsd.port.pre.mk>

.if (${OSVERSION} > 1100000)
BUILD_DEPENDS+= makeinfo:system/texinfo
.endif

.include <bsd.port.post.mk>
#EOF
