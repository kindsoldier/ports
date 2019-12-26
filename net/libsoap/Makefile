#
#
#
PORTNAME=	libsoap
PORTVERSION=	1.1.0
CATEGORIES=	net
MASTER_SITES=	SF/csoap/${PORTNAME}/${PORTVERSION}

LIB_DEPENDS+= libxml2.so:text/libxml2

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Tool to measure maximum TCP and UDP bandwidth


GNU_CONFIGURE=	yes
USES+=		gmake

LDCONFIG+=	-L${LOCALBASE}/lib
CPPFLAGS+=	-I${LOCALBASE}/include
CONFIGURE_ARGS+= --with-ssl

.include <bsd.port.mk>
#EOF

