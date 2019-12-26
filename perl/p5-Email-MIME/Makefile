# $FreeBSD:perl/Makefile 412348 2016-04-01 14:17:44Z mat $

PORTNAME=	Email-MIME
PORTVERSION=	1.937
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Easy MIME message parsing


BUILD_DEPENDS+=	p5-Email-Simple>=2.206:perl/p5-Email-Simple
BUILD_DEPENDS+=	p5-Email-MessageID>=0:perl/p5-Email-MessageID
BUILD_DEPENDS+=	p5-Email-MIME-Encodings>=1.313:perl/p5-Email-MIME-Encodings
BUILD_DEPENDS+=	p5-Email-MIME-ContentType>=1.01.6:perl/p5-Email-MIME-ContentType
BUILD_DEPENDS+=	p5-MIME-Types>=1.13:perl/p5-MIME-Types
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
