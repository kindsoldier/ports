#
# $Id: Makefile 2383 2009-09-10 22:34:53Z root $
#
PORTNAME=	liboggz
DISTVERSION=	1.1.1
CATEGORIES=	audio
MASTER_SITES=	http://downloads.xiph.org/releases/liboggz/ #CSME

MAINTAINER=	onborodin@gmail.com
COMMENT=	Simple Ogg API

LIB_DEPENDS+=	libogg.so:media/libogg

INSTALLS_SHLIB=	yes
GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --with-ogg=${LOCALBASE} 
CONFIGURE_ARGS+= --mandir=${PREFIX}/man 

CONFIGURE_ARGS+= --program-transform-name=""
CONFIGURE_ENV+=	HAVE_DOCBOOK2HTML=false 
CONFIGURE_ENV+=	HAVE_DOCBOOKTOMAN=false 
CONFIGURE_ENV+=	HAVE_DOXYGEN=false 
CONFIGURE_ENV+=	HAVE_VALGRIND=false

post-patch:
	${REINPLACE_CMD} -e 's/timezone/0/' \
	  ${WRKSRC}/src/tools/oggz-chop/httpdate.c \
	  ${WRKSRC}/src/tools/oggz-chop/httpdate_test.c
	${REINPLACE_CMD} -e 's|install-data-local install-man|install-man|' \
	  ${WRKSRC}/doc/Makefile.in


.include <bsd.port.mk>
#EOF

