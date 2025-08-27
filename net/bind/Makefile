#
# $Id$
#
PORTNAME=	bind
ISCVERSION=	9.14.4
PORTVERSION=	${ISCVERSION:S/-P/./}
CATEGORIES=	dns net
MASTER_SITES=	${MASTER_SITE_ISC}
MASTER_SITE_SUBDIR=	bind9/${ISCVERSION}
DISTNAME=	bind-${ISCVERSION}

MAINTAINER=	onborodin@gmail.com
COMMENT=	BIND DNS suite with updated DNSSEC and DNS64

GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --includedir=${PREFIX}/include/bind
CONFIGURE_ARGS+= --sysconfdir=${BIND_SYSCONFDIR}
CONFIGURE_ARGS+= --localstatedir=/var
CONFIGURE_ARGS+= --disable-linux-caps
CONFIGURE_ARGS+= --disable-symtable
CONFIGURE_ARGS+= --with-openssl=/usr
CONFIGURE_ARGS+= --without-libxml2
CONFIGURE_ARGS+= --without-python

CONFIGURE_ARGS+= --with-libidn2=${LOCALBASE}

LIB_DEPENDS+= libidn2.so:net/libidn2

BIND_OWNER=	bind
BIND_OWNERID=	53
BIND_GROUP=	bind
BIND_GROUPID=	53

BIND_RUNDIR=	/var/run/named
#BIND_CHROOTDIR=	/var/named
BIND_SYSCONFDIR=	${PREFIX}/etc/named

SUB_LIST+= BIND_PREFIX=${PREFIX}
SUB_LIST+= BIND_OWNER=${BIND_OWNER}
SUB_LIST+= BIND_GROUP=${BIND_GROUP}
SUB_LIST+= BIND_OWNERID=${BIND_OWNERID}
SUB_LIST+= BIND_GROUPID=${BIND_GROUPID}
SUB_LIST+= BIND_RUNDIR=${BIND_RUNDIR}
SUB_LIST+= BIND_CHROOTDIR=${BIND_CHROOTDIR}
SUB_LIST+= BIND_SYSCONFDIR=${BIND_SYSCONFDIR}

USE_RC_SUBR+= bind.sh

SUB_FILES+= pkg-deinstall pkg-install named.conf

PORTEXAMPLES= *

post-patch:
.for FILE in check/named-checkconf.8 named/named.8 nsupdate/nsupdate.1 \
	rndc/rndc.8
	${REINPLACE_CMD} -e 's#/etc/named.conf#${BIND_SYSCONFDIR}/named.conf#g' \
		-e 's#/etc/rndc.conf#${BIND_SYSCONFDIR}/rndc.conf#g' \
		-e "s#/var\/run\/named\/named.pid#/var/run/named/pid#" \
		${WRKSRC}/bin/${FILE}
.endfor


post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKDIR}/named.conf ${STAGEDIR}${EXAMPLESDIR}/named.conf.sample
	${INSTALL_DATA} ${FILESDIR}/named.root ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${FILESDIR}/empty.db ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${FILESDIR}/localhost-forward.db ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${FILESDIR}/localhost-reverse.db ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/bin/rndc/rndc.conf \
		${STAGEDIR}${EXAMPLESDIR}/rndc.conf.sample

.include <bsd.port.mk>
#EOF
