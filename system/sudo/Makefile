#
# $Id$
#
PORTNAME=	sudo
DISTVERSION=	1.8.25p1
PORTVERSION=	${DISTVERSION:S/p/./}
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_SUDO}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Allow others to run commands as root

GNU_CONFIGURE=	yes
USES+=		gmake
LDFLAGS+=	-lgcc
LDFLAGS+=	-lssp_nonshared

CONFIGURE_ARGS+= --sysconfdir=${PREFIX}/etc
CONFIGURE_ARGS+= --with-ignore-dot
CONFIGURE_ARGS+= --with-tty-tickets
CONFIGURE_ARGS+= --with-env-editor
CONFIGURE_ARGS+= --with-logincap
CONFIGURE_ARGS+= --with-long-otp-prompt
CONFIGURE_ARGS+= --with-insults
CONFIGURE_ARGS+= --with-all-insults
CONFIGURE_ARGS+= --enable-shell-sets-home
CONFIGURE_ARGS+= --without-lecture


CONFIGURE_ARGS+= --without-ldap
##CONFIGURE_ARGS+= --disable-root-sudo
##CONFIGURE_ARGS+= --disable-authentication
CONFIGURE_ARGS+= --without-opie
CONFIGURE_ARGS+= --with-pam
CONFIGURE_ARGS+= --disable-pie

LOGFAC?=	authpriv
CONFIGURE_ARGS+=	--with-logfac=${LOGFAC}

## ex: make SUDO_SECURE_PATH="/sbin:/bin:/usr/sbin:/usr/bin:/usr/local/sbin:/usr/local/bin"
#.if defined(SUDO_SECURE_PATH)
#CONFIGURE_ARGS+=	--with-secure-path="${SUDO_SECURE_PATH}"
#.endif

LDFLAGS+=	-L${LOCALBASE}/lib -lintl
CFLAGS+=	-I${LOCALBASE}/include

post-patch:
#	${REINPLACE_CMD} -E '/install-(binaries|noexec):/,/^$$/ \
#		s/\$$\(INSTALL\)/& ${STRIP}/;s/-b\~/-b ~/' \
#		${WRKSRC}/src/Makefile.in
#	${REINPLACE_CMD} -e 's,$$(srcdir)/sudoers2ldif $$(DESTDIR)$$(docdir),$$(srcdir)/sudoers2ldif $$(DESTDIR)$$(bindir),' ${WRKSRC}/plugins/sudoers/Makefile.in


post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/sudoreplay
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/sbin/visudo
.for FILE in group_file.so sudoers.so system_group.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/libexec/sudo/${FILE}
.endfor
	cd ${STAGEDIR}/${PREFIX}/man/man8 && ${LN} -sf  sudo.8 sudoedit.8

.include <bsd.port.mk>
#EOF
