# Created by: mat
# $FreeBSD:perl/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	DateTime-TimeZone
PORTVERSION=	1.97
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Time zone object base class and factory


BUILD_DEPENDS+=	p5-Class-Singleton>=1.03:perl/p5-Class-Singleton
BUILD_DEPENDS+=	p5-List-AllUtils>0:perl/p5-List-AllUtils
BUILD_DEPENDS+=	p5-Module-Runtime>=0:perl/p5-Module-Runtime
BUILD_DEPENDS+=	p5-Params-Validate>=0.72:perl/p5-Params-Validate
BUILD_DEPENDS+=	p5-Try-Tiny>=0:perl/p5-Try-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
