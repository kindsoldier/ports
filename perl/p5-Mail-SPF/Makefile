#
# $Id$
#
PORTNAME=	Mail-SPF
PORTVERSION=	2.9.0
DISTVERSIONPREFIX=	v
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Object-oriented implementation of Sender Policy Framework

BUILD_DEPENDS+=	p5-Error>=0:perl/p5-Error
BUILD_DEPENDS+=	p5-Net-DNS>=0.62:perl/p5-Net-DNS
BUILD_DEPENDS+=	p5-Net-DNS-Resolver-Programmable>=0.003:perl/p5-Net-DNS-Resolver-Programmable
BUILD_DEPENDS+=	p5-NetAddr-IP>=4:perl/p5-NetAddr-IP
BUILD_DEPENDS+=	p5-URI>=1.13:perl/p5-URI

RUN_DEPENDS:=	${BUILD_DEPENDS}
#TEST_DEPENDS=	p5-Test-Pod>=1:devel/p5-Test-Pod

CONFLICTS_INSTALL=	p5-Mail-SPF-Query-[0-9]*

CONFIGURE_ARGS=	--install_path sbin=${PREFIX}/sbin
NO_ARCH=	yes
USE_PERL5=	modbuild
USES=		perl5 shebangfix

SHEBANG_FILES=	bin/spfquery sbin/spfd

post-patch:
#	${MV} ${WRKSRC}/sbin/spfd ${WRKSRC}/sbin/spfd.pl
#	${MV} ${WRKSRC}/bin/spfquery ${WRKSRC}/bin/spfquery.pl
#	${REINPLACE_CMD} -e 's|spfd|&.pl|; s|spfquery|&.pl|' ${WRKSRC}/Build.PL ${WRKSRC}/MANIFEST ${WRKSRC}/README

.include <bsd.port.mk>
#EOF
