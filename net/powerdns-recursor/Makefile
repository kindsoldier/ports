# Created by: sten@blinkenlights.nl
# $FreeBSD: head/dns/powerdns-recursor/Makefile 390622 2015-06-26 09:10:07Z robak $

PORTNAME=	recursor
PORTVERSION=	4.1.10
CATEGORIES=	dns
MASTER_SITES=	http://downloads.powerdns.com/releases/
PKGNAMEPREFIX=	powerdns-
DISTNAME=	pdns-${PORTNAME}-${PORTVERSION}

MAINTAINER=	tremere@cainites.net
COMMENT=	Advanced DNS recursor

BUILD_DEPENDS+= lua:lang/lua53
RUN_DEPENDS+=   lua:lang/lua53

LIB_DEPENDS+= libprotobuf.so:devel/libprotobuf
LIB_DEPENDS+= libboost_thread.so:devel/libboost
LIB_DEPENDS+= libboost_system.so:devel/libboost
BUILD_DEPENDS+=	${LOCALBASE}/include/boost/shared_ptr.hpp:devel/libboost



USES=		gmake tar:bzip2
GNU_CONFIGURE=	yes

CFLAGS+=	-I${PREFIX}/include
CXXFLAGS+=	-I${PREFIX}/include
LDFLAGS+=	-L${PREFIX}/lib

CONFIGURE_ARGS+= --sysconfdir=${PREFIX}/etc/pdns
#CONFIGURE_ARGS+= --with-protobuf
CONFIGURE_ARGS+= --without-net-snmp
CXXFLAGS+=	-D_GLIBCXX_USE_C99
#CONFIGURE_ARGS+= --without-luajit
#CONFIGURE_ARGS+= --without-lua

MAKE_ARGS+=	OPTFLAGS="${CFLAGS}"
SUB_FILES=	pkg-message


.include <bsd.port.options.mk>

.if ${ARCH} == "sparc64"
BROKEN=		Does not compile on sparc64
.endif

USE_RC_SUBR+=	pdns-recursor

PDNS_OWNER=	pdns
PDNS_GROUP=	pdns
PDNS_OWNER_ID=	120
PDNS_GROUP_ID=	120

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
SUB_FILES+= 	pkg-install pkg-deinstall

SUB_LIST+= PDNS_OWNER=${PDNS_OWNER}
SUB_LIST+= PDNS_GROUP=${PDNS_GROUP}
SUB_LIST+= PDNS_OWNER_ID=${PDNS_OWNER_ID}
SUB_LIST+= PDNS_GROUP_ID=${PDNS_GROUP_ID}
SUB_LIST+= 	PREFIX=${PREFIX}

#EXTRA_PATCHES+=	${PATCHDIR}/extrapatch-setuid

#MAKE_ENV+=STATIC=full

post-patch:
	${REINPLACE_CMD} -e 's;SBINDIR=/usr/sbin/;SBINDIR=${PREFIX}/sbin/;' \
	   -e 's;BINDIR=/usr/bin/;BINDIR=${PREFIX}/bin/;' \
	   -e 's;SYSCONFDIR=/etc/powerdns/;SYSCONFDIR=${PREFIX}/etc/pdns/;' \
	   -e 's;/usr/share;${MANPREFIX};' \
		${WRKSRC}/Makefile.in
	${REINPLACE_CMD} \
	    -e 's,boost-lib-version = BOOST_LIB_VERSION,boost-lib-version = 1_64,' \
            ${WRKSRC}/configure

PORTEXAMPLES=	*

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${FILESDIR}/recursor.conf ${STAGEDIR}${EXAMPLESDIR}/recursor.conf.example

.include <bsd.port.mk>
#EO
