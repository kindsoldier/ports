# Created by: Joep Grooten <joep@di.nl>
# $FreeBSD: head/devel/doxygen/Makefile 459474 2018-01-19 21:28:34Z antoine $

PORTNAME=	doxygen
PORTVERSION=	1.8.14
CATEGORIES=	devel
MASTER_SITES=	ftp://ftp.stack.nl/pub/users/dimitri/ \
		http://ftp.stack.nl/pub/users/dimitri/
EXTRACT_SUFX=	.src.tar.gz

MAINTAINER=	cyberbotx@cyberbotx.com
COMMENT=	Documentation system for C, C++, and other languages

LIB_DEPENDS+=	libQtCore.so:xapp/libqt4
LIB_DEPENDS+=	libQtGui.so:xapp/libqt4


USES=		cmake:outsource shebangfix # bison cmake:outsource,noninja python shebangfix
ALL_TARGET=	all
CMAKE_ARGS+=	-DDOC_INSTALL_DIR:PATH=${DOCSDIR_REL}

MAKE_JOBS_UNSAFE=	yes

EXTRACT_AFTER_ARGS=	--exclude '*/libmd5'

post-patch:
	${REINPLACE_CMD} -e '/PERL_PATH/ s|/usr/bin/perl|${perl_CMD}|' \
		${WRKSRC}/src/config.xml

.include <bsd.port.mk>
