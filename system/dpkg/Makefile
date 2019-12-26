#
# #$id$
#
PORTNAME=	dpkg
PORTVERSION=	1.19.6 #1.18.10
CATEGORIES=	archivers sysutils
MASTER_SITES=	DEBIAN_POOL
DISTNAME=	dpkg_${PORTVERSION}

MAINTAINER=	pawel@FreeBSD.org
COMMENT=	Debian package maintenance system

#BUILD_DEPENDS=	po4a:textproc/po4a
RUN_DEPENDS+=	gtar:arch/gtar
RUN_DEPENDS+=	gpatch:text/gpatch

GNU_CONFIGURE=	yes
USES=		gmake perl5 pkgconfig tar:xz shebangfix
CPE_VENDOR=	debian
WRKSRC=		${WRKDIR}/dpkg-${PORTVERSION}

SHEBANG_FILES+=	lib/dpkg/t/t-tarextract.t
SHEBANG_FILES+= lib/dpkg/t/t-treewalk.t
SHEBANG_FILES+= lib/dpkg/t/t-trigdeferred.t
SHEBANG_FILES+= dselect/mkcurkeys.pl
SHEBANG_FILES+= dselect/methods/Makefile.in
#SHEBANG_FILES+= dselect/methods/Makefile.am
SHEBANG_FILES+= dselect/methods/ftp/setup.pl
SHEBANG_FILES+= dselect/methods/ftp/update.pl
SHEBANG_FILES+= dselect/methods/ftp/install.pl
SHEBANG_FILES+= utils/t/update_alternatives.t
SHEBANG_FILES+= src/t/dpkg_divert.t
SHEBANG_FILES+= t/po.t
SHEBANG_FILES+= t/critic.t
SHEBANG_FILES+= t/synopsis.t
SHEBANG_FILES+= t/minimum-version.t
SHEBANG_FILES+= t/shellcheck.t
SHEBANG_FILES+= t/strict.t
SHEBANG_FILES+= t/pod-coverage.t
SHEBANG_FILES+= t/codespell.t
SHEBANG_FILES+= t/pod-spell.t
SHEBANG_FILES+= t/cppcheck.t
SHEBANG_FILES+= t/module-version.t
SHEBANG_FILES+= t/pod.t
SHEBANG_FILES+= t/syntax.t
SHEBANG_FILES+= doc/lcov-inject.pl
#SHEBANG_FILES+= doc/Doxyfile.in
#SHEBANG_FILES+= scripts/Makefile.in
SHEBANG_FILES+= scripts/dpkg-genbuildinfo.pl
SHEBANG_FILES+= scripts/dpkg-shlibdeps.pl
SHEBANG_FILES+= scripts/dpkg-buildpackage.pl
SHEBANG_FILES+= scripts/dpkg-source.pl
SHEBANG_FILES+= scripts/dpkg-scanpackages.pl
SHEBANG_FILES+= scripts/dpkg-distaddfile.pl
SHEBANG_FILES+= scripts/dpkg-gencontrol.pl
#SHEBANG_FILES+= scripts/Makefile.am
SHEBANG_FILES+= scripts/dpkg-gensymbols.pl
SHEBANG_FILES+= scripts/dpkg-buildflags.pl
SHEBANG_FILES+= scripts/dpkg-architecture.pl
SHEBANG_FILES+= scripts/dpkg-checkbuilddeps.pl
SHEBANG_FILES+= scripts/t/Dpkg_Build_Types.t
SHEBANG_FILES+= scripts/t/Dpkg_Substvars.t
SHEBANG_FILES+= scripts/t/Dpkg_Conf.t
SHEBANG_FILES+= scripts/t/Dpkg_Package.t
SHEBANG_FILES+= scripts/t/Dpkg_Control_Fields.t
SHEBANG_FILES+= scripts/t/Dpkg_BuildFlags_Ubuntu.t
SHEBANG_FILES+= scripts/t/Dpkg_BuildOptions.t
SHEBANG_FILES+= scripts/t/Dpkg_Index.t
SHEBANG_FILES+= scripts/t/Dpkg_Source_Quilt.t
SHEBANG_FILES+= scripts/t/Dpkg_Changelog_Ubuntu.t
SHEBANG_FILES+= scripts/t/mk.t
SHEBANG_FILES+= scripts/t/Dpkg_Control.t
SHEBANG_FILES+= scripts/t/Dpkg_Source_Archive.t
SHEBANG_FILES+= scripts/t/Dpkg_Checksums.t
SHEBANG_FILES+= scripts/t/Dpkg_File.t
SHEBANG_FILES+= scripts/t/Dpkg_Source_Format.t
SHEBANG_FILES+= scripts/t/Dpkg_Build_Info.t
SHEBANG_FILES+= scripts/t/Dpkg_Changelog.t
SHEBANG_FILES+= scripts/t/merge_changelogs.t
SHEBANG_FILES+= scripts/t/Dpkg_BuildProfiles.t
SHEBANG_FILES+= scripts/t/Dpkg_Vendor.t
SHEBANG_FILES+= scripts/t/Dpkg_BuildFlags.t
SHEBANG_FILES+= scripts/t/Dpkg_Path.t
SHEBANG_FILES+= scripts/t/Dpkg_Exit.t
SHEBANG_FILES+= scripts/t/Dpkg_Getopt.t
SHEBANG_FILES+= scripts/t/Dpkg_IPC.t
SHEBANG_FILES+= scripts/t/Dpkg_Source_Patch.t
SHEBANG_FILES+= scripts/t/Dpkg_Deps.t
SHEBANG_FILES+= scripts/t/Dpkg_Shlibs.t
SHEBANG_FILES+= scripts/t/Dpkg_Lock.t
SHEBANG_FILES+= scripts/t/Dpkg_Gettext.t
SHEBANG_FILES+= scripts/t/Dpkg_Version.t
SHEBANG_FILES+= scripts/t/Dpkg_Source_Package.t
SHEBANG_FILES+= scripts/t/Dpkg_Control_Tests.t
SHEBANG_FILES+= scripts/t/Dpkg_Shlibs_Cppfilt.t
SHEBANG_FILES+= scripts/t/Dpkg_ErrorHandling.t
SHEBANG_FILES+= scripts/t/Dpkg_Dist_Files.t
SHEBANG_FILES+= scripts/t/Dpkg_Interface_Storable.t
SHEBANG_FILES+= scripts/t/Dpkg_Shlibs/spacesyms-c-gen.pl
SHEBANG_FILES+= scripts/t/Dpkg_Shlibs/spacesyms-o-map.pl
SHEBANG_FILES+= scripts/t/Dpkg_Arch.t
SHEBANG_FILES+= scripts/t/Dpkg_Vars.t
SHEBANG_FILES+= scripts/t/dpkg_source.t
SHEBANG_FILES+= scripts/t/dpkg_buildpackage.t
SHEBANG_FILES+= scripts/t/Dpkg_OpenPGP.t
SHEBANG_FILES+= scripts/t/Dpkg_Build_Env.t
SHEBANG_FILES+= scripts/t/Dpkg_Compression.t
SHEBANG_FILES+= scripts/t/Dpkg_Source_Functions.t
SHEBANG_FILES+= scripts/dpkg-scansources.pl
SHEBANG_FILES+= scripts/dpkg-name.pl
SHEBANG_FILES+= scripts/dpkg-vendor.pl
SHEBANG_FILES+= scripts/dpkg-genchanges.pl
SHEBANG_FILES+= scripts/dpkg-mergechangelogs.pl
SHEBANG_FILES+= scripts/dpkg-parsechangelog.pl
SHEBANG_FILES+= scripts/Build.PL.in

