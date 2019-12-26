#
# $Id$
#
PORTNAME=	Digest-GOST
PORTVERSION=	0.06
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	pi@FreeBSD.org
COMMENT=	Perl interface to the GOST R 34.11-94 digest algorithm

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.pre.mk>


.if (${ARCH} == "armv6" || ${ARCH} == "armv6hf" || ${ARCH} == "aarch64")
CFLAGS+=	-D_ARM_=1
.endif


post-stage:
	${STRIP_CMD} ${STAGEDIR}${SITE_ARCH}/auto/Digest/GOST/GOST.so

.include <bsd.port.post.mk>
#EOF
