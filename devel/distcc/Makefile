# Created by: Frerich Raabe <frerich.raabe@gmx.de>
# $FreeBSD: head/devel/distcc/Makefile 475448 2018-07-27 17:16:15Z fernape $
#   $MCom: ports/devel/distcc/Makefile,v 1.3 2007/10/21 02:46:13 ahze Exp $

PORTNAME=	distcc
PORTVERSION=	3.3.2
CATEGORIES=	devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Distribute compilation of C(++) code acrosss machines on a network

LIB_DEPENDS=	libpopt.so:devel/libpopt

GNU_CONFIGURE=	yes
USES=		autoreconf alias gmake libtool pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	distcc
GH_TAGNAME=	9a09372

#GROUPS=		distcc
#USERS=		distcc

OWNER=	${PORTNAME}
GROUP=	${PORTNAME}
OWNER_ID=	561
GROUP_ID=	561

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
USE_RC_SUBR= 	distccd
SUB_FILES+= 	pkg-install pkg-deinstall

SUB_LIST+= OWNER=${OWNER}
SUB_LIST+= GROUP=${GROUP}
SUB_LIST+= OWNER_ID=${OWNER_ID}
SUB_LIST+= GROUP_ID=${GROUP_ID}

SUB_LIST+= 	PREFIX=${PREFIX}


CCLINKDIR?=	libexec/distcc
CONFIGURE_ARGS=	--disable-Werror CC=${CC} PTHREAD_CC=${CC}
CONFIGURE_ENV=	PYTHON="${NONEXISTENT}"
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ARGS+= --without-avahi
CONFIGURE_ARGS+= --enable-rfc2553

SUB_FILES+=	pkg-message
SUB_LIST+=	DISTCCD_PIDFILE=/var/run/distccd.pid
USE_RC_SUBR=	distccd

.include <bsd.port.options.mk>

post-patch:
	${REINPLACE_CMD} -e 's|PKGDATADIR "|"${PREFIX}/share/pixmaps|' \
	    ${WRKSRC}/src/mon-gnome.c

post-install:
	${INSTALL_SCRIPT} ${WRKSRC}/pump ${STAGEDIR}${PREFIX}/bin


.include <bsd.port.mk>
