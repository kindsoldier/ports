#
# $Id$
#
PORTNAME=	gindent
PORTVERSION=	2.2.10
CATEGORIES=	devel
MASTER_SITES=	GNU/indent
DISTNAME=	indent-${PORTVERSION}

MAINTAINER=	johans@FreeBSD.org
COMMENT=	GNU indent

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include -DBERKELEY_DEFAULTS=1
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--program-prefix=g
MAKE_JOBS_UNSAFE= yes

CONFIGURE_ARGS+= --disable-nls

INFO=		indent

post-patch:
	${GREP} -lR "malloc\.h" ${WRKSRC} | ${XARGS} ${REINPLACE_CMD} -e \
		's|malloc\.h|stdlib.h|g'


.include <bsd.port.mk>
#EOF
