# Created by: Alexander V. Chernikov <melifaro@FreeBSD.org>
# $FreeBSD: head/net/bird2/Makefile 508497 2019-08-10 15:40:38Z olivier $

PORTNAME=	bird
DISTVERSION=	2.0.5
CATEGORIES=	net
MASTER_SITES=	ftp://bird.network.cz/pub/bird/
PKGNAMESUFFIX=	2

MAINTAINER=	olivier@FreeBSD.org
COMMENT=	Dynamic IP routing daemon

USES=		bison gmake ncurses readline

USE_CSTD=	gnu99
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--localstatedir=/var
USE_RC_SUBR=	bird
SUB_FILES=	pkg-message

#GROUPS=	birdvty

MAKE_JOBS_UNSAFE=	yes

CONFIGURE_ARGS+=--with-protocols="bfd bgp mrt ospf static pipe radv rip"


#post-patch:
#	${REINPLACE_CMD} -e 's|\.example|\.sample|g' ${WRKSRC}/Makefile.in
#	${MV} ${WRKSRC}/doc/bird.conf ${WRKSRC}/doc/bird.conf.sample

PORTEXAMPLES= *

post-install:
	${MKDIR} -p ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/bird.conf.example ${STAGEDIR}${EXAMPLESDIR}


.include <bsd.port.mk>
