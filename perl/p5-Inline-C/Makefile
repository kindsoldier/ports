# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/p5-Inline-C/Makefile 413823 2016-04-23 06:47:44Z sunpoet $

PORTNAME=	Inline-C
PORTVERSION=	0.76
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Write Perl Subroutines in C

BUILD_DEPENDS=	p5-Inline>=0.79:perl/p5-Inline \
		p5-Parse-RecDescent>=1.967.009:perl/p5-Parse-RecDescent \
		p5-Pegex>=0.58:perl/p5-Pegex
RUN_DEPENDS:=	${BUILD_DEPENDS}
BUILD_DEPENDS+=	p5-File-ShareDir-Install>=0.06:perl/p5-File-ShareDir-Install

CONFLICTS_INSTALL=	p5-Inline-0.[0-5]*

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.pre.mk>

#.if ${PERL_LEVEL} < 502200
#BUILD_DEPENDS+=	p5-ExtUtils-MakeMaker>=7.00:perl/p5-ExtUtils-MakeMaker
#RUN_DEPENDS+=	p5-ExtUtils-MakeMaker>=7.00:perl/p5-ExtUtils-MakeMaker
#.endif

.include <bsd.port.post.mk>
#EOF
