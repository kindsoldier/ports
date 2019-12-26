#
# $Id$
#
PORTNAME=	bareos
PORTVERSION=	16.2.4
#PORTVERSION=	15.2.2
#DISTVERSION=	15.2
CATEGORIES=	sysutils
#PKGNAMEPREFIX?=	#
#PKGNAMESUFFIX?=	-server

MAINTAINER=	acm@FreeBSD.org
COMMENT?=	Backup archiving recovery open sourced (server)

USES+=	pgsql
LIB_DEPENDS+=	libsqlite3.so:data/sqlite3
LIB_DEPENDS+=	liblzo2.so:arch/liblzo2

USE_GITHUB=	yes
GH_ACCOUNT=	bareos
GH_PROJECT=	bareos
#GH_TAGNAME=	bb1529f88585da31a0053f06727c74f2a7cb0dc1
#GH_TAGNAME=	fb775025d54ef77abb4d67cc5aa9ecb90bca4839
#GH_TAGNAME=	a52726f174052c90c338c8d8f1c1821e6e9ce5c8

GH_TAGNAME=	aa3dfb3a849a5a31e98f8d9cac48f62b051b5f3b

WRKSRC=	${WRKDIR}/${PORTNAME}-${GH_TAGNAME}

GNU_CONFIGURE=	yes
USES+=		gmake
USE_LDCONFIG=	yes

CPPFLAGS+=	-I/usr/include/readline -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

#CONFIGURE_ARGS+= --with-tcp-wrappers=/usr/lib
CONFIGURE_ARGS+= --enable-smartalloc
#CONFIGURE_ARGS+= --sysconfdir=${ETCDIR}
CONFIGURE_ARGS+= --disable-conio
CONFIGURE_ARGS+= --enable-batch-insert
CONFIGURE_ARGS+= --with-plugindir=${PREFIX}/lib
CONFIGURE_ARGS+= --with-dump-email=root@localhost
CONFIGURE_ARGS+= --with-job-email=root@localhost
CONFIGURE_ARGS+= --with-sbin-perm=755
CONFIGURE_ARGS+= --with-openssl=/usr
CONFIGURE_ARGS+= --with-db-name=bareos
CONFIGURE_ARGS+= --with-db-user=bareos
CONFIGURE_ARGS+= --with-working-dir=${BAREOS_DBDIR}
CONFIGURE_ARGS+= --with-scriptdir=${PREFIX}/share/${PORTNAME}
CONFIGURE_ARGS+= --with-pid-dir=/var/run/bareos
CONFIGURE_ARGS+= --with-logdir=/var/log/bareos

#CONFIGURE_ARGS+= --without-jansson
CONFIGURE_ARGS+= --with-jansson=${LOCALBASE}
LIBS+=		-L${LOCALBASE}/lib -ljansson
LIB_DEPENDS+=	libjansson.so:devel/libjansson


CONFIGURE_ARGS+= --with-baseport=9101
CONFIGURE_ARGS+= --without-python
CONFIGURE_ARGS+= --with-fd-user=root
CONFIGURE_ARGS+= --with-fd-group=wheel
CONFIGURE_ARGS+= --with-dir-user=${BAREOS_USER}
CONFIGURE_ARGS+= --with-dir-group=${BAREOS_GROUP}
CONFIGURE_ARGS+= --with-sd-user=${BAREOS_USER}
CONFIGURE_ARGS+= --with-sd-group=operator
CONFIGURE_ARGS+= --with-sqlite3=yes
CONFIGURE_ARGS+= --with-postgresql=yes
#CONFIGURE_ARGS+= --enable-dynamic-storage-backends
CONFIGURE_ARGS+= --enable-dynamic-cats-backends


BAREOS_OWNER?=	bareos
BAREOS_GROUP?=	${BAREOS_OWNER}
BAREOS_OWNER_ID?=	910
BAREOS_GROUP_ID?=	${BAREOS_OWNER_ID}
BAREOS_DBDIR?=	/var/db/bareos
BAREOS_RUNDIR?=	/var/run/bareos
BAREOS_LOGDIR?=	/var/log/bareos



PLIST_SUB+=	BAREOS_DIR=${BAREOS_DIR}

SUB_LIST+=	BAREOS_OWNER=${BAREOS_OWNER}
SUB_LIST+=	BAREOS_GROUP=${BAREOS_GROUP}
SUB_LIST+=	BAREOS_OWNER_ID=${BAREOS_OWNER_ID}
SUB_LIST+=	BAREOS_GROUP_ID=${BAREOS_GROUP_ID}
SUB_LIST+=	BAREOS_DBDIR=${BAREOS_DBDIR}
SUB_LIST+=	BAREOS_RUNDIR=${BAREOS_RUNDIR}
SUB_LIST+=	BAREOS_LOGDIR=${BAREOS_LOGDIR}


USE_RC_SUBR=	bareos-fd bareos-sd bareos-dir
SUB_FILES+= 	pkg-install

PORTEXAMPLES=	*

post-patch:
	${REINPLACE_CMD} -e '/docdir/d' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's|$$(ECHO)|echo|g'  \
		${WRKSRC}/src/filed/Makefile.in   \
		${WRKSRC}/src/console/Makefile.in \
		${WRKSRC}/src/cats/Makefile.in    \
		${WRKSRC}/src/dird/Makefile.in    \
		${WRKSRC}/src/stored/Makefile.in  \
		${WRKSRC}/src/tools/Makefile.in

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/src/console/bconsole.conf ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/src/dird/bareos-dir.conf ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/src/filed/bareos-fd.conf ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/src/stored/bareos-sd.conf ${STAGEDIR}${EXAMPLESDIR}


.include <bsd.port.pre.mk>

.if (${OSVERSION} > 110000)
#BUILD_DEPENDS+=	makeinfo:system/texinfo
LIB_DEPENDS+=	libreadline.so:devel/libreadline
CFLAGS+=	-I${LOCALBASE}/include
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+= --with-readline=${LOCALBASE}
.else
CONFIGURE_ARGS+= --with-readline=/usr
.endif

.include <bsd.port.post.mk>
#EOF
