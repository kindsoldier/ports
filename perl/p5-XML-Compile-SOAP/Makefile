# Created by: Jin-Shan Tseng <tjs@cdpa.nsysu.edu.tw>
# $FreeBSD: head/net/p5-XML-Compile-SOAP/Makefile 431310 2017-01-12 20:03:04Z sunpoet $

PORTNAME=	XML-Compile-SOAP
PORTVERSION=	3.21
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Base-class for SOAP implementations

BUILD_DEPENDS=	p5-File-Slurp-Tiny>=0:perl/p5-File-Slurp-Tiny \
		p5-Log-Report>=1.05:perl/p5-Log-Report \
		p5-XML-Compile>=1.51:perl/p5-XML-Compile \
		p5-XML-Compile-Cache>=1.03:perl/p5-XML-Compile-Cache \
		p5-libwww>=6.08:perl/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}
#TEST_DEPENDS=	p5-XML-Compile-Tester>=0.90:devel/p5-XML-Compile-Tester

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
