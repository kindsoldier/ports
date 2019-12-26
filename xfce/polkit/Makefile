#
# $Id$
#
PORTNAME=	polkit
PORTVERSION=	0.113
CATEGORIES=	sysutils gnome
MASTER_SITES=	http://www.freedesktop.org/software/polkit/releases/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Framework for controlling access to system-wide components

LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libmozjs17.so:lang/mozjs17
RUN_DEPENDS=	dbus-launch:gnome/dbus

LIB_DEPENDS+=	libgio.so:devel/libglib
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgmodule.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib

LIB_DEPENDS+=	libexpat.so:text/libexpat
#LIB_DEPENDS+=	libdbus.so:gnome/dbus
LIB_DEPENDS+=	libnspr4.so:devel/libnspr


#USERS=		polkitd
#GROUPS=	polkitd

USES=		gmake  shebangfix
SHEBANG_FILES=	${WRKSRC}/src/polkitbackend/toarray.pl
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS+= --disable-gtk-doc-html
CONFIGURE_ARGS+= --without-html-dir
CONFIGURE_ARGS+= --with-authfw=pam
CONFIGURE_ARGS+= --with-pam-include=system
CONFIGURE_ARGS+= --with-os-type=freebsd
CONFIGURE_ARGS+= --with-polkitd-user=${POLKIT_OWNER}
CONFIGURE_ARGS+= --disable-static
CONFIGURE_ARGS+= --disable-examples
CONFIGURE_ARGS+= --disable-libsystemd-login
CONFIGURE_ARGS+= --disable-test
CONFIGURE_ARGS+= --enable-introspection=no
CONFIGURE_ARGS+= --localstatedir=/var
#CONFIGURE_ARGS+= --enable-man-pages
#MAKE_JOBS_UNSAFE=yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
INSTALL_TARGET=	install-strip


POLKIT_OWNER=	polkitd
POLKIT_GROUP=	polkitd

POLKIT_OWNER_ID=	565
POLKIT_GROUP_ID=	565

SUB_FILES+= 	pkg-install

#POLKIT_RUNDIR=	/var/run/POLKIT
#POLKIT_DBDIR=	/var/db/POLKIT

#SUB_LIST+=	POLKIT_LOGDIR=${POLKIT_LOGDIR}
#SUB_LIST+=	POLKIT_RUNDIR=${POLKIT_RUNDIR}
#SUB_LIST+=	POLKIT_DBDIR=${POLKIT_DBDIR}

SUB_LIST+=	POLKIT_OWNER=${POLKIT_OWNER}
SUB_LIST+=	POLKIT_GROUP=${POLKIT_GROUP}

SUB_LIST+=	POLKIT_OWNER_ID=${POLKIT_OWNER_ID}
SUB_LIST+=	POLKIT_GROUP_ID=${POLKIT_GROUP_ID}

#BUILD_DEPENDS+=	docbook-sgml>=4.5:textproc/docbook-sgml
#BUILD_DEPENDS+=	docbook-xsl>=1.76:textproc/docbook-xsl

.include <bsd.port.pre.mk>

#.if ((${ARCH} == "armv6" || ${ARCH} == "armv6hf") || ${ARCH} == "armv6hf")
#USE_GCC=       yes
#.endif

FILES+=	${WRKSRC}/configure
FILES+=	${WRKSRC}/Makefile.in
FILES+=	${WRKSRC}/*/Makefile.in
FILES+=	${WRKSRC}/*/*/Makefile.in
FILES+=	${WRKSRC}/*/*.pc.in

post-patch:
	${REINPLACE_CMD} -e 's|/usr/bin/|${PREFIX}/bin/|g' \
		${WRKSRC}/docs/man/pkexec.xml \
		${WRKSRC}/src/examples/org.freedesktop.policykit.examples.pkexec.policy.in
	${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|g' \
		${WRKSRC}/docs/man/polkit.xml

	${REINPLACE_CMD} -e 's,gio-2.0,gio,g' 		${FILES}
	${REINPLACE_CMD} -e 's,gio-unix-2.0,gio-unix,g' 		${FILES}
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gmodule-2.0,gmodule,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gobject-2.0,gobject,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gthread-2.0,gthread,g' 	${FILES}

	${REINPLACE_CMD} -e 's,polkit-gobject-1,polkit-gobject,g'	${FILES}
	${REINPLACE_CMD} -e 's,polkit_gobject_1,polkit_gobject,g'	${FILES}
	${REINPLACE_CMD} -e 's,polkit-1,polkit,g'	${FILES}
	${REINPLACE_CMD} -e 's,polkit_1,polkit,g'	${FILES}

	${REINPLACE_CMD} -e 's,polkit-agent-1,polkit-agent,g'	${FILES}
	${REINPLACE_CMD} -e 's,polkit_agent_1,polkit_agent,g'	${FILES}

	${REINPLACE_CMD} -e 's,polkit-backend-1,polkit-backend,g'	${FILES}
	${REINPLACE_CMD} -e 's,polkit_backend_1,polkit_backend,g'	${FILES}
	${REINPLACE_CMD} -e 's,polkit-agent-helper-1,polkit-agent-helper,g'	${FILES}
	${REINPLACE_CMD} -e 's,polkit_agent_helper_1,polkit_agent_helper,g'	${FILES}

	${REINPLACE_CMD} -e 's,dbus-1,dbus,g' 	${FILES}

	${REINPLACE_CMD} -e 's,mozjs-17.0,mozjs17,g' ${WRKSRC}/configure

	cd ${WRKSRC}/data && ${CP} polkit-1.in polkit.in
	cd ${WRKSRC}/data && ${CP} polkit-agent-1.pc.in polkit-agent.pc.in
	cd ${WRKSRC}/data && ${CP} polkit-gobject-1.pc.in polkit-gobject.pc.in



post-install:
#	${MKDIR} ${STAGEDIR}/var/lib/polkit
#	${INSTALL_DATA} ${WRKSRC}/data/org.freedesktop.PolicyKit1.conf \
#		${STAGEDIR}${PREFIX}/etc/dbus/system.d/org.freedesktop.PolicyKit1.conf.sample
#.for i in 10-vendor.d 20-org.d 30-site.d 50-local.d 90-mandatory.d
#	${MKDIR} ${STAGEDIR}${PREFIX}/etc/polkit/localauthority/${i}
#	${MKDIR} ${STAGEDIR}/var/lib/polkit/localauthority/${i}
#.endfor

.include <bsd.port.post.mk>
#EOF
