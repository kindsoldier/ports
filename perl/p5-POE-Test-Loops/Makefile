# Created by: Zach Thompson <hideo@lastamericanempire.com>
# $FreeBSD: head/devel/p5-POE-Test-Loops/Makefile 415696 2016-05-23 03:53:19Z sunpoet $

PORTNAME=	POE-Test-Loops
PORTVERSION=	1.360
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RCAPUTO
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Reusable tests for POE Loop authors

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 502000
BUILD_DEPENDS+=	p5-Test-Simple>=1.001002:perl/p5-Test-Simple
RUN_DEPENDS+=	p5-Test-Simple>=1.001002:perl/p5-Test-Simple
.endif

.include <bsd.port.post.mk>
#EOF
