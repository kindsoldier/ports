#
# $Id$
#
PORTNAME=	dahdi-tools
PORTVERSION=	2.6.1
CATEGORIES=	misc
MASTER_SITES=	${MASTER_SITE_LOCAL}

MAINTAINER=	fjoe@FreeBSD.org
COMMENT=	DAHDI userland utilities and libraries

LIB_DEPENDS+= newt.0:${PORTSDIR}/devel-libs/libnewt
LIB_DEPENDS+= slang.2:${PORTSDIR}/devel-libs/libslang

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
CONFIGURE_ARGS=	--with-dahdi=${LOCALBASE}/include --sysconfdir=${PREFIX}/etc --with-newt=${LOCALBASE}
CFLAGS+= -I${LOCALBASE}/include

#CC=		gcc

MAN8+= dahdi_cfg.8
MAN8+= dahdi_maint.8
MAN8+= dahdi_monitor.8
MAN8+= dahdi_scan.8
MAN8+= dahdi_test.8
MAN8+= dahdi_tool.8
MAN8+= fxotune.8


post-patch:
	${REINPLACE_CMD} -e 's,/etc,${PREFIX}/etc,g'\
		${WRKSRC}/dahdi_cfg.c ${WRKSRC}/fxotune.c\
		${WRKSRC}/doc/dahdi_cfg.8 ${WRKSRC}/doc/fxotune.8

post-install:
	${MKDIR} ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/system.conf.sample ${EXAMPLESDIR}/


.include <bsd.port.mk>
#EOF


