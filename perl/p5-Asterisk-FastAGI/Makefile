#
# $Id$
#
PORTNAME=	Asterisk-FastAGI
PORTVERSION=	0.02
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sobomax@FreeBSD.org
COMMENT=	Perl module for FastAGI handling

BUILD_DEPENDS+=	p5-Module-Install>=0:perl/p5-Module-Install
BUILD_DEPENDS+=	p5-Asterisk>=0:perl/p5-Asterisk
BUILD_DEPENDS+=	p5-Net-Server>=0:perl/p5-Net-Server
BUILD_DEPENDS+=	p5-File-Remove>=0:perl/p5-File-Remove

RUN_DEPENDS+=	p5-Asterisk>=0:perl/p5-Asterisk
RUN_DEPENDS+=	p5-Net-Server>=0:perl/p5-Net-Server

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
