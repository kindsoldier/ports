# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD:perl/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Module-Implementation
PORTVERSION=	0.09
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Loads one of several alternate underlying implementations for a module


BUILD_DEPENDS+=	p5-Module-Runtime>=0.012:perl/p5-Module-Runtime
BUILD_DEPENDS+=	p5-Try-Tiny>=0:perl/p5-Try-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
#EOF
