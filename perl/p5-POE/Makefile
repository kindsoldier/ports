#
# $Id$
#
PORTNAME=	POE
PORTVERSION=	1.367
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Multitasking and networking framework for perl

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS+=	p5-Curses>=1.08:perl/p5-Curses
BUILD_DEPENDS+=	p5-HTTP-Message>=0:perl/p5-HTTP-Message
BUILD_DEPENDS+=	p5-IO-Pipely>=0.005:perl/p5-IO-Pipely
BUILD_DEPENDS+=	p5-IO-Tty>=1.08:perl/p5-IO-Tty
BUILD_DEPENDS+=	p5-POE-Test-Loops>=1.360:perl/p5-POE-Test-Loops
BUILD_DEPENDS+=	p5-Socket-GetAddrInfo>=0.20:perl/p5-Socket-GetAddrInfo
BUILD_DEPENDS+=	p5-Term-ReadKey>=2.21:perl/p5-Term-ReadKey
BUILD_DEPENDS+=	p5-URI>=1.30:perl/p5-URI
BUILD_DEPENDS+=	p5-libwww>=5.79:perl/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}


CONFIGURE_ARGS=	--default
NO_ARCH=	yes
USES=		perl5 shebangfix
USE_PERL5=	configure

#PORTEXAMPLES=	*

SHEBANG_FILES=	examples/*.perl lib/POE/Wheel/Curses.pm

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/examples/* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
