#
# $Id$
#
PORTNAME=	MIME-Base32
PORTVERSION=	1.02a
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Perl5 module for Base32 encodings

WRKSRC=		${WRKDIR}/${PORTNAME}-1.02
USES=		perl5
USE_PERL5=	configure

post-extract:
	${RM} ${WRKSRC}/test1.pl

.include <bsd.port.mk>
#EOF
