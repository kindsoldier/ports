#
# $Id$
#
PORTNAME=	nfdump
PORTVERSION=	1.6.13
CATEGORIES=	net-mgmt
MASTER_SITES=	SF/${PORTNAME}/stable/${PORTNAME}-${PORTVERSION}

MAINTAINER=	cpm@fbsd.es
COMMENT=	Command-line tools to collect and process NetFlow data

GNU_CONFIGURE=	yes
USES=	gmake
MAKE_JOBS_UNSAFE=	yes

CONFIGURE_ARGS+= --disable-compat15
CONFIGURE_ARGS+= --enable-nsel
CONFIGURE_ARGS+= --enable-fixtimebug
#CONFIGURE_ARGS+= --enable-nfprofile
#CONFIGURE_ARGS+= --disable-nftrack
#CONFIGURE_ARGS+= --with-rrdpath=${LOCALBASE}
#CONFIGURE_ARGS+= --enable-ftconv --with-ftpath=${LOCALBASE}
CONFIGURE_ARGS+= --disable-readpcap
CONFIGURE_ARGS+= --enable-sflow

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --bindir=${PREFIX}/sbin

post-patch:
	${REINPLACE_CMD} 's|-ggdb||' ${WRKSRC}/bin/Makefile.in


RUN_DIR=	/var/run
SUB_LIST+=	RUN_DIR=${RUN_DIR}

USE_RC_SUBR+=	nfcapd.sh
USE_RC_SUBR+=	sfcapd.sh

#USE_RC_SUBR+=	nfcapd0.sh
#USE_RC_SUBR+=	nfcapd1.sh
#USE_RC_SUBR+=	nfcapd2.sh
#USE_RC_SUBR+=	nfcapd3.sh
#USE_RC_SUBR+=	nfcapd4.sh
#USE_RC_SUBR+=	nfcapd5.sh
#USE_RC_SUBR+=	nfcapd6.sh
#USE_RC_SUBR+=	nfcapd7.sh
#USE_RC_SUBR+=	nfcapd8.sh
#USE_RC_SUBR+=	nfcapd9.sh

SUB_FILES=	pkg-install pkg-deinstall


NFCAP_OWNER=	root
NFCAP_GROUP=	wheel
#NFCAP_OWNER_ID=	154
#NFCAP_GROUP_ID=	154

VARDIR=/var

NFCAP_DB_DIR=${VARDIR}/db/${PORTNAME}
NFCAP_RUN_DIR=${VARDIR}/run/${PORTNAME}
NFCAP_LOG_DIR=${VARDIR}/log/${PORTNAME}

SUB_LIST+= NFCAP_OWNER=${NFCAP_OWNER}
SUB_LIST+= NFCAP_GROUP=${NFCAP_GROUP}
SUB_LIST+= NFCAP_OWNER_ID=${NFCAP_OWNER_ID}
SUB_LIST+= NFCAP_GROUP_ID=${NFCAP_GROUP_ID}
SUB_LIST+= NFCAP_DB_DIR=${NFCAP_DB_DIR}
SUB_LIST+= NFCAP_RUN_DIR=${NFCAP_RUN_DIR}
SUB_LIST+= NFCAP_LOG_DIR=${NFCAP_LOG_DIR}

instance:
.for F in 0 1 2 3 4 5 6 7 8 9
	sed -e "s,_INSTANCE_,${F},g; s,_PORT_,$$((9995+${F}))," < ${FILESDIR}/nfcapd.sed \
	    > ${FILESDIR}/nfcapd${F}.sh.in
.endfor

.include <bsd.port.mk>
#EOF

