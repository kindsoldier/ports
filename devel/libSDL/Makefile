#
# $Id$
#
PORTNAME=	SDL
PORTVERSION=	1.2.15
CATEGORIES=	devel
MASTER_SITES=	http://www.libsdl.org/release/
DISTNAME=	SDL-${PORTVERSION}
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Cross-platform multi-media development API

LIB_DEPENDS+=	libiconv.so:text/libiconv

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXrandr.so:x11/libXrandr
LIB_DEPENDS+=	libXrender.so:x11/libXrender

#LIB_DEPENDS+=	libpthread-stubs.so:x11-libs/libpthread-stubs
#LIB_DEPENDS+=	libxcb-xlib.so:x11-libs/libxcb
#LIB_DEPENDS+=	libxcb.so:x11-libs/libxcb


INSTALLS_SHLIB=	yes
GNU_CONFIGURE=	yes
#CONFIGURE_ENV+=	NASM="${LOCALBASE}/bin/nasm"
USES+=		gmake

PTHREAD_LIBS= -pthread
CFLAGS+=	${PTHREAD_CFLAGS} -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}

CONFIGURE_ENV+=	PTHREAD_CFLAGS="${PTHREAD_CFLAGS}"
CONFIGURE_ENV+=	PTHREAD_LIBS="${PTHREAD_LIBS}"
CONFIGURE_ENV+=	LDFLAGS="${LDFLAGS}"

#.if !defined(WITHOUT_X11)
#USE_XLIB=	yes
#.else
#PKGNAMESUFFIX=	-nox11
#CONFIGURE_ARGS+=--disable-video-x11
#.endif

#CONFIGURE_ARGS+= --disable-nasm
#CONFIGURE_ARGS+= --enable-video-vgl

CONFIGURE_ENV=	ac_cv_header_libusbhid_h=no

CONFIGURE_ARGS+= --disable-alsa
CONFIGURE_ARGS+= --disable-arts
CONFIGURE_ARGS+= --disable-dummy
CONFIGURE_ARGS+= --disable-esd
CONFIGURE_ARGS+= --disable-nas
CONFIGURE_ARGS+= --disable-pulseaudio
CONFIGURE_ARGS+= --disable-video-aalib
CONFIGURE_ARGS+= --disable-video-caca
CONFIGURE_ARGS+= --disable-video-ggi

CONFIGURE_ARGS+= --enable-video-vgl

CONFIGURE_ARGS+= --disable-assembly
CONFIGURE_ARGS+= --enable-audio
CONFIGURE_ARGS+= --enable-cdrom
CONFIGURE_ARGS+= --enable-cpuinfo
CONFIGURE_ARGS+= --enable-diskaudio
CONFIGURE_ARGS+= --enable-dummyaudio
CONFIGURE_ARGS+= --enable-events
CONFIGURE_ARGS+= --enable-file
CONFIGURE_ARGS+= --enable-joystick
CONFIGURE_ARGS+= --enable-loadso
CONFIGURE_ARGS+= --enable-nasm
CONFIGURE_ARGS+= --enable-oss

CONFIGURE_ARGS+= --enable-pthread-sem
CONFIGURE_ARGS+= --enable-pthreads
CONFIGURE_ARGS+= --enable-sdl-dlopen
CONFIGURE_ARGS+= --enable-threads
CONFIGURE_ARGS+= --enable-timers


CONFIGURE_ARGS+= --disable-video-dga

CONFIGURE_ARGS+= --enable-video-opengl
CONFIGURE_ARGS+= --disable-video-x11-dgamouse
CONFIGURE_ARGS+= --enable-video-x11-vm
CONFIGURE_ARGS+= --enable-video-x11-xinerama
CONFIGURE_ARGS+= --enable-video-x11-xme
CONFIGURE_ARGS+= --enable-video-x11-xrandr

