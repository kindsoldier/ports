# Created by: Michael Haro <mharo@FreeBSD.org>
# $FreeBSD: head/security/p5-Crypt-DSA/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Crypt-DSA
PORTVERSION=	1.17
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DSA signature and key generation

RUN_DEPENDS+=	p5-Digest-SHA1>=0:perl/p5-Digest-SHA1
RUN_DEPENDS+=	p5-Convert-PEM>=0:perl/p5-Convert-PEM
RUN_DEPENDS+=	p5-Data-Buffer>=0:perl/p5-Data-Buffer 
RUN_DEPENDS+=	p5-File-Which>=0.05:perl/p5-File-Which
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
