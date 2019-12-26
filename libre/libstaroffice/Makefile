# $FreeBSD: head/textproc/libstaroffice/Makefile 441121 2017-05-17 22:02:23Z jkim $

PORTNAME=	libstaroffice
PORTVERSION=	0.0.3
CATEGORIES=	textproc
MASTER_SITES=	LODEV
MASTER_SITE_SUBDIR=	#

MAINTAINER=	office@FreeBSD.org
COMMENT=	Library to build a filter for old StarOffice's documents

BUILD_DEPENDS=	${LOCALBASE}/boost64/include/boost/shared_ptr.hpp:devel/libboost
LIB_DEPENDS=	librevenge.so:libre/librevenge

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes
USES=		libtool pkgconfig tar:xz

CONFIGURE_ARGS=	--without-docs
CPPFLAGS+=	-I${LOCALBASE}/include

LDFLAGS+=       -L${LOCALBASE}/lib -L${LOCALBASE}/boost64/lib
CPPFLAGS=	-I${LOCALBASE}/include -I${LOCALBASE}/boost64/include


FILES+= ${WRKSRC}/configure 
FILES+= ${WRKSRC}/*.pc.in
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in
FILES+= ${WRKSRC}/*/*/*/Makefile.in




post-patch:
	${REINPLACE_CMD} -e 's,librevenge-0.0,librevenge,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-stream-0.0,librevenge-stream,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-generators-0.0,librevenge-generators,g' ${FILES}

	${REINPLACE_CMD} -e 's,staroffice-@STAROFFICE_MAJOR_VERSION@.@STAROFFICE_MINOR_VERSION@,staroffice,g' ${FILES}
	${REINPLACE_CMD} -e 's,staroffice-$$STAROFFICE_MAJOR_VERSION.$$STAROFFICE_MINOR_VERSION,staroffice,g' ${FILES}

	${REINPLACE_CMD} -e 's,staroffice_@STAROFFICE_MAJOR_VERSION@_@STAROFFICE_MINOR_VERSION@,staroffice,g' ${FILES}
	${REINPLACE_CMD} -e 's,staroffice-@STAROFFICE_MAJOR_VERSION@.@STAROFFICE_MINOR_VERSION@,staroffice,g' ${FILES}



.include <bsd.port.mk>
