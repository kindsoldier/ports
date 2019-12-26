#
# $Id#
#
PORTNAME=	joe
PORTVERSION=	4.1
CATEGORIES?=	editors
MASTER_SITES=	SF/joe-editor/JOE%20sources/joe-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Joe's Own Editor

BUILD_DEPENDS=	aspell:text/aspell
RUN_DEPENDS=	aspell:text/aspell
LIB_DEPENDS+=	libiconv.so:text/libiconv

USES=		gmake
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib -liconv

ALL_TARGET=	${PORTNAME}

post-patch:
	${REINPLACE_CMD} -e 's|docs/README.old docs/man.md ||' ${WRKSRC}/Makefile.in

post-install:
.for man in jmacs jpico jstar rjoe
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf joe.1 ${man}.1
.endfor

.include <bsd.port.mk>
#EOF
