#
# $Id$
#
PORTNAME=	pgpool-II
DISTNAME=	pgpool-II-${PORTVERSION}
PORTVERSION=	3.3.7
CATEGORIES=	databases
MASTER_SITES=	http://www.pgpool.net/mediawiki/images/

MAINTAINER=	michelle@sorbs.net
COMMENT=	Connection pool server for PostgreSQL

RUN_DEPENDS=	rsync:system/rsync
LIB_DEPENDS=	libpq.so:data/postgresql

USES=		gmake perl5
USE_PERL5=	run
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
MAKE_ENV=	INSTALL_STRIP_FLAG=${STRIP}

USE_RC_SUBR=	pgpool

# Buggy configure: adding eg. --without-pam to CONFIGURE_ARGS causes
# USE_PAM to be *defined* in config.h Omit the --with-pam or
# --without-pam flags entirely to leave PAM turned off.  Similarly for
# --with-memcached.

#CONFIGURE_ON=	--with-memcached=${LOCALBASE}/lib/libmemcached
#CONFIGURE_ON=	--with-pam

PORTEXAMPLES=	*

post-install:
	${MKDIR} ${STAGEDIR}${DATADIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/pgpool.conf.sample ${STAGEDIR}${EXAMPLESDIR}
.for f in pgpool_recovery pgpool_recovery_pitr pgpool_remote_start
	${INSTALL_SCRIPT} ${WRKSRC}/sample/${f} ${STAGEDIR}${EXAMPLESDIR}
.endfor

.include <bsd.port.mk>
#EOF

