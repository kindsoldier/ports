#
# $Id$
#
PORTNAME=	FreeBSD-GPIO
PORTVERSION=	1.0
CATEGORIES=	databases perl5
MASTER_SITES=	 https://github.com/gonzoua/freebsd-gpio/archive/
PKGNAMEPREFIX=	p5-
DISTNAME=	master
DIST_SUBDIR=	freebsd-gpio

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 GPIO interface

ONLY_FOR_ARCHS=	armv6

WRKSRC=		${WRKDIR}/freebsd-gpio-master/perl/
USES=		perl5 shebangfix zip
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF