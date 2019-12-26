# Created by: ijliao
# $FreeBSD: head/net/tightvnc/Makefile 425758 2016-11-08 19:29:56Z linimon $

PORTNAME=	tightvnc
PORTVERSION=	1.3.10
CATEGORIES=	net java
MASTER_SITES=	SF/vnc-tight/TightVNC-unix/${PORTVERSION}
DISTNAME=	${PORTNAME}-${PORTVERSION}_unixsrc

MAINTAINER=	meta+ports@vmeta.jp
COMMENT=	Enhanced version of VNC

RUN_DEPENDS+=	showrgb:xutil/rgb
RUN_DEPENDS+=	xauth:xutil/xauth
#RUN_DEPENDS+=	xorg-fonts>=7.2:x11-fonts/xorg-fonts

LIB_DEPENDS+=   libXaw7.so:x11/libXaw
LIB_DEPENDS+=   libX11.so:x11/libX11
LIB_DEPENDS+=   libXau.so:x11/libXau
LIB_DEPENDS+=   libICE.so:x11/libICE
LIB_DEPENDS+=   libXpm.so:x11/libXpm


BROKEN_aarch64=	Fails to build: invokes x86 asm

MAKE_JOBS_UNSAFE=	yes
CONFLICTS=	tridiavnc-[0-9]* vnc-[0-9]* tigervnc-*
WRKSRC=		${WRKDIR}/vnc_unixsrc
USES=		imake shebangfix perl5 tar:bzip2
SHEBANG_FILES=	vncserver
CFLAGS+=	-Wno-return-type
ALL_TARGET=	World

.include <bsd.port.options.mk>
.include <bsd.port.pre.mk>

post-patch:
.for file in vncviewer/Imakefile Xvnc/config/cf/vnclibs.def
	${REINPLACE_CMD} -i '' -e "s|%%LOCALBASE%%|${LOCALBASE}|g" ${WRKSRC}/${file}
.endfor
	${REINPLACE_CMD} -i '' -e "s|/usr/local/vnc/classes|${DATADIR}/classes|g" \
		${WRKSRC}/vncserver
	${REINPLACE_CMD} -i '' -e "s|%%CC%%|${CC}|g ; \
		s|%%CFLAGS%%|${CFLAGS}|g" ${WRKSRC}/Xvnc/config/cf/FreeBSD.cf

do-install:
	cd ${WRKSRC}; ./vncinstall ${STAGEDIR}${PREFIX}/bin ${STAGEDIR}${PREFIX}/man
.for FILE in Xvnc vncviewer vncpasswd vncconnect
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${FILE}
.endfor
	${MKDIR} ${STAGEDIR}${DATADIR}/classes
	${INSTALL_DATA} ${WRKSRC}/classes/*.* ${STAGEDIR}${DATADIR}/classes


.include <bsd.port.post.mk>
#EOF
