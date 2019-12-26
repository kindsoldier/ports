#
# $Id: Makefile 2602 2009-09-25 23:13:23Z root $
#
PORTNAME=	apache
PORTVERSION=	2.4.34
CATEGORIES=	www net
MASTER_SITES+=	http://www.apache.org/dist/httpd/ http://archive.apache.org/dist/httpd/
DISTNAME=	httpd-${PORTVERSION}

COMMENT=	The extremely popular Apache http server. Very fast, very clean
MAINTAINER=	onborodin@gmail.com

LIB_DEPENDS+=	libapr.so:devel/libapr
LIB_DEPENDS+=	libaprutil.so:devel/libapr-utils
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre

OWNER=	${PORTNAME}
GROUP=	${PORTNAME}
OWNER_ID=	170
GROUP_ID=	170

USES+=		tar:bzip2
USES+=		gmake perl5
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ENV=	LDFLAGS="${LDFLAGS}"
CONFIGURE_ENV+=	CPPFLAGS="${CPPFLAGS}"
CONFIGURE_ENV+=	CFLAGS="${CFLAGS} ${CPPFLAGS}"

CONFIGURE_ARGS= --prefix=${PREFIX}

CONFIGURE_ARGS= --with-program-name=apache

#CONFIGURE_ARGS+= --with-mpm=prefork
CONFIGURE_ARGS+= --with-mpm=worker


CONFIGURE_ARGS+= --disable-authn-dbm
CONFIGURE_ARGS+= --disable-authnz-ldap
CONFIGURE_ARGS+= --disable-authz-dbm
CONFIGURE_ARGS+= --disable-authz-groupfile
CONFIGURE_ARGS+= --disable-cgid
CONFIGURE_ARGS+= --disable-ldap
CONFIGURE_ARGS+= --disable-proxy-ajp

CONFIGURE_ARGS+= --disable-dbd
CONFIGURE_ARGS+= --disable-ldap
CONFIGURE_ARGS+= --disable-userdir

CONFIGURE_ARGS+= --enable-auth-digest
CONFIGURE_ARGS+= --enable-buffer
CONFIGURE_ARGS+= --enable-cgi
#CONFIGURE_ARGS+= --enable-cgid
CONFIGURE_ARGS+= --enable-dav
CONFIGURE_ARGS+= --enable-deflate
CONFIGURE_ARGS+= --enable-expires
CONFIGURE_ARGS+= --enable-http
CONFIGURE_ARGS+= --enable-info
CONFIGURE_ARGS+= --enable-logio
CONFIGURE_ARGS+= --enable-mime-magic
CONFIGURE_ARGS+= --enable-negotiation
CONFIGURE_ARGS+= --enable-pie
CONFIGURE_ARGS+= --enable-remoteip
CONFIGURE_ARGS+= --enable-request
CONFIGURE_ARGS+= --enable-rewrite
CONFIGURE_ARGS+= --enable-so
CONFIGURE_ARGS+= --enable-ssl
CONFIGURE_ARGS+= --enable-unique-id
CONFIGURE_ARGS+= --enable-unixd
CONFIGURE_ARGS+= --enable-vhost-alias
CONFIGURE_ARGS+= --enable-so

CONFIGURE_ARGS+= --enable-imagemap
CONFIGURE_ARGS+= --enable-include
CONFIGURE_ARGS+= --enable-log-debug
CONFIGURE_ARGS+= --enable-log-forensic

CONFIGURE_ARGS+= --disable-http2

CONFIGURE_ARGS+= --with-jansson=${LOCALBASE}
CONFIGURE_ARGS+= --with-libxml2=${LOCALBASE}
#CONFIGURE_ARGS+= --with-nghttp2=${LOCALBASE}

CONFIGURE_ARGS+= --with-apr-util=${LOCALBASE}/bin/apu-config
CONFIGURE_ARGS+= --with-apr=${LOCALBASE}/bin/apr-config
CONFIGURE_ARGS+= --with-pcre=${LOCALBASE}

CONFIGURE_ARGS+= --with-port=80
CONFIGURE_ARGS+= --with-ssl=/usr
CONFIGURE_ARGS+= --with-z=/usr

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
USE_RC_SUBR= 	apache.sh
SUB_FILES+= 	pkg-install pkg-deinstall

SUB_LIST+= OWNER=${OWNER}
SUB_LIST+= GROUP=${GROUP}
SUB_LIST+= OWNER_ID=${OWNER_ID}
SUB_LIST+= GROUP_ID=${GROUP_ID}

