# Created by: Rong-En Fan <rafan@FreeBSD.org>
# $FreeBSD: head/devel/p5-PAR-Packer/Makefile 441928 2017-05-28 23:14:57Z sunpoet $

PORTNAME=	PAR-Packer
PORTVERSION=	1.041
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PAR Packager

BUILD_DEPENDS=	p5-Archive-Zip>=1.02:perl/p5-Archive-Zip \
		p5-Getopt-ArgvFile>=1.07:perl/p5-Getopt-ArgvFile \
		p5-Module-ScanDeps>=1.21:perl/p5-Module-ScanDeps \
		p5-Module-Signature>=0:perl/p5-Module-Signature \
		p5-PAR>=1.014:perl/p5-PAR \
		p5-PAR-Dist>=0.22:perl/p5-PAR-Dist
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAKE_JOBS_UNSAFE=	yes
USE_PERL5=	configure
USES=		perl5

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/parl ${STAGEDIR}${PREFIX}/bin/parldyn
	cd ${STAGEDIR}${PREFIX}/bin && ${CP} par.pl par

.include <bsd.port.mk>
#EOF

