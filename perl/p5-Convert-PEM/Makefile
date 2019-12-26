# Created by: Michael Haro <mharo@FreeBSD.org>
# $FreeBSD: head/converters/p5-Convert-PEM/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	Convert-PEM
PORTVERSION=	0.08
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Read/write access to ASN.1-encoded PEM files with optional encryption

RUN_DEPENDS+=	p5-Class-ErrorHandler>=0:perl/p5-Class-ErrorHandler
RUN_DEPENDS+=	p5-Convert-ASN1>=0.10:perl/p5-Convert-ASN1
RUN_DEPENDS+=	p5-Crypt-DES_EDE3>=0:perl/p5-Crypt-DES_EDE3
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
