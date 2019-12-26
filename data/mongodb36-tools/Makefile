PORTNAME=	mongodb-tools
PORTVERSION=	3.6.3
DISTVERSIONPREFIX=	r
CATEGORIES=	databases net

MAINTAINER=	numisemis@yahoo.com
COMMENT=	Tools for MongoDB


ONLY_FOR_ARCHS=	amd64 i386
ONLY_FOR_ARCHS_REASON=	"not yet ported to anything other than i386 and amd64"

BUILD_DEPENDS=	go>0:lang/go

USES=	localbase

USE_GITHUB=	yes
GH_ACCOUNT=	mongodb
GH_PROJECT=	mongo-tools

MAKE_CMD=	${LOCALBASE}/bin/go build
MAKE_ENV=	GOPATH="${WRKSRC}/.gopath:${WRKSRC}/vendor" \
		CGO_CFLAGS="${CFLAGS}" CGO_CPPFLAGS="${CPPFLAGS}" \
		CGO_CXXFLAGS="${CXXFLAGS}" CGO_LDFLAGS="-L${LOCALBASE}/lib ${LDFLAGS}"

MY_TAGS=	-tags "${USE_MY_TAGS}"

post-patch:
	cd ${WRKSRC} ; ${MKDIR} ${WRKSRC}/.gopath/src/github.com/${GH_ACCOUNT} ; \
		${LN} -sf ${WRKSRC} ${WRKSRC}/.gopath/src/github.com/${GH_ACCOUNT}/${GH_PROJECT}

do-build:
.for x in bsondump mongostat mongofiles mongoexport mongoimport mongorestore mongodump mongotop
	${SETENV} ${MAKE_ENV} ${MAKE_CMD} \
		-o ${WRKSRC}/bin/${x} ${MY_TAGS}\
		-ldflags "-X github.com/${GH_ACCOUNT}/${GH_PROJECT}/common/options.Gitspec=${GH_TAGNAME}"\
		${WRKSRC}/${x}/main/${x}.go
.endfor

do-install:
.for x in bsondump mongostat mongofiles mongoexport mongoimport mongorestore mongodump mongotop
	${INSTALL_PROGRAM} ${WRKSRC}/bin/${x} ${STAGEDIR}${PREFIX}/bin/
.endfor

	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for x in LICENSE.md README.md THIRD-PARTY-NOTICES
	${INSTALL_MAN} ${WRKSRC}/${x} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
#EOF
