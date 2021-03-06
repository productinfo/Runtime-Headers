/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface HICocoaWindowAdapter : NSWindow {
    unsigned int  _cwFlags;
    NSGraphicsContext * _drawContext;
    unsigned int  _drawingHIView;
    unsigned int  _focusSearching;
    BOOL  _handlingCarbonWindowActivationEvents;
    struct OpaqueEventHandlerRef { } * _myContentViewEventHandler;
    struct OpaqueEventHandlerRef { } * _myEventHandler;
    struct OpaqueEventHandlerRef { } * _myStructureViewEventHandler;
    BOOL  _passingCarbonWindowActivationEvents;
    unsigned int  _renderingByHIView;
    unsigned int  _syncToViews;
    struct OpaqueWindowPtr { } * _windowRef;
}

@property (atomic, readwrite) unsigned int cwFlags;

+ (Class)frameViewClassForStyleMask:(unsigned long long)arg1;

- (BOOL)_allowsOrdering;
- (BOOL)_animationShouldCallFlushWindow;
- (BOOL)_carbonRendering;
- (id)_childKeyWindow;
- (BOOL)_drawingHIView;
- (void)_enableFlushWindowWithoutPerformingFlush;
- (BOOL)_focusing;
- (BOOL)_hasWindowRef;
- (BOOL)_implicitlyTileable;
- (BOOL)_managesWindowRef;
- (void)_requiresFlush;
- (void)_setCarbonRendering:(BOOL)arg1;
- (void)_setDrawingContext:(id)arg1;
- (void)_setDrawingHIView:(BOOL)arg1;
- (void)_setEventMask:(unsigned long long)arg1;
- (void)_setFocusing:(BOOL)arg1;
- (id)_threadContext;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (BOOL)canHide;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })constrainFrameRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toScreen:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForFrameRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleMask:(unsigned long long)arg2;
- (unsigned int)cwFlags;
- (void)dealloc;
- (void)disableScreenUpdatesUntilFlush;
- (void)displayIfNeeded;
- (void)enableFlushWindow;
- (int)handleCocoaWindowEvent:(struct OpaqueEventRef { }*)arg1 callRef:(struct OpaqueEventHandlerCallRef { }*)arg2;
- (int)handleControlEvent:(struct OpaqueEventRef { }*)arg1 callRef:(struct OpaqueEventHandlerCallRef { }*)arg2;
- (int)handleEvent:(struct OpaqueEventRef { }*)arg1 callRef:(struct OpaqueEventHandlerCallRef { }*)arg2;
- (int)handleHICocoaViewEvent:(struct OpaqueEventRef { }*)arg1 callRef:(struct OpaqueEventHandlerCallRef { }*)arg2;
- (int)handleKeyboardEvent:(struct OpaqueEventRef { }*)arg1 callRef:(struct OpaqueEventHandlerCallRef { }*)arg2;
- (int)handleMouseEvent:(struct OpaqueEventRef { }*)arg1 callRef:(struct OpaqueEventHandlerCallRef { }*)arg2;
- (int)handleWindowEvent:(struct OpaqueEventRef { }*)arg1 callRef:(struct OpaqueEventHandlerCallRef { }*)arg2;
- (id)initWithCarbonWindowRef:(struct OpaqueWindowPtr { }*)arg1;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (long long)level;
- (BOOL)makeFirstResponder:(id)arg1;
- (BOOL)makeFirstResponderFromCarbonFocus:(id)arg1;
- (void)makeKeyWindow;
- (void)postFocusChangeEventToQueue:(BOOL)arg1;
- (BOOL)reconcileToCarbonWindowBounds;
- (void)relinquishFocus;
- (void)selectKeyViewFollowingView:(id)arg1;
- (void)selectKeyViewPrecedingView:(id)arg1;
- (void)selectNextKeyView:(id)arg1;
- (void)selectPreviousKeyView:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)sendSuperEvent:(id)arg1;
- (void)setCwFlags:(unsigned int)arg1;
- (void)setHasShadow:(BOOL)arg1;
- (void)setLevel:(long long)arg1;
- (void)setStyleMask:(unsigned long long)arg1;
- (void)setSyncToViews;
- (BOOL)syncToViews;
- (struct OpaqueWindowPtr { }*)windowRef;

// HICocoaWindowAdapter (HICocoaWindowAdapterAccessibility)

- (id)accessibilityFocusedUIElement;

@end
