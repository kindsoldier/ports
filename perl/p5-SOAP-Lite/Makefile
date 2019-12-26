#
# $Id$
#
PORTNAME=	SOAP-Lite
PORTVERSION=	1.20
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	svysh.fbsd@gmail.com
COMMENT=	Client and server side SOAP implementation

BUILD_DEPENDS+=	p5-Class-Inspector>=0:perl/p5-Class-Inspector
BUILD_DEPENDS+=	p5-IO-SessionData>=1.03:perl/p5-IO-SessionData
BUILD_DEPENDS+=	p5-IO-Socket-SSL>=0:perl/p5-IO-Socket-SSL
BUILD_DEPENDS+=	p5-LWP-Protocol-https>=0:perl/p5-LWP-Protocol-https
BUILD_DEPENDS+=	p5-MIME-Tools>=0:perl/p5-MIME-Tools
BUILD_DEPENDS+=	p5-Task-Weaken>=0:perl/p5-Task-Weaken
BUILD_DEPENDS+=	p5-URI>=0:perl/p5-URI
BUILD_DEPENDS+=	p5-XML-Parser>=2.23:perl/p5-XML-Parser
BUILD_DEPENDS+=	p5-XML-Parser-Lite>=0:perl/p5-XML-Parser-Lite
BUILD_DEPENDS+=	p5-libwww>=0:perl/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}
#TEST_DEPENDS=	p5-Test-Warn>=0:devel/p5-Test-Warn
#		p5-Test-XML>=0:devel/p5-Test-XML

CONFLICTS_INSTALL=	p5-SOAP-Lite-0.60* p5-SOAP-[0-9]*

CONFIGURE_ARGS=	--noprompt
INSTALL_TARGET=	pure_install
USE_PERL5=	configure
USES=		perl5 shebangfix
NO_ARCH=	yes

SHEBANG_FILES=	bin/SOAPsh.pl
perl_OLD_CMD=	.*perl

.include <bsd.port.mk>
#EOF
