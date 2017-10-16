/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLPreviewBubble : NSObject <QLSeamlessOpenerDelegate> {
    QLPreviewBubbleReserved * _reserved;
}

@property (atomic, readwrite) struct CGPoint { double x1; double x2; } aimPoint;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } animationContentFrame;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } animationSourceFrame;
@property (atomic, readwrite) int animationType;
@property (atomic, readwrite) BOOL autoplays;
@property (atomic, readonly) unsigned int bubbleWindowID;
@property (atomic, readonly, copy) NSImage *contentSnapshot;
@property (atomic, readwrite, copy) NSArray *controls;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) <QLPreviewBubbleDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite) BOOL forcePreferredEdge;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } itemFrame;
@property (atomic, readwrite) long long level;
@property (atomic, readwrite) double maxArea;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } maximumSize;
@property (atomic, readwrite, retain) NSWindow *parentWindow;
@property (atomic, readwrite) unsigned long long preferredEdge;
@property (atomic, readwrite, retain) NSArray *preloadedItems;
@property (atomic, readwrite, retain) <QLPreviewItem> *previewItem;
@property (atomic, readwrite, copy) NSArray *runLoopModes;
@property (atomic, readwrite) BOOL skipAlphaDuringOpenAnimation;
@property (atomic, readwrite) BOOL skipAnimationInvoke;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) unsigned long long usedEdge;
@property (getter=isVisible, atomic, readwrite) BOOL visible;

+ (void)presentBubbleForItem:(id)arg1 parentWindow:(id)arg2 itemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maximumSize:(struct CGSize { double x1; double x2; })arg4 preferredEdge:(unsigned long long)arg5;
+ (void)presentBubbleForItem:(id)arg1 parentWindow:(id)arg2 itemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maximumSize:(struct CGSize { double x1; double x2; })arg4 preferredEdge:(unsigned long long)arg5 filterMask:(unsigned long long)arg6 autocloseMask:(unsigned long long)arg7;
+ (void)setGlobalSeamlesslyOpening:(BOOL)arg1;

- (void)_activateEventMonitor;
- (BOOL)_animateHide;
- (BOOL)_animateShow;
- (void)_applicationWillDeactivate;
- (void)_breakWithParentWindow;
- (id)_bubbleOptions;
- (void)_buttonClickEvent:(id)arg1;
- (void)_checkSeamlesslyOpening;
- (void)_deactivateEventMonitor;
- (void)_didLoad;
- (void)_doubleClickEvent:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_itemFrameOnScreen;
- (id)_launchURL;
- (void)_linkWithParentWindow;
- (void)_makeQueueIfNecessary;
- (void)_seamlesslyOpenWithURL:(id)arg1;
- (void)_updateBubbleShow:(BOOL)arg1;
- (void)_updateModesIfNecessary;
- (void)_willOpenURLEvent:(id)arg1;
- (void)_windowDidMove;
- (void)_windowWillClose;
- (void)_windowWillMiniaturize;
- (struct CGPoint { double x1; double x2; })aimPoint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })animationContentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })animationSourceFrame;
- (int)animationType;
- (BOOL)autoplays;
- (id)bubbleDidCloseCompletionBlock;
- (struct __QLPreviewBubble { }*)bubbleRef;
- (unsigned int)bubbleWindowID;
- (void)close;
- (id)contentSnapshot;
- (id)controls;
- (void)dealloc;
- (id)delegate;
- (id)effectiveControls;
- (BOOL)forcePreferredEdge;
- (void)hide:(id)arg1;
- (id)init;
- (BOOL)isSeamlesslyOpening;
- (BOOL)isVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })itemFrame;
- (long long)level;
- (void)makeBubble;
- (double)maxArea;
- (struct CGSize { double x1; double x2; })maximumSize;
- (id)parentWindow;
- (unsigned long long)preferredEdge;
- (id)preloadedItems;
- (id)previewItem;
- (id)runLoopModes;
- (id)seamlessOpener:(id)arg1 sourceBubbleForPreviewItem:(id)arg2;
- (void)setAimPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAnimationContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAnimationSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAnimationType:(int)arg1;
- (void)setAutomaticallyCloseWithMask:(unsigned long long)arg1 filterMask:(unsigned long long)arg2 block:(id)arg3;
- (void)setAutoplays:(BOOL)arg1;
- (void)setBubbleDidCloseCompletionBlock:(id)arg1;
- (void)setControls:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayPath:(id)arg1 additionalString:(id)arg2;
- (void)setForcePreferredEdge:(BOOL)arg1;
- (void)setItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLevel:(long long)arg1;
- (void)setMaxArea:(double)arg1;
- (void)setMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setParentWindow:(id)arg1;
- (void)setPreferredEdge:(unsigned long long)arg1;
- (void)setPreloadedItems:(id)arg1;
- (void)setPreviewItem:(id)arg1;
- (void)setRunLoopModes:(id)arg1;
- (void)setSeamlesslyOpening:(BOOL)arg1;
- (void)setSkipAlphaDuringOpenAnimation:(BOOL)arg1;
- (void)setSkipAnimationInvoke:(BOOL)arg1;
- (void)setVisible:(BOOL)arg1;
- (void)show:(id)arg1;
- (void)showPreviewItem:(id)arg1 itemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (BOOL)skipAlphaDuringOpenAnimation;
- (BOOL)skipAnimationInvoke;
- (unsigned long long)usedEdge;

@end