#
# $Id$
#
PORTNAME=	Module-Install
PORTVERSION=	1.16
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Standalone, extensible Perl module installer

BUILD_DEPENDS+=	p5-File-Remove>=1.42:perl/p5-File-Remove
BUILD_DEPENDS+=	p5-JSON>=2.14:perl/p5-JSON
BUILD_DEPENDS+=	p5-Module-ScanDeps>=1.09:perl/p5-Module-ScanDeps
BUILD_DEPENDS+=	p5-PAR-Dist>=0.29:perl/p5-PAR-Dist
BUILD_DEPENDS+=	p5-YAML-Tiny>=1.38:perl/p5-YAML-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	--skip

.include <bsd.port.mk>
#EOF
