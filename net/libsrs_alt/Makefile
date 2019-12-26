#
# $Id$
#
PORTNAME=		libsrs_alt
DISTVERSION=		1.0
CATEGORIES=		mail
MASTER_SITES=		http://opsec.eu/src/srs/

MAINTAINER=		pi@FreeBSD.org
COMMENT=		Sender Rewriting Scheme C Implementation

USES=			gmake tar:bzip2
USE_LDCONFIG=		yes
GNU_CONFIGURE=		yes

CONFIGURE_ARGS+=	--with-base64compat

post-patch:
	${REINPLACE_CMD} -E 's,^(test_LDFLAGS.*$$),\1 -lcompat,' \
		${WRKSRC}/Makefile.in

post-stage:
	${MV} ${STAGEDIR}${PREFIX}/bin/srs ${STAGEDIR}${PREFIX}/bin/srs_alt

.include <bsd.port.mk>
#EOF