CONFIGURE_ARGS+= --enable-video
CONFIGURE_ARGS+= --enable-video-dummy
CONFIGURE_ARGS+= --enable-video-x11
CONFIGURE_ARGS+= --enable-video-x11-xv

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --with-x


post-patch:
	${REINPLACE_CMD} -e "s|X11R6|X11R7|" ${WRKSRC}/configure

pre-configure:
	${FIND} ${WRKSRC} -type f -name Makefile.in | ${XARGS} ${TOUCH}

#post-install:
#.if !defined(NOPORTDOCS)
#	@${MKDIR} ${EXAMPLESDIR}
#	@${MKDIR} ${DOCSDIR}
#	${INSTALL_DATA} ${EXAMPLES:S,^,${WRKSRC}/,} ${EXAMPLESDIR}/
#	@${ECHO_MSG} "===> Examples installed in ${EXAMPLESDIR}."
#	${INSTALL_DATA} ${DOCS:S,^,${WRKSRC}/,} ${DOCSDIR}/
#	@${ECHO_MSG} "===> Documentation installed in ${DOCSDIR}."
#	@(cd ${WRKSRC} && \
#		${COPYTREE_SHARE} docs ${DOCSDIR}/ "! -regex .*/man3.*")
#.endif
#	@${DISPLAY_MSG}

