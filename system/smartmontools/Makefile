#
# $Id$
#
PORTNAME=	smartmontools
PORTVERSION=	7.1
CATEGORIES=	sysutils
MASTER_SITES=	SF

MAINTAINER=	samm@os2.kiev.ua
COMMENT=	S.M.A.R.T. disk monitoring tools

USES=		alias gmake shebangfix
SHEBANG_FILES=	examplescripts/Example5
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --disable-dependency-tracking
CONFIGURE_ARGS+= --enable-sample
CONFIGURE_ARGS+= --with-nvme-devicescan=yes
CONFIGURE_ARGS+= --with-initscriptdir=${PREFIX}/etc/rc.d
CONFIGURE_ARGS+= --sysconfdir=${PREFIX}/etc/smartd

SUB_FILES=	pkg-message smart
USE_RC_SUBR=	smartd

PORTEXAMPLES=	*

post-patch:
	${REINPLACE_CMD} -e 's| install-initdDATA| |' ${WRKSRC}/Makefile.in

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/periodic/daily
	${INSTALL_SCRIPT} ${WRKDIR}/smart \
		${STAGEDIR}${PREFIX}/etc/periodic/daily/310.smart
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/*.conf ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/smartd_warning.sh ${STAGEDIR}${EXAMPLESDIR}/smartd-warning.sh

.include <bsd.port.mk>
#EOF
