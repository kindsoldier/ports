#
# $Id$
#
PORTNAME=	dialog4ports
PORTVERSION=	0.1.5
CATEGORIES=	ports-mgmt
MASTER_SITES+=	http://m1cro.me/dialog4ports/
MASTER_SITES+=	http://files.etoilebsd.net/dialog4ports/
MASTER_SITES+=	http://mirror.shatow.net/freebsd/${PORTNAME}/
#MASTER_SITES+=	http://m1cro.me/dialog4ports/:dialog
MASTER_SITES+=	http://files.etoilebsd.net/dialog4ports/:dialog
MASTER_SITES+=	ftp://invisible-island.net/dialog/:dialog
MASTER_SITES+=	http://mirror.shatow.net/freebsd/${PORTNAME}/:dialog

DISTFILES=	${DISTNAME}${EXTRACT_SUFX} ${DIALOGNAME}.tgz:dialog
DIALOGNAME=	dialog-1.1-20120706


MAINTAINER=	rum1cro@yandex.ru
COMMENT?=	Console Interface to configure ports

USES=		uidfix

NO_CCACHE=	yes
MAKE_ENV+=	__MAKE_CONF=/dev/null SRCCONF=/dev/null

.include <bsd.port.pre.mk>

MAKE_ENV+=	DIALOGSOURCES=${WRKDIR}/${DIALOGNAME}

do-configure:
	cd ${WRKDIR}/${DIALOGNAME}; ./configure

.include <bsd.port.post.mk>
#EOF