PLIST_FILES+=	man/man3/SDLKey.3.gz
PLIST_FILES+=	man/man3/SDL_ActiveEvent.3.gz
PLIST_FILES+=	man/man3/SDL_AddTimer.3.gz
PLIST_FILES+=	man/man3/SDL_AudioCVT.3.gz
PLIST_FILES+=	man/man3/SDL_AudioSpec.3.gz
PLIST_FILES+=	man/man3/SDL_BlitSurface.3.gz
PLIST_FILES+=	man/man3/SDL_BuildAudioCVT.3.gz
PLIST_FILES+=	man/man3/SDL_CD.3.gz
PLIST_FILES+=	man/man3/SDL_CDClose.3.gz
PLIST_FILES+=	man/man3/SDL_CDEject.3.gz
PLIST_FILES+=	man/man3/SDL_CDName.3.gz
PLIST_FILES+=	man/man3/SDL_CDNumDrives.3.gz
PLIST_FILES+=	man/man3/SDL_CDOpen.3.gz
PLIST_FILES+=	man/man3/SDL_CDPause.3.gz
PLIST_FILES+=	man/man3/SDL_CDPlay.3.gz
PLIST_FILES+=	man/man3/SDL_CDPlayTracks.3.gz
PLIST_FILES+=	man/man3/SDL_CDResume.3.gz
PLIST_FILES+=	man/man3/SDL_CDStatus.3.gz
PLIST_FILES+=	man/man3/SDL_CDStop.3.gz
PLIST_FILES+=	man/man3/SDL_CDtrack.3.gz
PLIST_FILES+=	man/man3/SDL_CloseAudio.3.gz
PLIST_FILES+=	man/man3/SDL_Color.3.gz
PLIST_FILES+=	man/man3/SDL_CondBroadcast.3.gz
PLIST_FILES+=	man/man3/SDL_CondSignal.3.gz
PLIST_FILES+=	man/man3/SDL_CondWait.3.gz
PLIST_FILES+=	man/man3/SDL_CondWaitTimeout.3.gz
PLIST_FILES+=	man/man3/SDL_ConvertAudio.3.gz
PLIST_FILES+=	man/man3/SDL_ConvertSurface.3.gz
PLIST_FILES+=	man/man3/SDL_CreateCond.3.gz
PLIST_FILES+=	man/man3/SDL_CreateCursor.3.gz
PLIST_FILES+=	man/man3/SDL_CreateMutex.3.gz
PLIST_FILES+=	man/man3/SDL_CreateRGBSurface.3.gz
PLIST_FILES+=	man/man3/SDL_CreateRGBSurfaceFrom.3.gz
PLIST_FILES+=	man/man3/SDL_CreateSemaphore.3.gz
PLIST_FILES+=	man/man3/SDL_CreateThread.3.gz
PLIST_FILES+=	man/man3/SDL_CreateYUVOverlay.3.gz
PLIST_FILES+=	man/man3/SDL_Delay.3.gz
PLIST_FILES+=	man/man3/SDL_DestroyCond.3.gz
PLIST_FILES+=	man/man3/SDL_DestroyMutex.3.gz
PLIST_FILES+=	man/man3/SDL_DestroySemaphore.3.gz
PLIST_FILES+=	man/man3/SDL_DisplayFormat.3.gz
PLIST_FILES+=	man/man3/SDL_DisplayFormatAlpha.3.gz
PLIST_FILES+=	man/man3/SDL_DisplayYUVOverlay.3.gz
PLIST_FILES+=	man/man3/SDL_EnableKeyRepeat.3.gz
PLIST_FILES+=	man/man3/SDL_EnableUNICODE.3.gz
PLIST_FILES+=	man/man3/SDL_Event.3.gz
PLIST_FILES+=	man/man3/SDL_EventState.3.gz
PLIST_FILES+=	man/man3/SDL_ExposeEvent.3.gz
PLIST_FILES+=	man/man3/SDL_FillRect.3.gz
PLIST_FILES+=	man/man3/SDL_Flip.3.gz
PLIST_FILES+=	man/man3/SDL_FreeCursor.3.gz
PLIST_FILES+=	man/man3/SDL_FreeSurface.3.gz
PLIST_FILES+=	man/man3/SDL_FreeWAV.3.gz
PLIST_FILES+=	man/man3/SDL_FreeYUVOverlay.3.gz
PLIST_FILES+=	man/man3/SDL_GL_GetAttribute.3.gz
PLIST_FILES+=	man/man3/SDL_GL_GetProcAddress.3.gz
PLIST_FILES+=	man/man3/SDL_GL_LoadLibrary.3.gz
PLIST_FILES+=	man/man3/SDL_GL_SetAttribute.3.gz
PLIST_FILES+=	man/man3/SDL_GL_SwapBuffers.3.gz
PLIST_FILES+=	man/man3/SDL_GLattr.3.gz
PLIST_FILES+=	man/man3/SDL_GetAppState.3.gz
PLIST_FILES+=	man/man3/SDL_GetAudioStatus.3.gz
PLIST_FILES+=	man/man3/SDL_GetClipRect.3.gz
PLIST_FILES+=	man/man3/SDL_GetCursor.3.gz
PLIST_FILES+=	man/man3/SDL_GetError.3.gz
PLIST_FILES+=	man/man3/SDL_GetEventFilter.3.gz
PLIST_FILES+=	man/man3/SDL_GetGamma.3.gz
PLIST_FILES+=	man/man3/SDL_GetGammaRamp.3.gz
PLIST_FILES+=	man/man3/SDL_GetKeyName.3.gz
PLIST_FILES+=	man/man3/SDL_GetKeyState.3.gz
PLIST_FILES+=	man/man3/SDL_GetModState.3.gz
PLIST_FILES+=	man/man3/SDL_GetMouseState.3.gz
PLIST_FILES+=	man/man3/SDL_GetRGB.3.gz
PLIST_FILES+=	man/man3/SDL_GetRGBA.3.gz
PLIST_FILES+=	man/man3/SDL_GetRelativeMouseState.3.gz
PLIST_FILES+=	man/man3/SDL_GetThreadID.3.gz
PLIST_FILES+=	man/man3/SDL_GetTicks.3.gz
PLIST_FILES+=	man/man3/SDL_GetVideoInfo.3.gz
PLIST_FILES+=	man/man3/SDL_GetVideoSurface.3.gz
PLIST_FILES+=	man/man3/SDL_Init.3.gz
PLIST_FILES+=	man/man3/SDL_InitSubSystem.3.gz
PLIST_FILES+=	man/man3/SDL_JoyAxisEvent.3.gz
PLIST_FILES+=	man/man3/SDL_JoyBallEvent.3.gz
PLIST_FILES+=	man/man3/SDL_JoyButtonEvent.3.gz
PLIST_FILES+=	man/man3/SDL_JoyHatEvent.3.gz
PLIST_FILES+=	man/man3/SDL_JoystickClose.3.gz
PLIST_FILES+=	man/man3/SDL_JoystickEventState.3.gz
PLIST_FILES+=	man/man3/SDL_JoystickGetAxis.3.gz
PLIST_FILES+=	man/man3/SDL_JoystickGetBall.3.gz
PLIST_FILES+=	man/man3/SDL_JoystickGetButton.3.gz
PLIST_FILES+=	man/man3/SDL_JoystickGetHat.3.gz
PLIST_FILES+=	man/man3/SDL_JoystickIndex.3.gz
PLIST_FILES+=	man/man3/SDL_JoystickName.3.gz
PLIST_FILES+=	man/man3/SDL_JoystickNumAxes.3.gz
PLIST_FILES+=	man/man3/SDL_JoystickNumBalls.3.gz
PLIST_FILES+=	man/man3/SDL_JoystickNumButtons.3.gz
PLIST_FILES+=	man/man3/SDL_JoystickNumHats.3.gz
PLIST_FILES+=	man/man3/SDL_JoystickOpen.3.gz
PLIST_FILES+=	man/man3/SDL_JoystickOpened.3.gz
PLIST_FILES+=	man/man3/SDL_JoystickUpdate.3.gz
PLIST_FILES+=	man/man3/SDL_KeyboardEvent.3.gz
PLIST_FILES+=	man/man3/SDL_KillThread.3.gz
PLIST_FILES+=	man/man3/SDL_ListModes.3.gz
PLIST_FILES+=	man/man3/SDL_LoadBMP.3.gz
PLIST_FILES+=	man/man3/SDL_LoadWAV.3.gz
PLIST_FILES+=	man/man3/SDL_LockAudio.3.gz
PLIST_FILES+=	man/man3/SDL_LockSurface.3.gz
PLIST_FILES+=	man/man3/SDL_LockYUVOverlay.3.gz
PLIST_FILES+=	man/man3/SDL_MapRGB.3.gz
PLIST_FILES+=	man/man3/SDL_MapRGBA.3.gz
PLIST_FILES+=	man/man3/SDL_MixAudio.3.gz
PLIST_FILES+=	man/man3/SDL_MouseButtonEvent.3.gz
PLIST_FILES+=	man/man3/SDL_MouseMotionEvent.3.gz
PLIST_FILES+=	man/man3/SDL_NumJoysticks.3.gz
PLIST_FILES+=	man/man3/SDL_OpenAudio.3.gz
PLIST_FILES+=	man/man3/SDL_Overlay.3.gz
PLIST_FILES+=	man/man3/SDL_Palette.3.gz
PLIST_FILES+=	man/man3/SDL_PauseAudio.3.gz
PLIST_FILES+=	man/man3/SDL_PeepEvents.3.gz
PLIST_FILES+=	man/man3/SDL_PixelFormat.3.gz
PLIST_FILES+=	man/man3/SDL_PollEvent.3.gz
PLIST_FILES+=	man/man3/SDL_PumpEvents.3.gz
PLIST_FILES+=	man/man3/SDL_PushEvent.3.gz
PLIST_FILES+=	man/man3/SDL_Quit.3.gz
PLIST_FILES+=	man/man3/SDL_QuitEvent.3.gz
PLIST_FILES+=	man/man3/SDL_QuitSubSystem.3.gz
PLIST_FILES+=	man/man3/SDL_RWFromFile.3.gz
PLIST_FILES+=	man/man3/SDL_Rect.3.gz
PLIST_FILES+=	man/man3/SDL_RemoveTimer.3.gz
PLIST_FILES+=	man/man3/SDL_ResizeEvent.3.gz
PLIST_FILES+=	man/man3/SDL_SaveBMP.3.gz
PLIST_FILES+=	man/man3/SDL_SemPost.3.gz
PLIST_FILES+=	man/man3/SDL_SemTryWait.3.gz
PLIST_FILES+=	man/man3/SDL_SemValue.3.gz
PLIST_FILES+=	man/man3/SDL_SemWait.3.gz
PLIST_FILES+=	man/man3/SDL_SemWaitTimeout.3.gz
PLIST_FILES+=	man/man3/SDL_SetAlpha.3.gz
PLIST_FILES+=	man/man3/SDL_SetClipRect.3.gz
PLIST_FILES+=	man/man3/SDL_SetColorKey.3.gz
PLIST_FILES+=	man/man3/SDL_SetColors.3.gz
PLIST_FILES+=	man/man3/SDL_SetCursor.3.gz
PLIST_FILES+=	man/man3/SDL_SetEventFilter.3.gz
PLIST_FILES+=	man/man3/SDL_SetGamma.3.gz
PLIST_FILES+=	man/man3/SDL_SetGammaRamp.3.gz
PLIST_FILES+=	man/man3/SDL_SetModState.3.gz
PLIST_FILES+=	man/man3/SDL_SetPalette.3.gz
PLIST_FILES+=	man/man3/SDL_SetTimer.3.gz
PLIST_FILES+=	man/man3/SDL_SetVideoMode.3.gz
PLIST_FILES+=	man/man3/SDL_ShowCursor.3.gz
PLIST_FILES+=	man/man3/SDL_Surface.3.gz
PLIST_FILES+=	man/man3/SDL_SysWMEvent.3.gz
PLIST_FILES+=	man/man3/SDL_ThreadID.3.gz
PLIST_FILES+=	man/man3/SDL_UnlockAudio.3.gz
PLIST_FILES+=	man/man3/SDL_UnlockSurface.3.gz
PLIST_FILES+=	man/man3/SDL_UnlockYUVOverlay.3.gz
PLIST_FILES+=	man/man3/SDL_UpdateRect.3.gz
PLIST_FILES+=	man/man3/SDL_UpdateRects.3.gz
PLIST_FILES+=	man/man3/SDL_UserEvent.3.gz
PLIST_FILES+=	man/man3/SDL_VideoDriverName.3.gz
PLIST_FILES+=	man/man3/SDL_VideoInfo.3.gz
PLIST_FILES+=	man/man3/SDL_VideoModeOK.3.gz
PLIST_FILES+=	man/man3/SDL_WM_GetCaption.3.gz
PLIST_FILES+=	man/man3/SDL_WM_GrabInput.3.gz
PLIST_FILES+=	man/man3/SDL_WM_IconifyWindow.3.gz
PLIST_FILES+=	man/man3/SDL_WM_SetCaption.3.gz
PLIST_FILES+=	man/man3/SDL_WM_SetIcon.3.gz
PLIST_FILES+=	man/man3/SDL_WM_ToggleFullScreen.3.gz
PLIST_FILES+=	man/man3/SDL_WaitEvent.3.gz
PLIST_FILES+=	man/man3/SDL_WaitThread.3.gz
PLIST_FILES+=	man/man3/SDL_WarpMouse.3.gz
PLIST_FILES+=	man/man3/SDL_WasInit.3.gz
PLIST_FILES+=	man/man3/SDL_keysym.3.gz
PLIST_FILES+=	man/man3/SDL_mutexP.3.gz
PLIST_FILES+=	man/man3/SDL_mutexV.3.gz

.include <bsd.port.mk>
#EOF
