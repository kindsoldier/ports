# Created by: will
# $FreeBSD: head/math/p5-Math-GMP/Makefile 426499 2016-11-19 17:11:06Z sunpoet $

PORTNAME=	Math-GMP
PORTVERSION=	2.13
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module that provides an interface to the GMP library

BUILD_DEPENDS=	p5-Devel-CheckLib>=0.9:perl/p5-Devel-CheckLib
LIB_DEPENDS=	libgmp.so:math/libgmp

USE_PERL5=	configure
USES=		localbase perl5

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Math/GMP/GMP.so

.include <bsd.port.mk>
#EOF