PLIST_SUB+=	LOCALSTATEDIR=${LOCALSTATEDIR}
PLIST_SUB+=	PREFIX=${PREFIX}

SUB_LIST+= 	LOCALSTATEDIR=${LOCALSTATEDIR}
SUB_LIST+= 	PREFIX=${PREFIX}

LOCALSTATEDIR=	/var
LAYOUT_FILE=	${WRKSRC}/config.layout


post-patch:
	${REINPLACE_CMD} -e '/INSTALL_TARGETS/s,install-conf ,,' ${WRKSRC}/Makefile.in 
	${REINPLACE_CMD} -e 's,-$${apr_version},,g'	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,-$$apr_temp_major,,g'	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,-$$apr_bundled_major,,g'	${WRKSRC}/configure

	${REINPLACE_CMD} -e 's,-$${apu_version},,g'	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,-$$apu_temp_major,,g'	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,-$$apu_bundled_major,,g'	${WRKSRC}/configure

	${REINPLACE_CMD} -e 's,^APU_CONFIG=.*,APU_CONFIG="$$APU_BINDIR/apu-config",'	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,^APR_CONFIG=.*,APR_CONFIG="$$APR_BINDIR/apr-config",'	${WRKSRC}/configure

	${REINPLACE_CMD} -e 's|freebsd5|freebsd|' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's," PLATFORM ",FreeBSD,' ${WRKSRC}/server/core.c


pre-configure:
	${RM} -f ${LAYOUT_FILE}

	echo '<Layout Apache>' 					>> ${LAYOUT_FILE}
	echo '  prefix:        ${PREFIX}' 			>> ${LAYOUT_FILE}
	echo '  exec_prefix:   $${prefix}' 			>> ${LAYOUT_FILE}
	echo '  bindir:        $${exec_prefix}/bin' 		>> ${LAYOUT_FILE}
	echo '  sbindir:       $${exec_prefix}/sbin' 		>> ${LAYOUT_FILE}
	echo '  libdir:        $${exec_prefix}/lib' 		>> ${LAYOUT_FILE}
	echo '  libexecdir:    $${exec_prefix}/libexec/apache' 	>> ${LAYOUT_FILE}
	echo '  includedir:    $${prefix}/include/apache' 	>> ${LAYOUT_FILE}
	echo '  mandir:        $${prefix}/man' 			>> ${LAYOUT_FILE}
	echo '  sysconfdir:    $${prefix}/etc/apache' 		>> ${LAYOUT_FILE}
	echo '  installbuilddir: $${prefix}/share/apache/build' >> ${LAYOUT_FILE}

	echo '  manualdir:     $${prefix}/share/doc/apache' 	>> ${LAYOUT_FILE}

	echo '  localstatedir: ${LOCALSTATEDIR}' 			>> ${LAYOUT_FILE}
	echo '  runtimedir:    $${localstatedir}/run/apache' 	>> ${LAYOUT_FILE}
	echo '  logfiledir:    $${localstatedir}/log/apache' 	>> ${LAYOUT_FILE}
	echo '  proxycachedir: $${localstatedir}/cache/apache' 	>> ${LAYOUT_FILE}
	echo '  datadir:       $${localstatedir}/www/apache' 	>> ${LAYOUT_FILE}

	echo '  errordir:      $${datadir}/error' 		>> ${LAYOUT_FILE}
	echo '  iconsdir:      $${datadir}/icons' 		>> ${LAYOUT_FILE}
	echo '  cgidir:        $${datadir}/cgi-bin' 		>> ${LAYOUT_FILE}
	echo '  htdocsdir:     $${datadir}/web' 		>> ${LAYOUT_FILE}
	echo '</Layout>' 					>> ${LAYOUT_FILE}

CONF+= charset.conv
CONF+= httpd.conf
CONF+= magic
CONF+= mime.types

post-install:
	${MKDIR} ${STAGEDIR}/${EXAMPLESDIR}
.for file in ${CONF}
	${INSTALL_DATA} ${WRKSRC}/docs/conf/${file} ${STAGEDIR}/${EXAMPLESDIR}/
.endfor
	${INSTALL_DATA} ${WRKSRC}/docs/conf/extra/*.conf ${STAGEDIR}/${EXAMPLESDIR}/
	${INSTALL_DATA} ${WRKSRC}/support/envvars-std ${STAGEDIR}/${EXAMPLESDIR}/envvars
	cd ${STAGEDIR}${PREFIX}/man/man8 && ${LN} -sf httpd.8 apache.8

PORTEXAMPLES=	*

.include <bsd.port.mk>
#EOF
