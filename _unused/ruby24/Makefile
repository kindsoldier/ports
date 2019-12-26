#
# $Id$
#
PORTNAME=	ruby
PORTVERSION=	2.4.4
CATEGORIES=	lang ruby
MASTER_SITES=	RUBY${MASTER_SITE_SUBDIR_RUBY}/${PORTVERSION:R}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Object-oriented interpreted scripting language

# Using LIB_DEPENDS finds the libffi from gcc which causes problems
BUILD_DEPENDS=	libffi>=0:devel/libffi
LIB_DEPENDS+=	libyaml.so:text/libyaml
RUN_DEPENDS=	libffi>=0:devel/libffi


GNU_CONFIGURE=	yes
USES=		tar:xz gmake
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

.if ${ARCH} == armv6
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
	${REINPLACE_CMD} -E \
		-e 's,-l$$pthread_lib,-lpthread,g' \
		-e '/^RUBY_LIB_PATH/s,\.\$$\{TEENY\},,' \
		-e '/^RUBY_SITE_LIB_PATH2/s,\.\$$\{TEENY\},,' \
		-e '/^RUBY_VENDOR_LIB_PATH2/s,\.\$$\{TEENY\},,' \
		${WRKSRC}/configure

	${FIND} ${WRKSRC}/ -name "*.orig" -delete
.for mod in ext/win32ole ext/gdbm ext/tk bin/rake doc/rake lib/rake test/rake man/rake.1 lib/rake.rb 
	${RM} -rf ${BUILD_WRKSRC}/${mod}
.endfor
	${RM} ${BUILD_WRKSRC}/bin/gem

#PLIST=	${PKGDIR}/pkg-plist.${ARCH}


PLIST_SUB+= VERSION=${PORTVERSION:R}
PLIST_SUB+= VER=${_VER}
PLIST_SUB+= TARGET=${_TARGET}


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


do-install:
	${MKDIR} ${STAGEDIR}
	cd ${WRKSRC} && ${GMAKE} install DESTDIR=${STAGEDIR}
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf ruby ruby${_VER}

.include <bsd.port.post.mk>
#EOF
