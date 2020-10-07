#
# $Id$
#
PORTNAME=	frr
CATEGORIES=	net

PORTVERSION=	7.4
DISTVERSIONPREFIX=	frr-
USE_GITHUB=	yes
GH_ACCOUNT=	FRRouting


PKGNAMESUFFIX=	${PORTVERSION:R}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Free RIPv1, RIPv2, OSPFv2, BGP4 route software

BUILD_DEPENDS+=	gawk:text/gawk
LIB_DEPENDS+= libyang.so:devel/libyang
LIB_DEPENDS+= libjson-c.so:devel/libjson-c
LIB_DEPENDS+= libpcre.so:text/libpcre
LIB_DEPENDS+= libcares.so:net/libcares

.include <bsd.port.pre.mk>

VAR_PREFIX= 	/var
CONF_SUBDIR=	etc/${PORTNAME}
PLIST_SUB= CONF_SUBDIR=${CONF_SUBDIR}
CONF_DIR= 	${PREFIX}/etc/${PORTNAME}
RUN_DIR= 	${VAR_PREFIX}/run/${PORTNAME}
LOG_DIR= 	${VAR_PREFIX}/log/${PORTNAME}

EXAMPLES_SUBDIR= share/examples/${PORTNAME}
EXAMPLES_DIR= 	${PREFIX}/${EXAMPLES_SUBDIR}

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
USES+=	autoreconf libtool gmake bison tar:xz readline compiler:c++11-lang
USES+=	perl5 makeinfo python:2.7-3.6,build
USE_PERL5=	build
INSTALL_TARGET=	install-strip

LDFLAGS+= -L${LOCALBASE}/lib
CFLAGS+= -I${LOCALBASE}/include
CPPFLAGS+= -I${LOCALBASE}/include

CONFIGURE_ARGS+= --disable-ldpd
CONFIGURE_ARGS+= --disable-ospfapi
CONFIGURE_ARGS+= --disable-ospfclient
CONFIGURE_ARGS+= --disable-pimd
CONFIGURE_ARGS+= --disable-snmp
CONFIGURE_ARGS+= --disable-watchfrr
CONFIGURE_ARGS+= --disable-zeromq
CONFIGURE_ARGS+= --disable-doc
CONFIGURE_ARGS+= --disable-vrrpd


CONFIGURE_ARGS+= --enable-babeld
CONFIGURE_ARGS+= --enable-bfdd
CONFIGURE_ARGS+= --enable-eigrpd
CONFIGURE_ARGS+= --enable-fabricd
CONFIGURE_ARGS+= --enable-fpm
CONFIGURE_ARGS+= --enable-isisd
CONFIGURE_ARGS+= --enable-pbrd


CONFIGURE_ARGS+= --enable-sharpd
CONFIGURE_ARGS+= --enable-vtysh

#CONFIGURE_ARGS+= --enable-config-rollbacks
#LIB_DEPENDS+= libsqlite3.so:data/sqlite3

#CONFIGURE_ARGS+= --disable-bgp-vnc
#CONFIGURE_ARGS+= --enable-pcreposix
#CONFIGURE_ARGS+= --disable-bgp-bmp


CONFIGURE_ARGS+= --enable-rpki
LIB_DEPENDS+= librtr.so:net/librtr
LIB_DEPENDS+= libssh.so:net/libssh

CONFIGURE_ARGS+= --enable-static-bin
CONFIGURE_ARGS+= --disable-dependency-tracking
CONFIGURE_ARGS+= --without-libpam

CONFIGURE_ARGS+= --enable-group=${FRR_GROUP}
CONFIGURE_ARGS+= --enable-user=${FRR_OWNER}

CONFIGURE_ARGS+= --includedir=${PREFIX}/include 
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --localstatedir=${RUN_DIR}
CONFIGURE_ARGS+= --mandir=${PREFIX}/man 
CONFIGURE_ARGS+= --sysconfdir=${CONF_DIR}
CONFIGURE_ARGS+= --enable-exampledir=${EXAMPLESDIR}/
CONFIGURE_ARGS+= --with-vtysh-pager="cat"


FRR_OWNER=	${PORTNAME}
FRR_OWNER_ID=	795
FRR_GROUP=	${PORTNAME}
FRR_GROUP_ID=	795

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install

USE_RC_SUBR+= babeld
USE_RC_SUBR+= bfdd
USE_RC_SUBR+= bgpd
USE_RC_SUBR+= eigrpd
USE_RC_SUBR+= fabricd
USE_RC_SUBR+= isisd
USE_RC_SUBR+= ospf6d
USE_RC_SUBR+= ospfd
USE_RC_SUBR+= pbrd
USE_RC_SUBR+= ripd
USE_RC_SUBR+= ripngd
USE_RC_SUBR+= sharpd
USE_RC_SUBR+= staticd
USE_RC_SUBR+= zebra

SUB_FILES+= pkg-deinstall pkg-install

SUB_LIST+= FRR_OWNER=${FRR_OWNER}
SUB_LIST+= FRR_GROUP=${FRR_GROUP}
SUB_LIST+= FRR_OWNER_ID=${FRR_OWNER_ID}
SUB_LIST+= FRR_GROUP_ID=${FRR_GROUP_ID}
SUB_LIST+= RUN_DIR=${RUN_DIR}
SUB_LIST+= LOG_DIR=${LOG_DIR}
SUB_LIST+= CONF_DIR=${CONF_DIR}
SUB_LIST+= RC_SUBR=/etc/rc.subr

#ACLOCAL=  ${LOCALBASE}/bin/aclocal
#AUTOMAKE= ${LOCALBASE}/bin/automake
#AUTOCONF= ${LOCALBASE}/bin/autoconf
#LIBTOOLIZE= ${LOCALBASE}/bin/libtoolize

#USES+= libtool autoreconf

#pre-configure:
#	cd ${WRKSRC} && ${LIBTOOLIZE} --copy
#	cd ${WRKSRC} && ${ACLOCAL} -I .
#	cd ${WRKSRC} && ${AUTOMAKE} --add-missing
#	cd ${WRKSRC} && ${AUTOCONF}

#do-build:
#	cd ${WRKSRC} && ${GMAKE} -j${MAKE_JOBS_NUMBER}

#do-install:
#	${MKDIR} -p ${STAGEDIR}
#	cd ${WRKSRC} && ${GMAKE} ${INSTALL_TARGET} DESTDIR=${STAGEDIR}

.include <bsd.port.mk>
#EOF
