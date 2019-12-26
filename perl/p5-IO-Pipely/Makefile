# Created by: Mathieu Arnold
# $FreeBSD: head/devel/p5-IO-Pipely/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	IO-Pipely
PORTVERSION=	0.005
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Portably create pipe() or pipe-like handles, one way or another

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 502000
TEST_DEPENDS=	p5-Scalar-List-Utils>=1.29:perl/p5-Scalar-List-Utils
.endif

.include <bsd.port.post.mk>
#EOF
