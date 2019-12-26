#
# $Id$
#
PORTNAME=	puppet
PORTVERSION=	4.10.9
CATEGORIES=	sysutils
MASTER_SITES=	http://downloads.puppetlabs.com/puppet/
#PKGNAMESUFFIX=	4

MAINTAINER=	freebsd@zleslie.info
COMMENT=	Configuration management framework written in Ruby

BUILD_DEPENDS+=	rubygem-hiera>=2.0:ruby/rubygem-hiera
BUILD_DEPENDS+=	rubygem-json_pure>=0:ruby/rubygem-json_pure

RUN_DEPENDS+=	rubygem-hiera>=2.0:ruby/rubygem-hiera
RUN_DEPENDS+=	rubygem-json_pure>=0:ruby/rubygem-json_pure
RUN_DEPENDS+=	rubygem-ruby-augeas>=0:ruby/rubygem-ruby-augeas

CONFLICTS_INSTALL=	puppet38-* puppet37-*

NO_ARCH=	yes
NO_BUILD=	yes
USE_RUBY=	yes

USE_RC_SUBR=	puppet puppetmaster

PORTEXAMPLES=	*

OWNER=		puppet
GROUP=		puppet

OWNER_ID=	814
GROUP_ID=	814

SUB_FILES+=	pkg-message pkg-install
PKGDEINSTALL=	${WRKDIR}/pkg-install


SUB_LIST+=	RUBY=${LOCALBASE}/bin/ruby
SUB_LIST+=	OWNER=${OWNER}
SUB_LIST+=	GROUP=${GROUP}

SUB_LIST+=	OWNER_ID=${OWNER_ID}
SUB_LIST+=	GROUP_ID=${GROUP_ID}

SUB_LIST+=	ETCDIR=${PREFIX}/etc/${PORTNAME}
SUB_LIST+=	RUNDIR=/var/run/${PORTNAME}
SUB_LIST+=	LOGDIR=/var/log/${PORTNAME}
SUB_LIST+=	VARDIR=/var/${PORTNAME}

SUB_LIST+=	NAME=${PORTNAME}


BUILD_DEPENDS+=	rubygem-facter>=2.0:ruby/rubygem-facter
RUN_DEPENDS+=	rubygem-facter>=2.0:ruby/rubygem-facter

#CFACTER_BUILD_DEPENDS=	facter>=3.0:sysutils/facter
#CFACTER_RUN_DEPENDS=	facter>=3.0:sysutils/facter

post-patch:
	${REINPLACE_CMD} -e "s|/etc/puppetlabs/puppet|${ETCDIR}|" \
		${WRKSRC}/install.rb \
		${WRKSRC}/lib/puppet/reference/configuration.rb \
		${WRKSRC}/lib/puppet/util/run_mode.rb
	${REINPLACE_CMD} -e "s|/etc/puppetlabs/code|${ETCDIR}|" \
		${WRKSRC}/install.rb \
		${WRKSRC}/lib/puppet/reference/configuration.rb \
		${WRKSRC}/lib/puppet/util/run_mode.rb
	${REINPLACE_CMD} -e "s|/opt/puppetlabs/puppet/cache|/var/puppet|" \
		${WRKSRC}/install.rb \
		${WRKSRC}/lib/puppet/reference/configuration.rb \
		${WRKSRC}/lib/puppet/util/run_mode.rb
	${REINPLACE_CMD} -e "s|/var/run/puppetlabs|/var/run/puppet|" \
		${WRKSRC}/install.rb \
		${WRKSRC}/lib/puppet/util/run_mode.rb
	${REINPLACE_CMD} -e "s|/var/log/puppetlabs/puppet|/var/log/puppet|" \
		${WRKSRC}/install.rb \
		${WRKSRC}/lib/puppet/util/run_mode.rb
	${REINPLACE_CMD} -e "s|/opt/puppetlabs/puppet/modules|${ETCDIR}/modules|" \
		${WRKSRC}/lib/puppet/defaults.rb
	${REINPLACE_CMD} -e "s|/opt/puppetlabs/puppet/bin/gem|${LOCALBASE}/bin/gem|" \
		${WRKSRC}/lib/puppet/provider/package/puppet_gem.rb
	${REINPLACE_CMD} -e "s|\$$confdir/ssl|/var/puppet/ssl|" \
		${WRKSRC}/lib/puppet/defaults.rb
	${REINPLACE_CMD} -e "s|%%PREFIX%%|${PREFIX}|" \
		${WRKSRC}/ext/rack/config.ru

do-install:
	cd ${WRKSRC} && ${SETENV} PREFIX=${PREFIX} ${RUBY} ${WRKSRC}/install.rb --no-configs --destdir=${STAGEDIR}

post-install:
	${MKDIR} ${STAGEDIR}${ETCDIR}/manifests
	${MKDIR} ${STAGEDIR}${ETCDIR}/modules
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${MKDIR} ${STAGEDIR}/var/puppet
	${INSTALL_DATA} ${WRKSRC}/conf/auth.conf ${STAGEDIR}${EXAMPLESDIR}/auth.conf.sample
	${RUBY} -I ${STAGEDIR}/${RUBY_SITELIBDIR} ${STAGEDIR}${PREFIX}/bin/puppet agent --genconfig \
		--confdir=${ETCDIR} \
		--rundir=/var/run/puppet \
		--vardir=/var/puppet \
		--logdir=/var/log/puppet \
		--codedir=${ETCDIR} \
		> ${STAGEDIR}${EXAMPLESDIR}/puppet.conf.sample
	${ECHO} ${STAGEDIR}${RUBY_SITELIBDIR}/puppet.rb | \
		${SED} 's,^${STAGEDIR}${PREFIX}/,,' >> ${TMPPLIST}
	${ECHO} ${STAGEDIR}${RUBY_SITELIBDIR}/semver.rb | \
		${SED} 's,^${STAGEDIR}${PREFIX}/,,' >> ${TMPPLIST}
	${FIND} ${STAGEDIR}${RUBY_SITELIBDIR}/${PORTNAME} -type f | \
		${SED} 's,^${STAGEDIR}${PREFIX}/,,' >> ${TMPPLIST}
	${MKDIR} ${STAGEDIR}${WWWDIR}
	${INSTALL_DATA} ${WRKSRC}/ext/rack/config.ru ${STAGEDIR}${WWWDIR}

	cd ${WRKSRC}/examples/ && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/ext/rack/example-passenger-vhost.conf ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
#EOF
