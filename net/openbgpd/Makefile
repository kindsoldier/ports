#
# $Id$
#
PORTNAME=	openbgpd
PORTVERSION=	5.2.20121209
CATEGORIES=	net
MASTER_SITES=	OPENBSD/OpenBGPD
DISTNAME=	${PORTNAME}-4.6
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Free implementation of the Border Gateway Protocol, Version 4

CONFLICTS=	zebra-[0-9]* quagga-[0-9]*

WRKSRC=		${WRKDIR}
USES=		uidfix tar:tgz
USE_RC_SUBR=	${PORTNAME}
SUB_FILES=	pkg-message

BGPD_OWNER=	_bgpd
BGPD_OWNER_ID=	130
BGPD_GROUP=	_bgpd
BGPD_GROUP_ID= 130

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install

SUB_FILES+= pkg-deinstall pkg-install

SUB_LIST+= BGPD_OWNER=${BGPD_OWNER}
SUB_LIST+= BGPD_GROUP=${BGPD_GROUP}
SUB_LIST+= BGPD_OWNER_ID=${BGPD_OWNER_ID}
SUB_LIST+= BGPD_GROUP_ID=${BGPD_GROUP_ID}
SUB_LIST+= RUN_DIR=${RUN_DIR}
SUB_LIST+= LOG_DIR=${LOG_DIR}
SUB_LIST+= CONF_DIR=${CONF_DIR}

#MAKE_ARGS+=	-DIPV6_LINKLOCAL_PEER

post-patch:
	@${REINPLACE_CMD} -e "s|%%PREFIX%%|${PREFIX}|g"	\
		${WRKSRC}/bgpd/bgpd.8			\
		${WRKSRC}/bgpd/bgpd.conf.5		\
		${WRKSRC}/bgpctl/bgpctl.8

.include <bsd.port.mk>
#EOF
