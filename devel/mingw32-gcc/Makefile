# Created by: Lev Serebryakov <lev@serebryakov.spb.ru>
# $FreeBSD: head/devel/mingw32-gcc/Makefile 484628 2018-11-10 18:12:57Z bapt $

PORTNAME=	gcc
PORTVERSION=	${GCCVERSION}
CATEGORIES=	devel
MASTER_SITES=	GCC
PKGNAMEPREFIX=	mingw32-

MAINTAINER=	cyberbotx@cyberbotx.com
COMMENT=	FSF gcc-4 for Windows cross-development


BUILD_DEPENDS=	mingwm10.dll:devel/${TARGET}-bin-msvcrt
LIB_DEPENDS+=	libgmp.so:math/libgmp
LIB_DEPENDS+=	libmpc.so:math/libmpc
LIB_DEPENDS+=	libmpfr.so:math/libmpfr
RUN_DEPENDS+=	${TARGET}-as:devel/${TARGET}-binutils
BUILD_DEPENDS+=	${TARGET}-as:devel/${TARGET}-binutils


GCCVERSION=	4.8.1

SSP_UNSAFE=	yes

ONLY_FOR_ARCHS=	amd64 i386 powerpc powerpc64 sparc64
USE_LDCONFIG=	yes
USES=		bison gmake perl5 tar:bzip2
USE_PERL5=	build

TARGET=	mingw32

PATCH_WRKSRC=	${SRCDIR}
CONFIGURE_SCRIPT=	../${SRCDIR:C/${WRKDIR}//}/configure

BINARIES= c++ cpp g++ gcc gcov

.include <bsd.port.pre.mk>

.if ${ARCH} == "amd64"
CONFIGURE_TARGET=	x86_64-portbld-${OPSYS:tl}${OSREL}
.else
CONFIGURE_TARGET=	${ARCH}-portbld-${OPSYS:tl}${OSREL}
.endif

LANGUAGES:=	c,c++
SRCDIR=		${WRKDIR}/${PORTNAME}-${GCCVERSION}
WRKSRC=		${WRKDIR}/build
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --disable-nls --target=${TARGET}
CONFIGURE_ARGS+= --with-gxx-include-dir=${PREFIX}/${TARGET}/include/c++/${GCCVERSION}
CONFIGURE_ARGS+= --disable-build-poststage1-with-cxx
CONFIGURE_ARGS+= --includedir=${PREFIX}/${TARGET}/include
CONFIGURE_ARGS+= --datadir=${PREFIX}/${TARGET}/share
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --with-gnu-ld
CONFIGURE_ARGS+= --enable-lto
CONFIGURE_ARGS+= --disable-multilib
CONFIGURE_ARGS+= --enable-languages=${LANGUAGES}
CONFIGURE_ARGS+= --disable-sjlj-exceptions
CONFIGURE_ARGS+= --with-dwarf2
CONFIGURE_ARGS+= --disable-win32-registry
CONFIGURE_ARGS+= --enable-libstdcxx-debug
CONFIGURE_ARGS+= --enable-version-specific-runtime-libs
CONFIGURE_ARGS+= --with-gmp=${LOCALBASE}
CONFIGURE_ARGS+= --with-system-zlib
CONFIGURE_ARGS+= --with-gnu-as
CONFIGURE_ARGS+= --enable-decimal-float=yes
CONFIGURE_ARGS+= --disable-libgomp
CONFIGURE_ARGS+= --disable-threads
CONFIGURE_ARGS+= --disable-bootstrap

MAKE_ARGS+=	MAKEINFOFLAGS="--no-split"


.if ${ARCH} == "i386" || ${ARCH} == "amd64"
INFO+=		libquadmath
.endif
INSTALL_TARGET=	install-strip

post-patch:
	${REINPLACE_CMD} -e "s,# include <sys/sysctl.h>,," ${SRCDIR}/libiberty/physmem.c

pre-configure:
	cd ${SRCDIR} ; contrib/gcc_update --touch
	${RM} ${SRCDIR}/gcc/*/*.info*
	${MKDIR} ${CONFIGURE_WRKSRC}

post-install:
	${RM} ${STAGEDIR}${PREFIX}/lib/libiberty.a
	${MKDIR} ${STAGEDIR}${PREFIX}/${TARGET}/bin
.for F in ${BINARIES}
	${LN} -f ${STAGEDIR}${PREFIX}/bin/${PKGNAMEPREFIX}$F ${STAGEDIR}${PREFIX}/${TARGET}/bin/$F
.endfor

.include <bsd.port.post.mk>
