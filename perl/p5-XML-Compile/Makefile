# Created by: Jin-Shan Tseng <tjs@cdpa.nsysu.edu.tw>
# $FreeBSD: head/textproc/p5-XML-Compile/Makefile 423694 2016-10-10 20:06:54Z adamw $

PORTNAME=	XML-Compile
PORTVERSION=	1.54
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Compilation based XML processing

BUILD_DEPENDS=	p5-Log-Report>=1.03:perl/p5-Log-Report \
		p5-XML-LibXML>=2.0107:perl/p5-XML-LibXML
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
