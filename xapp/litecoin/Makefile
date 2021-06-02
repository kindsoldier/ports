#
# $Id$
#
PORTNAME=	litecoin
PORTVERSION=	0.16.0
DISTVERSIONPREFIX=	v
CATEGORIES=	net-p2p finance

MAINTAINER=	robbak@robbak.com
COMMENT?=	Virtual Peer-to-Peer Currency Client (QT)

LIB_DEPENDS=	libboost_date_time.so:devel/libboost64
LIB_DEPENDS=	libqrencode.so:graph/libqrencode
BUILD_DEPENDS+=	protoc:devel/protobuf
LIB_DEPENDS+=	libprotobuf.so:devel/protobuf

RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils

LIB_DEPENDS+=	libQtCore.so:xapp/libqt4
LIB_DEPENDS+=	libQtDBus.so:xapp/libqt4
LIB_DEPENDS+=	libQtGui.so:xapp/libqt4
LIB_DEPENDS+=	libQtNetwork.so:xapp/libqt4
LIB_DEPENDS+=	libQtXml.so:xapp/libqt4
LIB_DEPENDS+=	libdb48.so:data/libdb48


#USES=		autoreconf compiler:c++0x gmake libtool pkgconfig shebangfix
USES+=		gmake compiler:c++0x
SHEBANG_FILES=	src/test/*.py
USE_GITHUB=	yes
USE_OPENSSL=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

GH_ACCOUNT=	litecoin-project

CONFIGURE_ARGS+=  --without-libs
CONFIGURE_ARGS+=  --disable-reduce-exports
CONFIGURE_ARGS+=  --with-gui
CONFIGURE_ARGS+=  --without-utils
#CONFIGURE_ARGS+=  --without-daemon
#CONFIGURE_ARGS+= --disable-wallet

#CONFIGURE_ENV+=	CRYPTO_CFLAGS="-I${OPENSSLINC}"
#CONFIGURE_ENV+=	CRYPTO_LIBS="-L${OPENSSLLIB} -lcrypto"
#CONFIGURE_ENV+=	SSL_CFLAGS="-I${OPENSSLINC}"
#CONFIGURE_ENV+=	SSL_LIBS="-L${OPENSSLLIB} -lssl"
MAKE_ENV+=	V=1
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


CONFIGURE_ARGS+=	OBJCXX=clang++
CONFIGURE_ENV+=	BDB_CPPFLAGS="-I${LOCALBASE}/include"
CONFIGURE_ENV+=	BDB_LIBS="-L${LOCALBASE}/lib -ldb48 -ldb48_cxx"

CONFIGURE_ENV+=	CRYPTO_CFLAGS="-I${OPENSSLINC}" 
CONFIGURE_ENV+=	CRYPTO_LIBS="-L${OPENSSLLIB} -lcrypto"
CONFIGURE_ENV+=	SSL_CFLAGS="-I${OPENSSLINC}" 
CONFIGURE_ENV+=	SSL_LIBS="-L${OPENSSLLIB} -lssl"


post-patch:
	cd ${WRKSRC} && autoreconf -i


post-install:
	${REINPLACE_CMD} -e 's,=/usr,=${PREFIX},' \
		${WRKSRC}/contrib/debian/bitcoin-qt.desktop

	${REINPLACE_CMD} -e 's,bitcoin,litecoin,' \
		${WRKSRC}/contrib/debian/bitcoin-qt.desktop
	${REINPLACE_CMD} -e 's,Bitcoin,Litecoin,' \
		${WRKSRC}/contrib/debian/bitcoin-qt.desktop

	${MKDIR} ${STAGEDIR}${PREFIX}/share/applications
	${INSTALL} ${WRKSRC}/contrib/debian/bitcoin-qt.desktop \
		${STAGEDIR}${PREFIX}/share/applications/litecoin-qt.desktop
	${MKDIR} ${STAGEDIR}${PREFIX}/share/pixmaps
	${INSTALL} ${WRKSRC}/share/pixmaps/bitcoin128.png \
		${STAGEDIR}${PREFIX}/share/pixmaps/litecoin128.png

.include <bsd.port.mk>
#EOF

