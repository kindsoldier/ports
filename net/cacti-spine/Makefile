#
# $id$
#
PORTNAME=	spine
PORTVERSION=	1.2.5
CATEGORIES=	net-mgmt
MASTER_SITES=	http://www.cacti.net/downloads/${PORTNAME}/
DISTNAME=	cacti-${PORTNAME}-${PORTVERSION}
PKGNAMEPREFIX=	cacti-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Multithreaded poller for Cacti written in C

BUILD_DEPENDS=	help2man:devel/help2man
LIB_DEPENDS+=	libnetsnmp.so:net/net-snmp
LIB_DEPENDS+=	libmysqlclient.so:data/mariadb

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USES+=		gmake

CONFIGURE_ARGS+= --with-mysql=${LOCALBASE} 
CONFIGURE_ARGS+= --with-snmp=${LOCALBASE}
CPPFLAGS+=	$$(net-snmp-config --cflags)
LIBS+=		$$(net-snmp-config --libs)
USES=		libtool ssl autoreconf gmake


post-patch:
	${REINPLACE_CMD} 's,#define\ *DEFAULT_CONF_FILE .*,#define DEFAULT_CONF_FILE "${PREFIX}/etc/spine.conf",' ${WRKSRC}/spine.h

do-build:
	cd ${WRKSRC}; ${MAKE}

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${STAGEDIR}${PREFIX}/etc/spine.conf.dist ${STAGEDIR}${EXAMPLESDIR}/spine.conf.sample

.include <bsd.port.mk>
#EOF
