#
# $Id$
#
PORTNAME=	binutils
PORTVERSION=	2.37
CATEGORIES=	devel
MASTER_SITES=	http://ftp.gnu.org/gnu/binutils/

MAINTAINER= homeunix7@gmail.com
COMMENT=	GNU binary tools for ${TARGET:U}

LIB_DEPENDS+=	libgmp.so:math/libgmp
LIB_DEPENDS+=	libmpfr.so:math/libmpfr

CONFIGURE_TARGET= ${TARGET}
CONFIGURE_ARGS+= --program-transform-name='s,^,g,'

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
MAKE_ENV+=	ac_cv_func_sbrk=0

CONFIGURE_ARGS+= --enable-deterministic-archives
CONFIGURE_ARGS+= --with-sysroot=/

CONFIGURE_TARGET = ${TARGET}


.include <bsd.port.pre.mk>

.if (${OSVERSION} > 1100000)
BUILD_DEPENDS+= makeinfo:system/texinfo
.endif

#.if ${ARCH} == "amd64"
#ARCH=		x86_64
#.endif

#.if (${ARCH} == "amd64" || ${ARCH} == "x86_64")
#TARGET=		x86_64-freebsd
#.elif ${ARCH} == "i386"
#TARGET=		i386-freebsd
#.elif (${ARCH} == "armv6" || ${ARCH} == "armv6hf")
#TARGET=		arm-freebsd
#.endif

TARGET=		${ARCH:S/amd64/x86_64/}-freebsd


PLIST_SUB+= TARGET=${TARGET}
PLIST_SUB+= VERSION=${PORTVERSION}

PLIST=	${PKGDIR}/pkg-plist.${ARCH}


pre-configure:
	${FIND} ${WRKSRC} -name 'config.cache' | ${XARGS} ${RM} -v

post-install:
	${INSTALL_DATA} ${WRKSRC}/include/plugin-api.h ${STAGEDIR}${PREFIX}/include/
	${RM} ${STAGEDIR}${PREFIX}/include/ansidecl.h
	${REINPLACE_CMD} '/#include "ansidecl.h"/d' ${STAGEDIR}${PREFIX}/include/bfd.h


.include <bsd.port.post.mk>
#EOF
