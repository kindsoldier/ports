# Created by: Alex Perel <veers@disturbed.net>
# $FreeBSD: head/mail/p5-MIME-Lite/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	MIME-Lite
PORTVERSION=	3.030
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple interface for creating (not parsing!) MIME messages

BUILD_DEPENDS=	p5-Email-Date-Format>=1.000:perl/p5-Email-Date-Format \
		p5-MIME-Types>=1.28:perl/p5-MIME-Types \
		p5-Mail-Tools>=1.62:perl/p5-Mail-Tools
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
