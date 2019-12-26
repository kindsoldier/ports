#
# $Id$
#
PORTNAME=	libyaml
PORTVERSION=	0.1.6
CATEGORIES=	textproc
MASTER_SITES=	http://pyyaml.org/download/libyaml/
DISTNAME=	yaml-${PORTVERSION}
DIST_SUBDIR=	repacked

MAINTAINER=	jpaetzel@FreeBSD.org
COMMENT=	YAML 1.1 parser and emitter written in C

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		gmake
USE_LDCONFIG=	yes


FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/Makefile.in


post-patch:
	${REINPLACE_CMD} -e 's,yaml-0.1.pc,yaml.pc,g' ${FILES}
	cd ${WRKSRC} && ${CP} yaml-0.1.pc.in yaml.pc.in

.include <bsd.port.mk>
#EOF
