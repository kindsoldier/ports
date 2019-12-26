# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/converters/p5-JSON-MaybeXS/Makefile 435000 2017-02-28 06:13:42Z sunpoet $

PORTNAME=	JSON-MaybeXS
PORTVERSION=	1.003009
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Use Cpanel::JSON::XS with a fallback to JSON::PP

BUILD_DEPENDS=	p5-Cpanel-JSON-XS>=2.3310:perl/p5-Cpanel-JSON-XS
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
#EOF

