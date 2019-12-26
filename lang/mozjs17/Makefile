#
# $Id$
#
PORTNAME=		mozjs
PORTVERSION=		17.0.0
CATEGORIES=		lang
MASTER_SITES=		MOZILLA/js
DISTNAME=		mozjs${PORTVERSION}
PKGNAMESUFFIX=		${PORTVERSION:R:R}

MAINTAINER=		kwm@FreeBSD.org
COMMENT=		Standalone JavaScript based from Mozilla 17-esr

BUILD_DEPENDS=		zip:arch/zip
LIB_DEPENDS=		libnspr4.so:devel/libnspr

CONFLICTS=		njs-[0-9]*

GNU_CONFIGURE=		yes
USES=			gmake perl5 python:2.7,build
USE_PERL5=		build
USE_LDCONFIG=		yes

WRKSRC=			${WRKDIR}/mozjs${PORTVERSION}/js/src

CONFIGURE_ARGS+= --with-pthreads
CONFIGURE_ARGS+= --with-system-nspr
CFLAGS+= -DJS_C_STRINGS_ARE_UTF8
CONFIGURE_ARGS+= --enable-threadsafe
CONFIGURE_ARGS+= --enable-readline
CONFIGURE_ARGS+= --enable-tracejit
CONFIGURE_ARGS+= --enable-methodjit
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -ltermcap
CONFIGURE_ARGS+= --disable-pedantic


.include <bsd.port.pre.mk>

CONFIGURE_TARGET=	${ARCH:S/amd64/x86_64/}-pc-${OPSYS:tl}${OSREL}

## ARM needs GCC until https://llvm.org/bugs/show_bug.cgi?id=23244 is fixed
.if (${ARCH} == "armv6" || ${ARCH} == "armv6hf")
#USE_GCC=	yes
CC=	gcc
CXX=	g++
CPP=	gcpp
CFLAGS+=	-DWTF_CPU_ARM_TRADITIONAL=1 -DWTF_OS_FREEBSD=1
.endif

do-build:
	cd ${WRKSRC} && ${GMAKE}

post-install:
	${LN} -s libmozjs17.so.1 ${STAGEDIR}${PREFIX}/lib/libmozjs17.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/js17
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libmozjs17.so.1

.include <bsd.port.post.mk>
#EOF
