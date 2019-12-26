#
# $Id$
#
PORTNAME=	cyrus-sasl
PORTVERSION=	2.1.26
CATEGORIES=	security
MASTER_SITES+=	ftp://ftp.cyrusimap.org/cyrus-sasl/
MASTER_SITES+=	http://cyrusimap.org/releases/
PKGNAMEPREFIX=	lib

MAINTAINER=	ume@FreeBSD.org
COMMENT=	RFC 2222 SASL (Simple Authentication and Security Layer)

CONFIGURE_ARGS+=--with-openssl=yes
SASLAUTHD_RUNPATH?=	/var/run/saslauthd

CYRUS_USER=	cyrus
CYRUS_GROUP=	cyrus

#PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
#PKGINSTALL=	${WRKDIR}/pkg-install
#PKGMESSAGE=	${WRKDIR}/pkg-message

CONFIGURE_ARGS+= --program-transform-name="s,pluginviewer,saslpluginviewer,"

USES=		perl5 gmake
USE_PERL5=	patch
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --sysconfdir=${PREFIX}/etc 
CONFIGURE_ARGS+= --with-configdir=${PREFIX}/lib/sasl2:${PREFIX}/etc/sasl2
CONFIGURE_ARGS+= --with-plugindir=${PREFIX}/lib/sasl2
CONFIGURE_ARGS+= --with-dbpath=${PREFIX}/etc/sasldb2
CONFIGURE_ARGS+= --with-lib-subdir=lib
CONFIGURE_ARGS+= --with-pkgconfigdir=${PREFIX}/lib/pkgconfig
CONFIGURE_ARGS+= --includedir=${PREFIX}/include
CONFIGURE_ARGS+= --enable-static

CONFIGURE_ARGS+= --enable-auth-sasldb
CONFIGURE_ARGS+= --with-rc4=openssl
CONFIGURE_ARGS+= --with-saslauthd=${SASLAUTHD_RUNPATH}

CONFIGURE_ARGS+= --disable-gssapi
CONFIGURE_ARGS+= --disable-krb4

MAKE_ENV+=	INSTALL_STRIP_FLAG=${STRIP}

#CONFIGURE_ARGS+= --with-authdaemond=/var/run/authdaemond/socket
CONFIGURE_ARGS+= --with-authdaemond=no
CONFIGURE_ARGS+= --enable-obsolete_cram_attr=no
CONFIGURE_ARGS+= --with-dblib=ndbm

CONFIGURE_ARGS+= --enable-sql
CONFIGURE_ARGS+= --without-mysql
CONFIGURE_ARGS+= --without-sqlite
CONFIGURE_ARGS+= --without-sqlite3
CONFIGURE_ARGS+= --with-pgsql=${LOCALBASE}
CFLAGS+=	-I${LOCALBASE}/include/postgresql
CPPFLAGS+=	-I${LOCALBASE}/include/postgresql

CONFIGURE_ARGS+= --enable-cram
CONFIGURE_ARGS+= --enable-digest
CONFIGURE_ARGS+= --enable-login
CONFIGURE_ARGS+= --enable-scram
CONFIGURE_ARGS+= --disable-ntlm
CONFIGURE_ARGS+= --disable-otp
CONFIGURE_ARGS+= --enable-plain


CYRUS_RUNDIR=	/var/run/saslauthd
CYRUS_SYSCONFDIR=	${PREFIX}/etc/sasl2

CYRUS_OWNER=	cyrus
CYRUS_GROUP=	cyrus
CYRUS_OWNERID=	60
CYRUS_GROUPID=	60


USE_RC_SUBR= saslauthd.sh

SUB_FILES+= pkg-install pkg-deinstall

SUB_LIST+=	CYRUS_OWNER=${CYRUS_OWNER}
SUB_LIST+=	CYRUS_GROUP=${CYRUS_GROUP}
SUB_LIST+=	CYRUS_OWNERID=${CYRUS_OWNERID}
SUB_LIST+=	CYRUS_GROUPID=${CYRUS_GROUPID}
SUB_LIST+=	CYRUS_RUNDIR=${CYRUS_RUNDIR}
SUB_LIST+=	CYRUS_SYSCONFDIR=${CYRUS_SYSCONFDIR}


.include <bsd.port.pre.mk>


.if ${ARCH} == "amd64"
CPPFLAGS+=	-fPIC
.endif

post-patch:
	${FIND} ${WRKSRC} -name Makefile.in | ${XARGS} ${PERL} -w0pi.bak \
		-e 's/(^\@am__fastdepCC_TRUE\@.*?) \
		\n\@am__fastdepCC_TRUE\@\s+(.*?)$$/$$1 && $$2/mgx'
# Part 2: prevent intermediate *.Tpo output files clash (use unique names)
	${FIND} ${WRKSRC} -name Makefile.in | ${XARGS} ${PERL} -wpi.bak \
		-e 's/\$$\*\.Tpo/$$&.$$./g'


.include <bsd.port.post.mk>
#EOF
