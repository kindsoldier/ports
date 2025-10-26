#
# $Id: Makefile 1575 2008-07-31 07:53:53Z root $
#
PORTNAME=	postgresql
PORTVERSION=	15.4
CATEGORIES=	databases
MASTER_SITES+=	http://ftp.postgresql.org/pub/%SUBDIR%/ 
MASTER_SITES+=	http://ftp.de.postgresql.org/%SUBDIR%/ 
MASTER_SITES+=	ftp://ftp.digex.net/pub/packages/database/postgresql/%SUBDIR%/ 
MASTER_SITES+=	ftp://ftp.sunet.se/pub/unix/databases/relational/postgresql/%SUBDIR%/ 
MASTER_SITES+=	ftp://ftp.chg.ru/pub/databases/postgresql/%SUBDIR%/ 
MASTER_SITES+=	${MASTER_SITE_RINGSERVER:S,%SUBDIR%,misc/db/postgresql/&,}
MASTER_SITE_SUBDIR=	source/v${PORTVERSION}
DISTFILES=	${PORTNAME}-${PORTVERSION}${EXTRACT_SUFX}

MAINTAINER=     onborodin@gmail.com
COMMENT=	A robust, next generation, object-relational DBMS

LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libintl.so:devel/gettext
#LIB_DEPENDS+=	libicuuc.so:devel/libicu

USES+=		tar:bzip2 gmake bison pkgconfig

PG_OWNER=	pgsql
PG_OWNER_ID=	90
PG_GROUP=	pgsql
PG_GROUP_ID=	90

PG_DOC_SUBDIR=	doc
PG_DOC_DIR=	${PREFIX}/${PG_DOC_SUBDIR}

PG_VAR_DIR=	/var
PG_DB_DIR=	${PG_VAR_DIR}/db/pgsql
PG_LOGDIR=	${PG_VAR_DIR}/log/pgsql
PG_RUN_DIR=	${PG_VAR_DIR}/run/pgsql

USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --sysconfdir=${PREFIX}/etc

CONFIGURE_ARGS+= --with-includes=${LOCALBASE}/include
CONFIGURE_ARGS+= --with-libraries=${LOCALBASE}/lib
CONFIGURE_ARGS+= --libdir=${PREFIX}/lib
CONFIGURE_ARGS+= --includedir=${PREFIX}/include/${PORTNAME}

CONFIGURE_ARGS+= --datarootdir=${PREFIX}/share/postgresql
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --htmldir=${PREFIX}/share/doc/postgresql
CONFIGURE_ARGS+= --without-perl
CONFIGURE_ARGS+= --without-tcl
CONFIGURE_ARGS+= --without-python
CONFIGURE_ARGS+= --without-pam
CONFIGURE_ARGS+= --enable-thread-safety
CONFIGURE_ARGS+= --enable-nls
CONFIGURE_ARGS+= --with-system-tzdata=/usr/share/zoneinfo
######CONFIGURE_ARGS+= --disable-integer-datetimes
CONFIGURE_ARGS+= --with-icu
CONFIGURE_ARGS+= --enable-depend

CONFIGURE_ARGS+= --without-ldap
CONFIGURE_ARGS+= --with-openssl

#CONFIGURE_ARGS+= --with-libedit-preferred
#CFLAGS+=	-I/usr/include/edit
#CPPFLAGS+=	-I/usr/include/edit

CFLAGS+=	-pthread
CONFIGURE_ENV+=	INCLUDES="${INCLUDES}"
CONFIGURE_ENV+=	PTHREAD_LIBS="-lpthread"

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
PKGMESSAGE=	${WRKDIR}/pkg-message

SUB_FILES= pkg-install pkg-deinstall pkg-message

USE_RC_SUBR+= pgsql

PLIST_SUB+= PG_DOC_SUBDIR=${PG_DOC_SUBDIR}

SUB_LIST+= PG_OWNER=${PG_OWNER}
SUB_LIST+= PG_GROUP=${PG_GROUP}
SUB_LIST+= PG_OWNER_ID=${PG_OWNER_ID}
SUB_LIST+= PG_GROUP_ID=${PG_GROUP_ID}
SUB_LIST+= PG_DB_DIR=${PG_DB_DIR}
SUB_LIST+= PG_RUN_DIR=${PG_RUN_DIR}
SUB_LIST+= PG_LOG_DIR=${PG_LOG_DIR}

BINS+= clusterdb
BINS+= createdb
BINS+= createuser
BINS+= dropdb
BINS+= dropuser
BINS+= initdb
BINS+= reindexdb
BINS+= vacuumdb
BINS+= vacuumlo
BINS+= oid2name

BIN_PREFIX= pg_
SUB_LIST+= BIN_PREFIX=${BIN_PREFIX}

PLIST_SUB= BIN_PREFIX=${BIN_PREFIX}

_LIBS+= libecpg.a
_LIBS+= libecpg.so
_LIBS+= libecpg.so.6
_LIBS+= libecpg_compat.a
_LIBS+= libecpg_compat.so
_LIBS+= libecpg_compat.so.3
_LIBS+= libpgport.a
_LIBS+= libpgtypes.a
_LIBS+= libpgtypes.so
_LIBS+= libpgtypes.so.3
_LIBS+= libpq.a
_LIBS+= libpq.so
_LIBS+= libpq.so.5

post-patch:
	${RM} -f ${WRKSRC}/src/backend/parser/gram.c
	${RM} -f ${WRKSRC}/src/backend/parser/gram.h
	${RM} -f ${WRKSRC}/src/interfaces/ecpg/preproc/preproc.c
	${RM} -f ${WRKSRC}/src/interfaces/ecpg/preproc/preproc.h

post-build:
	cd ${WRKSRC}/contrib && ${GMAKE} all

post-install:
	cd ${WRKSRC}/contrib && ${GMAKE} DESTDIR=${STAGEDIR} install
	cd ${WRKSRC} && ${GMAKE} DESTDIR=${STAGEDIR} install-docs
.for file in ${BINS}
	cd ${STAGEDIR}/${PREFIX}/bin && ${MV} ${file} ${BIN_PREFIX}${file}
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${MV} ${file}.1 ${BIN_PREFIX}${file}.1
.endfor
.for file in ${MAN1_DEL}
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${RM} -f ${file}
.endfor

#post-patch:
#	cd ${WRKSRC} && autoconf 

.include <bsd.port.pre.mk>


.if ${OSVERSION} > 1100000
LIB_DEPENDS+=	libreadline.so:devel/libreadline
.endif


.include <bsd.port.post.mk>
#EOF
