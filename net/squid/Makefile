#
# $Id: Makefile 2316 2009-09-02 08:41:08Z root $
#
PORTNAME=	squid
PORTVERSION=	4.8
CATEGORIES=	net
MASTER_SITES+=	http://www.squid-cache.org/Versions/v4/
MASTER_SITES+=		http://www2.us.squid-cache.org/Versions/v4/
MASTER_SITES+=		http://www1.at.squid-cache.org/Versions/v4/
MASTER_SITES+=		http://www.eu.squid-cache.org/Versions/v4/
MASTER_SITES+=		http://www1.jp.squid-cache.org/Versions/v4/


MAINTAINER= homeunix7@gmail.com
COMMENT=	The successful WWW proxy cache and accelerator


SQUID_OWNER=	squid
SQUID_GROUP=	squid
SQUID_OWNER_ID=	190
SQUID_GROUP_ID=	190

USES=	gmake tar:xz
GNU_CONFIGURE=	yes
CPPFLAGS+= 	${PTHREAD_FLAGS} -I${LOCALBASE}/include 
LDFLAGS+= ${PTHREAD_LIBS} -L${LOCALBASE}/lib

OPENSSLINC= /usr/include/openssl
CONFIGURE_ENV+= LIBOPENSSL_CFLAGS=-I${OPENSSLINC}
CONFIGURE_ENV+=LIBOPENSSL_LIBS="-lcrypto -lssl"


CONFIGURE_ARGS+= --sysconfdir=${PREFIX}/etc/squid
CONFIGURE_ARGS+= --libexecdir=${PREFIX}/libexec/squid
CONFIGURE_ARGS+= --datadir=${PREFIX}/share/squid
CONFIGURE_ARGS+= --datarootdir=${PREFIX}/share
CONFIGURE_ARGS+= --docdir=${PREFIX}/share/doc/squid
#CONFIGURE_ARGS+= --localstatedir=/var

CONFIGURE_ARGS+= --localstatedir=/var/squid
CONFIGURE_ARGS+= --with-logdir=/var/log/squid
CONFIGURE_ARGS+= --with-pidfile=/var/run/squid/squid.pid
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

CONFIGURE_ARGS+= --with-default-user=${SQUID_OWNER}

###CONFIGURE_ARGS+= --disable-internal-dns
#CONFIGURE_ARGS+= --disable-auto-locale
#CONFIGURE_ARGS+= --disable-ipv6
#CONFIGURE_ARGS+= --disable-translation
#CONFIGURE_ARGS+= --disable-unlinkd
#CONFIGURE_ARGS+= --without-expat
CONFIGURE_ARGS+= --disable-ecap --disable-loadable-modules
CONFIGURE_ARGS+= --disable-epoll
CONFIGURE_ARGS+= --disable-htcp
CONFIGURE_ARGS+= --disable-ident-lookups
CONFIGURE_ARGS+= --disable-linux-netfilter
CONFIGURE_ARGS+= --disable-linux-tproxy
#CONFIGURE_ARGS+= --disable-ssl
CONFIGURE_ARGS+= --disable-wccp
CONFIGURE_ARGS+= --disable-wccpv2
CONFIGURE_ARGS+= --enable-arp-acl 

#CONFIGURE_ARGS+= --enable-auth="basic"
#CONFIGURE_ARGS+= --enable-basic-auth-helpers="NCSA PAM"	#LDAP
#CONFIGURE_ARGS+= --enable-digest-auth-helpers=""	#
#CONFIGURE_ARGS+= --enable-external-acl-helpers=""	#squid_unix_group
#CONFIGURE_ARGS+= --enable-negotiate-auth-helpers=""	#squid_kerb_auth

CONFIGURE_ARGS+= --enable-auth-basic="NCSA PAM"
CONFIGURE_ARGS+= --enable-auth-digest="none"
CONFIGURE_ARGS+= --enable-auth-negotiate="none"
CONFIGURE_ARGS+= --enable-auth-ntlm="none"

