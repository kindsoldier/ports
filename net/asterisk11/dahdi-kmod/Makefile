#
# $Id$
#
PORTNAME=	dahdi-kmod
PORTVERSION=	2.6.1
CATEGORIES=	misc
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	fjoe

MAINTAINER=	fjoe@FreeBSD.org
COMMENT=	Digium/Asterisk Hardware Device Interface

#RUN_DEPENDS=	${LOCALBASE}/sbin/dahdi_cfg:${PORTSDIR}/misc/dahdi

WRKSRC=		${WRKDIR}/${DISTNAME}
MAKEFILE=	BSDmakefile
#USE_RC_SUBR=	dahdi
MAKE_ARGS=	NO_FETCH=yes WITHOUT_HEADERS=yes

post-extract:

post-install:
	cd ${WRKSRC}/bsd-kmod/dahdi && ${MAKE} install

.include <bsd.port.mk>
#EOF

