#
# $Id$
#
PORTNAME=	rarian
PORTVERSION=	0.8.1
CATEGORIES=	textproc gnome
MASTER_SITES=	GNOME

MAINTAINER=	onborodin@gmail.com
COMMENT=	An OMF help system based on the Freedesktop specification

RUN_DEPENDS+=	bash:lang/bash
RUN_DEPENDS+=	xsltproc:text/libxslt
RUN_DEPENDS+=	${LOCALBASE}/bin/gawk:text/gawk


RUN_DEPENDS+= ${LOCALBASE}/share/xml/dtd/docbook/4.4/catalog.xml:text/dtd-docbook-xml44
RUN_DEPENDS+= ${LOCALBASE}/share/xml/dtd/docbook/4.3/catalog.xml:text/dtd-docbook-xml43
RUN_DEPENDS+= ${LOCALBASE}/share/xml/dtd/docbook/4.2/catalog.xml:text/dtd-docbook-xml42
RUN_DEPENDS+= ${LOCALBASE}/share/xml/dtd/docbook/4.1.2/catalog.xml:text/dtd-docbook-xml412
#RUN_DEPENDS+= ${LOCALBASE}/share/xml/xsl/docbook/catalog.xml:sgml-data/docbook-xsl

BUILD_DEPENDS+= ${RUN_DEPENDS}

#CONFLICTS=	scrollkeeper-[0-9]*

USES+=		tar:bzip2
USES+=		gmake
#USE_PYTHON=	yes
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS+= --with-convert-dir=${LOCALBASE}/share/omf
CONFIGURE_ARGS+= --datadir=${PREFIX}/share
CONFIGURE_ARGS+= --localstatedir=/var
CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" LDFLAGS="-L${LOCALBASE}/lib"

CONFIGURE_ARGS+= --disable-scrollkeeper-compat
CONFIGURE_ARGS+= --enable-omf-read
CONFIGURE_ARGS+= --enable-skdb-update


.include <bsd.port.pre.mk>

post-patch:
	${REINPLACE_CMD} -e 's|/lib/rarian|/db/rarian|' ${WRKSRC}/util/Makefile.in
	${REINPLACE_CMD} -e 's|@localstatedir@/lib/rarian|@localstatedir@/db/rarian|g ; \
		s|getopt|${LOCALBASE}/bin/getopt|' \
	    	${WRKSRC}/util/rarian-sk-config.in \
		${WRKSRC}/util/rarian-sk-extract.in \
		${WRKSRC}/util/rarian-sk-rebuild.in \
		${WRKSRC}/util/rarian-sk-update.in
	${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|' \
	    	${WRKSRC}/librarian/rarian-main.c \
		${WRKSRC}/librarian/rarian-man.c \
		${WRKSRC}/librarian/rarian-info.c

.include <bsd.port.post.mk>
#EOF

