#
# $id$
#
PORTNAME=	qpdf
PORTVERSION=	5.1.2
CATEGORIES=	print
MASTER_SITES=	SF
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Command-line tools for transforming and inspecting PDF documents

LIB_DEPENDS+=	libpcre.so:text/libpcre

USES+=		gmake libtool autoreconf
GNU_CONFIGURE=	yes
CFLAGS+=	${PTHREAD_CFLAGS}
CPPFLAGS+=	-I${LOCALBASE}/include
CPPFLAGS+=	-I${LOCALBASE}/include/pcre
LDFLAGS=	-L${LOCALBASE}/lib

#DSOFLAGS=	-Wl,-rpath,${PREFIX}/lib -L${PREFIX}/lib ${LDFLAGS}
#CONFIGURE_ENV=	CPPFLAGS="${CPPFLAGS}" LDFLAGS="${LDFLAGS}" DSOFLAGS="${DSOFLAGS}"

.include <bsd.port.mk>
#EOF
