# Created by: Shell Hung <shell@shellhung.org>
# $FreeBSD:perl/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Image-Info
PORTVERSION=	1.38
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for getting image information


BUILD_DEPENDS+=	p5-IO-String>=0:perl/p5-IO-String
BUILD_DEPENDS+=	p5-XML-LibXML>=0:perl/p5-XML-LibXML
BUILD_DEPENDS+=	p5-XML-Simple>=0:perl/p5-XML-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
