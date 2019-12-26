# $FreeBSD: head/databases/mongodb36/Makefile 483807 2018-11-02 13:32:34Z rene $

PORTNAME=	mongodb
DISTVERSIONPREFIX=	r
DISTVERSION=	3.6.6
CATEGORIES=	databases net
MASTER_SITES+=	https://fastdl.mongodb.org/src/
MASTER_SITES+=	http://fastdl.mongodb.org/src/
MASTER_SITES+=	http://download.mongodb.org/src/
#PKGNAMESUFFIX=	${PORTVERSION:R:S/.//}
DISTNAME=	mongodb-src-${DISTVERSIONPREFIX}${DISTVERSION}

MAINTAINER=	dev@dudu.ro
COMMENT=	Distributed document-oriented "NoSQL" database

ONLY_FOR_ARCHS=	amd64
ONLY_FOR_ARCHS_REASON=	"Only supported on amd64 (i386 deprecated in v3)"

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cheetah>=2.4.4:python/py-cheetah \
		${PYTHON_PKGNAMEPREFIX}typing>=3.6.2:python/py-typing \
		${PYTHON_PKGNAMEPREFIX}yaml>=3.11:python/py-yaml
LIB_DEPENDS+=	libboost_system.so:devel/libboost64
LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libsnappy.so:arch/libsnappy


USES=		compiler:c++14-lang python:2.7,build scons shebangfix
USE_RC_SUBR=	mongod

SHEBANG_FILES=	src/mongo/installer/compass/install_compass.in
python_OLD_CMD=	@python_interpreter@
MAKE_ARGS= --prefix=${STAGEDIR}${PREFIX}
MAKE_ARGS+= --use-system-pcre
MAKE_ARGS+= --use-system-snappy
MAKE_ARGS+= --use-system-boost
MAKE_ARGS+= --use-system-zlib
MAKE_ARGS+= --cxx-std=14
MAKE_ARGS+= --libc++
MAKE_ARGS+= --runtime-hardening=on
MAKE_ARGS+= --disable-warnings-as-errors
MAKE_ARGS+= VERBOSE=on

MONGO_OWNER=	mongodb
MONGO_OWNER_ID=	922
MONGO_GROUP=	mongodb
MONGO_GROUP_ID=	922

SUB_LIST+= MONGO_OWNER=${MONGO_OWNER}
SUB_LIST+= MONGO_GROUP=${MONGO_GROUP}
SUB_LIST+= MONGO_OWNER_ID=${MONGO_OWNER_ID}
SUB_LIST+= MONGO_GROUP_ID=${MONGO_GROUP_ID}

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install

SUB_FILES= pkg-install pkg-deinstall


.include <bsd.port.options.mk>



#.if ${OPSYS} == FreeBSD && ${OSVERSION} >= 1200057
#SUB_LIST+=	LEGACY_LIMITS="@comment " MODERN_LIMITS=""
#.else
#SUB_LIST+=	LEGACY_LIMITS="" MODERN_LIMITS="@comment "
#.endif

ALL_TARGET=	core
PORTSCOUT=	limitw:1,even

post-install:
.for f in mongo mongod mongoperf mongos
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${f}
.endfor
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${CP} ${WRKSRC}/rpm/mongod.conf ${STAGEDIR}${EXAMPLESDIR}/mongodb.conf.sample

.include <bsd.port.mk>
