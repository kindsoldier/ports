#
# $Id$
#
PORTNAME=	Proc-ProcessTable
PORTVERSION=	0.53
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JWB
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to the unix process table

PORTSCOUT=	limit:^[0-9\.]*$$

USES=		perl5 shebangfix
USE_PERL5=	configure

SHEBANG_FILES=	example.pl

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Proc/ProcessTable/ProcessTable.so

.include <bsd.port.mk>
#EOF

