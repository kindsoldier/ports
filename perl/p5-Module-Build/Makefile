#
# $Id$
#
PORTNAME=	Module-Build
PORTVERSION=	0.4214
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Build and install Perl modules

#TEST_DEPENDS=	p5-Archive-Zip>=0:perl/p5-Archive-Zip \
#		p5-PAR-Dist>=0.17:perl/p5-PAR-Dist
#
#PORTSCOUT=	skipv:0.31011,0.31012

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.pre.mk>

#.if ${PERL_LEVEL} < 502105
#BUILD_DEPENDS+=	p5-CPAN-Meta>=2.142060:perl/p5-CPAN-Meta
#RUN_DEPENDS+=	p5-CPAN-Meta>=2.142060:perl/p5-CPAN-Meta
#.endif

post-patch:
	${RM} -f ${WRKSRC}/bin/config_data
	${REINPLACE_CMD} -e '/script_files/d' ${WRKSRC}/Build.PL
	${REINPLACE_CMD} -e '/^bin\/config_data/d' ${WRKSRC}/MANIFEST

.include <bsd.port.post.mk>
#EOF
