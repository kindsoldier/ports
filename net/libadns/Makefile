#
# $id$
#
PORTNAME=	adns
PORTVERSION=	1.5.0
CATEGORIES=	dns
MASTER_SITES=	http://www.chiark.greenend.org.uk/~ian/adns/ftp/
PKGNAMEPREFIX=	lib

MAINTAINER=	pi@FreeBSD.org
COMMENT=	Easy to use asynchronous-capable DNS client library and utilities


USES=		gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
#PORTSCOUT=	skipv:1.5.0~rc0,1.5.0~rc1

BUILD_DEPENDS+=		gm4:text/gm4
CFLAGS+=		-Ds6_addr16=__u6_addr.__u6_addr16
CFLAGS+=		-Ds6_addr32=__u6_addr.__u6_addr32
MAKE_FLAGS+=		M4=gm4

TOSTRIP=	bin/adnsheloex \
		bin/adnsresfilter \
		bin/adnslogres \
		bin/adnshost \
		lib/libadns.so.1

post-stage:
.for f in ${TOSTRIP}
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${f}
.endfor

.include <bsd.port.mk>
#EOF