DPKGDIR=	/var/db/dpkg
PLIST_SUB+=	DPKGDIR=${DPKGDIR}

CONFIGURE_ARGS+= --with-admindir=${DPKGDIR} 
CONFIGURE_ARGS+= --libdir=${PREFIX}/libexec
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-logdir=/var/log --with-libmd
CONFIGURE_ENV+=	PERL_LIBDIR="${PREFIX}/${SITE_PERL_REL}"


#CONFIGURE_ARGS+= --disable-nls

post-install:
	cd ${STAGEDIR}${DPKGDIR} && ${TOUCH} available.sample \
		diversions.sample statoverride.sample status.sample

bpl:
#	${REINPLACE_CMD} -e 's,${MAN1_REL},%%MAN1%%,' pkg-plist
#	${REINPLACE_CMD} -e 's,${MAN3_REL},%%MAN3%%,' pkg-plist
#	${REINPLACE_CMD} -e 's,${ARCH_LIB_REL},%%ARCH_LIB%%,' pkg-plist
#	${REINPLACE_CMD} -e 's,${_PERL_LIB_REL},%%PERL_LIB%%,' pkg-plist
#	${REINPLACE_CMD} -e 's,${SITE_PERL_REL},%%SITE_PERL%%,' pkg-plist
	${REINPLACE_CMD} -e 's,${SITE_ARCH_REL:S/\/\//\//g},%%SITE_ARCH%%,' pkg-plist


.include <bsd.port.mk>
#EOF
