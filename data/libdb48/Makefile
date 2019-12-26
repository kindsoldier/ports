# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/databases/db48/Makefile 389117 2015-06-10 18:08:35Z mandree $

PORTNAME=	db${PORTVERSION:R:S/.//g}
PORTVERSION=	4.8.30
CATEGORIES=	databases
MASTER_SITES=	http://download.oracle.com/berkeley-db/
PKGNAMEPREFIX=	lib
DISTNAME=	db-${PORTVERSION}
DIST_SUBDIR=	bdb

MAINTAINER=	mandree@FreeBSD.org
COMMENT=	The Berkeley DB package, revision {PORTVERSION:R}

#DEPRECATED=		Please migrate to db5 or db6
# The port is not to be removed unless the bitcoin-related ports can
# go without this.
#EXPIRATION_DATE=	2015-07-31

BDBVER=		${PORTVERSION:R:R}
CONFIGURE_ARGS+= --enable-compat185 --enable-dump185 --enable-cxx
CONFIGURE_ARGS+= --includedir=${PREFIX}/include/${PORTNAME:}

CONFIGURE_SCRIPT=	../dist/configure
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install_include install_lib install_utilities
WRKSRC=		${WRKDIR}/${DISTNAME}/build_unix
USE_LDCONFIG=	yes

.include <bsd.port.options.mk>

.if (${ARCH} == "armv6" || ${ARCH} == "armv6hf")
# db48 uses a deprecated instruction for mutexes on ARM, fbsd bug#197227
CONFIGURE_ARGS+=	--enable-posixmutexes
.endif

post-patch:
	${REINPLACE_CMD} -Ee 's|--mode=install cp -p|--mode=install ${INSTALL} -s|;' ${WRKSRC}/${CONFIGURE_SCRIPT}
	${REINPLACE_CMD} -Ee 's/[[:<:]]atomic_init[[:>:]]/db_atomic_init/g' ${WRKSRC}/../dbinc/atomic.h ${WRKSRC}/../mp/mp_*.c ${WRKSRC}/../mutex/mut_*.c

PATHSRC=	${WRKSRC}/../

a:
	${REINPLACE_CMD} -e 's,db_archive ,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_archive ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_checkpoint ,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_checkpoint ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_deadlock ,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_deadlock ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_dump ,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_dump ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_dump185 ,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_dump185 ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_hotbackup ,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_hotbackup ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_load ,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_load ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_printlog ,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_printlog ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_recover ,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_recover ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_sql ,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_sql ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_stat ,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_stat ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_upgrade ,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_upgrade ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_verify ,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_verify ,g'		${WRKSRC}/../dist/Makefile.in

	${REINPLACE_CMD} -e 's,db_archive:,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_archive:,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_checkpoint:,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_checkpoint:,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_deadlock:,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_deadlock:,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_dump:,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_dump:,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_dump185:,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_dump185:,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_hotbackup:,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_hotbackup:,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_load:,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_load:,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_printlog:,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_printlog:,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_recover:,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_recover:,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_sql:,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_sql:,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_stat:,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_stat:,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_upgrade:,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_upgrade:,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_verify:,db@DB_VERSION_MAJOR@@DB_VERSION_MINOR@_verify:,g'		${WRKSRC}/../dist/Makefile.in

.include <bsd.port.mk>
#EOF
