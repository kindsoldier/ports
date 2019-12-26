#
# $IId$
#
PORTNAME=	scrollkeeper
PORTVERSION=	0.3.14
CATEGORIES=	textproc gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	onborodin@gmail.com
COMMENT=	An Open Document Cataloging Project

BUILD_DEPENDS+= ${LOCALBASE}/share/xsl/docbook/lib/lib.xsl:text/docbook-xsl
BUILD_DEPENDS+= ${LOCALBASE}/share/xml/dtd/docbook/4.4/catalog.xml:text/dtd-docbook-xml44
BUILD_DEPENDS+= ${LOCALBASE}/share/xml/dtd/docbook/4.3/catalog.xml:text/dtd-docbook-xml43
BUILD_DEPENDS+= ${LOCALBASE}/share/xml/dtd/docbook/4.2/catalog.xml:text/dtd-docbook-xml42
BUILD_DEPENDS+= ${LOCALBASE}/share/xml/dtd/docbook/4.1.2/catalog.xml:text/dtd-docbook-xml412


BUILD_DEPENDS=	intltool-extract:devel/intltool
RUN_DEPENDS=	intltool-extract:devel/intltool

RUN_DEPENDS=	xmlcatalog:text/libxml2
BUILD_DEPENDS=	xmlcatalog:text/libxml2

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libxml2.so:text/libxml2
LIB_DEPENDS+=	libxslt.so:text/libxslt
LIB_DEPENDS+=	libiconv.so:text/libiconv


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
USE_BISON=	build
USE_LDCONFIG=	yes
CONFIGURE_ARGS+= --localstatedir=/var 
CONFIGURE_ARGS+= --datadir=${PREFIX}/share
CONFIGURE_ARGS+= --with-omfdirs=${PREFIX}/share/omf
CONFIGURE_ARGS+= --with-xml-catalog=${LOCALBASE}/share/xml/catalog.xml
CFLAGS+=	-I${LOCALBASE}/include
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib
#CONFIGURE_ARGS+= --disable-nls
#CONFIGURE_ARGS+= --disable-rpath
#CONFIGURE_ARGS+= --with-included-gettext

PLIST_SUB=	LOCALBASE=${LOCALBASE}

post-patch:
	${FIND} ${WRKSRC} -name Makefile.in | ${XARGS} ${REINPLACE_CMD} -e   \
		's|[(]LN_S[)] -f -n|(LN_S) -f|g'
	${REINPLACE_CMD} -e 's|/usr/share/locale|${PREFIX}/share/locale|g' \
		${WRKSRC}/libs/scrollkeeper.h.in
	${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|g' \
		${WRKSRC}/extract/dtds/Makefile.in

post-install:
	cd ${STAGEDIR}${PREFIX}/lib && ${LN} -sf libscrollkeeper.so.0 libscrollkeeper.so

.include <bsd.port.mk>
#EOF
