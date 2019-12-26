# Created by: Dmitry Frolov <frol@nov.net>
# $FreeBSD: head/sysutils/ipmitool/Makefile 431876 2017-01-19 14:06:37Z zi $

PORTNAME=	ipmitool
PORTVERSION=	1.8.18
CATEGORIES=	sysutils
MASTER_SITES=	SF

MAINTAINER=	zi@FreeBSD.org
COMMENT=	CLI to manage IPMI systems

USES=		cpe tar:bzip2 gmake
GNU_CONFIGURE=	yes
SUB_FILES=	status-ipmi.sh

PERIODIC_DIR=	etc/periodic/daily

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
#CFLAGS+=	-ggdb -Wall

.if exists(/usr/include/sys/ipmi.h)
CONFIGURE_ARGS+=	--enable-intf-open
.else
CONFIGURE_ARGS+=	--disable-intf-open
.endif

EXTRA_PATCHES=	${PATCHDIR}/extra-patch-Makefile.in

#FREEIPMI_LIB_DEPENDS=	libfreeipmi.so:sysutils/freeipmi
#3FREEIPMI_CPPFLAGS=	-I${LOCALBASE}/include
#FREEIPMI_LDFLAGS=	-L${LOCALBASE}/lib
#FREEIPMI_CONFIGURE_ENABLE=	intf-free

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/${PERIODIC_DIR}
	${INSTALL_SCRIPT} ${WRKDIR}/status-ipmi.sh ${STAGEDIR}${PREFIX}/${PERIODIC_DIR}/400.status-ipmi

.include <bsd.port.mk>
#EOF

