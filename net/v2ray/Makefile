PORTNAME=	v2ray
DISTVERSIONPREFIX=	v
DISTVERSION=	5.41.0
CATEGORIES=	net

MAINTAINER=	shen.elf@gmail.com
COMMENT=	Platform for building proxies to bypass network restrictions
WWW=		https://www.v2ray.com

USES=		go:modules
USE_GITHUB=	yes
USE_RC_SUBR=	v2ray

GH_ACCOUNT=	v2fly
GH_PROJECT=	v2ray-core
GH_TUPLE=	

GO_BUILDFLAGS=	-ldflags='${STRIP} -w'
GO_TARGET=	./main:v2ray 
GO_TESTFLAGS=	-p 1 -tags json -timeout 30m

#USERS=		v2ray
#GROUPS=		v2ray

OWNER=	${PORTNAME}
GROUP=	${PORTNAME}
OWNER_ID=	360
GROUP_ID=	360

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
USE_RC_SUBR= 	${PORTNAME}
SUB_FILES+= 	pkg-install pkg-deinstall

SUB_LIST+= OWNER=${OWNER}
SUB_LIST+= GROUP=${GROUP}
SUB_LIST+= OWNER_ID=${OWNER_ID}
SUB_LIST+= GROUP_ID=${GROUP_ID}

#PLIST_SUB+=	LOCALSTATEDIR=${LOCALSTATEDIR}
#PLIST_SUB+=	PREFIX=${PREFIX}

#SUB_LIST+= 	LOCALSTATEDIR=${LOCALSTATEDIR}
SUB_LIST+= 	PREFIX=${PREFIX}

#LOCALSTATEDIR=	/var
#LAYOUT_FILE=	${WRKSRC}/config.layout

pre-build:
	cd ${WRKSRC} && go mod vendor

post-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${FILESDIR}/geoip.dat ${STAGEDIR}${DATADIR}/geoip.dat
	${INSTALL_DATA} ${FILESDIR}/geosite.dat ${STAGEDIR}${DATADIR}/geosite.dat
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/release/config/config.json ${STAGEDIR}${EXAMPLESDIR}/config.json.sample
	${INSTALL_DATA} ${WRKSRC}/release/config/vpoint_socks_vmess.json ${STAGEDIR}${EXAMPLESDIR}/vpoint_socks_vmess.json
	${INSTALL_DATA} ${WRKSRC}/release/config/vpoint_vmess_freedom.json ${STAGEDIR}${EXAMPLESDIR}/vpoint_vmess_freedom.json

.include <bsd.port.mk>
