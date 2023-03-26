PORTNAME=	mongodb-tools
DISTVERSION=	100.7.0
CATEGORIES=	databases

MAINTAINER=	ronald@FreeBSD.org
COMMENT=	Tools for MongoDB 4.4.x and up
WWW=		https://docs.mongodb.com/database-tools/

ONLY_FOR_ARCHS=	aarch64 amd64 armv7 i386
ONLY_FOR_ARCHS_REASON=	not yet ported to other architectures

USES=		compiler:c++14-lang go localbase
USE_GITHUB=	yes
GH_ACCOUNT=	mongodb
GH_PROJECT=	mongo-tools

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${GH_PROJECT}
#GO_BUILDFLAGS=	-tags "${VARS}"

GO_TARGET+=./bsondump/main/:bsondump
GO_TARGET+=./bsondump/main:bsondump
GO_TARGET+=./mongodump/main:mongodump
GO_TARGET+=./mongoexport/main:mongoexport
GO_TARGET+=./mongofiles/main:mongofiles
GO_TARGET+=./mongoimport/main:mongoimport
GO_TARGET+=./mongorestore/main:mongorestore
GO_TARGET+=./mongostat/main:mongostat
GO_TARGET+=./mongotop/main:mongotop


.include <bsd.port.mk>
