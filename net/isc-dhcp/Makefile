#
# $Id: Makefile 2220 2009-08-24 09:32:33Z root $
# $URL: file:///usr2/svn/ports5/network-servers/isc-dhcp3/Makefile $
#
PORTNAME=	isc-dhcp
PORTVERSION=	${DISTVERSION:S/-P/./}

DISTVERSION= 4.3.5
DISTNAME=	dhcp-${DISTVERSION}
MASTER_SITES=	ftp://ftp.isc.org/isc/dhcp/${DISTVERSION}/
CATEGORIES=	net

MANTAINER=	ziggi@the.home
COMMENT=	ISC Dynamic Host Configuration Protocol client and server code

MAKE_JOBS_UNSAFE=	yes

GNU_CONFIGURE=	yes
GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --enable-dhcpv6

CONFIGURE_ARGS+=  --sysconfdir=${PREFIX}/etc
CONFIGURE_ARGS+=  --localstatedir=/var
CONFIGURE_ARGS+=  --includedir=${PREFIX}/include
CONFIGURE_ARGS+=  --mandir=${PREFIX}/man

CPPFLAGS+=	-D_PATH_DHCLIENT_SCRIPT='\"${PREFIX}/sbin/isc-dhclient-script\"'
#-D_PATH_DHCLIENT_CONF='\"${PREFIX}/etc/dhclient.conf\"' -D_PATH_DHCPD_CONF='\"${PREFIX}/etc/dhcpd.conf\"'

#CONFIGURE_ARGS+= --program-transform-name="s,dhclient,isc-dhclient,"
#CONFIGURE_ARGS+= --program-transform-name="s,^,isc-,"
CONFIGURE_ARGS+= --program-prefix="isc-"

PKGINSTALL=	${WRKDIR}/pkg-install
PKGDEINSTALL=	${WRKDIR}/pkg-deinstall

USE_RC_SUBR+=	isc-dhclient
USE_RC_SUBR+=	isc-dhclient6
USE_RC_SUBR+=	isc-dhcpd
USE_RC_SUBR+=	isc-dhcpd6
USE_RC_SUBR+=	isc-dhcrelay
USE_RC_SUBR+=	isc-dhcrelay6

PORTEXAMPLES=	*

post-configure:
	${REINPLACE_CMD} -e 's!/etc/dhcpd.conf!${PREFIX}/etc/dhcpd.conf!' \
	    ${WRKSRC}/includes/dhcpd.h
	${REINPLACE_CMD}  -e 's!/etc/dhclient.conf!${PREFIX}/etc/dhclient.conf!' \
	    ${WRKSRC}/includes/dhcpd.h
	${REINPLACE_CMD}  -e 's!/sbin/dhclient-script!${PREFIX}/sbin/isc-dhclient-script!' \
	    ${WRKSRC}/includes/dhcpd.h

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/client/dhclient.conf.example ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/server/dhcpd.conf.example   ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/client/scripts/freebsd \
	            ${STAGEDIR}${PREFIX}/sbin/isc-dhclient-script


.include <bsd.port.mk>
#EOF
