#
# $Id$
#
PORTNAME=	GeoIP
PORTVERSION=	1.4.8
CATEGORIES=	net
MASTER_SITES=	http://geolite.maxmind.com/download/geoip/api/c/
PKGNAMEPREFIX=	lib

BUILD_DEPENDS+=	autoreconf:devel/autoconf
BUILD_DEPENDS+=	automake:devel/automake

MAINTAINER=	homeunix7@gmail.com
COMMENT=	Find the country that any IP address or hostname originates from

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
USE_LDCONFIG=	yes

MAN1+=	geoiplookup.1 
MAN1+=	geoiplookup6.1

pre-build:
	cd  ${WRKSRC} && autoreconf -fiv
#	cd ${WRKSRC} && aclocal
#	cd ${WRKSRC} && autoheader
#	cd ${WRKSRC} && libtoolize -f -c 
#	cd ${WRKSRC} && automake --add --copy
#	cd ${WRKSRC} && autoconf


#	${REINPLACE_CMD} -e 's|install: install-am|install:|g' ${WRKSRC}/conf/Makefile* 
#	${REINPLACE_CMD} -e 's/libGeoIP.la libGeoIPUpdate.la/libGeoIP.la/' ${WRKSRC}/libGeoIP/Makefile.in

#http://geolite.maxmind.com/download/geoip/database/GeoLiteCountry/GeoIP.dat.gz
#http://geolite.maxmind.com/download/geoip/database/GeoIPv6.dat.gz
#http://geolite.maxmind.com/download/geoip/database/GeoLiteCity.dat.gz
#http://geolite.maxmind.com/download/geoip/database/GeoLiteCityv6-beta/GeoLiteCityv6.dat.gz
#http://download.maxmind.com/download/geoip/database/asnum/GeoIPASNum.dat.gz
#http://download.maxmind.com/download/geoip/database/asnum/GeoIPASNumv6.dat.gz

DATA_FILES= GeoIP.dat GeoIPCity.dat GeoIPOrg.dat

#post-build:
#	${INSTALL_SCRIPT} ${FILESDIR}/geoipupdate.sh ${PREFIX}/bin/geoipupdate
#.for file in ${DATA_FILES} 
#	${CP} ${FILESDIR}/${file}.bz2 ${WRKDIR} && ${BZIP2_CMD} -dv ${WRKDIR}/${file}.bz2
#.endfor

post-install:
#	${MKDIR} ${STAGEDIR}${PREFIX}/share/GeoIP
#.for file in ${DATA_FILES} 
#	${INSTALL_DATA} ${WRKDIR}/${file}   ${STAGEDIR}${PREFIX}/share/GeoIP/
#.endfor


.include <bsd.port.mk>
#EOF
