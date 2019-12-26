# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/net/p5-XML-Compile-SOAP-Daemon/Makefile 415251 2016-05-15 16:12:49Z sunpoet $

PORTNAME=	XML-Compile-SOAP-Daemon
PORTVERSION=	3.12
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Base class for SOAP message servers

BUILD_DEPENDS=	p5-Log-Report>=0.90:perl/p5-Log-Report \
		p5-XML-Compile>=1.44:perl/p5-XML-Compile \
		p5-XML-Compile-Cache>=0.991:perl/p5-XML-Compile-Cache \
		p5-XML-Compile-SOAP>=3.00:perl/p5-XML-Compile-SOAP \
		p5-XML-Compile-WSDL11>=3.00:perl/p5-XML-Compile-WSDL11
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
