# $FreeBSD: head/www/yarn/Makefile 478946 2018-09-04 09:56:04Z pizzamig $

PORTNAME=	yarn
DISTVERSIONPREFIX=	v
DISTVERSION=	1.22.19
CATEGORIES=	www
MASTER_SITES=	https://yarnpkg.com/downloads/${PORTVERSION}/

MAINTAINER=	pizzamig@FreeBSD.org
COMMENT=	Package manager for node, alternative to npm

RUN_DEPENDS=	node>=10.0:lang/node18

NO_ARCH=	yes
NO_BUILD=	yes

RLN?=  ${INSTALL} -l rs

post-patch:
	${RM} ${WRKSRC}/bin/*.cmd
	${REINPLACE_CMD} -i '' \
		-e 's|"installationMethod": "tar"|"installationMethod": "pkg"|g' \
		${WRKSRC}/package.json
	${REINPLACE_CMD} -i '' -e 's%Linux)%Linux|FreeBSD)%g' \
		${WRKSRC}/bin/yarn

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/node_modules/yarn
	cd ${WRKSRC}/ && ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/lib/node_modules/yarn
	${RLN} ${STAGEDIR}${PREFIX}/lib/node_modules/yarn/bin/yarn.js \
		${STAGEDIR}${PREFIX}/bin/yarn
	${RLN} ${STAGEDIR}${PREFIX}/lib/node_modules/yarn/bin/yarnpkg \
		${STAGEDIR}${PREFIX}/bin/yarnpkg

	${CHMOD} a+x ${STAGEDIR}${PREFIX}/lib/node_modules/yarn/bin/*

.include <bsd.port.mk>
