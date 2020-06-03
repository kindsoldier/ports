#
# $Id$
#
PORTNAME=	openvpn
PORTVERSION=	2.4.9
CATEGORIES=	security net
#MASTER_SITES=	http://openvpn.net/release/
MASTER_SITES+=	http://swupdate.openvpn.net/community/releases/
MASTER_SITES+=	http://build.openvpn.net/downloads/releases/

MAINTAINER= homeunix7@gmail.com
COMMENT=	Secure IP/Ethernet tunnel daemon

LIB_DEPENDS+=	liblzo2.so:arch/liblzo2

USES+=		tar:xz
GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --enable-password-save
#CONFIGURE_ARGS+= --with-crypto-library=openssl
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --program-transform-name=''
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
SHEBANG_FILES=		sample/sample-scripts/verify-cn
SHEBANG_FILES+=		sample/sample-scripts/auth-pam.pl
SHEBANG_FILES+=		sample/sample-scripts/ucn.pl

CONFIGURE_ARGS+=	--enable-strict
CONFIGURE_ENV+=		ac_cv_prog_CMAKE= CMAKE=


OPENVPN_RUNDIR=		/var/run/openvpn
OPENVPN_LOGDIR=		/var/log/openvpn
OPENVPN_CONFDIR=		${PREFIX}/etc/openvpn


SUB_LIST+=	OPENVPN_RUNDIR=${OPENVPN_RUNDIR}
SUB_LIST+=	OPENVPN_LOGDIR=${OPENVPN_LOGDIR}
SUB_LIST+=	OPENVPN_CONFDIR=${OPENVPN_CONFDIR}


PLIST_FILES+=	man/man8/openvpn.8.gz

USE_RC_SUBR=	openvpn.sh
USE_LDCONFIG=	${PREFIX}/lib

SUB_FILES=	pkg-message pkg-install

post-build:
#	cd ${WRKSRC}/plugin/down-root && ${MAKE}
#	cd ${WRKSRC}/plugin/auth-pam && ${CC} ${CPPFLAGS} -I../.. -DDLOPEN_PAM=0 ${CFLAGS} -fPIC -shared -Wl,-soname,openvpn-auth-pam.so -o openvpn-auth-pam.so auth-pam.c pamdl.c -lc -lpam
##	@# self-tests here
##	cd ${WRKSRC} && ${MAKE} check

post-stage:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/sample/sample-config-files/*.conf ${STAGEDIR}${EXAMPLESDIR}
#	${MKDIR} ${PREFIX}/lib
#	${INSTALL_PROGRAM} ${WRKSRC}/plugin/down-root/openvpn-down-root.so ${PREFIX}/lib
#	${INSTALL_PROGRAM} ${WRKSRC}/plugin/auth-pam/openvpn-auth-pam.so ${PREFIX}/lib

.include <bsd.port.mk>
#EOF
