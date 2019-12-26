# Created by: Yoichi Asai <yatt@luna2.org>
# $FreeBSD: head/audio/timidity++/Makefile 493867 2019-02-25 14:32:37Z bapt $

PORTNAME=	timidity++
PORTVERSION=	2.14.0
CATEGORIES+=	audio
MASTER_SITES=	SF/timidity/TiMidity%2B%2B/TiMidity%2B%2B-${PORTVERSION}
DISTNAME=	TiMidity++-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Software MIDI player

LIB_DEPENDS+=	libarc.so:arch/libarc
LIB_DEPENDS+=	libvorbis.so:media/libvorbis
LIB_DEPENDS+=	libogg.so:media/libogg

RUN_DEPENDS+= eawpats>=0:media/eawpats
RUN_DEPENDS+= fluid-soundfont>=0:media/fluid-soundfont

USES=		gmake tar:bzip2
GNU_CONFIGURE=	yes
CONFIGURE_ENV+=	SHLD="${CC} -shared"

CPPFLAGS+=	-I${LOCALBASE}/include/libarc -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -Wl,--export-dynamic

CONFIGURE_ARGS+= --enable-audio=oss,vorbis
CONFIGURE_ARGS+= --with-default-output=oss
CONFIGURE_ARGS+= --enable-server
#CONFIGURE_ARGS+= --enable-alsaseq

.include <bsd.port.options.mk>

CONFIGURE_ARGS+= --enable-interface=ncurses,vt100,server,gtk --enable-network

.include <bsd.port.mk>
#EOF
