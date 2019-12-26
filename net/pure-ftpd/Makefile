# Created by: Frank DENIS
# $FreeBSD: head/ftp/pure-ftpd/Makefile 498000 2019-04-05 22:43:00Z sunpoet $

PORTNAME=	pure-ftpd
PORTVERSION=	1.0.49
CATEGORIES=	ftp
MASTER_SITES=	https://github.com/jedisct1/pure-ftpd/releases/download/${PORTVERSION}/ \
		https://download.pureftpd.org/pub/pure-ftpd/releases/ \
		ftp://ftp.pureftpd.org/pub/pure-ftpd/releases/

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Small, easy to set up, fast, and secure FTP server

USES+=	pgsql

USES=		cpe perl5 tar:bzip2 gmake
USE_PERL5=	run

LANGUAGE=	english

CFLAGS+= -I${LOCALBASE}/include
LDFLAGS+= -L${LOCALBASE}/lib

CONFIGURE_ARGS+= --sysconfdir=${PREFIX}/etc
CONFIGURE_ARGS+= --with-altlog
CONFIGURE_ARGS+= --with-cookie
CONFIGURE_ARGS+= --with-diraliases
CONFIGURE_ARGS+= --with-everything
CONFIGURE_ARGS+= --with-extauth
CONFIGURE_ARGS+= --with-ftpwho
CONFIGURE_ARGS+= --with-language=${LANGUAGE} 
CONFIGURE_ARGS+= --with-paranoidmsg
CONFIGURE_ARGS+= --with-puredb
CONFIGURE_ARGS+= --with-quotas
CONFIGURE_ARGS+= --with-ratios

CONFIGURE_ARGS+= --with-everything
CONFIGURE_ARGS+= --without-ldap
CONFIGURE_ARGS+= --without-mysql
CONFIGURE_ARGS+= --with-pgsql
CONFIGURE_ARGS+= --with-tls
CONFIGURE_ARGS+= --with-certfile=${PREFIX}/etc/pureftpd.crt
CONFIGURE_ARGS+= --with-keyfile=${PREFIX}/etc/pureftpd.key
CONFIGURE_ARGS+= --without-bonjour

CONFIGURE_ARGS+= --with-sendfile

GNU_CONFIGURE=	yes
USE_RC_SUBR=	pure-ftpd

SUB_FILES=	pkg-message

.include <bsd.port.mk>
