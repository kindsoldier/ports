#
# $Id: Makefile 1285 2007-10-25 11:42:14Z root $
#
PORTNAME=	smtpclient
PORTVERSION=	1.0.0
CATEGORIES=	mail
MASTER_SITES=	ftp://www.ossp.org/pkg/tool/smtpclient/

MAINTAINER= homeunix7@gmail.com
COMMENT=	Simple SMTP client

GNU_CONFIGURE=	yes
USES+=		gmake

post-patch:
	${REINPLACE_CMD} -e 's,@prefix@,$$(DESTDIR)@prefix@,' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
#EOF
