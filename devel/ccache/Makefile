# Created by: Dominic Marks <d.marks@student.umist.ac.uk>
# $FreeBSD: head/devel/ccache/Makefile 492797 2019-02-12 18:31:30Z amdmi3 $

PORTNAME=	ccache
CATEGORIES=	devel
MASTER_SITES=	https://www.samba.org/ftp/ccache/ LOCAL/bdrewery
PORTVERSION=	3.4.3


MAINTAINER=	bdrewery@FreeBSD.org
COMMENT=	Tool to minimize the compile time of C/C++ programs

GNU_CONFIGURE=	yes
USES=		compiler gmake
EXTRA_PATCHES+=	${FILESDIR}/extra-patch-configure.ac

.include <bsd.port.pre.mk>

CPPFLAGS+=	-DCC_IS_CLANG
#CPPFLAGS+=	-DCC_IS_GCC

.if ${ARCH}=="i386"
CCACHE_COMPILERS+=	icc icpc
.endif

post-patch:
	${REINPLACE_CMD} \
	    -e 's,_XOPEN_SOURCE 600,_XOPEN_SOURCE 700,' \
	    -e 's,_POSIX_C_SOURCE 200112L,_POSIX_C_SOURCE 200809L,' \
	    ${WRKSRC}/configure

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ccache ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.post.mk>
