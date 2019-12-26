#
# $Id$
#
PORTNAME=	libwww
PORTVERSION=	6.15
DISTVERSIONPREFIX=	perl-
CATEGORIES=	www devel perl5
MASTER_SITES=	CPAN/LWP
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl5 library for WWW access

BUILD_DEPENDS+=	p5-Authen-NTLM>=1.02:perl/p5-Authen-NTLM
BUILD_DEPENDS+=	p5-Encode-Locale>=0:perl/p5-Encode-Locale
BUILD_DEPENDS+=	p5-File-Listing>=6:perl/p5-File-Listing
BUILD_DEPENDS+=	p5-HTML-Parser>=0:perl/p5-HTML-Parser
BUILD_DEPENDS+=	p5-HTTP-Cookies>=6:perl/p5-HTTP-Cookies
BUILD_DEPENDS+=	p5-HTTP-Daemon>=6:perl/p5-HTTP-Daemon
BUILD_DEPENDS+=	p5-HTTP-Date>=6:perl/p5-HTTP-Date
BUILD_DEPENDS+=	p5-HTTP-Message>=6:perl/p5-HTTP-Message
BUILD_DEPENDS+=	p5-HTTP-Negotiate>=6:perl/p5-HTTP-Negotiate
BUILD_DEPENDS+=	p5-LWP-MediaTypes>=6:perl/p5-LWP-MediaTypes
BUILD_DEPENDS+=	p5-Net-HTTP>=6.07:perl/p5-Net-HTTP
BUILD_DEPENDS+=	p5-URI>=1.10:perl/p5-URI
BUILD_DEPENDS+=	p5-WWW-RobotRules>=6:perl/p5-WWW-RobotRules
BUILD_DEPENDS+=	p5-LWP-Protocol-https>=0:perl/p5-LWP-Protocol-https
RUN_DEPENDS:=	${BUILD_DEPENDS}

#OPTIONS_DEFINE=	HTTPS

CONFIGURE_ARGS=	--aliases
USE_PERL5=	configure
USES=		perl5

#HTTPS_BUILD_DEPENDS=	p5-LWP-Protocol-https>=0:www/p5-LWP-Protocol-https
#HTTPS_RUN_DEPENDS=	p5-LWP-Protocol-https>=0:www/p5-LWP-Protocol-https

.include <bsd.port.mk>
#EOF
