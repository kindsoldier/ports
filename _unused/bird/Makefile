#
# $Id$
#
PORTNAME=	bird
PORTVERSION=	1.6.0
CATEGORIES=	net
MASTER_SITES+=	ftp://bird.network.cz/pub/bird/
MASTER_SITES+=	http://bird.mpls.in/distfiles/bird/

MAINTAINER=	melifaro@ipfw.ru
COMMENT=	Dynamic IP routing daemon

USES=	gmake bison
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --localstatedir=/var
###CONFIGURE_ARGS+= --enable-debug
MAKE_JOBS_UNSAFE= yes
USE_RC_SUBR=	bird

.include <bsd.port.pre.mk>

.if (${OSVERSION} > 110000)
BUILD_DEPENDS+=	makeinfo:system/texinfo
LIB_DEPENDS+=	libreadline.so:devel/libreadline
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
.endif

PORTEXAMPLES= *
PORTDOCS= *

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/*.example ${STAGEDIR}${EXAMPLESDIR}
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/*.html ${STAGEDIR}${DOCSDIR}


.include <bsd.port.post.mk>
#EOF

