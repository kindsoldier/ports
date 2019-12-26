# Created by: Lung Sung <clsung@FreeBSD.org>
# $FreeBSD:perl/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	JSON-XS
PORTVERSION=	3.02
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	JSON serialising/deserialising, done correctly and fast

BUILD_DEPENDS+=	p5-Types-Serialiser>=0:perl/p5-Types-Serialiser
BUILD_DEPENDS+=	p5-common-sense>0:perl/p5-common-sense
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

post-patch:
# This dependency does nothing and is safe to remove
	${REINPLACE_CMD} -e '/use Canary::Stability/d' ${WRKSRC}/Makefile.PL

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/JSON/XS/XS.so

.include <bsd.port.mk>
#EOF
