#
# $Id$
#
PORTNAME=	beecrypt
PORTVERSION=	4.2.1
CATEGORIES=	security
MASTER_SITES=	SF
PKGNAMEPREFIX=	lib

MAINTAINER= homeunix7@gmail.com
COMMENT=	BeeCrypt is an open source cryptography library

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --without-java
CONFIGURE_ARGS+= --with-python=no
CONFIGURE_ARGS+= --disable-openmp
USES+=	gmake
USE_LDCONFIG=	yes

post-patch:
	${REINPLACE_CMD} -e "s|-pthread|${PTHREAD_LIBS}|g" ${WRKSRC}/configure

.include <bsd.port.pre.mk>

.if ${ARCH} == "powerpc"
BROKEN=		Does not compile on powerpc
.endif

.include <bsd.port.post.mk>
#EOF
