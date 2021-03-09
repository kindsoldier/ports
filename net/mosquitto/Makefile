# Created by: Joseph Benden <joe@thrallingpenguin.com>
# $FreeBSD: head/net/mosquitto/Makefile 567577 2021-03-07 16:45:48Z tobik $

PORTNAME=	mosquitto
PORTVERSION=	2.0.8
CATEGORIES=	net
MASTER_SITES=	http://mosquitto.org/files/source/

MAINTAINER=	joe@thrallingpenguin.com
COMMENT=	Open source MQTT broker

#BUILD_DEPENDS=	xsltproc:textproc/libxslt \
#		docbook-xsl>0:textproc/docbook-xsl
#LIB_DEPENDS=	libuuid.so:misc/e2fsprogs-libuuid \
#		libcjson.so:devel/libcjson
#RUN_DEPENDS=	${LOCALBASE}/share/certs/ca-root-nss.crt:security/ca_root_nss

LIB_DEPENDS+= libcjson.so:devel/libcjson

CFLAGS+=        -I${LOCALBASE}/include
LDFLAGS+=       -L${LOCALBASE}/lib

USES=		cmake gmake ssl
USE_RC_SUBR=	mosquitto
USE_LDCONFIG=	yes
CMAKE_ARGS=	-DCMAKE_LIBDATADIR:PATH="${PREFIX}/lib"

USERS=		nobody

#LIB_DEPENDS=	libcares.so:dns/c-ares
#CMAKE_ON=	-DWITH_SRV:BOOL=ON

#LIB_DEPENDS=	libwebsockets.so:net/libwebsockets
#CMAKE_ARGS+=	-DWITH_WEBSOCKETS:BOOL=ON

post-patch:
	${REINPLACE_CMD} -e '/ldconfig/d' ${WRKSRC}/src/CMakeLists.txt \
		${WRKSRC}/lib/CMakeLists.txt ${WRKSRC}/lib/cpp/CMakeLists.txt
	${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|g' ${WRKSRC}/CMakeLists.txt

post-install:
	${REINPLACE_CMD} -e '/cafile/s,/usr/local,${LOCALBASE},' ${STAGEDIR}${ETCDIR}/mosquitto.conf
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA}	${STAGEDIR}${ETCDIR}/mosquitto.conf ${STAGEDIR}${EXAMPLESDIR}/mosquitto.conf.example
	${INSTALL_DATA} ${STAGEDIR}${ETCDIR}/pwfile.example ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${STAGEDIR}${ETCDIR}/pskfile.example ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${STAGEDIR}${ETCDIR}/aclfile.example ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
