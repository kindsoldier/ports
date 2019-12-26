#
# $Id$
#
PORTNAME=	lldpd
PORTVERSION=	0.7.13
CATEGORIES=	net-mgmt
MASTER_SITES=	http://media.luffy.cx/files/${PORTNAME}/

MAINTAINER=	freebsd@simweb.ch
COMMENT=	LLDP (802.1ab)/CDP/EDP/SONMP/FDP daemon and SNMP subagent

LIB_DEPENDS+=	libevent.so:devel/libevent
LIB_DEPENDS+=	libjansson.so:devel/libjansson
LIB_DEPENDS=	libxml2.so:text/libxml2


USES+=		gmake
USE_LDCONFIG=	yes
USE_RC_SUBR=	${PORTNAME}
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-privsep \
		--with-privsep-chroot=/var/empty \
		--with-lldpd-ctl-socket=/var/run/lldpd.socket \
		--with-lldpd-pid-file=/var/run/lldpd.pid \
		--with-pkgconfigdir=${PREFIX}/lib/pkgconfig
INSTALL_TARGET=	install-strip
CFLAGS+=	-I${LOCALBASE}/include
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

USERS=	_lldpd
GROUPS=	_lldpd

CONFIGURE_ARGS+= --enable-cdp
CONFIGURE_ARGS+= --enable-edp
CONFIGURE_ARGS+= --enable-fdp
CONFIGURE_ARGS+= --enable-sonmp
CONFIGURE_ARGS+= --with-json
CONFIGURE_ARGS+= --with-readline
#CONFIGURE_ARGS+= --with-snmp
CONFIGURE_ARGS+= --with-xml

post-patch:
	${REINPLACE_CMD} -e 's,libxml-2.0,libxml2,g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,libxml-2,libxml2,g' ${WRKSRC}/configure


post-install:
	${INSTALL_DATA} ${FILESDIR}/README.bsd ${STAGEDIR}${DOCSDIR}



.include <bsd.port.mk>
#EOF
