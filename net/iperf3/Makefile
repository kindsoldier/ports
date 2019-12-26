#
# $Id$
#
PORTNAME=	iperf
PORTVERSION=	3.7
CATEGORIES=	benchmarks
MASTER_SITES=	http://downloads.es.net/pub/iperf/
PKGNAMESUFFIX=	3

MAINTAINER=	bmah@FreeBSD.org
COMMENT=	Improved tool to measure TCP and UDP bandwidth

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

post-patch:
	${REINPLACE_CMD} -e '/^PROGRAMS /s/\$$(noinst_PROGRAMS)//' \
		${WRKSRC}/src/Makefile.in


.include <bsd.port.mk>
#EOF

