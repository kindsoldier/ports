PORTNAME=	tea
DISTVERSIONPREFIX=	v
DISTVERSION=	0.9.2
CATEGORIES=	www
MASTER_SITES=	https://gitea.com/gitea/tea/archive/
DISTNAME=	${DISTVERSIONPREFIX}${DISTVERSION}

MAINTAINER=	stb@lassitu.de
COMMENT=	Compact self-hosted Git service
WWW=		https://gitea.io/en-US/

USES=		gmake go:no_targets

.include <bsd.port.options.mk>

MAKE_ENV=	LDFLAGS="${LDFLAGS} ${EXTRA_LDFLAGS}"
MAKE_ARGS=	GOPATH=${WRKDIR} TAGS="${GO_TAGS}"
MAKE_JOBS_UNSAFE=	yes

WRKSRC= ${WRKDIR}/${PORTNAME}-${DISTVERSION}/${PORTNAME}

post-patch:
	cd ${WRKSRC} && ${GO_CMD} mod vendor

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/tea ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
