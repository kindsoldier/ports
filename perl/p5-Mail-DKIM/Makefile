#
# $Id$
#
PORTNAME=	Mail-DKIM
PORTVERSION=	0.40
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN http://jason.long.name/dkimproxy/
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module to process and/or create DKIM email

BUILD_DEPENDS+=	p5-Crypt-OpenSSL-RSA>=0:perl/p5-Crypt-OpenSSL-RSA
BUILD_DEPENDS+=	p5-Mail-Tools>=0:perl/p5-Mail-Tools
BUILD_DEPENDS+=	p5-Net-DNS>=0:perl/p5-Net-DNS
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5 shebangfix
USE_PERL5=	configure
SHEBANG_FILES=	scripts/dkim*.pl sample_mime_lite.pl
NO_ARCH=	yes

#post-install:
#	${INSTALL_SCRIPT} ${WRKSRC}/scripts/dkim*.pl ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
#EOF
