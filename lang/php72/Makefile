#
# $Id: Makefile 2636 2009-09-30 12:09:37Z root $
#
PORTNAME=	php
PORTVERSION=	7.2.24
CATEGORIES=	lang devel www
MASTER_SITES=	${MASTER_SITE_PHP}
MASTER_SITE_SUBDIR=	distributions
DISTNAME=	php-${PORTVERSION}

MASTER_SITES+=	http://dk.php.net/%SUBDIR%/
MASTER_SITES+=	http://de.php.net/%SUBDIR%/
MASTER_SITES+=	http://es.php.net/%SUBDIR%/
MASTER_SITES+=	http://fi.php.net/%SUBDIR%/
MASTER_SITES+=	http://fr.php.net/%SUBDIR%/
MASTER_SITES+=	http://gr.php.net/%SUBDIR%/
MASTER_SITES+=	http://it.php.net/%SUBDIR%/
MASTER_SITES+=	http://jp.php.net/%SUBDIR%/
MASTER_SITES+=	http://se.php.net/%SUBDIR%/
MASTER_SITES+=	http://uk.php.net/%SUBDIR%/
MASTER_SITES+=	http://us2.php.net/%SUBDIR%/
MASTER_SITES+=	http://br.php.net/%SUBDIR%/
MASTER_SITES+=	http://cn.php.net/%SUBDIR%/
MASTER_SITE_SUBDIR=	distributions


MAINTAINER=	onborodin@gmail.com
COMMENT=	PHP Scripting Language (Apache Module and CLI)

_APXS=		${LOCALBASE}/sbin/apxs
BUILD_DEPENDS+=	${_APXS}:net/apache

LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libxml2.so:text/libxml2
LIB_DEPENDS+=	libiconv.so:text/libiconv


USES+=	tar:xz gmake
GNU_CONFIGURE= 	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS=	-L${LOCALBASE}/lib -lz


#APACHE_LIBEXEC_DIR=	${LOCALBASE}/libexec/apache
#PLIST_SUB+=	APACHE_LIBEXEC_DIR="libexec/apache"
#SUB_LIST+=	APACHE_LIBEXEC_DIR="${APACHE_LIBEXEC_DIR}"
#SUB_LIST+=	APXS="${APXS}"

CONFIGURE_ARGS+= --enable-cli
CONFIGURE_ARGS+= --with-readline
CONFIGURE_ARGS+= --without-pear

#CONFIGURE_ARGS+= --with-apxs2=${_APXS}
CONFIGURE_ARGS+= --with-zlib-dir=/usr
CONFIGURE_ARGS+= --enable-ipv6

CONFIGURE_ARGS+= --with-layout=GNU
CONFIGURE_ARGS+= --with-config-file-scan-dir=${PREFIX}/etc/php
CONFIGURE_ARGS+= --with-config-file-path=${PREFIX}/etc:${LOCALBASE}/etc/apache
CONFIGURE_ARGS+= --with-config-file-scan-dir=${PREFIX}/etc/php
CONFIGURE_ARGS+= --disable-all
CONFIGURE_ARGS+= --enable-libxml
CONFIGURE_ARGS+= --enable-mysqlnd
CONFIGURE_ARGS+= --with-libxml-dir=${LOCALBASE}
CONFIGURE_ARGS+= --with-pcre-regex=${LOCALBASE}
CONFIGURE_ARGS+= --program-prefix=""

#CONFIGURE_ARGS+= --enable-maintainer-zts
CONFIGURE_ENV+= pthreads_working="yes"
CONFIGURE_ENV+= ac_cv_decimal_fp_supported="no"
CONFIGURE_ENV+= lt_cv_path_SED="sed"


USE_RC_SUBR+=	php-fpm

CONFIGURE_ARGS+= --enable-fpm
CONFIGURE_ARGS+= --with-fpm-user=${WWWOWN}
CONFIGURE_ARGS+= --with-fpm-group=${WWWGRP}

CONFIGURE_ARGS+= --enable-embed=shared

DESTDIRNAME= INSTALL_ROOT

post-patch:
	${TOUCH} ${WRKSRC}/ext/php_config.h
	cd ${WRKSRC} && autoreconf

#pre-install:
#	${MKDIR} ${STAGEDIR}${PREFIX}/etc/apache
#	echo "" >> ${STAGEDIR}${PREFIX}/etc/apache/apache.conf
#	echo "LoadModule some_module libexec/apache/mod_some.so" >> \
#            ${STAGEDIR}${PREFIX}/etc/apache/apache.conf
#	echo "" >> ${STAGEDIR}${PREFIX}/etc/apache/apache.conf

post-install: 
	${MKDIR} -p ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/php.ini-development ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/php.ini-production ${EXAMPLESDIR}
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf php.1 php-cgi.1
	${INSTALL_DATA} ${WRKSRC}/ext/php_config.h ${STAGEDIR}${PREFIX}/include/php/ext/

.include <bsd.port.pre.mk>

.if (${OSVERSION} > 1100000)
LIB_DEPENDS+=	libreadline.so:devel/libreadline
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
.endif

.include <bsd.port.post.mk>
#EOF
