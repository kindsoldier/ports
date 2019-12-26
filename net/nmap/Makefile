#
# $Id$
#
PORTNAME=	nmap
PORTVERSION=	7.70
CATEGORIES=	security
MASTER_SITES+=	http://nmap.org/dist/
MASTER_SITES+=	http://download.insecure.org/nmap/dist/ 
MASTER_SITES+=	http://www.mirrors.wiretapped.net/security/network-mapping/nmap/ 
MASTER_SITES+=	http://ftp.iasi.roedu.net/mirrors/download.insecure.org/nmap/dist/ 
MASTER_SITES+=	http://shadow.cc.columbia.edu/pub/software/nmap/
DISTNAME=	${PORTNAME}-${DISTVERSION}	# needed for security/nmapfe

MAINTAINER=	ziggi@inbox.ru
COMMENT=	Port scanning utility for large networks

LIB_DEPENDS+=	libpcre.so:text/libpcre


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --with-libpcre=${LOCALBASE}
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

CONFIGURE_ARGS+= --without-localdirs
CONFIGURE_ARGS+= --without-zenmap
CONFIGURE_ARGS+= --without-ndiff
CONFIGURE_ARGS+= --with-libpcre=${LOCALBASE}
CONFIGURE_ARGS+= --with-liblua=included
CONFIGURE_ARGS+= --without-nmap-update

.include <bsd.port.mk>
#EOF
