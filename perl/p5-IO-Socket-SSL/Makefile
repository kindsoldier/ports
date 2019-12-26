#
# $Id$
#
PORTNAME=	IO-Socket-SSL
PORTVERSION=	2.051
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SULLR
PKGNAMEPREFIX=	p5-

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Perl5 interface to SSL sockets


BUILD_DEPENDS+=	p5-Net-SSLeay>=1.59:perl/p5-Net-SSLeay
BUILD_DEPENDS+=	p5-Mozilla-CA>=20130114:perl/p5-Mozilla-CA
BUILD_DEPENDS+=	p5-URI>=1.50:perl/p5-URI
BUILD_DEPENDS+=	p5-IO-Socket-IP>=0.31:perl/p5-IO-Socket-IP
BUILD_DEPENDS+=	p5-Socket>=1.95:perl/p5-Socket
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5 shebangfix
USE_PERL5=	configure

CONFIGURE_ARGS=	< /dev/null
INSTALL_TARGET=	pure_install

SHEBANG_FILES=	example/ssl_mitm.pl

.include <bsd.port.mk>
#EOF

