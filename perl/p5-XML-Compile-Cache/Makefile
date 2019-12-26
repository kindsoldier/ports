# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/textproc/p5-XML-Compile-Cache/Makefile 423695 2016-10-10 20:08:51Z adamw $

PORTNAME=	XML-Compile-Cache
PORTVERSION=	1.05
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Cache Compiled XML Translators

BUILD_DEPENDS=	p5-Log-Report>=0.19:perl/p5-Log-Report \
		p5-XML-Compile>=1.48:perl/p5-XML-Compile \
		p5-XML-LibXML-Simple>=0.95:perl/p5-XML-LibXML-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
