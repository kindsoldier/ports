# Created by: Denis Shaposhnikov <dsh@vlink.ru>
# $FreeBSD:perl/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Params-Validate
PORTVERSION=	1.23
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Validate method/function parameters


BUILD_DEPENDS=	p5-Module-Implementation>=0.04:perl/p5-Module-Implementation
RUN_DEPENDS=	p5-Module-Implementation>=0.04:perl/p5-Module-Implementation

USES=		perl5
USE_PERL5=	modbuild

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Params/Validate/XS/XS.so

.include <bsd.port.mk>
