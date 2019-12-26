# Created by: Mike McGaughey <mmcg@cs.monash.edu.au>
# $FreeBSD: head/devel/boehm-gc/Makefile 471253 2018-06-01 10:12:42Z cpm $

PORTNAME=	gc
PORTVERSION=	7.6.6
CATEGORIES=	devel
MASTER_SITES=	http://www.hboehm.info/gc/gc_source/ \
		https://github.com/ivmai/bdwgc/releases/download/v${PORTVERSION}/
PKGNAMEPREFIX=  libboehm-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Garbage collection and memory leak detection for C and C++

BUILD_DEPENDS=	libatomic_ops>=0:devel/libatomic_ops

GNU_CONFIGURE=	yes
USES=		pathfix pkgconfig
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
TEST_TARGET=	check
CONFIGURE_ARGS=	--enable-cplusplus --disable-static
MAKE_JOBS_UNSAFE=	yes

WRKSRC=		${WRKDIR}/${DISTNAME:C/[a-z]$//}

CONFIGURE_ARGS+=--enable-threads=posix --disable-redirect-malloc
#CONFIGURE_ARGS+=--disable-threads --disable-redirect-malloc
CONFIGURE_ARGS+=--enable-parallel-mark


post-patch:
	${REINPLACE_CMD} -e "s|%%PREFIX%%|${PREFIX}|g" ${WRKSRC}/doc/gc.man
	${REINPLACE_CMD} \
		-e "s|(datadir)/@PACKAGE@|(datadir)/doc/@PACKAGE@|" \
		${WRKSRC}/Makefile.in

post-install:
	${INSTALL_MAN} ${WRKSRC}/doc/gc.man ${STAGEDIR}${MAN3PREFIX}/man/man3/gc.3

.include <bsd.port.mk>
