# $FreeBSD: head/security/putty/Makefile 440836 2017-05-13 13:16:18Z mandree $

PORTNAME=	putty
PORTVERSION=	0.70
CATEGORIES=	security
MASTER_SITES=	http://the.earth.li/~sgtatham/putty/${PORTVERSION}/ \
		ftp://ftp.chiark.greenend.org.uk/users/sgtatham/putty-latest/


LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

MAINTAINER=	mandree@FreeBSD.org
COMMENT=	Secure shell and telnet client

USES=		cpe gmake pkgconfig
WRKSRC=		${WRKDIR}/${DISTNAME}/unix
MAKEFILE=	Makefile.gtk

.include <bsd.port.options.mk>

CFLAGS+=	-DBSD_PTYS -DOMIT_UTMP -DIPV6
LDFLAGS+=	-Wl,--as-needed

MAKE_ARGS+=	PUTTY_WITH_GTK=yes GTK_CONFIG="pkg-config gtk+ x11 --cflags"
_COMPAT+= -DNO_GSSAPI
_COMPAT+= -DOMIT_UTMP

MAKE_ARGS+=	COMPAT="${_COMPAT}"
MAKE_ARGS+=	CC="${CC}"
MAKE_ARGS+=	XFLAGS="${XFLAGS}" 
MAKE_ARGS+=	INSTALL_DATA="${INSTALL_DATA}"
MAKE_ARGS+=	INSTALL_PROGRAM="${INSTALL_PROGRAM}"

post-patch:
	${REINPLACE_CMD} -e 's,prefix=/usr/local,prefix=${PREFIX},;\
			      s,make,${MAKE_CMD},'\
		${WRKSRC}/${MAKEFILE}

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/pixmaps
#	${INSTALL_DATA} ${WRKSRC}/../windows/putty.ico \
#		${STAGEDIR}${PREFIX}/share/pixmaps/
	${INSTALL_DATA} ${FILESDIR}/putty.png \
		${STAGEDIR}${PREFIX}/share/pixmaps/
	${MKDIR} ${STAGEDIR}${PREFIX}/share/applications
	${INSTALL_DATA} ${FILESDIR}/putty.desktop \
		${STAGEDIR}${PREFIX}/share/applications/


.include <bsd.port.mk>
