#
# $Id$
#
PORTNAME=	Geo-IP
PORTVERSION=	1.45
CATEGORIES=	net geography perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Gets country name by IP or hostname

LIB_DEPENDS=	libGeoIP.so:net/libGeoIP

CONFIGURE_ARGS=	INC="-I${LOCALBASE}/include" LIBS="-L${LOCALBASE}/lib"
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
