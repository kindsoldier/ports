PORTNAME=	tsocks
DISTVERSION=	1.8.b5
CATEGORIES=	net security
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/1.8%20beta%205 \
		http://ftp1.sourceforge.net/tsocks/ \
		http://www.yazzy.org/ports/tsocks/
DISTNAME=	${PORTNAME}-${PORTVERSION:C/.b/beta/}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Allow non SOCKS aware applications to use SOCKS without modification
WWW=		https://tsocks.sourceforge.net

USES=		gmake
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--libdir=${PREFIX}/lib \
		--with-conf=${PREFIX}/etc/tsocks.conf

SUB_FILES=	pkg-message

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION:C/.b.*//}

#CONFIGURE_ARGS+= --disable-hostnames
#CONFIGURE_ARGS+= --disable-debug
#CONFIGURE_ARGS+= --enable-oldmethod
#CONFIGURE_ARGS+= --enable-socksdns

post-patch:
	${REINPLACE_CMD} -e 's|/usr|${PREFIX}|' ${WRKSRC}/tsocks

post-install:
	${INSTALL_PROGRAM} ${WRKSRC}/inspectsocks ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/validateconf ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/tsocks.conf.simple.example \
		${STAGEDIR}${PREFIX}/etc/tsocks.conf.sample
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/*.example ${STAGEDIR}${EXAMPLESDIR}
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/lib${PORTNAME}.so

.include <bsd.port.mk>
