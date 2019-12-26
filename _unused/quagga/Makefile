#
# $Id$
#
PORTNAME=	quagga
PORTVERSION=	1.2.4
CATEGORIES=	net
MASTER_SITES=	SAVANNAH

MAINTAINER=	onborodin@gmail.com
COMMENT=	Free RIPv1, RIPv2, OSPFv2, BGP4 route software

CONFLICTS=	openbgpd-* zebra-*

BUILD_DEPENDS+=	gawk:text/gawk

#LIB_DEPENDS=	libdlmalloc.so:devel/libdlmalloc
#LDFLAGS+=		-L${LOCALBASE}/lib -ldlmalloc

LDFLAGS+= -L${LOCALBASE}/lib
CFLAGS+= -I${LOCALBASE}/include

.include <bsd.port.pre.mk>


VAR_PREFIX= 	/var
CONF_SUBDIR=	etc/${PORTNAME}
PLIST_SUB= CONF_SUBDIR=${CONF_SUBDIR}
CONF_DIR= 	${PREFIX}/etc/${PORTNAME}
RUN_DIR= 	${VAR_PREFIX}/run/${PORTNAME}
LOG_DIR= 	${VAR_PREFIX}/log/${PORTNAME}

EXAMPLES_SUBDIR=	share/examples/${PORTNAME}
EXAMPLES_DIR= 	${PREFIX}/${EXAMPLES_SUBDIR}

INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes
USE_PERL5=	build
GNU_CONFIGURE=	yes
USES+=		gmake readline compiler:c11 perl5 makeinfo

CONFIGURE_ARGS+= --disable-snmp
CONFIGURE_ARGS+= --disable-babeld
CONFIGURE_ARGS+= --disable-isisd
CONFIGURE_ARGS+= --disable-ospfapi
CONFIGURE_ARGS+= --disable-ospfclient

CONFIGURE_ARGS+= --enable-vtysh
CONFIGURE_ARGS+= --enable-rtadv=yes

CONFIGURE_ARGS+= --enable-exampledir=${EXAMPLESDIR}/
CONFIGURE_ARGS+= --enable-group=${QUAGGA_GROUP}

CONFIGURE_ARGS+= --enable-user=${QUAGGA_OWNER}
CONFIGURE_ARGS+= --includedir=${PREFIX}/include 
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --localstatedir=${RUN_DIR}
CONFIGURE_ARGS+= --mandir=${PREFIX}/man 
CONFIGURE_ARGS+= --sysconfdir=${CONF_DIR}
CONFIGURE_ARGS+= --without-libpam
CONFIGURE_ARGS+= --disable-pimd
#CONFIGURE_ARGS+= --disable-backtrace
#CONFIGURE_ARGS+= --enable-gcc-rdynamic
#CONFIGURE_ARGS+= --enable-bgp-announce

QUAGGA_OWNER=	${PORTNAME}
QUAGGA_OWNER_ID=	195
QUAGGA_GROUP=	${PORTNAME}
QUAGGA_GROUP_ID= 195

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install

USE_RC_SUBR+= bgpd.sh
USE_RC_SUBR+= ospf6d.sh
USE_RC_SUBR+= ospfd.sh
USE_RC_SUBR+= ripd.sh
USE_RC_SUBR+= ripngd.sh
USE_RC_SUBR+= zebra.sh

SUB_FILES+= pkg-deinstall pkg-install

SUB_LIST+= QUAGGA_OWNER=${QUAGGA_OWNER}
SUB_LIST+= QUAGGA_GROUP=${QUAGGA_GROUP}
SUB_LIST+= QUAGGA_OWNER_ID=${QUAGGA_OWNER_ID}
SUB_LIST+= QUAGGA_GROUP_ID=${QUAGGA_GROUP_ID}
SUB_LIST+= RUN_DIR=${RUN_DIR}
SUB_LIST+= LOG_DIR=${LOG_DIR}
SUB_LIST+= CONF_DIR=${CONF_DIR}
SUB_LIST+= RC_SUBR=/etc/rc.subr

post-extract:
	${REINPLACE_CMD} -e "s|/usr/local/etc|${CONF_DIR}|g" ${WRKSRC}/doc/*.8

INFO= quagga

PORTEXAMPLES=	*

.include <bsd.port.post.mk>
#EOF
