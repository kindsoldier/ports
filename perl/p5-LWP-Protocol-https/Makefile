# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD:perl/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	LWP-Protocol-https
PORTVERSION=	6.06
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Provide https support for LWP::UserAgent


# We remove p5-libwww here to avoid cyclic dependency
BUILD_DEPENDS+=	p5-IO-Socket-SSL>=1.54:perl/p5-IO-Socket-SSL
BUILD_DEPENDS+	p5-Mozilla-CA>=20110101:perl/p5-Mozilla-CA
BUILD_DEPENDS+	p5-Net-HTTP>=6:perl/p5-Net-HTTP
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
#EOF
