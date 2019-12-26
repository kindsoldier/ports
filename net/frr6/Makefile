#
# $Id$
#
PORTNAME=	frr
PORTVERSION=	6.0.2
CATEGORIES=	net
MASTER_SITES=   https://github.com/FRRouting/frr/releases/download/frr-${PORTVERSION}/

PKGNAMESUFFIX=	${PORTVERSION:R}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Free RIPv1, RIPv2, OSPFv2, BGP4 route software

BUILD_DEPENDS+=	gawk:text/gawk
LIB_DEPENDS+= libjson-c.so:devel/libjson-c

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
USES+=		gmake readline compiler:c++11-lang perl5 makeinfo python:2.7-3.6,build bison 

LDFLAGS+= -L${LOCALBASE}/lib
CFLAGS+= -I${LOCALBASE}/include
CPPFLAGS+= -I${LOCALBASE}/include

CONFIGURE_ARGS+= --disable-shared
CONFIGURE_ARGS+= --enable-static


CONFIGURE_ARGS+= --disable-ldpd
CONFIGURE_ARGS+= --disable-ospfapi
CONFIGURE_ARGS+= --disable-ospfclient
CONFIGURE_ARGS+= --disable-pimd
CONFIGURE_ARGS+= --disable-snmp
CONFIGURE_ARGS+= --disable-watchfrr
CONFIGURE_ARGS+= --disable-zeromq

CONFIGURE_ARGS+= --enable-bfdd
CONFIGURE_ARGS+= --enable-pbrd
CONFIGURE_ARGS+= --enable-babeld
CONFIGURE_ARGS+= --enable-eigrpd
CONFIGURE_ARGS+= --enable-isisd
CONFIGURE_ARGS+= --enable-sharpd

CONFIGURE_ARGS+= --enable-fpm
CONFIGURE_ARGS+= --enable-vtysh

CONFIGURE_ARGS+= --enable-exampledir=${EXAMPLESDIR}/
CONFIGURE_ARGS+= --enable-group=${FRR_GROUP}

CONFIGURE_ARGS+= --enable-user=${FRR_OWNER}
CONFIGURE_ARGS+= --includedir=${PREFIX}/include 
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --localstatedir=${RUN_DIR}
CONFIGURE_ARGS+= --mandir=${PREFIX}/man 
CONFIGURE_ARGS+= --sysconfdir=${CONF_DIR}
CONFIGURE_ARGS+= --without-libpam

FRR_OWNER=	${PORTNAME}
FRR_OWNER_ID=	795
FRR_GROUP=	${PORTNAME}
FRR_GROUP_ID= 795

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install

USE_RC_SUBR+= babeld.sh
USE_RC_SUBR+= bfdd.sh
USE_RC_SUBR+= bgpd.sh
USE_RC_SUBR+= eigrpd.sh
USE_RC_SUBR+= isisd.sh
USE_RC_SUBR+= ospf6d.sh
USE_RC_SUBR+= ospfd.sh
USE_RC_SUBR+= pbrd.sh
USE_RC_SUBR+= ripd.sh
USE_RC_SUBR+= ripngd.sh
USE_RC_SUBR+= sharpd.sh
USE_RC_SUBR+= staticd.sh
USE_RC_SUBR+= zebra.sh

SUB_FILES+= pkg-deinstall pkg-install

SUB_LIST+= FRR_OWNER=${FRR_OWNER}
SUB_LIST+= FRR_GROUP=${FRR_GROUP}
SUB_LIST+= FRR_OWNER_ID=${FRR_OWNER_ID}
SUB_LIST+= FRR_GROUP_ID=${FRR_GROUP_ID}
SUB_LIST+= RUN_DIR=${RUN_DIR}
SUB_LIST+= LOG_DIR=${LOG_DIR}
SUB_LIST+= CONF_DIR=${CONF_DIR}
SUB_LIST+= RC_SUBR=/etc/rc.subr

do-build:
	cd ${WRKSRC} && ${GMAKE} -j${MAKE_JOBS_NUMBER}

do-install:
	${MKDIR} -p ${STAGEDIR}
	cd ${WRKSRC} && ${GMAKE} ${INSTALL_TARGET} DESTDIR=${STAGEDIR}

.include <bsd.port.post.mk>
#EOF
