# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/npm/Makefile 454516 2017-11-20 04:30:31Z sunpoet $

PORTNAME=	npm
PORTVERSION=	9.5.0
CATEGORIES=	www
MASTER_SITES=	LOCAL/sunpoet

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Node package manager

RUN_DEPENDS=	gmake:devel/gmake
RUN_DEPENDS+=	node>=8:lang/node16

NO_ARCH=	yes
NO_BUILD=	yes
REINPLACE_ARGS=	-i ''
USES=		python:3.7+,run shebangfix tar:xz
#SHEBANG_GLOB=	*.py
#SHEBANG_FILES=	lib/node_modules/npm/node_modules/node-gyp/gyp/samples/samples

REINPLACE_ARGS=	-i ''

.include <bsd.port.pre.mk>

#.if ${ARCH} == "i386"
## Workaround for kernel bug 178881
#EXTRA_PATCHES+=	${PATCHDIR}/extra-patch-bug-178881
#.endif

post-patch:
#	${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|' ${WRKSRC}/etc/man.d/npm.conf
#	${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|' ${WRKSRC}/lib/node_modules/npm/node_modules/node-gyp/gyp/gyp
#	${FIND} ${WRKSRC}/ -name '*.sh' -exec ${REINPLACE_CMD} -e '1 s|/usr/local|${LOCALBASE}|' {} +

	${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|' ${WRKSRC}/etc/man.d/npm.conf
	${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|' ${WRKSRC}/lib/node_modules/npm/node_modules/node-gyp/gyp/gyp
	${REINPLACE_CMD} -e 's|exec python |exec ${PYTHON_CMD} |' ${WRKSRC}/lib/node_modules/npm/node_modules/node-gyp/gyp/gyp
	${FIND} ${WRKSRC}/ -name '*.sh' -exec ${REINPLACE_CMD} -e '1 s|/usr/local|${LOCALBASE}|' {} +


do-install:
	cd ${WRKSRC}/ && ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/

post-install:
	${CHMOD} a+x ${STAGEDIR}${PREFIX}/lib/node_modules/npm/bin/*

.include <bsd.port.post.mk>
#EOF
