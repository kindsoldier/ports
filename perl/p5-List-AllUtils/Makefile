# $FreeBSD:perl/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	List-AllUtils
PORTVERSION=	0.09
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Combines List::Util and List::MoreUtils in one bite-sized package


BUILD_DEPENDS=	p5-List-MoreUtils>=0.28:perl/p5-List-MoreUtils
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
#EOF

