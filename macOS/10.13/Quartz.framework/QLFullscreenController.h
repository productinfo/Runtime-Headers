/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLFullscreenController : NSResponder <QLControlsDelegate, QLIndexSheetDelegate> {
    NSWindow * _backgroundFullscreenWindow;
    struct CGPoint { 
        double x; 
        double y; 
    }  _controlsCenterPosition;
    QLControlsController * _controlsController;
    struct CGPoint { 
        double x; 
        double y; 
    }  _controlsOrigin;
    QLFullscreenControlsPanel * _controlsPanel;
    NSView * _controlsView;
    unsigned int  _displaySleepAssertionID;
    BOOL  _displaySleepDisabled;
    QLFadeWindowEffect * _fadeEffect;
    NSTimer * _fadeTimer;
    BOOL  _fitToScreen;
    NSView * _fullscreenView;
    NSWindow * _fullscreenWindow;
    BOOL  _listeningToMouseMovements;
    NSTrackingArea * _mouseEnterTrackingArea;
    unsigned long long  _originalPresentationOptions;
    QLPreviewPageNavigationView * _pageNavigationView;
    NSWindow * _pageNavigationWindow;
    QLPreviewPanelController * _panelController;
    NSView * _screenshotView;
    QLPreviewScroller * _scroller;
    BOOL  _showControls;
    QLScaleWindowEffect * _sizeEffect;
    BOOL  _startSlideshow;
    int  _status;
    QLTimeSlider * _timeSlider;
    BOOL  _withPanel;
}

@property (atomic, readwrite) struct CGPoint { double x1; double x2; } controlsCenterPosition;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } controlsOrigin;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite) BOOL fitToScreen;
@property (atomic, readonly) NSWindow *fullscreenWindow;
@property (atomic, readwrite) BOOL hasViewControls;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } indexSheetFrame;
@property (atomic, readonly) BOOL indexSheetHasDarkBackground;
@property (atomic, readonly) NSView *indexSheetHostingView;
@property (atomic, readonly) unsigned long long indexSheetMaxColumns;
@property (atomic, readonly) unsigned long long indexSheetMaxRows;
@property (atomic, readonly) BOOL indexSheetShowsControls;
@property (atomic, readwrite) QLPreviewPanelController *panelController;
@property (atomic, readwrite) double previewOpacity;
@property (atomic, readwrite, retain) NSView *screenshotView;
@property (atomic, readwrite) BOOL showControls;
@property (atomic, readwrite) int status;
@property (atomic, readonly) Class superclass;

- (id)_accessibilityControls;
- (void)_disableDisplaySleep;
- (void)_enableDisplaySleep;
- (void)_enteredFullscreen;
- (void)_exitedFullscreen;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_fullscreenWindowFrameFromScreen:(id)arg1;
- (void)_hideControlsPanel;
- (void)_moveFullscreenViewToView:(id)arg1;
- (void)_moveFullscreenViewToView:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 showControls:(BOOL)arg3 fitToScreen:(BOOL)arg4 coalesceFlushes:(BOOL)arg5;
- (id)_newBackgroundFullscreenWindowWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGImage { }*)_newCGSContentScreenshot:(BOOL)arg1;
- (id)_newFullscreenWindowWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_newWindowWillAppear:(id)arg1;
- (void)_pauseDisableDisplaySleep;
- (id)_scaleEffectForItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fullscreenFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withPanel:(BOOL)arg3 transitionWindows:(id*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scaledFrameForWindowFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 matchingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 scalable:(BOOL)arg4;
- (void)_scheduleHideControlsPanel;
- (id)_screenshotViewForFullscreenView:(id)arg1 entering:(BOOL)arg2;
- (void)_setActivatePageNavigator:(BOOL)arg1;
- (void)_setFitToScreen:(BOOL)arg1 animate:(BOOL)arg2;
- (void)_setShowPageNavigator:(BOOL)arg1;
- (void)_setupControls;
- (void)_showControlsPanel;
- (void)_startListeningToMouseMovement;
- (void)_stopControlsFade;
- (void)_stopListeningToMouseMovement;
- (void)_unpauseDisableDisplaySleep;
- (void)_updateControls;
- (struct CGPoint { double x1; double x2; })controlsCenterPosition;
- (void)controlsController:(id)arg1 didLayoutWithWidth:(double)arg2 oldWidth:(double)arg3;
- (struct CGPoint { double x1; double x2; })controlsOrigin;
- (struct CGImage { }*)copyIndexSheetTransitionImageWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 transitionFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)dealloc;
- (void)enterFullscreenForView:(id)arg1 withEffect:(int)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 fromPanel:(BOOL)arg4 startSlideshow:(BOOL)arg5;
- (void)exitFullscreenWithEffect:(int)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toPanel:(BOOL)arg3;
- (void)fadeControlsPanel:(id)arg1;
- (BOOL)fitToScreen;
- (void)flagsChanged:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)fullscreenWindow;
- (BOOL)hasViewControls;
- (void)indexSheetDidActivate:(id)arg1;
- (void)indexSheetDidDeactivate:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })indexSheetFrame;
- (BOOL)indexSheetHasDarkBackground;
- (id)indexSheetHostingView;
- (unsigned long long)indexSheetMaxColumns;
- (unsigned long long)indexSheetMaxRows;
- (BOOL)indexSheetShowsControls;
- (void)indexSheetWillActivate:(id)arg1;
- (void)indexSheetWillDeactivate:(id)arg1;
- (id)init;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)panelController;
- (double)previewOpacity;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)screenshotView;
- (void)scrollWheel:(id)arg1;
- (void)setControlsCenterPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setControlsOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFitToScreen:(BOOL)arg1;
- (void)setHasViewControls:(BOOL)arg1;
- (void)setPanelController:(id)arg1;
- (void)setPreviewOpacity:(double)arg1;
- (void)setScreenshotView:(id)arg1;
- (void)setShowControls:(BOOL)arg1;
- (void)setStatus:(int)arg1;
- (void)setupScreenshotForFullscreenExit;
- (BOOL)showControls;
- (int)status;
- (void)updateControlsPanelWithWidth:(double)arg1 animate:(BOOL)arg2 keepCentered:(BOOL)arg3;
- (void)updateNavigationControls;
- (BOOL)worksWhenModal;

@end
