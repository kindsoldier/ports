#
# $Id$
#
PORTNAME=	tmux
PORTVERSION=	2.9a
CATEGORIES=	sysutils
#MASTER_SITES=	https://github.com/tmux/tmux/releases/download/${PORTVERSION}/ \
#		SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION:S/a$//}

MASTER_SITES=	https://github.com/tmux/tmux/releases/download/${PORTVERSION}/
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}


USE_GITHUB=	nodefault
GH_TUPLE=	imomaliev:tmux-bash-completion:ef56d3e:bash


MAINTAINER=	mat@FreeBSD.org
COMMENT=	Terminal Multiplexer

LIB_DEPENDS+= libevent.so:devel/libevent
LIB_DEPENDS+= libutf8proc.so:text/libutf8proc

GNU_CONFIGURE=	yes
USES+=	        gmake pkgconfig
CONFIGURE_ARGS+= --sysconfdir=${PREFIX}/etc
CONFIGURE_ARGS+= --enable-utf8proc
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


post-patch:
	${REINPLACE_CMD} -e 's|/etc/tmux.conf|${PREFIX}/etc/tmux.conf|g' ${WRKSRC}/CHANGES \
		${WRKSRC}/tmux.h

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/tmux ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/tmux.1 ${STAGEDIR}${MANPREFIX}/man/man1
#	${MKDIR} ${STAGEDIR}${PREFIX}/etc/bash_completion.d
#	${INSTALL_DATA} ${WRKSRC}/examples/bash_completion_tmux.sh ${STAGEDIR}${PREFIX}/etc/bash_completion.d/tmux

.include <bsd.port.mk>
