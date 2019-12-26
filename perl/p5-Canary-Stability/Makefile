# $FreeBSD: head/devel/p5-Canary-Stability/Makefile 423091 2016-10-01 20:28:22Z adamw $

PORTNAME=	Canary-Stability
PORTVERSION=	2012
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MLEHMANN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Checks what version of perl you're running and then complains about it

USES=		perl5
USE_PERL5=	configure


# Just skip everything in this module unless activated
post-patch:
	${REINPLACE_CMD} -e '/^sub import {/s/$$/ return 1; /' \
		${WRKSRC}/Stability.pm

.include <bsd.port.mk>
#EOF
