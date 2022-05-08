# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/security/p5-Filter-Crypto/Makefile 436247 2017-03-15 14:45:30Z mat $

PORTNAME=	Filter-Crypto
PORTVERSION=	2.09
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Create runnable Perl files encrypted with OpenSSL libcrypto

BUILD_DEPENDS=	p5-PAR-Packer>=0:perl/p5-PAR-Packer
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	--prefix-dir=/usr --defaults

.include <bsd.port.mk>
#EOF
