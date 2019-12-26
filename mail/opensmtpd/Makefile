#
# $Id$
#
PORTNAME=	opensmtpd
PORTVERSION=	5.9.2p1
CATEGORIES=	mail
#MASTER_SITES+=	http://www.opensmtpd.org/archives/
MASTER_SITES+=	http://distfiles.pirateparty.in/ashish/
MASTER_SITES+=	http://www.opensmtpd.org/archives/
MASTER_SITES+=	http://distfiles.pirateparty.in/ashish/


MAINTAINER=	fluffy@FreeBSD.org
COMMENT=	Security- and simplicity-focused SMTP server from OpenBSD

LIB_DEPENDS+=	libevent.so:devel/libevent
LIB_DEPENDS+=	libasr.so:net/libasr

USES=		gmake
GNU_CONFIGURE=	yes

USE_RC_SUBR=	smtpd
SUB_FILES=	pkg-install pkg-deinstall

CONFLICTS_INSTALL=	postfix-[0-9]* sendmail-[0-9]* opensmtpd-devel-[0-9]*

OWNER=	smtpd
GROUP=	smtpd
OWNER_ID=	257
GROUP_ID=	257

SPOOLDIR=/var/spool/smtpd

CONFIGURE_ARGS+= --with-auth-pam=smtpd --without-openssl-header-check
CONFIGURE_ARGS+= --with-table-db
CONFIGURE_ARGS+= --with-user-queue=smtpd
CONFIGURE_ARGS+= --with-user-smtpd=smtpd
CONFIGURE_ARGS+= --with-group-queue=smtpd

CONFIGURE_ARGS+= --with-libasr=${LOCALBASE}
CONFIGURE_ARGS+= --with-libevent=${LOCALBASE}
CONFIGURE_ARGS+= --with-libssl=/usr
CONFIGURE_ARGS+= --sysconfdir=${PREFIX}/etc/smtpd
CONFIGURE_ARGS+= --with-path-queue=${SPOOLDIR}
CONFIGURE_ARGS+= --without-openssl-header-check

#CONFIGURE_ARGS+= --with-table-sqlite
#CONFIGURE_ARGS+= --with-table-passwd
#CONFIGURE_ARGS+= --with-table-postgres
#CONFIGURE_ARGS+= --with-table-passwd
#CONFIGURE_ARGS+=	--with-experimental-filter-dkim-signer


SUB_LIST+=	OWNER=${OWNER}
SUB_LIST+=	GROUP=${GROUP}
SUB_LIST+=	OWNER_ID=${OWNER_ID}
SUB_LIST+=	GROUP_ID=${GROUP_ID}

SUB_LIST+=	SPOOLDIR=${SPOOLDIR}


CONFIGURE_ARGS+= --with-path-CAfile=${LOCALBASE}/etc/ca-bundle.crt

post-patch:
	${REINPLACE_CMD} -e '/chmod 2555/d' ${WRKSRC}/mk/smtpctl/Makefile.in

post-install:
	${LN} -sf ${PREFIX}/sbin/smtpctl ${STAGEDIR}${PREFIX}/libexec/opensmtpd/makemap

.include <bsd.port.mk>
#EOF
