#
# $Id$
#
PORTNAME=	mysql-connector-c++
PORTVERSION=	1.1.5
CATEGORIES=	databases
#MASTER_SITES=	${MASTER_SITE_MYSQL}
#MASTER_SITE_SUBDIR=	Connector-C++
PKGNAMEPREFIX=	lib

MAINTAINER=	ports@FreeBSD.org
COMMENT=	MySQL database connector for C++

LIB_DEPENDS+=	libmysqlclient.so:data/mariadb
LIB_DEPENDS=	libboost_regex.so:devel/libboost

#USE_MYSQL=	51+
USES=		cmake:outsource
USE_CMAKE=	yes
USE_LDCONFIG=	yes
CMAKE_ARGS+=	-DMYSQL_LIB_DIR=${LOCALBASE}/lib
#CMAKE_ARGS+= -DMYSQL_CLIENT_STATIC_LINKING=1

#CMAKE_ARGS+=	-DMYSQLCPPCONN_TEST_NOT_IMPLEMENTED:BOOL=1 \
#		-DMYSQLCPPCONN_BUILD_EXAMPLES:BOOL=1

post-install:
	cd ${STAGEDIR}${PREFIX}/lib && ${MV} libmysqlcppconn-static.a libmysqlcppconn.a

.include <bsd.port.mk>
#EOF
