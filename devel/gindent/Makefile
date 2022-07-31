PORTNAME=	gindent
DISTVERSION=	2.2.12
CATEGORIES=	devel
MASTER_SITES=	GNU/indent
DISTNAME=	indent-${DISTVERSION}

MAINTAINER=	moritz@schmi.tt
COMMENT=	C source code reformatter

USES=	gmake groff:run localbase:ldflags makeinfo

INFO=	indent

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--program-prefix=g --htmldir=${DOCSDIR}

CPPFLAGS+=	-DBERKELEY_DEFAULTS=1


post-patch:
	${GREP} -lR "malloc\.h" ${WRKSRC} | ${XARGS} ${REINPLACE_CMD} -e \
		's|malloc\.h|stdlib.h|g'

	${REINPLACE_CMD} -e 's,\$CFLAGS -Werror,\$CFLAGS,g' ${WRKSRC}/configure

.include <bsd.port.mk>
