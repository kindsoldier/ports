# Created by: Travis Campbell <hcoyote@ghostar.org>
# $FreeBSD:perl/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Digest-SHA
PORTVERSION=	5.95
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for SHA-1/224/256/384/512

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e '/EXE_FILES/d' ${WRKSRC}/Makefile.PL

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Digest/SHA/SHA.so

.include <bsd.port.mk>
#EOF
