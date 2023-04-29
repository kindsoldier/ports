PORTNAME=	gitea
DISTVERSIONPREFIX=	v
DISTVERSION=	1.19.2
CATEGORIES=	www
MASTER_SITES+=	https://github.com/go-gitea/gitea/releases/download/${DISTVERSIONPREFIX}${DISTVERSION}/
MASTER_SITES+=	https://dl.gitea.io/gitea/${DISTVERSION}/
DISTNAME=	gitea-src-${DISTVERSION}

MAINTAINER=	stb@lassitu.de
COMMENT=	Compact self-hosted Git service
WWW=		https://gitea.io/en-US/

RUN_DEPENDS=	git:devel/git

USES=		gmake go:no_targets

EXTRACT_AFTER_ARGS=	--strip-components 1 # since 1.17.0, archive includes gitea-src-VERSION directory
SUB_FILES+=	app.ini.sample
SUB_LIST+=	GITUSER=${USERS}

NO_WRKSUBDIR=	yes

GO_TAGS+=bindata
GO_TAGS+=sqlite sqlite_unlock_notify

.include <bsd.port.options.mk>

SSP_UNSAFE=	true
MAKE_ENV=	LDFLAGS="${LDFLAGS} ${EXTRA_LDFLAGS}"
MAKE_ARGS=	GOPATH=${WRKDIR} TAGS="${GO_TAGS}"
ALL_TARGET=	backend
MAKE_JOBS_UNSAFE=	yes


PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
PKGMESSAGE=	${WRKDIR}/pkg-message
USE_RC_SUBR=	gitea

SUB_FILES+= pkg-install pkg-deinstall

GITEA_OWNER=	gitea
GITEA_GROUP=	gitea
GITEA_OWNER_ID=	197
GITEA_GROUP_ID=	197


GITEA_LOGDIR=	/var/log/gitea
GITEA_DBDIR=	/var/db/gitea
GITEA_RUNDIR=	/var/run/gitea

SUB_LIST+= GITEA_OWNER=${GITEA_OWNER}
SUB_LIST+= GITEA_GROUP=${GITEA_GROUP}
SUB_LIST+= GITEA_OWNER_ID=${GITEA_OWNER_ID}
SUB_LIST+= GITEA_GROUP_ID=${GITEA_GROUP_ID}

SUB_LIST+= GITEA_LOGDIR="${GITEA_LOGDIR}"
SUB_LIST+= GITEA_DBDIR="${GITEA_DBDIR}"
SUB_LIST+= GITEA_RUNDIR="${GITEA_RUNDIR}"


post-patch:
	${ECHO_CMD} ${DISTVERSION} >${WRKSRC}/VERSION

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/gitea ${STAGEDIR}${PREFIX}/sbin
	${MKDIR} ${STAGEDIR}${ETCDIR}/conf
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKDIR}/app.ini.sample ${STAGEDIR}${EXAMPLESDIR}/app.ini.sample

#do-install:
#	cd ${WRKSRC} && ${COPYTREE_SHARE} "options public templates" ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
