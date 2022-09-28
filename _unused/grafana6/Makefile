# $FreeBSD: head/www/grafana6/Makefile 513980 2019-10-07 17:43:02Z swills $

PORTNAME=	grafana
PORTVERSION=	6.5.2
DISTVERSIONPREFIX=	v
CATEGORIES=	www
MASTER_SITES+=	https://dl.grafana.com/oss/release/:public
PKGNAMESUFFIX=	${PORTVERSION:C/([0-9]).*/\1/1}
DISTFILES=	grafana-${PORTVERSION}.linux-amd64${EXTRACT_SUFX}:public
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	hiyorin@gmail.com
COMMENT=	Dashboard and graph editor for multiple data stores

ONLY_FOR_ARCHS=	amd64 i386

USES=		go:modules
USE_RC_SUBR=	grafana

USE_GITHUB=	yes
TAG=		9504db8


GO_TARGET=	./pkg/cmd/grafana-server \
		./pkg/cmd/grafana-cli
GO_BUILDFLAGS=	-ldflags="-w -X main.version=${PORTVERSION} -X main.commit=${TAG}"

GRAFANA_OWNER=	grafana
GRAFANA_GROUP=	grafana

GRAFANA_OWNER_ID=	904
GRAFANA_GROUP_ID=	904


GRAFANA_HOMEDIR=	${PREFIX}/share/grafana
GRAFANA_DATADIR=	/var/db/${PORTNAME}/
GRAFANA_LOGDIR=		/var/log/${PORTNAME}/
GRAFANA_PIDDIR=		/var/run/${PORTNAME}/
GRAFANA_PLUGINDIR=	/var/db/${PORTNAME}/plugins
GRAFANA_PROVISIONINGDIR=	/var/db/${PORTNAME}/provisioning

SUB_FILES=	grafana grafana.conf pkg-install pkg-deinstall 

SUB_LIST+=	GRAFANA_OWNER=${GRAFANA_OWNER}
SUB_LIST+=	GRAFANA_GROUP=${GRAFANA_GROUP}
SUB_LIST+=	GRAFANA_OWNER_ID=${GRAFANA_OWNER_ID}
SUB_LIST+=	GRAFANA_GROUP_ID=${GRAFANA_GROUP_ID}
SUB_LIST+=	GRAFANA_DATADIR=${GRAFANA_DATADIR}
SUB_LIST+=	GRAFANA_LOGDIR=${GRAFANA_LOGDIR}
SUB_LIST+=	GRAFANA_PIDDIR=${GRAFANA_PIDDIR}
SUB_LIST+=	GRAFANA_HOMEDIR=${GRAFANA_HOMEDIR}
SUB_LIST+=	GRAFANA_PLUGINDIR=${GRAFANA_PLUGINDIR}
SUB_LIST+=	GRAFANA_PROVISIONINGDIR=${GRAFANA_PROVISIONINGDIR}

PLIST_SUB+=	GRAFANA_HOMEDIR=${GRAFANA_HOMEDIR}

post-extract:
	${RM} -r ${WRKSRC}/public
	cd ${WRKDIR} && ${EXTRACT_CMD} ${EXTRACT_BEFORE_ARGS} \
	    ${DISTDIR}/grafana-${PORTVERSION}.linux-amd64${EXTRACT_SUFX} \
	    ${EXTRACT_AFTER_ARGS} grafana-${PORTVERSION}/public

# unbreak vendored golang.org/x/xerrors with go1.13
# can be removed after vendor/golang.org/x/xerrors is updated to a985d3407aa7 or later
#post-patch:
#	${RM} ${WRKSRC}/vendor/golang.org/x/xerrors/adaptor_go1_13.go
#	${RM} ${WRKSRC}/vendor/golang.org/x/xerrors/format_go1_13.go
#	${REINPLACE_CMD} '/build !go1.13/d' ${WRKSRC}/vendor/golang.org/x/xerrors/adaptor_go1_12.go
#	${REINPLACE_CMD} '/build !go1.13/d' ${WRKSRC}/vendor/golang.org/x/xerrors/format_go1_12.go
#	${REINPLACE_CMD} '/build !go1.13/d' ${WRKSRC}/vendor/golang.org/x/xerrors/frame_go1_12.go

post-install:
	cd ${WRKSRC} && \
		${COPYTREE_SHARE} public ${STAGEDIR}${PREFIX}/share/grafana
	${MKDIR} ${STAGEDIR}${GRAFANA_PIDDIR}
	${MKDIR} ${STAGEDIR}${GRAFANA_LOGDIR}
	${MKDIR} ${STAGEDIR}${GRAFANA_HOMEDIR}
	${MKDIR} ${STAGEDIR}${GRAFANA_DATADIR}
	${MKDIR} ${STAGEDIR}${GRAFANA_PLUGINDIR}
	${MKDIR} ${STAGEDIR}${GRAFANA_PROVISIONINGDIR}
	${MKDIR} ${STAGEDIR}${GRAFANA_HOMEDIR}/conf
	${MKDIR} ${STAGEDIR}${GRAFANA_HOMEDIR}/data
	${MKDIR} ${STAGEDIR}${GRAFANA_HOMEDIR}/data/log
	${INSTALL_DATA} ${WRKSRC}/conf/defaults.ini \
		${STAGEDIR}${GRAFANA_HOMEDIR}/conf/defaults.ini
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKDIR}/grafana.conf ${STAGEDIR}${EXAMPLESDIR}/grafana.conf.sample

.include <bsd.port.mk>
