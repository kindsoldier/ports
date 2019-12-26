#
# $Id$
#
PORTNAME=	clamav
PORTVERSION=	0.99.2
CATEGORIES=	security
#MASTER_SITES+=	SF
#MASTER_SITE_SUBDIR=	${PORTNAME}

MAINTAINER= homeunix7@gmail.com
COMMENT=	Command line virus scanner written entirely in C

LIB_DEPENDS+=	libgmp.so:math/libgmp
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libxml2.so:text/libxml2
LIB_DEPENDS+=	libltdl.so:devel/libtool
LIB_DEPENDS+=	libpcre.so:text/libpcre

VAR_DIR=	/var
CL_DB_DIR=	/var/db/clamav
CL_LOG_DIR=	/var/log/clamav
CL_RUN_DIR=	/var/run/clamav
CL_CLAMD_SOCKET=	${CL_RUN_DIR}/clamd.sock
CL_MILTER_SOCKET=	${CL_RUN_DIR}/clmilter.sock
CL_OWNER= clamav
CL_GROUP= clamav
CL_OWNER_ID= 177
CL_GROUP_ID= 177


SUB_LIST+= CL_OWNER_ID=${CL_OWNER_ID}
SUB_LIST+= CL_GROUP_ID=${CL_GROUP_ID}

SUB_LIST+= CL_OWNER=${CL_OWNER}
SUB_LIST+= CL_GROUP=${CL_GROUP}


SUB_LIST+=	CL_DB_DIR=${CL_DB_DIR} 
SUB_LIST+=	CL_LOG_DIR=${CL_LOG_DIR} 
SUB_LIST+=	CL_RUN_DIR=${CL_RUN_DIR}
SUB_LIST+= CL_CLAMD_SOCKET=${CL_CLAMD_SOCKET}
SUB_LIST+= CL_MILTER_SOCKET=${CL_MILTER_SOCKET}

USE_RC_SUBR=	clamav-clamd.sh clamav-freshclam.sh
#USE_RC_SUBR+= clamav-milter.sh
SUB_FILES=	pkg-install pkg-deinstall

GNU_CONFIGURE=	yes
USES+=		gmake
INSTALLS_SHLIB=	yes

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
#CONFIGURE_ARGS+= --with-zlib=/usr
#CONFIGURE_ARGS+= --disable-zlib-vcheck
CONFIGURE_ARGS+= --sysconfdir=${PREFIX}/etc/clamav
CONFIGURE_ARGS+= --disable-clamuko
CONFIGURE_ARGS+= --enable-bigstack
CONFIGURE_ARGS+= --disable-dependency-tracking
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --disable-milter
CONFIGURE_ARGS+= --disable-cr
CONFIGURE_ARGS+= --disable-clamav
CONFIGURE_ARGS+= --disable-gethostbyname_r
CONFIGURE_ARGS+= --enable-readdir_r
#CONFIGURE_ARGS+= --disable-llvm
CONFIGURE_ARGS+= --with-sendmail=/usr/sbin/sendmail

CONFIGURE_ARGS+= --with-libcurl=${LOCALBASE}
CONFIGURE_ARGS+= --with-libjson=${LOCALBASE}
CONFIGURE_ARGS+= --with-pcre=${LOCALBASE}
CONFIGURE_ARGS+= --with-xml=${LOCALBASE}


CONFIGURE_ARGS+= --with-user=${CL_OWNER}
CONFIGURE_ARGS+= --with-group=${CL_GROUP}
CONFIGURE_ARGS+= --with-dbdir=${CL_DB_DIR}

PORTEXAMPLES= *


post-patch:
	${REINPLACE_CMD} -e 's|%%PTHREAD_LIBS%%|-lthr|g' \
		${WRKSRC}/${CONFIGURE_SCRIPT}
	${REINPLACE_CMD} -e 's|0x100000000|0x100000000ULL|g' \
		${WRKSRC}/libclamunrar/unrar.c

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/etc/*.conf.sample ${STAGEDIR}${EXAMPLESDIR}
	${MKDIR} ${STAGEDIR}${PREFIX}/share/clamav
	${INSTALL_DATA} ${WRKSRC}/database/daily.cvd ${STAGEDIR}${PREFIX}/share/clamav
	${INSTALL_DATA} ${WRKSRC}/database/main.cvd ${STAGEDIR}${PREFIX}/share/clamav


.include <bsd.port.mk>
#EOF
