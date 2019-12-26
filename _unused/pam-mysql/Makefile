#
# $Id$
#
PORTNAME=	pam-mysql
PORTVERSION=	0.7.r1
CATEGORIES=	security databases
MASTER_SITES=	SF/pam-mysql/pam-mysql/0.7RC1
DISTNAME=	${PORTNAME:S/-/_/}-0.7RC1${DISTVERSIONSUFFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Pam module for authenticating with MySQL

LIB_DEPENDS+=	libmysqlclient.so:data/mariadb

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --with-mysql=${LOCALBASE}
CONFIGURE_ARGS+= --with-pam-mods-dir=${PREFIX}/lib
CONFIGURE_ARGS+= --with-pam=/usr
CONFIGURE_ARGS+= --with-openssl
LIBS+=		-L${LOCALBASE}/lib

SUB_FILES=	pkg-message
PKGMESSAGE=	${WRKDIR}/pkg-message

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/pam_mysql.so
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
#EOF
