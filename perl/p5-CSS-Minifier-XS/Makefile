#
# $Id$
#
PORTNAME=	CSS-Minifier-XS
PORTVERSION=	0.09
CATEGORIES=	textproc www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	XS based CSS minifier

USE_PERL5=	configure
USES=		perl5

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/CSS/Minifier/XS/XS.so

.include <bsd.port.mk>
#EOF
