# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/devel/p5-Inline/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Inline
PORTVERSION=	0.80
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:INGY
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Write Perl subroutines in other programming languages

BUILD_DEPENDS=	p5-Parse-RecDescent>=1.800:perl/p5-Parse-RecDescent
RUN_DEPENDS:=	${BUILD_DEPENDS}

PORTSCOUT=	limit:^[0-9\.]*$$

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
