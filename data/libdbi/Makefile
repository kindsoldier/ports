#
# $Id$
#
PORTNAME=	libdbi
PORTVERSION=	0.9.0
CATEGORIES=	databases devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Database Independent Abstraction Layer for C

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES+=		gmake

post-patch:
	${REINPLACE_CMD} -e "s|-O20|${CFLAGS}|g" -e "s|-std=gnu99||g" \
		 ${WRKSRC}/configure


.include <bsd.port.mk>
#EOF
