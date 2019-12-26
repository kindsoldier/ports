#
# $Id$
#
PORTNAME=	renameutils
PORTVERSION=	0.12.0
CATEGORIES=	sysutils converters
MASTER_SITES=	SAVANNAH

MAINTAINER=	mcy@lm7.fr
COMMENT=	Rename files faster and more easily

RUN_DEPENDS=	gls:system/gcoreutils

GNU_CONFIGURE=	yes
USES+=	gmake

# This should not be needed any more for the next upstream version
post-patch:
	${REINPLACE_CMD} -e 's/($$bindir)/$$(bindir)/' \
		${WRKSRC}/src/Makefile.in

.include <bsd.port.mk>
#EOF
