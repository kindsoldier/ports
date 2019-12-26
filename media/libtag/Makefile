#
# $Id$
#
PORTNAME=	libtag
PORTVERSION=	1.9.1
CATEGORIES=	audio
MASTER_SITES=	http://taglib.github.io/releases/
DISTNAME=	taglib-${PORTVERSION}


MAINTAINER=	jhale@FreeBSD.org
COMMENT=	Library for manipulating ID3 tags and Ogg comments

USES=		cmake
CMAKE_ARGS=	-DWITH_ASF:BOOL=ON -DWITH_MP4:BOOL=ON
USE_LDCONFIG=	yes

USE_CSTD=	c99

.include <bsd.port.mk>
#EOF
