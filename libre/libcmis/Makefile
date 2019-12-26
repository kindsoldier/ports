#
# $Id$
#
PORTNAME=	libcmis
PORTVERSION=	0.5.1
CATEGORIES=	net devel
MASTER_SITES=	http://dev-www.libreoffice.org/src/


MAINTAINER=	office@FreeBSD.org
COMMENT=	Client library for the CMIS interface

LIB_DEPENDS+=	libcppunit.so:libre/libcppunit
LIB_DEPENDS+=	libboost_regex.so:devel/libboost64

LIB_DEPENDS+=	libcurl.so:net/libcurl
LIB_DEPENDS+=	libxml2.so:text/libxml2


GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES+=		gmake
USE_LDCONFIG=	yes

CONFIGURE_ARGS=	--disable-werror --with-boost=${LOCALBASE}/boost64 --without-man
PLIST_SUB=	MAJVER=${PORTVERSION:R}
LDFLAGS+=	-L${LOCALBASE}/lib -lcurl

LDFLAGS+=       -L${LOCALBASE}/lib -L${LOCALBASE}/boost64/lib
CPPFLAGS=	-I${LOCALBASE}/include -I${LOCALBASE}/boost64/include


FILES+=	${WRKSRC}/Makefile.in 
FILES+=	${WRKSRC}/*/Makefile.in 
FILES+=	${WRKSRC}/*/*/Makefile.in 
#FILES+=	${WRKSRC}/*/*/*/Makefile.in 
FILES+=	${WRKSRC}/*.pc.in
FILES+=	${WRKSRC}/configure


pre-patch:
	${REINPLACE_CMD} -e "s|@WITH_LIBCMIS_MAN_FALSE@|#|g" \
	    ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's,libxml-2.0,libxml2,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-0.0,librevenge,g' ${FILES}
#	${REINPLACE_CMD} -e 's,librevenge-stream-0.0,librevenge-stream,g' ${FILES}
#	${REINPLACE_CMD} -e 's,librevenge-generators-0.0,librevenge-generators,g' ${FILES}
#	${REINPLACE_CMD} -e 's,-@LIBODFGEN_MAJOR_VERSION@.@LIBODFGEN_MINOR_VERSION@,,g' ${FILES}
#	${REINPLACE_CMD} -e 's,_@LIBODFGEN_MAJOR_VERSION@_@LIBODFGEN_MINOR_VERSION@,,g' ${FILES}
#	${REINPLACE_CMD} -e 's,-$$LIBODFGEN_MAJOR_VERSION.$$LIBODFGEN_MINOR_VERSION,,g' ${FILES}
#	${REINPLACE_CMD} -e 's,libwpd-0.10,libwpd,g' ${FILES}
#	${REINPLACE_CMD} -e 's,libwpd-stream-0.10,libwpd-stream,g' ${FILES}
	${REINPLACE_CMD} -e 's,-@LIBCMIS_API_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@LIBCMIS_API_VERSION@,,g' ${FILES}

.include <bsd.port.mk>
#EOF
