#
# $Id$
#
PORTNAME=	dovecot
PORTVERSION=	2.3.7.2
CATEGORIES=	mail
MASTER_SITES=	http://www.dovecot.org/releases/${PORTVERSION:R}/

MAINTAINER=	adamw@FreeBSD.org
COMMENT=	Secure, fast and powerful IMAP and POP3 server

DC_RUNDIR=	/var/run/${PORTNAME}
DC_SYSCONFDIR=	${PREFIX}/etc

DC_OWNER=	${PORTNAME}
DC_GROUP=	${PORTNAME}
DC_OWNERID=	192
DC_GROUPID=	192


LIB_DEPENDS+=	libiconv.so:text/libiconv

USES+=	pgsql
#LIB_DEPENDS+=	libmysqlclient.so:data/mariadb
LIB_DEPENDS+=	libsqlite3.so:data/sqlite3

LIB_DEPENDS+=	libintl.so:devel/gettext
#LIB_DEPENDS=	libicui18n.so:devel/libicu
#LIB_DEPENDS+=	libtextcat.so:text/libtextcat
#LIB_DEPENDS+=	libicuuc.so:devel/libicu
#LIB_DEPENDS+=	libclucene-core.so:text/libclucene-core


GNU_CONFIGURE=	yes
USES+=		gmake
INSTALL_TARGET=	install-strip
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ARGS+= --with-rundir=${DC_RUNDIR}
CONFIGURE_ARGS+= --sysconfdir=${DC_SYSCONFDIR}
CONFIGURE_ARGS+= --with-statedir=${DC_RUNDIR}

CONFIGURE_ARGS+= --with-ioloop=kqueue --with-notify=kqueue

CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}

CONFIGURE_ARGS+= --with-bzlib
CONFIGURE_ARGS+= --without-lz4
CONFIGURE_ARGS+= --with-lzma
CONFIGURE_ARGS+= --with-zlib

CONFIGURE_ARGS+= --with-ssl=openssl
CONFIGURE_ARGS+= --with-ssldir=${LOCALBASE}

CONFIGURE_ARGS+= --with-nss
CONFIGURE_ARGS+= --without-bsdauth
CONFIGURE_ARGS+= --with-pam
CONFIGURE_ARGS+= --without-shadow
CONFIGURE_ARGS+= --without-gssapi
CONFIGURE_ARGS+= --without-ldap
CONFIGURE_ARGS+= --without-vpopmail

CONFIGURE_ARGS+= --without-libwrap

CONFIGURE_ARGS+= --with-sql=yes
CONFIGURE_ARGS+= --with-pgsql
CONFIGURE_ARGS+= --with-sqlite

CONFIGURE_ARGS+= --without-mysql
CONFIGURE_ARGS+= --without-cassandra

CONFIGURE_ARGS+= --without-lucene
CONFIGURE_ARGS+= --without-icu
CONFIGURE_ARGS+= --without-textcat

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
PKGMESSAGE=	${WRKDIR}/pkg-message

USE_RC_SUBR=	dovecot


SUB_FILES+= pkg-install pkg-deinstall

SUB_LIST+=	DC_OWNER=${DC_OWNER}
SUB_LIST+=	DC_GROUP=${DC_GROUP}
SUB_LIST+=	DC_OWNERID=${DC_OWNERID}
SUB_LIST+=	DC_GROUPID=${DC_GROUPID}
SUB_LIST+=	DC_RUNDIR=${DC_RUNDIR}
SUB_LIST+=	DC_SYSCONFDIR=${DC_SYSCONFDIR}/dovecot


PORTEXAMPLES+=	*

.include <bsd.port.options.mk>

SUB_FILES+=	pkg-message


post-patch:
	${REINPLACE_CMD} \
		-e 's,/etc/dovecot,${PREFIX}/etc/dovecot,g' \
		-e 's,sysconfdir=/etc,sysconfdir=${PREFIX}/etc,g' \
		   ${WRKSRC}/doc/example-config/*.conf ${WRKSRC}/doc/example-config/conf.d/*

	${REINPLACE_CMD} -e '/^LIBS =/s/$$/ @LTLIBICONV@/' \
		${WRKSRC}/src/lib-mail/Makefile.in

	${REINPLACE_CMD} -e '/^exampledir =/s,\$$(docdir),${EXAMPLESDIR},' \
		${WRKSRC}/doc/example-config/Makefile.in \
		${WRKSRC}/doc/example-config/conf.d/Makefile.in

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR} 
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${MV} ${STAGEDIR}${DOCSDIR}/dovecot-openssl.cnf ${STAGEDIR}${EXAMPLESDIR}
	${MV} ${STAGEDIR}${DOCSDIR}/mkcert.sh ${STAGEDIR}${EXAMPLESDIR}

	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf dovecot-lda.1 deliver.1
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf doveadm-sync.1 doveadm-backup.1
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf doveconf.1 doveadm-config.1
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf doveadm-move.1 doveadm-copy.1
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf doveadm.1 doveadm-reload.1
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf doveadm.1 doveadm-stop.1
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf doveadm-sync.1 dsync.1


.include <bsd.port.mk>
#EOF
