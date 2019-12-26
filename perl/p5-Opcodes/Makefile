#
# $Id$
#
PORTNAME=	Opcodes
PORTVERSION=	0.14
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RURBAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	svysh.fbsd@gmail.com
COMMENT=	More Opcodes information from opnames.h and opcode.h

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

#pre-install:	test

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Opcodes/Opcodes.so

.include <bsd.port.mk>
#EOF
