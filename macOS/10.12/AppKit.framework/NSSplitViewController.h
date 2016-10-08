/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSSplitViewController : NSViewController <NSSplitViewDelegate> {
    NSSplitView * _splitView;
    id  _splitViewControllerPrivateData;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) double minimumThicknessForInlineSidebars;
@property (atomic, readwrite, retain) NSSplitView *splitView;
@property (atomic, readwrite, copy) NSArray *splitViewItems;
@property (atomic, readonly) Class superclass;

- (id)_arrangedViewForSplitViewItem:(id)arg1;
- (BOOL)_canOverlaySplitViewItem:(id)arg1;
- (void)_collapse:(BOOL)arg1 splitViewItem:(id)arg2 forceOverlay:(BOOL)arg3 completionHandler:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultFrame;
- (long long)_growingWindowAnchorEdgeToShowItem:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 atIndex:(long long)arg3;
- (long long)_indexOfSplitViewItem:(id)arg1;
- (void)_insertArrangedView:(id)arg1 atIndex:(long long)arg2;
- (void)_insertWrapperViewIntoSplitViewForSplitViewItem:(id)arg1 atIndex:(long long)arg2;
- (id)_makeSplitViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setHoldingPriority:(float)arg1 forSplitViewItem:(id)arg2;
- (void)_setupSplitView;
- (BOOL)_shouldGrowWindowToShowItem:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (BOOL)_shouldShrinkWindowToShowItem:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (BOOL)_shouldUseConstraintAnimationToCollapseItem:(id)arg1 withWindowResize:(BOOL)arg2;
- (long long)_shrinkingWindowAnchorEdgeToShowItem:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 atIndex:(long long)arg3;
- (id)_splitView;
- (id)_splitView:(id)arg1 appearanceForDividerAtIndex:(long long)arg2;
- (long long)_splitView:(id)arg1 blendingModeForDividerAtIndex:(long long)arg2;
- (BOOL)_splitView:(id)arg1 canLiveCollapseArrangedSubview:(id)arg2;
- (BOOL)_splitView:(id)arg1 canSpringLoadRevealArrangedSubview:(id)arg2;
- (void)_splitView:(id)arg1 didStartOverlayingView:(id)arg2;
- (void)_splitView:(id)arg1 didStopOverlayingView:(id)arg2;
- (float)_splitView:(id)arg1 holdingPriorityForViewAtIndex:(long long)arg2;
- (BOOL)_splitView:(id)arg1 shouldHaveVibrantDividerAtIndex:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_splitViewFrame;
- (id)_splitViewItemForArrangedView:(id)arg1;
- (id)_splitViewItemForViewAtIndex:(long long)arg1;
- (id)_splitViewItemForViewControllerAtIndex:(unsigned long long)arg1;
- (id)_splitViewItemSizesAfterSplitViewItem:(id)arg1 isCollapsed:(BOOL)arg2;
- (void)_tearDownSplitView;
- (void)_updateSplitView:(id)arg1 withBlock:(id)arg2;
- (void)_updateSplitViewPositioningConstraints;
- (BOOL)_viewControllerSupports10_10Features;
- (long long)_viewInsertionIndexForSplitViewItem:(id)arg1;
- (void)addSplitViewItem:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hidesFirstDivider;
- (BOOL)hidesLastDivider;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)insertChildViewController:(id)arg1 atIndex:(long long)arg2;
- (void)insertSplitViewItem:(id)arg1 atIndex:(long long)arg2;
- (void)loadView;
- (double)minimumSizeForInlineSidebars;
- (double)minimumThicknessForInlineSidebars;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeChildViewControllerAtIndex:(long long)arg1;
- (void)removeSplitViewItem:(id)arg1;
- (void)setHidesFirstDivider:(BOOL)arg1;
- (void)setHidesLastDivider:(BOOL)arg1;
- (void)setMinimumSizeForInlineSidebars:(double)arg1;
- (void)setMinimumThicknessForInlineSidebars:(double)arg1;
- (void)setSplitView:(id)arg1;
- (void)setSplitViewItems:(id)arg1;
- (void)setView:(id)arg1;
- (id)splitView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (BOOL)splitView:(id)arg1 doubleClickedOnDividerAtIndex:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })splitView:(id)arg1 effectiveRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forDrawnRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 ofDividerAtIndex:(long long)arg4;
- (BOOL)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;
- (BOOL)splitView:(id)arg1 shouldHideDividerAtIndex:(long long)arg2;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (id)splitViewItemForViewController:(id)arg1;
- (id)splitViewItems;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillDisappear;

// NSSplitViewController (NSSplitViewControllerToggleSidebarAction)

- (id)_sidebarItemForToggling;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)toggleSidebar:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;

// NSSplitViewController (NSSplitViewItemDelegate)

- (void)splitViewItem:(id)arg1 didChangeCollapsed:(BOOL)arg2 animated:(BOOL)arg3;
- (void)splitViewItem:(id)arg1 isChangingCollapsed:(BOOL)arg2 animated:(BOOL)arg3;
- (void)splitViewItem:(id)arg1 willChangeCollapsed:(BOOL)arg2 animated:(BOOL)arg3;

// NSSplitViewController (RevealOnEdgeHover)

- (void)_didEnterFullscreen:(id)arg1;
- (void)_didExitFullscreen:(id)arg1;
- (BOOL)_hasItemToRevealOnEdgeHover;
- (void)_setHasItemToRevealOnEdgeHover:(BOOL)arg1;
- (void)_startObservingEdgeHover;
- (void)_startObservingFullscreenForWindow:(id)arg1;
- (void)_stopObservingEdgeHover;
- (void)_stopObservingFullscreenForWindow:(id)arg1;
- (void)_uncollapseEdgeRevealItem:(id)arg1;
- (void)_updateHasItemToRevealOnEdgeHover;

@end