CONFIGURE_ARGS+= --enable-external-acl-helpers="file_userip"
CONFIGURE_ARGS+= --enable-removal-policies="lru heap"
CONFIGURE_ARGS+= --enable-storeio="ufs aufs diskd" 
###CONFIGURE_ARGS+= --enable-disk-io="AIO Blocking IpcIo Mmapped DiskThreads DiskDaemon"

CONFIGURE_ARGS+= --enable-cache-digests
CONFIGURE_ARGS+= --enable-carp
CONFIGURE_ARGS+= --enable-delay-pools
CONFIGURE_ARGS+= --enable-esi
CONFIGURE_ARGS+= --enable-icap-client
CONFIGURE_ARGS+= --enable-icmp

#CONFIGURE_ARGS+= --enable-ipf-transparent
#CONFIGURE_ARGS+= --enable-ipfw-transparent
#CONFIGURE_ARGS+= --enable-pf-transparent

CONFIGURE_ARGS+= --enable-referer-log
CONFIGURE_ARGS+= --enable-snmp
CONFIGURE_ARGS+= --enable-useragent-log
CONFIGURE_ARGS+= --with-aufs-threads=10
CONFIGURE_ARGS+= --with-openssl=/usr
CONFIGURE_ARGS+= --without-libxml2
LDFLAGS+= -pthread

CONFIGURE_ARGS+= --without-nettle
CONFIGURE_ARGS+= --without-gnutls
CONFIGURE_ARGS+= --with-openssl=/usr
CONFIGURE_ARGS+= --without-mit-krb5
CONFIGURE_ARGS+= --without-heimdal-krb5
CONFIGURE_ARGS+= --without-gnugss

CONFIGURE_ARGS+= --disable-epoll
CONFIGURE_ARGS+= --disable-linux-netfilter
CONFIGURE_ARGS+= --disable-linux-tproxy
CONFIGURE_ARGS+= --disable-translation
CONFIGURE_ARGS+= --disable-arch-native

CONFIGURE_ARGS+= --with-large-files
CONFIGURE_ARGS+= --disable-strict-error-checking

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
PKGMESSAGE=	${WRKDIR}/pkg-message
USE_RC_SUBR=	squid

SUB_FILES+= pkg-install pkg-deinstall pkg-message

SQUID_LOGDIR=	/var/log/squid
SQUID_SWAPDIR=	/var/cache/squid
SQUID_RUNDIR=	/var/run/squid

SUB_LIST+= SQUID_OWNER=${SQUID_OWNER}
SUB_LIST+= SQUID_GROUP=${SQUID_GROUP}
SUB_LIST+= SQUID_OWNER_ID=${SQUID_OWNER_ID}
SUB_LIST+= SQUID_GROUP_ID=${SQUID_GROUP_ID}

SUB_LIST+= SQUID_LOGDIR="${SQUID_LOGDIR}"
SUB_LIST+= SQUID_SWAPDIR="${SQUID_SWAPDIR}"
SUB_LIST+= SQUID_RUNDIR="${SQUID_RUNDIR}"


post-patch:
	${REINPLACE_CMD} -e 's/install-sbinPROGRAMS install-sysconfDATA/install-sbinPROGRAMS/' \
	    ${WRKSRC}/Makefile.in

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/tools/cachemgr.conf	${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/errors/errorpage.css	${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/src/mime.conf.default	${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/src/squid.conf.default	${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/src/squid.conf.documented	${STAGEDIR}${EXAMPLESDIR}

PORTEXAMPLES=	*

.include <bsd.port.pre.mk>

#.if ${COMPILER_TYPE} == clang
#CXXFLAGS+=	-Wno-unused-private-field
#.if ${COMPILER_VERSION} >= 35
#CXXFLAGS+=	-Wno-undefined-bool-conversion -Wno-tautological-undefined-compare -Wno-dynamic-class-memaccess
#.endif
#.endif


.include <bsd.port.post.mk>
#EOF
