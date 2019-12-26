#
# $Id$
#
PORTNAME=	fcgi
PORTVERSION=	2.4.0
CATEGORIES=	www
MASTER_SITES+=	ftp://ftp.netbsd.org/pub/pkgsrc/distfiles/
MASTER_SITES+=	http://www.fastcgi.com/dist/
MASTER_SITES+=	http://www.skysmurf.nl/comp/FreeBSD/distfiles/
#PKGNAMESUFFIX=	-devkit
PKGNAMEPREFIX=	lib

MAINTAINER=	freebsd@skysmurf.nl
COMMENT=	FastCGI Development Kit

USES=		gmake libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
MAKE_JOBS_UNSAFE=	yes
LDFLAGS+=	-L${WRKSRC}/libfcgi/

.include <bsd.port.options.mk>

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libfcgi.so.*
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libfcgi++.so.*
	cd ${STAGEDIR}${PREFIX}/lib && ${LN} -sf libfcgi.so.0 libfcgi.so
	cd ${STAGEDIR}${PREFIX}/lib && ${LN} -sf libfcgi++.so.0 libfcgi++.so
	${INSTALL_MAN} ${WRKSRC}/doc/*.1 ${STAGEDIR}${MANPREFIX}/man/man1/
	${INSTALL_MAN} ${WRKSRC}/doc/*.3 ${STAGEDIR}${MANPREFIX}/man/man3/

.include <bsd.port.mk>
#EOF
