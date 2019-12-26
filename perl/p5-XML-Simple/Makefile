# Created by: Andrew <andrew@ugh.net.au>
# $FreeBSD:perl/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	XML-Simple
PORTVERSION=	2.22
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Trivial API for reading and writing XML (esp config files)


BUILD_DEPENDS=	p5-XML-Parser>=0:perl/p5-XML-Parser \
		p5-XML-SAX>=0.15:perl/p5-XML-SAX \
		p5-XML-SAX-Expat>=0:perl/p5-XML-SAX-Expat
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAKE_JOBS_UNSAFE=	yes
NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
