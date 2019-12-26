# Created by: Sergey A. Osokin <osa@FreeBSD.org>
# $FreeBSD: head/www/nginx/Makefile 403524 2015-12-11 13:01:22Z osa $

PORTNAME=	nginx
PORTVERSION=	1.16.1
CATEGORIES=	www
MASTER_SITES=	http://nginx.org/download/
MASTER_SITES+=	LOCAL/osa
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	osa@FreeBSD.org
COMMENT=	Robust and small WWW server

USE_GITHUB=	nodefault

LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libexslt.so:text/libxslt
LIB_DEPENDS+=	libxslt.so:text/libxslt
LIB_DEPENDS+=	libiconv.so:text/libiconv

.include <bsd.port.options.mk>


NGINX_VARDIR=	/var
NGINX_LOGDIR=	${NGINX_VARDIR}/log/${PORTNAME}
NGINX_RUNDIR=	${NGINX_VARDIR}/run/${PORTNAME}
NGINX_TMPDIR=	/tmp/nginx
HTTP_PORT=	80

NGINX_ACCESSLOG=	${NGINX_LOGDIR}/access.log
NGINX_ERRORLOG=		${NGINX_LOGDIR}/error.log

NGINX_OWNER=	${WWWOWN}
NGINX_GROUP=	${WWWGRP}

USE_RC_SUBR=	nginx

SUB_FILES+= 	pkg-install

SUB_LIST+=	NGINX_LOGDIR=${NGINX_LOGDIR}
SUB_LIST+=	NGINX_RUNDIR=${NGINX_RUNDIR}
SUB_LIST+=	NGINX_TMPDIR=${NGINX_TMPDIR}

SUB_LIST+=	NGINX_OWNER=${NGINX_OWNER}
SUB_LIST+=	NGINX_GROUP=${NGINX_GROUP}
SUB_LIST+=	NGINX_RUNDIR=${NGINX_RUNDIR}
SUB_LIST+=	NGINX_TMPDIR=${NGINX_TMPDIR}

USES+= gmake
HAS_CONFIGURE=	yes
ALL_TARGET=	default

CONFIGURE_ARGS+= --prefix=${ETCDIR} 
CONFIGURE_ARGS+= --with-cc-opt="-I ${LOCALBASE}/include"
CONFIGURE_ARGS+= --with-ld-opt="-L ${LOCALBASE}/lib"
CONFIGURE_ARGS+= --conf-path=${ETCDIR}/nginx.conf
CONFIGURE_ARGS+= --sbin-path=${PREFIX}/sbin/nginx
CONFIGURE_ARGS+= --pid-path=${NGINX_RUNDIR}/nginx.pid
CONFIGURE_ARGS+= --error-log-path=${NGINX_ERRORLOG}
CONFIGURE_ARGS+= --user=${WWWOWN}
CONFIGURE_ARGS+= --group=${WWWGRP}
CONFIGURE_ARGS+= --modules-path=${PREFIX}/lib/${PORTNAME}/modules

CONFIGURE_ARGS+= --with-file-aio

CONFIGURE_ARGS+= --http-client-body-temp-path=${NGINX_TMPDIR}/client_body_temp
CONFIGURE_ARGS+= --http-fastcgi-temp-path=${NGINX_TMPDIR}/fastcgi_temp
CONFIGURE_ARGS+= --http-proxy-temp-path=${NGINX_TMPDIR}/proxy_temp
CONFIGURE_ARGS+= --http-scgi-temp-path=${NGINX_TMPDIR}/scgi_temp
CONFIGURE_ARGS+= --http-uwsgi-temp-path=${NGINX_TMPDIR}/uwsgi_temp
CONFIGURE_ARGS+= --http-log-path=${NGINX_ACCESSLOG}

CFLAGS+=	-DNDEBUG -I${LOCALBASE}/pcre
CPPFLAGS+=	-DNDEBUG -I${LOCALBASE}/pcre

CONFIGURE_ARGS+= --with-file-aio
CONFIGURE_ARGS+= --with-http_addition_module
CONFIGURE_ARGS+= --with-http_auth_request_module
CONFIGURE_ARGS+= --with-http_dav_module
CONFIGURE_ARGS+= --with-http_gunzip_module
CONFIGURE_ARGS+= --with-http_gzip_static_module
CONFIGURE_ARGS+= --with-http_random_index_module
CONFIGURE_ARGS+= --with-http_realip_module
CONFIGURE_ARGS+= --with-http_realip_module
CONFIGURE_ARGS+= --with-http_secure_link_module
CONFIGURE_ARGS+= --with-http_slice_module
CONFIGURE_ARGS+= --with-http_ssl_module
CONFIGURE_ARGS+= --with-http_stub_status_module
CONFIGURE_ARGS+= --with-http_sub_module
CONFIGURE_ARGS+= --with-http_v2_module
CONFIGURE_ARGS+= --with-http_xslt_module
CONFIGURE_ARGS+= --with-mail
CONFIGURE_ARGS+= --with-mail_ssl_module
CONFIGURE_ARGS+= --with-pcre
CONFIGURE_ARGS+= --with-threads
CONFIGURE_ARGS+= --with-stream
CONFIGURE_ARGS+= --with-stream_ssl_module
CONFIGURE_ARGS+= --with-stream_ssl_preread_module

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/conf/* ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/html/* ${STAGEDIR}${EXAMPLESDIR}
	${MKDIR} ${STAGEDIR}${PREFIX}/man/man8
	${INSTALL_DATA} ${WRKSRC}/objs/nginx.8 ${STAGEDIR}${PREFIX}/man/man8

PORTEXAMPLES+= *

.include <bsd.port.mk>
#EOF
