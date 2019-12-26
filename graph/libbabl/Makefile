#
# $Id$
#
PORTNAME=	babl
PORTVERSION=	0.1.14 #0.1.10
CATEGORIES=	x11
MASTER_SITES+=	http://ftp.gimp.org/pub/%SUBDIR%/
MASTER_SITES+=	http://www.mirrorservice.org/sites/ftp.gimp.org/pub/%SUBDIR%/
MASTER_SITES+=	${MASTER_SITE_RINGSERVER:S,%SUBDIR%,graphics/%SUBDIR%,}
MASTER_SITE_SUBDIR=	babl/${PORTVERSION:R}
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Dynamic pixel format conversion library

USE_LDCONFIG=	yes
USES+=		tar:bzip2
GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --enable-static
CONFIGURE_ARGS+= --disable-mmx
CONFIGURE_ARGS+= --disable-sse
CONFIGURE_ARGS+= --disable-altivec


post-patch:
.for file in configure Makefile.in *.pc.in
	set -x; \
	for file in $$(find ${WRKSRC} -name "${file}"); do \
	  ${REINPLACE_CMD} -e 's|-$$(BABL_API_VERSION)||g' 	$${file}; \
	  ${REINPLACE_CMD} -e 's|-@BABL_API_VERSION@||g' 	$${file}; \
	  ${REINPLACE_CMD} -e 's|_@BABL_API_VERSION@||g' 	$${file}; \
	  ${REINPLACE_CMD} -e 's|-$${BABL_API_VERSION}||g' 	$${file}; \
	  ${REINPLACE_CMD} -e 's|_$${BABL_API_VERSION}||g' 	$${file}; \
	done
.endfor
	${REINPLACE_CMD} -e 's|BABL_LIBRARY_VERSION=.*|BABL_LIBRARY_VERSION=1:0:1|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|docs$$||g' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
#EOF
