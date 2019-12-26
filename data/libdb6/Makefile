# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/databases/db48/Makefile 389117 2015-06-10 18:08:35Z mandree $

PORTNAME=	db${PORTVERSION:R:R}
PORTVERSION=	6.2.23
CATEGORIES=	databases
MASTER_SITES=	http://download.oracle.com/berkeley-db/
PKGNAMEPREFIX=	lib
DISTNAME=	db-${PORTVERSION}
DIST_SUBDIR=	bdb

MAINTAINER=	mandree@FreeBSD.org
COMMENT=	The Berkeley DB package, revision ${PORTVERSION:R}

BDBVER=		${PORTVERSION:R:R}
CONFIGURE_ARGS= --enable-cxx
CONFIGURE_ARGS+= --includedir=${PREFIX}/include/${PORTNAME}
CONFIGURE_ARGS+= --with-cryptography=yes
CONFIGURE_ARGS+= --disable-atomicsupport

CONFIGURE_SCRIPT=	../dist/configure
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install_include install_lib install_utilities
WRKSRC=		${WRKDIR}/${DISTNAME}/build_unix
PATCH_WRKSRC=	${WRKDIR}/${DISTNAME}
USE_LDCONFIG=	yes

WRKSRC=		${WRKDIR}/${DISTNAME}/build_unix
CFLAGS+=	-Wall -Wextra


.include <bsd.port.options.mk>

.if (${ARCH} == "armv6" || ${ARCH} == "armv6hf")
# db48 uses a deprecated instruction for mutexes on ARM, fbsd bug#197227
CONFIGURE_ARGS+=	--enable-posixmutexes
.endif

post-patch:
	${REINPLACE_CMD} -Ee 's/[[:<:]]atomic_init[[:>:]]/db_atomic_init/g' \
	    ${WRKSRC}/../src/mp/mp* ${WRKSRC}/../src/mutex/mut_* \
	    ${WRKSRC}/../src/dbinc/atomic.h

a:
	${REINPLACE_CMD} -e 's,db_archive ,db@DB_VERSION_MAJOR@_archive ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_archive:,db@DB_VERSION_MAJOR@_archive:,g'		${WRKSRC}/../dist/Makefile.in

	${REINPLACE_CMD} -e 's,db_checkpoint ,db@DB_VERSION_MAJOR@_checkpoint ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_checkpoint:,db@DB_VERSION_MAJOR@_checkpoint:,g'		${WRKSRC}/../dist/Makefile.in

	${REINPLACE_CMD} -e 's,db_deadlock ,db@DB_VERSION_MAJOR@_deadlock ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_deadlock:,db@DB_VERSION_MAJOR@_deadlock:,g'		${WRKSRC}/../dist/Makefile.in

	${REINPLACE_CMD} -e 's,db_dump ,db@DB_VERSION_MAJOR@_dump ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_dump:,db@DB_VERSION_MAJOR@_dump:,g'		${WRKSRC}/../dist/Makefile.in

	${REINPLACE_CMD} -e 's,db_dump185 ,db@DB_VERSION_MAJOR@_dump185 ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_dump185:,db@DB_VERSION_MAJOR@_dump185:,g'		${WRKSRC}/../dist/Makefile.in

	${REINPLACE_CMD} -e 's,db_hotbackup ,db@DB_VERSION_MAJOR@_hotbackup ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_hotbackup:,db@DB_VERSION_MAJOR@_hotbackup:,g'		${WRKSRC}/../dist/Makefile.in

	${REINPLACE_CMD} -e 's,db_load ,db@DB_VERSION_MAJOR@_load ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_load:,db@DB_VERSION_MAJOR@_load:,g'		${WRKSRC}/../dist/Makefile.in

	${REINPLACE_CMD} -e 's,db_log_verify ,db@DB_VERSION_MAJOR@_log_verify ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_log_verify:,db@DB_VERSION_MAJOR@_log_verify:,g'		${WRKSRC}/../dist/Makefile.in

	${REINPLACE_CMD} -e 's,db_printlog ,db@DB_VERSION_MAJOR@_printlog ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_printlog:,db@DB_VERSION_MAJOR@_printlog:,g'		${WRKSRC}/../dist/Makefile.in

	${REINPLACE_CMD} -e 's,db_recover ,db@DB_VERSION_MAJOR@_recover ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_recover:,db@DB_VERSION_MAJOR@_recover:,g'		${WRKSRC}/../dist/Makefile.in

	${REINPLACE_CMD} -e 's,db_sql ,db@DB_VERSION_MAJOR@_sql ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_sql:,db@DB_VERSION_MAJOR@_sql:,g'		${WRKSRC}/../dist/Makefile.in

	${REINPLACE_CMD} -e 's,db_stat ,db@DB_VERSION_MAJOR@_stat ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_stat:,db@DB_VERSION_MAJOR@_stat:,g'		${WRKSRC}/../dist/Makefile.in

	${REINPLACE_CMD} -e 's,db_upgrade ,db@DB_VERSION_MAJOR@_upgrade ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_upgrade:,db@DB_VERSION_MAJOR@_upgrade:,g'		${WRKSRC}/../dist/Makefile.in

	${REINPLACE_CMD} -e 's,db_verify ,db@DB_VERSION_MAJOR@_verify ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_verify:,db@DB_VERSION_MAJOR@_verify:,g'		${WRKSRC}/../dist/Makefile.in


	${REINPLACE_CMD} -e 's,db_log_tuner ,db@DB_VERSION_MAJOR@_log_tuner ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_log_tuner:,db@DB_VERSION_MAJOR@_log_tuner:,g'		${WRKSRC}/../dist/Makefile.in

	${REINPLACE_CMD} -e 's,db_replicate ,db@DB_VERSION_MAJOR@_replicate ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_replicate:,db@DB_VERSION_MAJOR@_replicate:,g'		${WRKSRC}/../dist/Makefile.in

	${REINPLACE_CMD} -e 's,db_sql_codegen ,db@DB_VERSION_MAJOR@_sql_codegen ,g'		${WRKSRC}/../dist/Makefile.in
	${REINPLACE_CMD} -e 's,db_sql_codegen:,db@DB_VERSION_MAJOR@_sql_codegen:,g'		${WRKSRC}/../dist/Makefile.in

.include <bsd.port.mk>
#EOF
