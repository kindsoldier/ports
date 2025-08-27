#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/libXt/Makefile $
#
PORTNAME= 	libXt
PORTVERSION=	1.1.4
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= xproto>=0:xproto/xproto
BUILD_DEPENDS+= libX11>=0:x11/libX11
BUILD_DEPENDS+= libSM>=0:x11/libSM

LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp

USE_X_PREFIX=	yes
USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+= --disable-docs
CONFIGURE_ARGS+= --disable-specs


PLIST_FILES+=	man/man3/XtAsprintf.3.gz

PLIST_FILES+=	man/man3/XtAddActions.3.gz
PLIST_FILES+=	man/man3/XtAddCallback.3.gz
PLIST_FILES+=	man/man3/XtAddEventHandler.3.gz
PLIST_FILES+=	man/man3/XtAddExposureToRegion.3.gz
PLIST_FILES+=	man/man3/XtAddGrab.3.gz
PLIST_FILES+=	man/man3/XtAddInput.3.gz
PLIST_FILES+=	man/man3/XtAllocateGC.3.gz
PLIST_FILES+=	man/man3/XtAppAddActionHook.3.gz
PLIST_FILES+=	man/man3/XtAppAddActions.3.gz
PLIST_FILES+=	man/man3/XtAppAddBlockHook.3.gz
PLIST_FILES+=	man/man3/XtAppAddConverter.3.gz
PLIST_FILES+=	man/man3/XtAppAddInput.3.gz
PLIST_FILES+=	man/man3/XtAppAddSignal.3.gz
PLIST_FILES+=	man/man3/XtAppAddTimeOut.3.gz
PLIST_FILES+=	man/man3/XtAppAddWorkProc.3.gz
PLIST_FILES+=	man/man3/XtAppCreateShell.3.gz
PLIST_FILES+=	man/man3/XtAppError.3.gz
PLIST_FILES+=	man/man3/XtAppErrorMsg.3.gz
PLIST_FILES+=	man/man3/XtAppGetErrorDatabase.3.gz
PLIST_FILES+=	man/man3/XtAppGetSelectionTimeout.3.gz
PLIST_FILES+=	man/man3/XtAppInitialize.3.gz
PLIST_FILES+=	man/man3/XtAppLock.3.gz
PLIST_FILES+=	man/man3/XtAppNextEvent.3.gz
PLIST_FILES+=	man/man3/XtAppReleaseCacheRefs.3.gz
PLIST_FILES+=	man/man3/XtAppSetExitFlag.3.gz
PLIST_FILES+=	man/man3/XtAppSetFallbackResources.3.gz
PLIST_FILES+=	man/man3/XtAppSetTypeConverter.3.gz
PLIST_FILES+=	man/man3/XtBuildEventMask.3.gz
PLIST_FILES+=	man/man3/XtCallAcceptFocus.3.gz
PLIST_FILES+=	man/man3/XtCallActionProc.3.gz
PLIST_FILES+=	man/man3/XtCallCallbacks.3.gz
PLIST_FILES+=	man/man3/XtClass.3.gz
PLIST_FILES+=	man/man3/XtConfigureWidget.3.gz
PLIST_FILES+=	man/man3/XtConvert.3.gz
PLIST_FILES+=	man/man3/XtConvertAndStore.3.gz
PLIST_FILES+=	man/man3/XtCreateApplicationContext.3.gz
PLIST_FILES+=	man/man3/XtCreateApplicationShell.3.gz
PLIST_FILES+=	man/man3/XtCreatePopupShell.3.gz
PLIST_FILES+=	man/man3/XtCreateSelectionRequest.3.gz
PLIST_FILES+=	man/man3/XtCreateWidget.3.gz
PLIST_FILES+=	man/man3/XtCreateWindow.3.gz
PLIST_FILES+=	man/man3/XtDisplay.3.gz
PLIST_FILES+=	man/man3/XtDisplayInitialize.3.gz
PLIST_FILES+=	man/man3/XtDisplayStringConversionWarning.3.gz
PLIST_FILES+=	man/man3/XtDisplayToApplicationContext.3.gz
PLIST_FILES+=	man/man3/XtError.3.gz
PLIST_FILES+=	man/man3/XtErrorMsg.3.gz
PLIST_FILES+=	man/man3/XtFindFile.3.gz
PLIST_FILES+=	man/man3/XtGetActionKeysym.3.gz
PLIST_FILES+=	man/man3/XtGetActionList.3.gz
PLIST_FILES+=	man/man3/XtGetApplicationNameAndClass.3.gz
PLIST_FILES+=	man/man3/XtGetApplicationResources.3.gz
PLIST_FILES+=	man/man3/XtGetClassExtension.3.gz
PLIST_FILES+=	man/man3/XtGetDisplays.3.gz
PLIST_FILES+=	man/man3/XtGetErrorDatabase.3.gz
PLIST_FILES+=	man/man3/XtGetGC.3.gz
PLIST_FILES+=	man/man3/XtGetKeyboardFocusWidget.3.gz
PLIST_FILES+=	man/man3/XtGetKeysymTable.3.gz
PLIST_FILES+=	man/man3/XtGetResourceList.3.gz
PLIST_FILES+=	man/man3/XtGetSelectionParameters.3.gz
PLIST_FILES+=	man/man3/XtGetSelectionRequest.3.gz
PLIST_FILES+=	man/man3/XtGetSelectionTimeout.3.gz
PLIST_FILES+=	man/man3/XtGetSelectionValue.3.gz
PLIST_FILES+=	man/man3/XtGetSelectionValueIncremental.3.gz
PLIST_FILES+=	man/man3/XtGetSubresources.3.gz
PLIST_FILES+=	man/man3/XtGrabKey.3.gz
PLIST_FILES+=	man/man3/XtHooksOfDisplay.3.gz
PLIST_FILES+=	man/man3/XtInitialize.3.gz
PLIST_FILES+=	man/man3/XtInitializeWidgetClass.3.gz
PLIST_FILES+=	man/man3/XtInsertEventTypeHandler.3.gz
PLIST_FILES+=	man/man3/XtLastEventProcessed.3.gz
PLIST_FILES+=	man/man3/XtMakeGeometryRequest.3.gz
PLIST_FILES+=	man/man3/XtMalloc.3.gz
PLIST_FILES+=	man/man3/XtManageChildren.3.gz
PLIST_FILES+=	man/man3/XtMapWidget.3.gz
PLIST_FILES+=	man/man3/XtName.3.gz
PLIST_FILES+=	man/man3/XtNameToWidget.3.gz
PLIST_FILES+=	man/man3/XtNextEvent.3.gz
PLIST_FILES+=	man/man3/XtOffset.3.gz
PLIST_FILES+=	man/man3/XtOpenApplication.3.gz
PLIST_FILES+=	man/man3/XtOwnSelection.3.gz
PLIST_FILES+=	man/man3/XtParent.3.gz
PLIST_FILES+=	man/man3/XtParseAcceleratorTable.3.gz
PLIST_FILES+=	man/man3/XtParseTranslationTable.3.gz
PLIST_FILES+=	man/man3/XtPopdown.3.gz
PLIST_FILES+=	man/man3/XtPopup.3.gz
PLIST_FILES+=	man/man3/XtProcessLock.3.gz
PLIST_FILES+=	man/man3/XtQueryGeometry.3.gz
PLIST_FILES+=	man/man3/XtRealizeWidget.3.gz
PLIST_FILES+=	man/man3/XtRegisterDrawable.3.gz
PLIST_FILES+=	man/man3/XtRegisterGrabAction.3.gz
PLIST_FILES+=	man/man3/XtReservePropertyAtom.3.gz
PLIST_FILES+=	man/man3/XtResolvePathname.3.gz
PLIST_FILES+=	man/man3/XtSessionGetToken.3.gz
PLIST_FILES+=	man/man3/XtSetArg.3.gz
PLIST_FILES+=	man/man3/XtSetKeyTranslator.3.gz
PLIST_FILES+=	man/man3/XtSetKeyboardFocus.3.gz
PLIST_FILES+=	man/man3/XtSetLanguageProc.3.gz
PLIST_FILES+=	man/man3/XtSetMultiClickTime.3.gz
PLIST_FILES+=	man/man3/XtSetSelectionParameters.3.gz
PLIST_FILES+=	man/man3/XtSetSensitive.3.gz
PLIST_FILES+=	man/man3/XtSetValues.3.gz
PLIST_FILES+=	man/man3/XtSetWMColormapWindows.3.gz
PLIST_FILES+=	man/man3/XtStringConversionWarning.3.gz
PLIST_FILES+=	man/man3/XtToolkitThreadInitialize.3.gz
PLIST_FILES+=	man/man3/XtTranslateCoords.3.gz
PLIST_FILES+=	man/man3/XtVaCreateArgsList.3.gz


