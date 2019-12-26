# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD:perl/Makefile 412348 2016-04-01 14:17:44Z mat $

PORTNAME=	Net-IMAP-Simple
PORTVERSION=	1.2206
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JETTERO
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for simple IMAP account handling


BUILD_DEPENDS+=	p5-Class-Accessor>=0:perl/p5-Class-Accessor
#BUILD_DEPENDS+=	p5-Coro>=0:perl/p5-Coro
BUILD_DEPENDS+=	p5-DateTime-Format-Mail>=0:perl/p5-DateTime-Format-Mail
BUILD_DEPENDS+=	p5-DateTime-Format-Strptime>=0:perl/p5-DateTime-Format-Strptime
BUILD_DEPENDS+=	p5-DateTime>=0:perl/p5-DateTime
BUILD_DEPENDS+=	p5-Email-Address>=0:perl/p5-Email-Address
BUILD_DEPENDS+=	p5-Email-MIME-ContentType>=0:perl/p5-Email-MIME-ContentType
BUILD_DEPENDS+=	p5-Email-MIME>=1.862:perl/p5-Email-MIME
BUILD_DEPENDS+=	p5-Email-Simple>=1.999:perl/p5-Email-Simple
BUILD_DEPENDS+=	p5-Encode-IMAPUTF7>=0:perl/p5-Encode-IMAPUTF7
BUILD_DEPENDS+=	p5-IO-Socket-SSL>0:perl/p5-IO-Socket-SSL
BUILD_DEPENDS+=	p5-List-MoreUtils>0:perl/p5-List-MoreUtils
BUILD_DEPENDS+=	p5-MIME-Base64>=0:perl/p5-MIME-Base64
BUILD_DEPENDS+=	p5-Net-SSLeay>=0:perl/p5-Net-SSLeay
#BUILD_DEPENDS+=	p5-Net-Server-Coro>=0.3:perl/p5-Net-Server-Coro
BUILD_DEPENDS+=	p5-Regexp-Common>=0:perl/p5-Regexp-Common
BUILD_DEPENDS+=	p5-UNIVERSAL-require>=0:perl/p5-UNIVERSAL-require
#BUILD_DEPENDS=	p5-Parse-RecDescent>=0:perl/p5-Parse-RecDescent
RUN_DEPENDS:=	${BUILD_DEPENDS}


PORTSCOUT=	skipv:1.20271

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
