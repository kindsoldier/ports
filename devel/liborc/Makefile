# Created by: mm
# $FreeBSD: head/devel/orc/Makefile 424427 2016-10-21 15:21:13Z mat $

PORTNAME=	orc
PORTVERSION=	0.4.25
CATEGORIES=	devel
MASTER_SITES= 	http://gstreamer.freedesktop.org/data/src/orc/
PKGNAMEPREFIX=  lib

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	Library and toolset to operate arrays of data


USES=		gmake pkgconfig tar:xz
PATHFIX_MAKEFILEIN=	configure
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS+=--disable-gtk-doc
INSTALL_TARGET=	install-strip

SUBDIRS=	orc orc-test tools

.include <bsd.port.options.mk>

MAKE_ARGS+=	SUBDIRS="${SUBDIRS}"

FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in
FILES+= ${WRKSRC}/*.pc.in


post-patch:
	${REINPLACE_CMD} \
		-E -e '/LIBS/s/-lrt(\ )*//; /LIBRT/s/-lrt//' \
		${WRKSRC}/configure

	${REINPLACE_CMD} -e 's,_@ORC_MAJORMINOR@,,g' 	${FILES}
	${REINPLACE_CMD} -e 's,-@ORC_MAJORMINOR@,,g' 	${FILES}
	${REINPLACE_CMD} -e 's,-$$ORC_MAJORMINOR,,g' 	${FILES}
	${REINPLACE_CMD} -e 's,-$$(ORC_MAJORMINOR),,g' 	${FILES}
	${REINPLACE_CMD} -e 's,liborc-0.4,liborc,g' 	${FILES}

.include <bsd.port.mk>
