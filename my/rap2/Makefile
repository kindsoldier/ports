#
# $Id$
#
PORTNAME=	rap2
PORTVERSION=	0.1.21
CATEGORIES=	net www

MAINTAINER=	borodin@unix7.org
COMMENT=	Asterisk WAV downloader

RUN_DEPENDS=	rubygem-rails>=6.0:rails6/rubygem-rails \
		rubygem-route_translator>=7.0:rails6/rubygem-route_translator \
		rubygem-webpacker>=0:rails6/rubygem-webpacker \
		rubygem-bcrypt>=0:ruby/rubygem-bcrypt \
		rubygem-sqlite3>=1.3.6:ruby/rubygem-sqlite3 \
		rubygem-pg>=0:ruby/rubygem-pg \
		rubygem-pagy>=0:ruby/rubygem-pagy \
		rubygem-execjs>=2.7:ruby/rubygem-execjs \
		rubygem-uglifier>=4.2:ruby/rubygem-uglifier


USE_GITHUB=     yes
GH_ACCOUNT=     onborodin
GH_PROJECT=     ${PORTNAME}

APP_LOGDIR=	/var/log/${PORTNAME}
APP_RUNDIR=	/var/run/${PORTNAME}
APP_DBDIR=	/var/db/${PORTNAME}
APP_CACHEDIR=	/var/cache/${PORTNAME}

APP_OWNER=	rap2
APP_GROUP=	rap2
APP_OWNER_ID=	678
APP_GROUP_ID=	678

USES=		gmake
GNU_CONFIGURE=	yes
MAKE_JOBS_UNSAFE=yes

SUB_FILES+= 	pkg-install

SUB_LIST+=	APP_LOGDIR=${APP_LOGDIR}
SUB_LIST+=	APP_RUNDIR=${APP_RUNDIR}
SUB_LIST+=	APP_DBDIR=${APP_DBDIR}
SUB_LIST+=	APP_CACHEDIR=${APP_CACHEDIR}

SUB_LIST+=	APP_OWNER=${APP_OWNER}
SUB_LIST+=	APP_GROUP=${APP_GROUP}
SUB_LIST+=	APP_OWNER_ID=${APP_OWNER_ID}
SUB_LIST+=	APP_GROUP_ID=${APP_GROUP_ID}

SUB_LIST+=	RUBY=${LOCALBASE}/bin/ruby

SUB_LIST+=	APP_NAME=${PORTNAME}

USE_RC_SUBR= 	rap2


do-buils:
	cd ${WRKSRC} && ${GMAKE} all

post-install:
	${FIND} -ds ${STAGEDIR}${PREFIX}/lib/ -name '*.in' -delete
	${FIND} -ds ${STAGEDIR}${PREFIX}/lib/${PORTNAME} -type f | \
	     ${SED} 's,^${STAGEDIR}${PREFIX}/,,' >> ${TMPPLIST}
	${FIND} -ds ${STAGEDIR}${PREFIX}/lib/${PORTNAME} -type d | \
	    ${SED} 's,^${STAGEDIR}${PREFIX}/,@dir ,' >> ${TMPPLIST}

.include <bsd.port.mk>
#EOF
