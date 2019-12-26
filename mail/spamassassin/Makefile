#
# $Id$
#
PORTNAME=	spamassassin
PORTVERSION=	3.4.2
CATEGORIES=	mail perl5
MASTER_SITES=	APACHE/spamassassin/source CPAN/Mail
DISTNAME=	Mail-SpamAssassin-${PORTVERSION}

MAINTAINER=	adamw@FreeBSD.org
COMMENT=	Highly efficient mail filter for identifying spam

_DEPENDS+=	p5-Encode-Detect>=0:perl/p5-Encode-Detect
_DEPENDS+=	p5-HTML-Parser>=3.46:perl/p5-HTML-Parser
_DEPENDS+=	p5-HTTP-Date>=0:perl/p5-HTTP-Date
_DEPENDS+=	p5-IO-Socket-IP>=0:perl/p5-IO-Socket-IP
_DEPENDS+=	p5-Net-DNS>=0.63:perl/p5-Net-DNS
_DEPENDS+=	p5-NetAddr-IP>=4.010:perl/p5-NetAddr-IP

_DEPENDS+=	p5-DBD-Pg>=0:perl/p5-DBD-Pg
#_DEPENDS+=	p5-DBD-mysql>=0:perl/p5-DBD-mysql
_DEPENDS+=	p5-Crypt-OpenSSL-RSA>=0.26_1:perl/p5-Crypt-OpenSSL-RSA
_DEPENDS+=	p5-IO-Socket-SSL>=0:perl/p5-IO-Socket-SSL
_DEPENDS+=	p5-Mail-DKIM>=0.37:perl/p5-Mail-DKIM
_DEPENDS+=	p5-Mail-SPF>=0:perl/p5-Mail-SPF

_DEPENDS+=	p5-Geo-IP>=0:perl/p5-Geo-IP
_DEPENDS+=	p5-Net-CIDR-Lite>=0:perl/p5-Net-CIDR-Lite
_DEPENDS+=	p5-Net-Patricia>=0:perl/p5-Net-Patricia

_DEPENDS+=	re2c>=.12.0:devel/re2c
_DEPENDS+=	gpg:crypto/gnupg
_DEPENDS+=	gpg2:crypto/gnupg2

BUILD_DEPENDS+= ${_DEPENDS}
RUN_DEPENDS+= ${_DEPENDS}


USES=		perl5
USE_PERL5=	configure
USE_LDCONFIG=	yes

SA_DATADIR=	${PREFIX}/share/spamassassin
SA_DBDIR=	/var/db/spamassassin
SA_SPOOLDIR=	/var/spool/spamd
SA_RUNDIR=	/var/run/spamd
SA_CONFDIR=	${PREFIX}/etc/spamassassin
SA_CONTACT_ADDRESS=	The administrator of that system

SA_OWNER=		spamd
SA_GROUP=		spamd
SA_OWNERID=		58
SA_GROUPID=		58

PKGINSTALL=	${WRKDIR}/pkg-install

SUB_FILES+=	pkg-install
SUB_FILES+=	pkg-message

SUB_LIST+=	SA_OWNER=${SA_OWNER}
SUB_LIST+=	SA_GROUP=${SA_GROUP}
SUB_LIST+=	SA_OWNERID=${SA_OWNERID}
SUB_LIST+=	SA_GROUPID=${SA_GROUPID}

SUB_LIST+=	SA_DBDIR=${SA_DBDIR}
SUB_LIST+=	SA_CONFDIR=${SA_CONFDIR}
SUB_LIST+=	SA_RUNDIR=${SA_RUNDIR}
SUB_LIST+=	SA_SPOOLDIR=${SA_SPOOLDIR}

SUB_LIST+=	SPAMD_OWN="${SA_OWNER}:${SA_GROUP}"
#SUB_LIST+=	SQL_FLAG="-Q"
SUB_LIST+=	SQL_FLAG=""	#
SUB_LIST+=	RUN_AS_USER="-u ${SA_OWNER} -H ${SA_SPOOLDIR}"


CONFIGURE_ARGS+=	SYSCONFDIR="${PREFIX}/etc"
CONFIGURE_ARGS+=	CONTACT_ADDRESS="${SA_CONTACT_ADDRESS}"
CONFIGURE_ARGS+=	LOCALSTATEDIR="${SA_DBDIR}"
CONFIGURE_ARGS+=	BUILD_SPAMC=yes
CONFIGURE_ARGS+=	ENABLE_SSL=yes

USE_RC_SUBR=	sa-spamd

ALL_TARGET=	all spamc/libspamc.so spamc/libsslspamc.so

post-patch:
	${REINPLACE_CMD} -e 's,B_CONFDIR)/local.cf,B_CONFDIR)/local.cf.sample,g' \
		-e 's,B_CONFDIR)/init.pre,B_CONFDIR)/init.pre.sample,g' \
		-e 's,B_CONFDIR)/v310.pre,B_CONFDIR)/v310.pre.sample,g' \
		-e 's,B_CONFDIR)/v312.pre,B_CONFDIR)/v312.pre.sample,g' \
		-e 's,B_CONFDIR)/v320.pre,B_CONFDIR)/v320.pre.sample,g' \
		-e 's,B_CONFDIR)/v330.pre,B_CONFDIR)/v330.pre.sample,g' \
		-e 's,B_CONFDIR)/v340.pre,B_CONFDIR)/v340.pre.sample,g' \
		-e 's,B_CONFDIR)/v341.pre,B_CONFDIR)/v341.pre.sample,g' \
		-e 's/require DBI/0/' \
		    ${WRKSRC}/Makefile.PL
	${REINPLACE_CMD} -e '/^CC =/d; \
		s|@SSLCFLAGS@|& $${CFLAGS}|g' ${WRKSRC}/spamc/Makefile.in

#.for var in ${OPTIONS_GROUP_PLUGINS} UPDATE_AND_COMPILE
#.  if ${PORT_OPTIONS:M${var}}
#	${REINPLACE_CMD} -e '/${${var}_INITVAR}/s/^\#.*loadplugin/loadplugin/' ${WRKSRC}/rules/*.pre
#.  else
#	${REINPLACE_CMD} -e '/${${var}_INITVAR}/s/^loadplugin/\# loadplugin/' ${WRKSRC}/rules/*.pre
#.  endif
#.endfor
	${FIND} ${WRKSRC} -name '*.orig' -or -name '*.bak' -delete

PORTDOCS=   *

pre-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_LIB} ${WRKSRC}/spamc/libspamc.so ${STAGEDIR}${PREFIX}/lib/libspamc.so.0
	${LN} -sf libspamc.so.0 ${STAGEDIR}${PREFIX}/lib/libspamc.so
	${INSTALL_LIB} ${WRKSRC}/spamc/libsslspamc.so ${STAGEDIR}${PREFIX}/lib/libsslspamc.so.0
	${LN} -sf libsslspamc.so.0 ${STAGEDIR}${PREFIX}/lib/libsslspamc.so
	${INSTALL_DATA} ${WRKSRC}/spamc/libspamc.h ${STAGEDIR}${PREFIX}/include

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/spamc
	${MKDIR} ${STAGEDIR}/var/lib/spamassassin ${STAGEDIR}${DBDIR}/spamassassin ${STAGEDIR}/var/run/spamd
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} sql ${STAGEDIR}${DOCSDIR}


.include <bsd.port.mk>
#EOF

