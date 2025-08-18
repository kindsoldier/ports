#
# $Id$
#
PORTNAME=	git
DISTVERSION=	2.50.1 #2.38.1
CATEGORIES=	devel
MASTER_SITES=	KERNEL_ORG/software/scm/git
DISTFILES+=	${DISTNAME}${EXTRACT_SUFX}
DISTFILES+=	${PORTNAME}-manpages-${DISTVERSION}${EXTRACT_SUFX}
EXTRACT_ONLY+=	${DISTNAME}${EXTRACT_SUFX}
EXTRACT_ONLY+=	${PORTNAME}-manpages-${DISTVERSION}${EXTRACT_SUFX}

MAINTAINER=	garga@FreeBSD.org
COMMENT=	Distributed source code management tool

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libcurl.so:net/libcurl
LIB_DEPENDS+=	libexpat.so:text/libexpat

PATCH_SITES=	-isystem${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
MAKE_ENV+=	V=1

GNU_CONFIGURE=	yes
USES = gmake
#SHEBANG_FILES=	*.perl */*.perl */*/*.perl */*.pl */*/*.pl */*/*/*.pl \
#		t/*/*/pre t/*/*/post t/Git-SVN/Utils/*.t \
#		git-p4.py \
#		contrib/hg-to-git/hg-to-git.py \
#		contrib/hooks/update-paranoid \
#		contrib/fast-import/import-zips.py \
#		contrib/remote-helpers/git-remote-bzr \
#		contrib/remote-helpers/git-remote-hg \
#		contrib/credential/netrc/git-credential-netrc.perl \
#		contrib/buildsystems/generate contrib/contacts/git-contacts \
#		templates/hooks--fsmonitor-watchman.sample

SHEBANG_FILES=	Documentation/*.perl \
		contrib/*/*.perl \
		contrib/*/*.pl \
		contrib/*/*/*.perl \
		contrib/*/*/*.pl \
		contrib/contacts/git-contacts \
		contrib/fast-import/import-zips.py \
		contrib/hooks/update-paranoid \
		git-p4.py \
		templates/hooks/fsmonitor-watchman.sample

CONFIGURE_ARGS+= --enable-pthreads=-pthread ac_cv_header_libcharset_h=no
CONFIGURE_ARGS+= --with-editor="${LOCALBASE}/bin/vim"
CONFIGURE_ARGS+= --with-pager="/usr/bin/less"
CONFIGURE_ARGS+= --with-perl="${LOCALBASE}/bin/perl"

CONFIGURE_ARGS+= --with-curl
CONFIGURE_ARGS+= --with-zlib=/usr
CONFIGURE_ARGS+= --with-expat
#CONFIGURE_ARGS+= --with-libpcre
CONFIGURE_ARGS+= --with-openssl

CONFIGURE_ARGS+= --without-tcltk
CONFIGURE_ARGS+= --without-python

RUN_DEPENDS+=	p5-Error>=0:perl/p5-Error
RUN_DEPENDS+=	p5-Net-SMTP-SSL>=0:perl/p5-Net-SMTP-SSL
RUN_DEPENDS+=	p5-Authen-SASL>=0:perl/p5-Authen-SASL

#BUILD_DEPENDS+= ${RUN_DEPENDS}

MAKE_ARGS+=	NO_TCLTK=yes

USE_RC_SUBR=	git_daemon

GIT_OWNER=	git_daemon
GIT_GROUP=	git_daemon
GIT_OWNERID=	964
GIT_GROUPID=	964

SUB_LIST+= GIT_OWNER=${GIT_OWNER}
SUB_LIST+= GIT_GROUP=${GIT_GROUP}
SUB_LIST+= GIT_OWNERID=${GIT_OWNERID}
SUB_LIST+= GIT_GROUPID=${GIT_GROUPID}

SUB_FILES=	pkg-message pkg-install

.include <bsd.port.options.mk>

ALL_TARGET=	all strip

PORTEXAMPLES= *

post-patch:
	${REINPLACE_CMD} -e "s,%%SITE_PERL%%,${SITE_PERL},g" ${WRKSRC}/Makefile
	${REINPLACE_CMD} -e '/git-cvsexportcommit.perl/d; \
		/git-cvsimport.perl/d; \
		/git-cvsserver.perl/d; \
		/documented,gitcvs-migration/d; \
		s/git-cvsserver//' \
		${WRKSRC}/Makefile
	${REINPLACE_CMD} -e '/^SCRIPT_PYTHON += git-p4.py$$/d' ${WRKSRC}/Makefile
	${REINPLACE_CMD} -e 's|/bin/bash|/bin/sh|' ${WRKSRC}/contrib/subtree/git-subtree.sh

post-build:
	${FIND} ${WRKSRC} -name "*.bak" -delete

post-install:
	cd ${WRKDIR}/man1 && ${COPYTREE_SHARE} . ${STAGEDIR}${MANPREFIX}/man/man1
	cd ${WRKDIR}/man5 && ${COPYTREE_SHARE} . ${STAGEDIR}${MANPREFIX}/man/man5
	cd ${WRKDIR}/man7 && ${COPYTREE_SHARE} . ${STAGEDIR}${MANPREFIX}/man/man7

post-stage:

.include <bsd.port.mk>
#EOF
