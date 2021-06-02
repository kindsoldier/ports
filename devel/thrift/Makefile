# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/devel/thrift/Makefile 567474 2021-03-06 10:01:09Z mfechner $

PORTNAME=	thrift
PORTVERSION=	0.14.1
CATEGORIES=	devel
MASTER_SITES=	APACHE/thrift/${PORTVERSION}

MAINTAINER=	komarov@valerka.net
COMMENT=	Framework for scalable cross-language services development

USES=		gmake compiler:c++11-lang pkgconfig
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

# For C++ support, use devel/thrift-cpp
# For C glib support, use devel/thrift-c_glib.
# For Perl support, use devel/p5-Thrift.
# For Python support, use devel/py-thrift.
# For Ruby support, use devel/rubygem-thrift.
# For PHP support, use devel/php5-thrift.
# For nodejs support, use devel/node-thrift.
# Other languages are not yet supported, please feel free to contribute
# using one of the leaf ports as an example.


CONFIGURE_ARGS+= --without-qt5
CONFIGURE_ARGS+= --without-c_glib
CONFIGURE_ARGS+= --without-java
CONFIGURE_ARGS+= --without-erlang
CONFIGURE_ARGS+= --without-nodejs
CONFIGURE_ARGS+= --without-nodets
CONFIGURE_ARGS+= --without-lua
CONFIGURE_ARGS+= --without-python
CONFIGURE_ARGS+= --without-py3
CONFIGURE_ARGS+= --without-perl
CONFIGURE_ARGS+= --without-php
CONFIGURE_ARGS+= --without-php_extension
CONFIGURE_ARGS+= --without-dart
CONFIGURE_ARGS+= --without-ruby
CONFIGURE_ARGS+= --without-haskell
CONFIGURE_ARGS+= --without-go
CONFIGURE_ARGS+= --without-swift
CONFIGURE_ARGS+= --without-rs
CONFIGURE_ARGS+= --without-cl
CONFIGURE_ARGS+= --without-haxe
CONFIGURE_ARGS+= --without-netstd
CONFIGURE_ARGS+= --without-d

#CMAKE_OFF+=	BUILD_CPP 
CMAKE_OFF+=	BUILD_C_GLIB 
CMAKE_OFF+=	BUILD_JAVA 
#CMAKE_OFF+=	BUILD_JAVASCRIPT 
CMAKE_OFF+=	BUILD_NODEJS 
#CMAKE_OFF+=	BUILD_PYTHON 
CMAKE_OFF+=	BUILD_HASKELL

CONFIGURE_ARGS+= --without-tests

MAKE_ENV+= GO111MODULE=auto

.include <bsd.port.pre.mk>

post-patch:
	${REINPLACE_CMD} 's,-Werror,,' ${WRKSRC}/compiler/cpp/Makefile.in \
		${WRKSRC}/lib/rb/ext/extconf.rb

#pre-configure:
#	${REINPLACE_CMD} '/config.h/d' ${WRKSRC}/lib/cpp/Makefile.am

.include <bsd.port.post.mk>
