#
# $Id: Makefile 1575 2008-07-31 07:53:53Z root $
#
DISTNAME=	postgresql-${PORTVERSION}
PORTVERSION=	9.4.5
CATEGORIES=	databases
MASTER_SITES+=	ftp://ftp.postgresql.org/pub/%SUBDIR%/ 
MASTER_SITES+=	ftp://ftp.de.postgresql.org/%SUBDIR%/ 
MASTER_SITES+=	ftp://ftp.digex.net/pub/packages/database/postgresql/%SUBDIR%/ 
MASTER_SITES+=	ftp://ftp.sunet.se/pub/unix/databases/relational/postgresql/%SUBDIR%/ 
MASTER_SITES+=	ftp://ftp.chg.ru/pub/databases/postgresql/%SUBDIR%/ 
MASTER_SITES+=	${MASTER_SITE_RINGSERVER:S,%SUBDIR%,misc/db/postgresql/&,}
MASTER_SITE_SUBDIR=	source/v${PORTVERSION}
#DISTFILES=	${DISTNAME}-${PORTVERSION}${EXTRACT_SUFX}

PORTNAME=${TARGET}-libpq

BUILD_DEPENDS+=	${TARGET}-gcc>0:devel/${TARGET}-gcc 
BUILD_DEPENDS+=	${TARGET}-bin-msvcrt>0:devel/${TARGET}-bin-msvcrt


TARGET=mingw32

MAINTAINER= homeunix7@gmail.com
COMMENT=	A robust, next generation, object-relational DBMS

USES+=		tar:bzip2
UGE_GMAKE=	yes
HAS_CONFIGURE=  yes

CONFIGURE_ARGS+= --without-tcl
CONFIGURE_ARGS+= --without-python
CONFIGURE_ARGS+= --without-pam
CONFIGURE_ARGS+= --disable-nls
CONFIGURE_ARGS+= --without-ldap
CONFIGURE_ARGS+= --without-openssl
CONFIGURE_ARGS+= --host=${TARGET}


do-configure:
	cd ${WRKSRC} && \
	    ./configure --prefix=${LOCALBASE}/${TARGET} ${CONFIGURE_ARGS}

do-build:
	cd ${WRKSRC}/src/common && gmake
	cd ${WRKSRC}/src/interfaces/libpq && gmake
	cd ${WRKSRC}/src/interfaces/libpq && ${RM} -f libpq.a && ${TARGET}-ar rv libpq.a *.o

do-install:
	cd ${WRKSRC}/src/common && gmake install DESTDIR=${STAGEDIR}
	cd ${WRKSRC}/src/interfaces/libpq && gmake install DESTDIR=${STAGEDIR}
	cd ${WRKSRC}/src/include && gmake install SUBDIRS="libpq" DESTDIR=${STAGEDIR}

.include <bsd.port.mk>
#EOF
