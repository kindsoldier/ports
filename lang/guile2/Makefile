# Created by: Muhammad Moinur Rahman <5u623l20@gmail.com>
# $FreeBSD: head/lang/guile2/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	guile
PORTVERSION=	2.0.14
CATEGORIES=	lang scheme
MASTER_SITES=	GNU
PKGNAMESUFFIX=	2

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	GNU Ubiquitous Intelligent Language for Extension

LIB_DEPENDS+=   libltdl.so:devel/libtool
LIB_DEPENDS+=   libffi.so:devel/libffi
LIB_DEPENDS+=   libgmp.so:math/libgmp
LIB_DEPENDS+=   libunistring.so:text/libunistring

CONFLICTS_INSTALL=	guile-[0-9]*

MAKE_JOBS_UNSAFE=	yes

USES=		charsetfix ${USES_${ARCH}} gmake pathfix pkgconfig
USES_powerpc64=	compiler:c11

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib
INSTALL_TARGET=	install-strip

INFO=		guile r5rs

PLIST_SUB=	GUILE_VER=${PORTVERSION:R}

#THREADS_CONFIGURE_WITH=	threads
#THREADS_LIB_DEPENDS=	libgc-threaded.so:devel/boehm-gc-threaded
#THREADS_LIB_DEPENDS_OFF=	libgc.so:devel/boehm-gc

VERSION_MAJOR= ${PORTVERSION:R:R}

FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/*/*.pc.in

REINPLACE_FILES=	libguile/smob.c libguile/filesys.c libguile/gc.c \
			libguile/mallocs.c libguile/eval.c \
			libguile/gc-malloc.c libguile/ports.c
post-patch:

	${REINPLACE_CMD} -e 's,-@GUILE_EFFECTIVE_VERSION@,${VERSION_MAJOR},g' ${FILES}
	${REINPLACE_CMD} -e 's,_@GUILE_EFFECTIVE_VERSION@,${VERSION_MAJOR},g' ${FILES}

	${REINPLACE_CMD} -e 's,libguile_$${GUILE_EFFECTIVE_VERSION}_la,libguile2_la,g' ${WRKSRC}/configure

	cd ${WRKSRC} ; \
	 ${REINPLACE_CMD} -e 's|<malloc\.h>|<stdlib.h>|g' ${REINPLACE_FILES}
	${REINPLACE_CMD} -e 's|sys/time.h sys/timeb.h|sys/time.h |g' \
		${WRKSRC}/configure

	cd ${WRKSRC}/meta && ${CP} guile-2.0.pc.in guile2.pc.in

	${REINPLACE_CMD} -e 's,guile-2.0,guile2,g' ${WRKSRC}/meta/Makefile.in


#post-patch-THREADS-on:
#	${REINPLACE_CMD} -e 's|bdw-gc|bdw-gc-threaded|g' ${WRKSRC}/configure

.include <bsd.port.mk>
