# Created by: trasz
# $FreeBSD: head/text/iksemel/Makefile 343859 2014-02-12 07:07:09Z miwi $

PORTNAME=	iksemel
PORTVERSION=	1.4
CATEGORIES=	textproc
#MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	XML parser library mainly designed for Jabber applications

USE_GITHUB=	yes
GH_ACCOUNT=	meduketto
GH_TAGNAME=	6cddfef


PATCH_DEPENDS+=	autoconf:devel/autoconf
PATCH_DEPENDS+=	automake:devel/automake
BUILD_DEPENDS+=	makeinfo:system/texinfo


GNU_CONFIGURE=	yes
USES+=		gmake
CFLAGS+=	-I${LOCALBASE}/include
CPPFLAGS=	${CXXFLAGS} -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USE_LDCONFIG=	yes

INFO=	iksemel

post-patch:
	${REINPLACE_CMD} -e 's|@setfilename iksemel|@setfilename iksemel.info|' \
	    ${WRKSRC}/doc/iksemel.texi

	cd ${WRKSRC} && aclocal
	cd ${WRKSRC} && autoheader
	cd ${WRKSRC} && libtoolize -f -c 
	cd ${WRKSRC} && automake --add --copy
	cd ${WRKSRC} && autoconf

.include <bsd.port.pre.mk>


PLIST=	${PKGDIR}/pkg-plist.${ARCH}


.include <bsd.port.post.mk>
#EOF