PLIST_FILES+=	man/man3/XtAddCallbacks.3.gz
PLIST_FILES+=	man/man3/XtRemoveAllCallbacks.3.gz
PLIST_FILES+=	man/man3/XtRemoveCallback.3.gz
PLIST_FILES+=	man/man3/XtRemoveCallbacks.3.gz
PLIST_FILES+=	man/man3/XtAddRawEventHandler.3.gz
PLIST_FILES+=	man/man3/XtInsertEventHandler.3.gz
PLIST_FILES+=	man/man3/XtInsertRawEventHandler.3.gz
PLIST_FILES+=	man/man3/XtRemoveEventHandler.3.gz
PLIST_FILES+=	man/man3/XtRemoveRawEventHandler.3.gz
PLIST_FILES+=	man/man3/XtRemoveGrab.3.gz
PLIST_FILES+=	man/man3/XtAddTimeOut.3.gz
PLIST_FILES+=	man/man3/XtAddWorkProc.3.gz
PLIST_FILES+=	man/man3/XtRemoveActionHook.3.gz
PLIST_FILES+=	man/man3/XtRemoveBlockHook.3.gz
PLIST_FILES+=	man/man3/XtAddConverter.3.gz
PLIST_FILES+=	man/man3/XtRemoveInput.3.gz
PLIST_FILES+=	man/man3/XtNoticeSignal.3.gz
PLIST_FILES+=	man/man3/XtRemoveSignal.3.gz
PLIST_FILES+=	man/man3/XtRemoveTimeOut.3.gz
PLIST_FILES+=	man/man3/XtRemoveWorkProc.3.gz
PLIST_FILES+=	man/man3/XtVaAppCreateShell.3.gz
PLIST_FILES+=	man/man3/XtAppSetErrorHandler.3.gz
PLIST_FILES+=	man/man3/XtAppSetWarningHandler.3.gz
PLIST_FILES+=	man/man3/XtAppWarning.3.gz
PLIST_FILES+=	man/man3/XtAppSetErrorMsgHandler.3.gz
PLIST_FILES+=	man/man3/XtAppSetWarningMsgHandler.3.gz
PLIST_FILES+=	man/man3/XtAppWarningMsg.3.gz
PLIST_FILES+=	man/man3/XtAppGetErrorDatabaseText.3.gz
PLIST_FILES+=	man/man3/XtAppSetSelectionTimeout.3.gz
PLIST_FILES+=	man/man3/XtVaAppInitialize.3.gz
PLIST_FILES+=	man/man3/XtAppUnlock.3.gz
PLIST_FILES+=	man/man3/XtAppMainLoop.3.gz
PLIST_FILES+=	man/man3/XtAppPeekEvent.3.gz
PLIST_FILES+=	man/man3/XtAppPending.3.gz
PLIST_FILES+=	man/man3/XtAppProcessEvent.3.gz
PLIST_FILES+=	man/man3/XtDispatchEvent.3.gz
PLIST_FILES+=	man/man3/XtAppGetExitFlag.3.gz
PLIST_FILES+=	man/man3/XtSetTypeConverter.3.gz
PLIST_FILES+=	man/man3/XtCallCallbackList.3.gz
PLIST_FILES+=	man/man3/XtHasCallbacks.3.gz
PLIST_FILES+=	man/man3/XtCheckSubclass.3.gz
PLIST_FILES+=	man/man3/XtIsApplicationShell.3.gz
PLIST_FILES+=	man/man3/XtIsComposite.3.gz
PLIST_FILES+=	man/man3/XtIsConstraint.3.gz
PLIST_FILES+=	man/man3/XtIsObject.3.gz
PLIST_FILES+=	man/man3/XtIsOverrideShell.3.gz
PLIST_FILES+=	man/man3/XtIsRectObj.3.gz
PLIST_FILES+=	man/man3/XtIsSessionShell.3.gz
PLIST_FILES+=	man/man3/XtIsShell.3.gz
PLIST_FILES+=	man/man3/XtIsSubclass.3.gz
PLIST_FILES+=	man/man3/XtIsTopLevelShell.3.gz
PLIST_FILES+=	man/man3/XtIsTransientShell.3.gz
PLIST_FILES+=	man/man3/XtIsVendorShell.3.gz
PLIST_FILES+=	man/man3/XtIsWMShell.3.gz
PLIST_FILES+=	man/man3/XtIsWidget.3.gz
PLIST_FILES+=	man/man3/XtSuperclass.3.gz
PLIST_FILES+=	man/man3/XtMoveWidget.3.gz
PLIST_FILES+=	man/man3/XtResizeWidget.3.gz
PLIST_FILES+=	man/man3/XtDirectConvert.3.gz
PLIST_FILES+=	man/man3/XtCallConverter.3.gz
PLIST_FILES+=	man/man3/XtDestroyApplicationContext.3.gz
PLIST_FILES+=	man/man3/XtToolkitInitialize.3.gz
PLIST_FILES+=	man/man3/XtWidgetToApplicationContext.3.gz
PLIST_FILES+=	man/man3/XtVaCreatePopupShell.3.gz
PLIST_FILES+=	man/man3/XtCancelSelectionRequest.3.gz
PLIST_FILES+=	man/man3/XtSendSelectionRequest.3.gz
PLIST_FILES+=	man/man3/XtCreateManagedWidget.3.gz
PLIST_FILES+=	man/man3/XtDestroyWidget.3.gz
PLIST_FILES+=	man/man3/XtVaCreateManagedWidget.3.gz
PLIST_FILES+=	man/man3/XtVaCreateWidget.3.gz
PLIST_FILES+=	man/man3/XtDisplayOfObject.3.gz
PLIST_FILES+=	man/man3/XtScreen.3.gz
PLIST_FILES+=	man/man3/XtScreenOfObject.3.gz
PLIST_FILES+=	man/man3/XtWindow.3.gz
PLIST_FILES+=	man/man3/XtWindowOfObject.3.gz
PLIST_FILES+=	man/man3/XtCloseDisplay.3.gz
PLIST_FILES+=	man/man3/XtDatabase.3.gz
PLIST_FILES+=	man/man3/XtOpenDisplay.3.gz
PLIST_FILES+=	man/man3/XtScreenDatabase.3.gz
PLIST_FILES+=	man/man3/XtSetErrorHandler.3.gz
PLIST_FILES+=	man/man3/XtSetWarningHandler.3.gz
PLIST_FILES+=	man/man3/XtWarning.3.gz
PLIST_FILES+=	man/man3/XtSetErrorMsgHandler.3.gz
PLIST_FILES+=	man/man3/XtSetWarningMsgHandler.3.gz
PLIST_FILES+=	man/man3/XtWarningMsg.3.gz
PLIST_FILES+=	man/man3/XtVaGetApplicationResources.3.gz
PLIST_FILES+=	man/man3/XtGetErrorDatabaseText.3.gz
PLIST_FILES+=	man/man3/XtReleaseGC.3.gz
PLIST_FILES+=	man/man3/XtKeysymToKeycodeList.3.gz
PLIST_FILES+=	man/man3/XtGetConstraintResourceList.3.gz
PLIST_FILES+=	man/man3/XtSetSelectionTimeout.3.gz
PLIST_FILES+=	man/man3/XtGetSelectionValues.3.gz
PLIST_FILES+=	man/man3/XtGetSelectionValuesIncremental.3.gz
PLIST_FILES+=	man/man3/XtVaGetSubresources.3.gz
PLIST_FILES+=	man/man3/XtGrabButton.3.gz
PLIST_FILES+=	man/man3/XtGrabKeyboard.3.gz
PLIST_FILES+=	man/man3/XtGrabPointer.3.gz
PLIST_FILES+=	man/man3/XtUngrabButton.3.gz
PLIST_FILES+=	man/man3/XtUngrabKey.3.gz
PLIST_FILES+=	man/man3/XtUngrabKeyboard.3.gz
PLIST_FILES+=	man/man3/XtUngrabPointer.3.gz
PLIST_FILES+=	man/man3/XtDispatchEventToWidget.3.gz
PLIST_FILES+=	man/man3/XtRegisterExtensionSelector.3.gz
PLIST_FILES+=	man/man3/XtRemoveEventTypeHandler.3.gz
PLIST_FILES+=	man/man3/XtSetEventDispatcher.3.gz
PLIST_FILES+=	man/man3/XtLastTimestampProcessed.3.gz
PLIST_FILES+=	man/man3/XtMakeResizeRequest.3.gz
PLIST_FILES+=	man/man3/XtCalloc.3.gz
PLIST_FILES+=	man/man3/XtFree.3.gz
PLIST_FILES+=	man/man3/XtNew.3.gz
PLIST_FILES+=	man/man3/XtNewString.3.gz
PLIST_FILES+=	man/man3/XtRealloc.3.gz
PLIST_FILES+=	man/man3/XtChangeManagedSet.3.gz
PLIST_FILES+=	man/man3/XtIsManaged.3.gz
PLIST_FILES+=	man/man3/XtManageChild.3.gz
PLIST_FILES+=	man/man3/XtUnmanageChild.3.gz
PLIST_FILES+=	man/man3/XtUnmanageChildren.3.gz
PLIST_FILES+=	man/man3/XtSetMappedWhenManaged.3.gz
PLIST_FILES+=	man/man3/XtUnmapWidget.3.gz
PLIST_FILES+=	man/man3/XtWindowToWidget.3.gz
PLIST_FILES+=	man/man3/XtMainLoop.3.gz
PLIST_FILES+=	man/man3/XtPeekEvent.3.gz
PLIST_FILES+=	man/man3/XtPending.3.gz
PLIST_FILES+=	man/man3/XtProcessEvent.3.gz
PLIST_FILES+=	man/man3/XtNumber.3.gz
PLIST_FILES+=	man/man3/XtOffsetOf.3.gz
PLIST_FILES+=	man/man3/XtVaOpenApplication.3.gz
PLIST_FILES+=	man/man3/XtDisownSelection.3.gz
PLIST_FILES+=	man/man3/XtOwnSelectionIncremental.3.gz
PLIST_FILES+=	man/man3/XtInstallAccelerators.3.gz
PLIST_FILES+=	man/man3/XtInstallAllAccelerators.3.gz
PLIST_FILES+=	man/man3/XtAugmentTranslations.3.gz
PLIST_FILES+=	man/man3/XtOverrideTranslations.3.gz
PLIST_FILES+=	man/man3/XtUninstallTranslations.3.gz
PLIST_FILES+=	man/man3/MenuPopdown.3.gz
PLIST_FILES+=	man/man3/XtCallbackPopdown.3.gz
PLIST_FILES+=	man/man3/MenuPopup.3.gz
PLIST_FILES+=	man/man3/XtCallbackExclusive.3.gz
PLIST_FILES+=	man/man3/XtCallbackNone.3.gz
PLIST_FILES+=	man/man3/XtCallbackNonexclusive.3.gz
PLIST_FILES+=	man/man3/XtPopupSpringLoaded.3.gz
PLIST_FILES+=	man/man3/XtProcessUnlock.3.gz
PLIST_FILES+=	man/man3/XtIsRealized.3.gz
PLIST_FILES+=	man/man3/XtUnrealizeWidget.3.gz
PLIST_FILES+=	man/man3/XtUnregisterDrawable.3.gz
PLIST_FILES+=	man/man3/XtReleasePropertyAtom.3.gz
PLIST_FILES+=	man/man3/XtSessionReturnToken.3.gz
PLIST_FILES+=	man/man3/XtMergeArgLists.3.gz
PLIST_FILES+=	man/man3/XtConvertCase.3.gz
PLIST_FILES+=	man/man3/XtRegisterCaseConverter.3.gz
PLIST_FILES+=	man/man3/XtTranslateKeycode.3.gz
PLIST_FILES+=	man/man3/XtGetMultiClickTime.3.gz
PLIST_FILES+=	man/man3/XtIsSensitive.3.gz
PLIST_FILES+=	man/man3/XtGetSubvalues.3.gz
PLIST_FILES+=	man/man3/XtGetValues.3.gz
PLIST_FILES+=	man/man3/XtSetSubvalues.3.gz
PLIST_FILES+=	man/man3/XtVaGetSubvalues.3.gz
PLIST_FILES+=	man/man3/XtVaGetValues.3.gz
PLIST_FILES+=	man/man3/XtVaSetSubvalues.3.gz
PLIST_FILES+=	man/man3/XtVaSetValues.3.gz

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAddCallback.3 XtAddCallbacks.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAddCallback.3 XtRemoveAllCallbacks.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAddCallback.3 XtRemoveCallback.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAddCallback.3 XtRemoveCallbacks.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAddEventHandler.3 XtAddRawEventHandler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAddEventHandler.3 XtInsertEventHandler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAddEventHandler.3 XtInsertRawEventHandler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAddEventHandler.3 XtRemoveEventHandler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAddEventHandler.3 XtRemoveRawEventHandler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAddGrab.3 XtRemoveGrab.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAddInput.3 XtAddTimeOut.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAddInput.3 XtAddWorkProc.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppAddActionHook.3 XtRemoveActionHook.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppAddBlockHook.3 XtRemoveBlockHook.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppAddConverter.3 XtAddConverter.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppAddInput.3 XtRemoveInput.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppAddSignal.3 XtNoticeSignal.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppAddSignal.3 XtRemoveSignal.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppAddTimeOut.3 XtRemoveTimeOut.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppAddWorkProc.3 XtRemoveWorkProc.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppCreateShell.3 XtVaAppCreateShell.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppError.3 XtAppSetErrorHandler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppError.3 XtAppSetWarningHandler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppError.3 XtAppWarning.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppErrorMsg.3 XtAppSetErrorMsgHandler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppErrorMsg.3 XtAppSetWarningMsgHandler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppErrorMsg.3 XtAppWarningMsg.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppGetErrorDatabase.3 XtAppGetErrorDatabaseText.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppGetSelectionTimeout.3 XtAppSetSelectionTimeout.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppInitialize.3 XtVaAppInitialize.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppLock.3 XtAppUnlock.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppNextEvent.3 XtAppMainLoop.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppNextEvent.3 XtAppPeekEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppNextEvent.3 XtAppPending.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppNextEvent.3 XtAppProcessEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppNextEvent.3 XtDispatchEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppSetExitFlag.3 XtAppGetExitFlag.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtAppSetTypeConverter.3 XtSetTypeConverter.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtCallCallbacks.3 XtCallCallbackList.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtCallCallbacks.3 XtHasCallbacks.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtClass.3 XtCheckSubclass.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtClass.3 XtIsApplicationShell.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtClass.3 XtIsComposite.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtClass.3 XtIsConstraint.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtClass.3 XtIsObject.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtClass.3 XtIsOverrideShell.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtClass.3 XtIsRectObj.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtClass.3 XtIsSessionShell.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtClass.3 XtIsShell.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtClass.3 XtIsSubclass.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtClass.3 XtIsTopLevelShell.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtClass.3 XtIsTransientShell.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtClass.3 XtIsVendorShell.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtClass.3 XtIsWMShell.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtClass.3 XtIsWidget.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtClass.3 XtSuperclass.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtConfigureWidget.3 XtMoveWidget.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtConfigureWidget.3 XtResizeWidget.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtConvert.3 XtDirectConvert.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtConvertAndStore.3 XtCallConverter.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtCreateApplicationContext.3 XtDestroyApplicationContext.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtCreateApplicationContext.3 XtToolkitInitialize.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtCreateApplicationContext.3 XtWidgetToApplicationContext.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtCreatePopupShell.3 XtVaCreatePopupShell.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtCreateSelectionRequest.3 XtCancelSelectionRequest.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtCreateSelectionRequest.3 XtSendSelectionRequest.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtCreateWidget.3 XtCreateManagedWidget.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtCreateWidget.3 XtDestroyWidget.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtCreateWidget.3 XtVaCreateManagedWidget.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtCreateWidget.3 XtVaCreateWidget.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtDisplay.3 XtDisplayOfObject.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtDisplay.3 XtScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtDisplay.3 XtScreenOfObject.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtDisplay.3 XtWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtDisplay.3 XtWindowOfObject.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtDisplayInitialize.3 XtCloseDisplay.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtDisplayInitialize.3 XtDatabase.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtDisplayInitialize.3 XtOpenDisplay.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtDisplayInitialize.3 XtScreenDatabase.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtError.3 XtSetErrorHandler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtError.3 XtSetWarningHandler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtError.3 XtWarning.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtErrorMsg.3 XtSetErrorMsgHandler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtErrorMsg.3 XtSetWarningMsgHandler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtErrorMsg.3 XtWarningMsg.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtGetApplicationResources.3 XtVaGetApplicationResources.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtGetErrorDatabase.3 XtGetErrorDatabaseText.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtGetGC.3 XtReleaseGC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtGetKeysymTable.3 XtKeysymToKeycodeList.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtGetResourceList.3 XtGetConstraintResourceList.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtGetSelectionTimeout.3 XtSetSelectionTimeout.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtGetSelectionValue.3 XtGetSelectionValues.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtGetSelectionValueIncremental.3 XtGetSelectionValuesIncremental.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtGetSubresources.3 XtVaGetSubresources.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtGrabKey.3 XtGrabButton.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtGrabKey.3 XtGrabKeyboard.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtGrabKey.3 XtGrabPointer.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtGrabKey.3 XtUngrabButton.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtGrabKey.3 XtUngrabKey.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtGrabKey.3 XtUngrabKeyboard.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtGrabKey.3 XtUngrabPointer.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtInsertEventTypeHandler.3 XtDispatchEventToWidget.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtInsertEventTypeHandler.3 XtRegisterExtensionSelector.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtInsertEventTypeHandler.3 XtRemoveEventTypeHandler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtInsertEventTypeHandler.3 XtSetEventDispatcher.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtLastEventProcessed.3 XtLastTimestampProcessed.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtMakeGeometryRequest.3 XtMakeResizeRequest.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtMalloc.3 XtCalloc.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtMalloc.3 XtFree.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtMalloc.3 XtNew.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtMalloc.3 XtNewString.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtMalloc.3 XtRealloc.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtManageChildren.3 XtChangeManagedSet.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtManageChildren.3 XtIsManaged.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtManageChildren.3 XtManageChild.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtManageChildren.3 XtUnmanageChild.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtManageChildren.3 XtUnmanageChildren.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtMapWidget.3 XtSetMappedWhenManaged.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtMapWidget.3 XtUnmapWidget.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtNameToWidget.3 XtWindowToWidget.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtNextEvent.3 XtMainLoop.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtNextEvent.3 XtPeekEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtNextEvent.3 XtPending.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtNextEvent.3 XtProcessEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtOffset.3 XtNumber.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtOffset.3 XtOffsetOf.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtOpenApplication.3 XtVaOpenApplication.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtOwnSelection.3 XtDisownSelection.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtOwnSelection.3 XtOwnSelectionIncremental.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtParseAcceleratorTable.3 XtInstallAccelerators.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtParseAcceleratorTable.3 XtInstallAllAccelerators.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtParseTranslationTable.3 XtAugmentTranslations.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtParseTranslationTable.3 XtOverrideTranslations.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtParseTranslationTable.3 XtUninstallTranslations.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtPopdown.3 MenuPopdown.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtPopdown.3 XtCallbackPopdown.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtPopup.3 MenuPopup.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtPopup.3 XtCallbackExclusive.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtPopup.3 XtCallbackNone.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtPopup.3 XtCallbackNonexclusive.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtPopup.3 XtPopupSpringLoaded.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtProcessLock.3 XtProcessUnlock.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtRealizeWidget.3 XtIsRealized.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtRealizeWidget.3 XtUnrealizeWidget.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtRegisterDrawable.3 XtUnregisterDrawable.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtReservePropertyAtom.3 XtReleasePropertyAtom.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtSessionGetToken.3 XtSessionReturnToken.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtSetArg.3 XtMergeArgLists.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtSetKeyTranslator.3 XtConvertCase.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtSetKeyTranslator.3 XtRegisterCaseConverter.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtSetKeyTranslator.3 XtTranslateKeycode.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtSetMultiClickTime.3 XtGetMultiClickTime.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtSetSensitive.3 XtIsSensitive.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtSetValues.3 XtGetSubvalues.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtSetValues.3 XtGetValues.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtSetValues.3 XtSetSubvalues.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtSetValues.3 XtVaGetSubvalues.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtSetValues.3 XtVaGetValues.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtSetValues.3 XtVaSetSubvalues.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XtSetValues.3 XtVaSetValues.3

.include <bsd.port.mk>
#EOF
