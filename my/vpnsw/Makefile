#
# $Id$
#
PORTNAME=	vpnsw
PORTVERSION=	0.06
CATEGORIES=	security www perl5
MASTER_SITES=	http://wiki.unix7.org/_media/dist/

MAINTAINER=	borodin@unix7.org
COMMENT=	OpenVPN web console

USE_GITHUB=     yes
GH_ACCOUNT=     onborodin
GH_PROJECT=     ${PORTNAME}

RUN_DEPENDS+= p5-Mojolicious>=0:perl/p5-Mojolicious
RUN_DEPENDS+= p5-Apache-Htpasswd>=0:perl/p5-Apache-Htpasswd
#RUN_DEPENDS+= p5-DBI>=0:perl/p5-DBI
#RUN_DEPENDS+= p5-DBD-SQLite>=0:perl/p5-DBD-SQLite
#RUN_DEPENDS+= p5-DBD-Pg>=0:perl/p5-DBD-Pg
BUILD_DEPENDS+=	${RUN_DEPENDS}

APP_LOGDIR=	/var/log/${PORTNAME}
APP_RUNDIR=	/var/run/${PORTNAME}
APP_DBDIR=	/var/db/${PORTNAME}

APP_OWNER=	root
APP_GROUP=	wheel
APP_OWNER_ID=	0
APP_GROUP_ID=	0

USES=		perl5 gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --with-logfile=${APP_LOGDIR}/${PORTNAME}.log
CONFIGURE_ARGS+= --with-pidfile=${APP_RUNDIR}/${PORTNAME}.pid
CONFIGURE_ARGS+= --with-user=${APP_OWNER}
CONFIGURE_ARGS+= --with-group=${APP_GROUP}

SUB_FILES+= 	pkg-install

SUB_LIST+=	APP_LOGDIR=${APP_LOGDIR}
SUB_LIST+=	APP_RUNDIR=${APP_RUNDIR}
SUB_LIST+=	APP_DBDIR=${APP_DBDIR}

SUB_LIST+=	APP_OWNER=${APP_OWNER}
SUB_LIST+=	APP_GROUP=${APP_GROUP}
SUB_LIST+=	APP_OWNER_ID=${APP_OWNER_ID}
SUB_LIST+=	APP_GROUP_ID=${APP_GROUP_ID}

PORTEXAMPLES=	*

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/*.example* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
#EOF
