# $FreeBSD: head/www/node/Makefile 453790 2017-11-09 02:31:47Z jbeich $

PORTNAME=	node
PORTVERSION=	18.18.2
DISTVERSIONPREFIX=	v
CATEGORIES=	www
MASTER_SITES=	http://nodejs.org/dist/v${PORTVERSION}/

MAINTAINER=	bhughes@FreeBSD.org
COMMENT=	V8 JavaScript for client and server

LIB_DEPENDS+=	libicui18n.so:devel/libicu
LIB_DEPENDS+=	libcares.so:net/libcares
LIB_DEPENDS+=	libuv.so:devel/libuv

CONFLICTS_INSTALL=	node[4568]-[0-9]*
ONLY_FOR_ARCHS=		aarch64 amd64 armv6 armv7 i386

USES=		compiler:c++11-lib gmake python:build pkgconfig localbase shebangfix

HAS_CONFIGURE=	yes
USE_LDCONFIG=	yes


PREFIX_RELDEST=	${PREFIX:S,^${DESTDIR},,}
REINPLACE_ARGS=	-i ''
#CONFIGURE_ARGS+=	--prefix=${PREFIX_RELDEST}
#CONFIGURE_ARGS+=	--without-npm
#CONFIGURE_ARGS+=	--shared-cares
#CONFIGURE_ARGS+=	--shared-libuv
#CONFIGURE_ARGS+=	--shared-zlib
##CONFIGURE_ARGS+=	--with-intl=system-icu
#CONFIGURE_ARGS+=--openssl-no-asm

CONFIGURE_ARGS=	--prefix=${PREFIX:S|^${DESTDIR}||} \
		--shared-cares \
		--shared-libuv \
		--shared-nghttp2 \
		--shared-zlib \
		--without-npm
CONFIGURE_ARGS+=--openssl-no-asm


CONFIGURE_ENV+= PKG_CONFIG_PATH=/usr/libdata/pkgconfig:${LOCALBASE}/lib/pkgconfig

SHEBANG_FILES=	deps/v8/tools/*.py \
		deps/v8/third_party/inspector_protocol/*.py \
		tools/*.py \
		tools/inspector_protocol/*.py

MAKE_ENV+=	CC.host=${CC} CXX.host=${CXX} LINK.host=${CXX} LINK.target=${CXX}


.include <bsd.port.pre.mk>

#.if ${ARCH} == armv6 || ${ARCH} == armv7 || 
#.endif

#.if ${COMPILER_TYPE} == gcc
## GCC does not expose std::snprintf() without this define
#CXXFLAGS+=	-D_GLIBCXX_USE_C99
#.endif

post-patch:
	${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|' ${WRKSRC}/tools/v8_gypfiles/v8.gyp


post-configure:
	# Post-process Makefile and *.mk files created by node-gyp and remove
	# all occurrences of -I${LOCALBASE}/include. C*FLAGS include this
	# before all -I../deps/* for bundled code. This can cause build
	# breakages if the dependency is installed in ${LOCALBASE}. The
	# USES+=localbase # above will ensure that we pick up includes for real
	# external dependencies.
	${FIND} ${WRKSRC}/out -type f -print0 \
		| ${XARGS} -0 ${REINPLACE_CMD} -e "s|-I${LOCALBASE}/include||g"

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/node


.include <bsd.port.post.mk>
#EOF
