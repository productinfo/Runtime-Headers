/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSSplitViewVariables : NSObject {
    long long  _registeredTransientBehavior;
    NSView * _transientDraggingOperationUncollapsedView;
    NSMutableArray * arrangedSubviews;
    NSMutableArray * arrangedViewIsResizable;
    NSMutableArray * autocollapsedViews;
    NSString * autosaveName;
    int  cachedSubviewOpacity;
    NSValue * delegateValue;
    BOOL  dividerStyle;
    NSMutableArray * dividerViews;
    NSArray * fallbackSizeConstraints;
    NSMutableDictionary * holdingPrioritiesByViewIndex;
    BOOL  isPaneSplitter;
    BOOL  isVertical;
    BOOL  lastAdjustDividerOrientation;
    NSMutableArray * lastAdjustmentArrangedViewFrames;
    double  lastAdjustmentDividerThickness;
    _NSSplitViewShadowView * leadingOverlayShadowView;
    NSView * leadingOverlayView;
    _NSSplitViewSpringLoadingView * leadingSpringLoadingView;
    NSView * liveResizeAutoUncollapsedLeadingOverlayView;
    NSView * liveResizeAutoUncollapsedTrailingOverlayView;
    double  minimumSizeForInlineSidebars;
    NSMutableArray * originalArrangedViewProportionsDuringResizing;
    NSMapTable * preferredArrangedSubviewThicknesses;
    NSArray * preferredSizeConstraints;
    NSArray * stackConstraints;
    struct { 
        unsigned int resizeSubviewsWithOldSizeIsBeingInvokedByViewWillDraw : 1; 
        unsigned int resizeSubviewsWithOldSizeInvokedDelegate : 1; 
        unsigned int warnedAboutInvalidArrangedViewFrames : 1; 
        unsigned int warnedAboutInvalidArrangedViewOrder : 1; 
        unsigned int delegateCursorOfDividerAtIndex : 1; 
        unsigned int unarchiving : 1; 
        unsigned int delayArrangedViewAdjustment : 1; 
        unsigned int autosaveDelayed : 1; 
        unsigned int shouldDelayAutosave : 1; 
        unsigned int firstLogicalDividerIsHidden : 1; 
        unsigned int lastLogicalDividerIsHidden : 1; 
        unsigned int dividerColorSet : 1; 
        unsigned int performingConstraintBasedPresentDividerDragResult : 1; 
        unsigned int alwaysUseAlignmentRects : 1; 
        unsigned int integralizeInUserSpace : 1; 
        unsigned int splitViewControllerAllowsPropertyChange : 1; 
        unsigned int splitViewOwnedBySplitViewController : 1; 
        unsigned int doesNotArrangeAllSubviews : 1; 
        unsigned int testingForOverlays : 1; 
        unsigned int isSpringLoaded : 1; 
        unsigned int showsOverlayMetrics : 1; 
        unsigned int draggingDivider : 1; 
        unsigned int finishedFirstUpdateConstraintsPass : 1; 
        unsigned int animatesAutocollapses : 1; 
        unsigned int currentlySpringLoading : 1; 
        unsigned int explicitAutocollapseThicknessDisabled : 1; 
        unsigned int unused : 8; 
    }  svFlags;
    NSMutableArray * trackingOverlayViews;
    _NSSplitViewShadowView * trailingOverlayShadowView;
    NSView * trailingOverlayView;
    _NSSplitViewSpringLoadingView * trailingSpringLoadingView;
}

@end
