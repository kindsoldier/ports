# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/databases/redis/Makefile 476416 2018-08-05 16:13:45Z osa $

PORTNAME=	redis
DISTVERSION=	4.0.12
CATEGORIES=	databases
MASTER_SITES=	http://download.redis.io/releases/

MAINTAINER=	osa@FreeBSD.org
COMMENT=	Persistent key-value database with built-in net interface

.include <bsd.port.options.mk>

.if ${ARCH} == i386 && ! ${CFLAGS:M-march=*}
# Needed for __atomic_fetch_add_8
USE_GCC=	yes
CFLAGS+=	-march=i586
.endif

LDFLAGS+=	-lpthread -lm -lexecinfo

USES+=		gmake
MAKE_ENV=	"V=yo"
USE_RC_SUBR=	redis sentinel

BIN_FILES+=	redis-benchmark
BIN_FILES+=	redis-check-aof
BIN_FILES+=	redis-check-rdb
BIN_FILES+=	redis-cli
BIN_FILES+=	redis-sentinel
BIN_FILES+=	redis-server

OWNER=	redis
GROUP=	redis

OWNER_ID=	535
GROUP_ID=	535

DBDIR=	/var/db/redis
RUNDIR=	/var/run/redis
LOGDIR=	/var/log/redis

SUB_LIST+= OWNER=${OWNER}
SUB_LIST+= GROUP=${GROUP}
SUB_LIST+= OWNER_ID=${OWNER_ID}
SUB_LIST+= GROUP_ID=${GROUP_ID}

SUB_LIST+=	PORTNAME=${PORTNAME}
SUB_LIST+=	OWNER=${OWNER}
SUB_LIST+=	DBDIR=${DBDIR}
SUB_LIST+=	LOGDIR=${LOGDIR}
SUB_LIST+=	RUNDIR=${RUNDIR}
SUB_LIST+=	DBDIR=${DBDIR}


PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
SUB_FILES+= 	pkg-install pkg-deinstall pkg-message redis.conf

PORTEXAMPLES= *

#post-build:
#	${INSTALL_DATA} ${WRKSRC}/redis.conf ${FILESDIR}/redis.conf.in

do-install:
	${INSTALL_PROGRAM} ${BIN_FILES:C!^!${WRKSRC}/src/!} ${STAGEDIR}${PREFIX}/bin/
	${MKDIR} ${STAGEDIR}/${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKDIR}/redis.conf ${STAGEDIR}/${EXAMPLESDIR}/redis.conf.example
	${INSTALL_DATA} ${WRKSRC}/sentinel.conf ${STAGEDIR}/${EXAMPLESDIR}/sentinel.conf.example

.include <bsd.port.mk>
#EOF
