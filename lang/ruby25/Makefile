#
# $Id$
#
PORTNAME=	ruby
PORTVERSION=	2.5.6
CATEGORIES=	lang ruby
MASTER_SITES+=	https://cache.ruby-lang.org/pub/ruby/${PORTVERSION:R}/
MASTER_SITES+=	RUBY/${MASTER_SITE_SUBDIR_RUBY}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Object-oriented interpreted scripting language

BUILD_DEPENDS=	libffi>=0:devel/libffi
LIB_DEPENDS+=	libyaml.so:text/libyaml
RUN_DEPENDS=	libffi>=0:devel/libffi

GNU_CONFIGURE=	yes
USES=		tar:xz gmake autoreconf
CONFIGURE_ARGS+= --disable-rpath
CONFIGURE_ARGS+= --enable-pthread
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --with-ruby-version=minor
CONFIGURE_ARGS+= --with-sitedir="${PREFIX}/lib/ruby/site_ruby"
CONFIGURE_ARGS+= --with-vendordir="${PREFIX}/lib/ruby/vendor_ruby"
CONFIGURE_ARGS+= --with-ruby-pc="ruby.pc"
CONFIGURE_ARGS+= --with-rubyhdrdir=${PREFIX}/include/${PORTNAME}/${PORTVERSION:R}

CONFIGURE_ENV=	LC_ALL=C debugflags=""
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-lpthread -L${LOCALBASE}/lib
MAKE_ENV=	LC_ALL=C
USE_LDCONFIG=	yes

CONFIGURE_ARGS+= --disable-dtrace
CONFIGURE_ARGS+= --disable-libedit --with-readline-dir=${LOCALBASE}
#CONFIGURE_ARGS+= --enable-libedit --with-libedit-dir=${LOCALBASE}
CONFIGURE_ARGS+= --with-gmp

NOT_FOR_ARCHS=	ia64
NOT_FOR_ARCHS_REASON_ia64=	does not build


.include <bsd.port.pre.mk>

.if ${ARCH} == armv6 || ${ARCH} == armv7
CONFIGURE_ARGS+=--with-setjmp-type=_setjmp
CONFIGURE_ENV+=	ac_cv_func__setjmp=yes
.endif


.if ${ARCH} == amd64
_ARCH=	amd64 #x86_64
.else
_ARCH=	${ARCH}
.endif

_TARGET=	${_ARCH}-${OPSYS:tl}${OSREL}
_VER=		${PORTVERSION:R:S/.//g}

post-patch:
	${FIND} ${WRKSRC}/ -name "*.orig" -delete
	${FIND} ${WRKSRC}/ -name "*.orig" -delete
	${RM} ${BUILD_WRKSRC}/bin/rake
	${RM} ${BUILD_WRKSRC}/doc/rake
	${RM} ${BUILD_WRKSRC}/lib/rake
	${RM} ${BUILD_WRKSRC}/test/rake
	${RM} ${BUILD_WRKSRC}/man/rake.1
	${RM} ${BUILD_WRKSRC}/lib/rake.rb
	${RM} -r ${BUILD_WRKSRC}/ext/win32ole
	${RM} ${BUILD_WRKSRC}/bin/gem
	${RM} ${BUILD_WRKSRC}/bin/gem

do-build:
	cd ${WRKSRC} && ${GMAKE} all

RB_SET_CONF_VAR=${SH} -c '${REINPLACE_CMD} -E -e "s,(CONFIG\[\"$$0\"\][[:space:]]*=[[:space:]]*)(\(?)(.*)(\)?),\1\2$$1\4," ${WRKSRC}/rbconfig.rb' --

post-build:
#
# Hack to allow modules to be installed into separate PREFIX and/or under user
# privileges
#
	${RB_SET_CONF_VAR} "prefix" "ENV['PREFIX'] || \3"
	${RB_SET_CONF_VAR} "INSTALL" "'/usr/bin/install -c'"
	${RB_SET_CONF_VAR} "INSTALL_PROGRAM" "ENV['RB_USER_INSTALL'] ? '${INSTALL} ${COPY} ${STRIP} -m ${BINMODE}' : '${INSTALL_PROGRAM}'"
	${RB_SET_CONF_VAR} "INSTALL_SCRIPT" "ENV['RB_USER_INSTALL'] ? '${INSTALL} ${COPY} -m ${BINMODE}' : '${INSTALL_SCRIPT}'"
	${RB_SET_CONF_VAR} "INSTALL_DATA" "ENV['RB_USER_INSTALL'] ? '${INSTALL} ${COPY} -m ${SHAREMODE}' : '${INSTALL_DATA}'"

RUBYDIRS+= include/ruby
RUBYDIRS+= lib/ruby
RUBYDIRS+= share/ri

do-install:
	${MKDIR} ${STAGEDIR}
	cd ${WRKSRC} && ${GMAKE} install DESTDIR=${STAGEDIR}
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf ruby ruby${_VER}

post-install:
.for DIR in ${RUBYDIRS}
	${FIND} -ds ${STAGEDIR}${PREFIX}/${DIR} -type f | \
		${SED} 's,^${STAGEDIR}${PREFIX}/,,' >> ${TMPPLIST}
.endfor
.for DIR in ${RUBYDIRS}
	${FIND} -ds ${STAGEDIR}${PREFIX}/${DIR} -type d | \
		${SED} 's,^${STAGEDIR}${PREFIX}/,@dir ,' >> ${TMPPLIST}
.endfor

.include <bsd.port.post.mk>
#EOF
