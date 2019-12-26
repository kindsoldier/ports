#
# $Id$
#
PORTNAME=	Device-Modem
PORTVERSION=	1.57
CATEGORIES=	comms perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl class to interface generic modems (AT-compliant)

BUILD_DEPENDS=	p5-Device-SerialPort>=0:perl/p5-Device-SerialPort
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5 shebangfix
SHEBANG_FILES=	examples/xmodem.pl \
		examples/shell.pl \
		examples/caller-id.pl
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
#EOF
