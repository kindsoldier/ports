#
# $Id$
#
PORTNAME=	Net-LibIDN
PORTVERSION=	0.12
CATEGORIES=	dns perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	This module provides access to the libidn library

LIB_DEPENDS=	libidn.so:net/libidn

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS+=	--with-libidn=${LOCALBASE}/lib
CONFIGURE_ARGS+=	--with-libidn-inc=${LOCALBASE}/include

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Net/LibIDN/LibIDN.so

.include <bsd.port.mk>
#EOF
