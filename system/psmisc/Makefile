# Created by: rantapaa@uswest.net
# $FreeBSD: head/sysutils/psmisc/Makefile 428152 2016-12-08 19:52:19Z tijl $

PORTNAME=	psmisc
PORTVERSION=	22.16
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/

MAINTAINER=	douglas@douglasthrift.net
COMMENT=	Port of the Linux pstree, killall, and pidof commands

BUILD_DEPENDS=	gsed:text/gsed
LIB_DEPENDS+=	libintl.so:devel/gettext

CONFLICTS=	pidof-[0-9]* pstree-2.[0-9]*

GNU_CONFIGURE=	yes
USES=		gmake ncurses

post-patch:
	${REINPLACE_CMD} -e '/^#define COMM_LEN / s|16|254|' ${WRKSRC}/src/comm.h

#post-install:
#	${LN} -fs killall ${STAGEDIR}${PREFIX}/bin/pidof

.include <bsd.port.mk>
#EOF
