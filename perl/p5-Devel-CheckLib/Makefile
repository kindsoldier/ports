# Created by: Frederic Culot <frederic@culot.org>
# $FreeBSD: head/devel/p5-Devel-CheckLib/Makefile 416917 2016-06-15 08:47:16Z culot $

PORTNAME=	Devel-CheckLib
PORTVERSION=	1.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Check that a library is available

BUILD_DEPENDS=	p5-IO-CaptureOutput>=1.08:perl/p5-IO-CaptureOutput
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
