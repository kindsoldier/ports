PORTNAME=	xorgproto
PORTVERSION=	2021.2
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X Window System unified protocol definitions

_XORG_CAT=      proto
MASTER_SITES?=		XORG/individual/${_XORG_CAT}

CONFIGURE_ARGS=	--without-fop \
		--disable-specs \
		--without-xmlto \
		--without-xsltproc \
		--enable-legacy

CONFIGURE_ARGS+= --datarootdir=${PREFIX}/lib

USES+=  gmake tar:bz2
GNU_CONFIGURE=  yes

#pre-patch:
#	${MKDIR} ${WRKSRC}/man

.include <bsd.port.mk>
