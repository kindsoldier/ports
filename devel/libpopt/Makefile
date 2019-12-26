#
# $Id: Makefile 2741 2009-12-14 14:14:52Z root $
# $URL: file:///usr2/svn/ports5/devel/libpopt/Makefile $
#
PORTNAME=	popt
PORTVERSION=	1.16
CATEGORIES=	devel
MASTER_SITES+= http://rpm5.org/files/popt/
MASTER_SITES+= ftp://ftp.rpm.org/pub/rpm/dist/%SUBDIR%/ 
MASTER_SITES+= http://rpmfind.net/linux/rpm.org/rpm/dist/%SUBDIR%/ 
MASTER_SITES+= ftp://ftp.mirrorservice.org/sites/ftp.rpm.org/pub/rpm/dist/%SUBDIR%/ 
MASTER_SITES+= http://gd.tuwien.ac.at/utils/rpm.org/dist/%SUBDIR%/ 
MASTER_SITES+= ftp://sunsite.cnlab-switch.ch/mirror/rpm/dist/%SUBDIR%/ 
MASTER_SITES+= ftp://ftp.sunfreeware.com/pub/freeware/SOURCES/
MASTER_SITE_SUBDIR=	rpm-4.1.x
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	A getopt(3) like library with a number of enhancements, from Redhat

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libiconv.so:text/libiconv

GNU_CONFIGURE=	yes
INSTALLS_SHLIB=	yes
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --mandir=${PREFIX}/man 
CONFIGURE_ARGS+= --program-prefix=""
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
#EOF
