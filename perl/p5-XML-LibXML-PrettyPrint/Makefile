# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/textproc/p5-XML-LibXML-PrettyPrint/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	XML-LibXML-PrettyPrint
PORTVERSION=	0.006
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Add pleasant whitespace to a DOM tree

BUILD_DEPENDS=	p5-Exporter-Tiny>=0:perl/p5-Exporter-Tiny \
		p5-XML-LibXML>=1.62:perl/p5-XML-LibXML
RUN_DEPENDS:=	${BUILD_DEPENDS}
#TEST_DEPENDS=	p5-Test-Warnings>=0:perl/p5-Test-Warnings

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
#EOF
