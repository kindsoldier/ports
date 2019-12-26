#
# $Id$
#
PORTNAME=	shellinabox
PORTVERSION=	2.19
DISTVERSIONPREFIX=	v
CATEGORIES=	www

MAINTAINER=	olivier@FreeBSD.org
COMMENT=	Publish command line shell through AJAX interface

USE_GITHUB=	yes
GH_ACCOUNT=	shellinabox

#OPTIONS_DEFINE=	CORES NOLOGIN
#CORES_DESC=	Patch shellinaboxd to enable core dumps
#NOLOGIN_DESC=	Login through ssh (not through login)
#NOLOGIN_CONFIGURE_ON=	--disable-login

USES=	autoreconf libtool
GNU_CONFIGURE=	yes

USE_RC_SUBR=	shellinaboxd

OWNER=	shellinabox
GROUP=	shellinabox

OWNER_ID=	139
GROUP_ID=	139

PKGDEINSTALL=	${WRKDIR}/pkg-install
SUB_FILES=	pkg-install

SUB_LIST+=	OWNER=${OWNER}
SUB_LIST+=	GROUP=${GROUP}

SUB_LIST+=	OWNER_ID=${OWNER_ID}
SUB_LIST+=	GROUP_ID=${GROUP_ID}

SUB_LIST+=	NAME=${PORTNAME}
SUB_LIST+=	ETCDIR=${PREFIX}/etc/${PORTNAME}


.include <bsd.port.options.mk>

post-patch:
#	${REINPLACE_CMD} \
#		-e 's|prctl(PR_SET_DUMPABLE,|// &|' \
#		-e 's|setrlimit(RLIMIT_CORE,|// &|' \
#			${WRKSRC}/shellinabox/shellinaboxd.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/shellinaboxd ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/shellinaboxd.1 ${STAGEDIR}${MAN1PREFIX}/man/man1
	${MKDIR} ${STAGEDIR}${ETCDIR}

.include <bsd.port.mk>
#EOF
