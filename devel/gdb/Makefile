# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/devel/gdb/Makefile 513464 2019-10-01 08:51:39Z pizzamig $

PORTNAME=	gdb
PORTVERSION=	8.3.1
CATEGORIES=	devel
MASTER_SITES=	GNU

MAINTAINER=	pizzamig@FreeBSD.org
COMMENT=	GNU GDB of newer version than comes with the system

LIB_DEPENDS+= libexpat.so:text/libexpat
LIB_DEPENDS+= libgmp.so:math/libgmp
LIB_DEPENDS+= libiconv.so:text/libiconv
LIB_DEPENDS+= libmpfr.so:math/libmpfr
LIB_DEPENDS+= libreadline.so:devel/libreadline

NOT_FOR_ARCHS=	sparc64

USES=		compiler:c++11-lang cpe gmake libtool pkgconfig tar:xz
#USE_PYTHON=	flavors py3kplist

EXCLUDE=	dejagnu expect sim texinfo intl
EXTRACT_AFTER_ARGS=	${EXCLUDE:S/^/--exclude /}

EXTRA_PATCHES=	${FILESDIR}/commit-1163a4b7a3 \
		${FILESDIR}/commit-dd6876c91c \
		${FILESDIR}/commit-6e056c8178 \
		${FILESDIR}/commit-36c53a0262 \
		${FILESDIR}/commit-ef0bd2046f \
		${FILESDIR}/commit-945f3901b5 \
		${FILESDIR}/commit-f5424cfa7e \
		${FILESDIR}/commit-ce25aa57a3 \
		${FILESDIR}/commit-8399425f5f


USE_CSTD=	gnu89
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	CONFIGURED_M4=gm4 CONFIGURED_BISON=byacc
CONFIGURE_ARGS+= --program-suffix=${PORTVERSION:S/.//g}
CONFIGURE_ARGS+= --enable-targets=all --enable-64-bit-bfd
CONFIGURE_ARGS+= --with-separate-debug-dir=/usr/lib/debug
CONFIGURE_ARGS+= --with-expat=yes --with-libexpat-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --without-libunwind-ia64 --with-system-zlib
CFLAGS:=	${CFLAGS:C/ +$//}	# blanks at EOL creep in sometimes
CFLAGS+=	-DRL_NO_COMPAT -Wno-unused-function -Wno-unused-variable
CFLAGS+=	-Wno-unknown-warning-option



CONFIGURE_ARGS+= --with-system-readline
CONFIGURE_ARGS+= --with-system-zlib
CONFIGURE_ARGS+= --without-python

.include <bsd.port.pre.mk>

.if ${ARCH} == amd64
CONFIGURE_TARGET=	x86_64-portbld-freebsd${OSREL}
.endif

.if ${CHOSEN_COMPILER_TYPE} == clang
CFLAGS+=	-Wno-extended-offsetof
.endif

post-patch:
	${REINPLACE_CMD} -e 's|$$| [GDB v${PORTVERSION} for FreeBSD]|' \
		${WRKSRC}/gdb/version.in

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/gdb/gdb ${STAGEDIR}${PREFIX}/bin/gdb
	${INSTALL_MAN} ${WRKSRC}/gdb/doc/gdb.1 ${STAGEDIR}${MAN1PREFIX}/man/man1/gdb.1
	cd ${WRKSRC}/gdb/data-directory ; \
	${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} install-syscalls


.include <bsd.port.post.mk>
