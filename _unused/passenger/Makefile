# Created by: Jacob Atzen <jatzen@gmail.com>
# $FreeBSD: head/www/rubygem-passenger/Makefile 459268 2018-01-17 16:33:27Z dvl $

PORTNAME=	passenger
PORTVERSION=	5.1.12
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMEPREFIX=	#rubygem-
#PKGNAMESUFFIX=  -apache

MAINTAINER=	osa@FreeBSD.org
COMMENT=	Modules for running Ruby on Rails and Rack applications

BUILD_DEPENDS=	rake:ruby/rubygem-rake
LIB_DEPENDS+=	libuv.so:devel/libuv
LIB_DEPENDS+=	libcurl.so:net/libcurl
LIB_DEPENDS+=	libapr.so:devel/libapr

BUILD_DEPENDS+=	rubygem-rack>=0:ruby/rubygem-rack
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_RUBY=	yes
NO_DOCS= yes
RAKE_BIN=	${LOCALBASE}/bin/rake
USES=		gem libtool python:env shebangfix
SHEBANG_FILES+=	src/cxx_supportlib/vendor-copy/libuv/gyp_uv.py
SHEBANG_FILES+=	dev/vagrant/nginx_start
SHEBANG_FILES+=	dev/vagrant/provision.sh
SHEBANG_FILES+=	dev/ci/run-tests-with-docker
SHEBANG_FILES+=	dev/ci/tests/debian/run
SHEBANG_FILES+=	dev/ci/tests/rpm/run
SHEBANG_FILES+=	dev/ci/scripts/setup-host-natively.sh
SHEBANG_FILES+=	dev/ci/scripts/docker-entrypoint-stage2.sh
SHEBANG_FILES+=	dev/ci/scripts/inituidgid
SHEBANG_FILES+=	dev/ci/scripts/debug-console-wrapper.sh
SHEBANG_FILES+=	dev/ci/scripts/run-tests-natively-stage2.sh
SHEBANG_FILES+=	dev/ci/scripts/docker-entrypoint.sh
SHEBANG_FILES+=	dev/ci/run-tests-natively
SHEBANG_FILES+=	dev/ci/setup-host


PLIST_DIRS+=	${GEM_LIB_DIR}/buildout/common/libboost_oxt/boost
PLIST_DIRS+=	${GEM_LIB_DIR}/buildout/common/libboost_oxt/oxt
PLIST_DIRS+=	${GEM_LIB_DIR}/buildout/common/libpassenger_common/DataStructures
PLIST_DIRS+=	${GEM_LIB_DIR}/buildout/common/libpassenger_common/MemoryKit
PLIST_DIRS+=	${GEM_LIB_DIR}/buildout/common/libpassenger_common/ServerKit
PLIST_DIRS+=	${GEM_LIB_DIR}/buildout/common/libpassenger_common/Utils
PLIST_DIRS+=	${GEM_LIB_DIR}/buildout/common/libpassenger_common/vendor-modified
PLIST_DIRS+=	${GEM_LIB_DIR}/download_cache

PLIST_FILES=	bin/passenger
PLIST_FILES+=	bin/passenger-config
PLIST_FILES+=	bin/passenger-memory-stats
PLIST_FILES+=	bin/passenger-status
PLIST_FILES+=	${GEMS_DIR}/${PORTNAME}

SUB_LIST+=	RUBY=${RUBY}
SUB_LIST+=	GEM_LIB_DIR=${GEM_LIB_DIR}
SUB_LIST+=	PASSENGER_INSTALL_DIR="${PREFIX}/${GEMS_DIR}/${PORTNAME}"
SUB_FILES=	pkg-message

pre-patch:
	${REINPLACE_CMD} \
		's!-Wall!!g; \
		s!gcc!${CC}!g; \
		s!g++!${CXX}!g; \
		s!#{PlatformInfo.debugging_cflags}!${CFLAGS}!g; \
		s!-O2!!g; \
		s! -feliminate-unused-debug-symbols -feliminate-unused-debug-types!!g; \
		155s!true!false!' \
		${WRKSRC}/build/basics.rb
	${REINPLACE_CMD} '1s:python:python2:' \
		${WRKSRC}/src/cxx_supportlib/vendor-copy/libuv/gyp_uv.py
	${REINPLACE_CMD} 's!-DPASSENGER_DEBUG!-DNDEBUG!g' \
		${WRKSRC}/build/basics.rb

post-build:
	${FIND} ${WRKSRC} -name '*.o' -delete
	${FIND} ${WRKSRC} -name '*.bak' -delete
	CC=${CC} CXX=${CXX} ${WRKSRC}/bin/passenger-install-apache2-module --auto

do-install:
	cd ${BUILD_WRKSRC}; ${SETENV} ${GEM_ENV} ${RUBYGEMBIN} install \
	    ${RUBYGEM_ARGS} --no-rdoc --no-ri ${GEMFILES} -- --build-args ${CONFIGURE_ARGS}
	${RM} -rf ${STAGEDIR}${PREFIX}/${GEMS_BASE_DIR}/build_info/
	${FIND} ${STAGEDIR}${PREFIX}/${GEMS_BASE_DIR} -type f -name '*.so' | ${XARGS} -n1 ${STRIP_CMD}
	${FIND} ${STAGEDIR}${PREFIX}/${GEMS_BASE_DIR} -type f \
	     \( -name mkmf.log -or -name gem_make.out \) -delete
	${RM} -rf ${STAGEDIR}${PREFIX}/${GEM_LIB_DIR}/ext ${STAGEDIR}${PREFIX}/${CACHE_DIR}

APACHEMODDIR= libexec/apache

post-install:
	cd ${WRKSRC} && \
	    ${COPYTREE_SHARE} buildout ${STAGEDIR}${PREFIX}/${GEMS_DIR}/${PORTNAME}-${PORTVERSION}
	    ${CHMOD} +x ${STAGEDIR}${PREFIX}/${GEMS_DIR}/${PORTNAME}-${PORTVERSION}/buildout/support-binaries/*
	    ${STRIP_CMD} ${STAGEDIR}${PREFIX}/${GEM_LIB_DIR}/buildout/ruby/*/passenger_native_support.so
	    ${STRIP_CMD} ${STAGEDIR}${PREFIX}/${GEM_LIB_DIR}/buildout/support-binaries/PassengerAgent
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${GEM_LIB_DIR}/buildout/apache2/mod_passenger.so
#	${MKDIR} ${STAGEDIR}${PREFIX}/${APACHEMODDIR}
#	${INSTALL} -lrs ${STAGEDIR}${PREFIX}/${GEM_LIB_DIR}/buildout/apache2/mod_passenger.so ${STAGEDIR}${PREFIX}/${APACHEMODDIR}/mod_passenger.so
#	${ECHO} "${APACHEMODDIR}/mod_passenger.so" >> ${TMPPLIST}
	${LN} -s ${GEM_NAME} ${STAGEDIR}${PREFIX}/${GEMS_DIR}/${PORTNAME}

.include <bsd.port.mk>
#EOF
