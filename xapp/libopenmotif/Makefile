#
# $Id: Makefile 2602 2009-09-25 23:13:23Z root $
#
PORTNAME=	openmotif
PORTVERSION=	2.3.4
CATEGORIES=	x11-toolkits
MASTER_SITES=	SF/motif/Motif%202.3.4%20Source%20Code/
DISTNAME=	motif-${PORTVERSION}-src
EXTRACT_SUFX=	.tgz
PKGNAMEPREFIX+= lib

MAINTAINER= homeunix7@gmail.com
COMMENT=	Motif X11 Toolkit (industry standard GUI (IEEE 1295))

LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libiconv.so:text/libiconv

LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXft.so:x11/libXft
LIB_DEPENDS+=	libXmu.so:x11/libXmu
LIB_DEPENDS+=	libXp.so:x11/libXp
LIB_DEPENDS+=	libXrender.so:x11/libXrender
LIB_DEPENDS+=	libXt.so:x11/libXt
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig


WRKSRC=		${WRKDIR}/motif-${PORTVERSION}

CONFLICTS=	lesstif-*
USES+=		gmake
GNU_CONFIGURE=	yes
CFLAGS+=	-I${LOCALBASE}/include -DCSRG_BASED -DXUSE_MTSAFE_API -DXNO_MTSAFE_PWDAPI
CPPFLAGS+=	-I${LOCALBASE}/include -DCSRG_BASED -DXUSE_MTSAFE_API -DXNO_MTSAFE_PWDAPI
LDFLAGS+=	-L${LOCALBASE}/lib
INSTALLS_SHLIB=	yes
MAKE_ENV=	LANG=C
MAKE_ARGS=	program_transform_name=""
CFLAGS+=	-fno-strict-aliasing


CONFIGURE_ARGS+= --enable-xft
CONFIGURE_ARGS+= --enable-jpeg
CONFIGURE_ARGS+= --enable-png
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --program-transform-name=''


BUILD_DEPENDS+= automake:devel/automake
BUILD_DEPENDS+= autoconf:devel/autoconf
BUILD_DEPENDS+= libtoolize:devel/libtool

post-patch:
#	${FIND} ${WRKSRC}/demos/programs -name "Makefile.in" | ${XARGS} ${PERL} -pi.orig -e \
#		's|^install-data-am: |install-data-am: # |g'
	cd ${WRKSRC} && libtoolize --force --automake
	cd ${WRKSRC} && aclocal -I .
	cd ${WRKSRC} && autoconf
	cd ${WRKSRC} && autoheader
	cd ${WRKSRC} && automake --foreign  --include-deps --add-missing  --copy

	${FIND} ${WRKSRC}/doc/man/man1 -name '*.1' -maxdepth 1 | \
	    ${XARGS} ${REINPLACE_CMD} -e 's|user cmd|1|'
	${FIND} ${WRKSRC}/doc/man/man3 -name '*.3' -maxdepth 1 | \
	    ${XARGS} ${REINPLACE_CMD}  -e 's|library call|3|'
	cd ${WRKSRC}/doc/man && ${CP} -f man4/mwmrc.4 man5/mwmrc.5
	${FIND} ${WRKSRC}/doc/man/man5 -name '*.5' -maxdepth 1 | \
	    ${XARGS} ${REINPLACE_CMD} -e 's|special file|5| ; s|file formats|5|'
	${TOUCH} ${WRKSRC}/INSTALL ${WRKSRC}/NEWS ${WRKSRC}/AUTHORS ${WRKSRC}/COPYING
	${REINPLACE_CMD} -e 's,   demos,,' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's, docs \\,docs ,' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's,man4 man5,man5,' ${WRKSRC}/doc/man/Makefile.in
	${REINPLACE_CMD} -e 's,INCLUDES =, INCLUDES = -DLIBDIR=\"@LIBDIR@\",' \
	  ${WRKSRC}/clients/mwm/Makefile.am
	${REINPLACE_CMD} -e 's,man_MANS =,man_MANS = mwmrc.5 ,' \
	        ${WRKSRC}/doc/man/man5/Makefile.in 

pre-configure:
	${CHMOD} a+x ${WRKSRC}/configure

post-install:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateArrowButton.3 XmVaCreateManagedArrowButton.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateArrowButtonGadget.3 XmVaCreateManagedArrowButtonGadget.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateBulletinBoard.3 XmVaCreateManagedBulletinBoard.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateButtonBox.3 XmVaCreateManagedButtonBox.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateCascadeButton.3 XmVaCreateManagedCascadeButton.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateCascadeButtonGadget.3 XmVaCreateManagedCascadeButtonGadget.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateColorSelector.3 XmVaCreateManagedColorSelector.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateColumn.3 XmVaCreateManagedColumn.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateCombinationBox2.3 XmVaCreateManagedCombinationBox2.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateComboBox.3 XmVaCreateManagedComboBox.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateCommand.3 XmVaCreateManagedCommand.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateContainer.3 XmVaCreateManagedContainer.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateDataField.3 XmVaCreateManagedDataField.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateDrawingArea.3 XmVaCreateManagedDrawingArea.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateDrawnButton.3 XmVaCreateManagedDrawnButton.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateDropDown.3 XmVaCreateManagedDropDown.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateExt18List.3 XmVaCreateManagedExt18List.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateFileSelectionBox.3 XmVaCreateManagedFileSelectionBox.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateForm.3 XmVaCreateManagedForm.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateFrame.3 XmVaCreateManagedFrame.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateHierarchy.3 XmVaCreateManagedHierarchy.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateIconGadget.3 XmVaCreateManagedIconGadget.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateLabel.3 XmVaCreateManagedLabel.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateLabelGadget.3 XmVaCreateManagedLabelGadget.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateList.3 XmVaCreateManagedList.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateMainWindow.3 XmVaCreateManagedMainWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateMessageBox.3 XmVaCreateManagedMessageBox.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateMultiList.3 XmVaCreateManagedMultiList.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateNotebook.3 XmVaCreateManagedNotebook.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateOutline.3 XmVaCreateManagedOutline.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreatePanedWindow.3 XmVaCreateManagedPanedWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreatePushButton.3 XmVaCreateManagedPushButton.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreatePushButtonGadget.3 XmVaCreateManagedPushButtonGadget.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateRowColumn.3 XmVaCreateManagedRowColumn.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateScale.3 XmVaCreateManagedScale.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateScrollBar.3 XmVaCreateManagedScrollBar.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateScrolledWindow.3 XmVaCreateManagedScrolledWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateSelectionBox.3 XmVaCreateManagedSelectionBox.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateSeparatorGadget.3 XmVaCreateManagedSeparatorGadget.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateSimpleSpinBox.3 XmVaCreateManagedSimpleSpinBox.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateSpinBox.3 XmVaCreateManagedSpinBox.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateTabStack.3 XmVaCreateManagedTabStack.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateText.3 XmVaCreateManagedText.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateTextField.3 XmVaCreateManagedTextField.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateToggleButton.3 XmVaCreateManagedToggleButton.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmVaCreateToggleButtonGadget.3 XmVaCreateManagedToggleButtonGadget.3

.include <bsd.port.mk>
#EOF
