/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSScrubberDocumentView : NSView {
    unsigned int  _adjustingScroll;
    unsigned int  _animatingLayout;
    unsigned int  _animatingSelections;
    NSView * _contentView;
    NSSet * _currentItemLayoutAttributes;
    NSSet * _currentSelectionLayoutAttributes;
    double  _endcapCornerRadius;
    unsigned int  _floatsSelection;
    NSIndexSet * _forcedItemIndexes;
    unsigned int  _isRTL;
    <NSScrubberItemLayout> * _itemLayout;
    NSMutableDictionary * _itemViewMap;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _lastKnownVisibleRange;
    struct { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } visibleContentRect; 
        long long selectedIndex; 
        long long secondarySelectedIndex; 
        double fractionOfSecondary; 
        long long highlightedIndex; 
        long long numberOfItems; 
        struct CGPoint { 
            double x; 
            double y; 
        } contentTrackingPoint; 
        BOOL trackingSelection; 
    }  _modelState;
    unsigned int  _needsItemLayout;
    long long  _numberOfItems;
    unsigned int  _observingScrollBounds;
    NSSet * _pendingItemLayoutAttributes;
    NSArray * _pendingItemTransitions;
    struct { 
        long long itemIndex; 
        long long alignment; 
        double offset; 
    }  _pendingScrollPin;
    NSSet * _pendingSelectionLayoutAttributes;
    NSArray * _pendingSelectionTransitions;
    long long  _pinnedItemAlignment;
    long long  _pinnedItemIndex;
    struct { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } visibleContentRect; 
        long long selectedIndex; 
        long long secondarySelectedIndex; 
        double fractionOfSecondary; 
        long long highlightedIndex; 
        long long numberOfItems; 
        struct CGPoint { 
            double x; 
            double y; 
        } contentTrackingPoint; 
        BOOL trackingSelection; 
    }  _proxyState;
    NSMutableDictionary * _registeredViewClasses;
    NSMutableDictionary * _registeredViewNibs;
    NSMutableDictionary * _reuseQueue;
    NSScrubber * _scrubber;
    NSScrubberLayout * _scrubberLayout;
    NSScrubberSelectionStyle * _selectionBackground;
    <NSScrubberSelectionLayout> * _selectionLayout;
    NSScrubberSelectionStyle * _selectionOverlay;
    NSMutableDictionary * _selectionPairMap;
    NSMutableSet * _selectionPairsAnimatingOut;
}

@property (atomic, readwrite) BOOL animatingSelections;
@property (atomic, readonly) NSView *contentView;
@property (atomic, readwrite, copy) NSSet *currentItemLayoutAttributes;
@property (atomic, readwrite, copy) NSSet *currentSelectionLayoutAttributes;
@property (atomic, readwrite) double endcapCornerRadius;
@property (atomic, readwrite) BOOL floatsSelection;
@property (atomic, readwrite) long long highlightedIndex;
@property (atomic, readwrite, retain) <NSScrubberItemLayout> *itemLayout;
@property (atomic, readwrite, retain) NSMutableDictionary *itemViewMap;
@property (atomic, readwrite) struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; } modelState;
@property (atomic, readwrite) long long numberOfItems;
@property (atomic, readwrite, copy) NSSet *pendingItemLayoutAttributes;
@property (atomic, readwrite, copy) NSArray *pendingItemTransitions;
@property (atomic, readwrite) struct { long long x1; long long x2; double x3; } pendingScrollPin;
@property (atomic, readwrite, copy) NSSet *pendingSelectionLayoutAttributes;
@property (atomic, readwrite, copy) NSArray *pendingSelectionTransitions;
@property (atomic, readwrite) struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; } proxyState;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rectInClip;
@property (atomic, readonly) NSDictionary *registeredViewClasses;
@property (atomic, readonly) NSDictionary *registeredViewNibs;
@property (atomic, readwrite, copy) NSIndexSet *requiredPopulatedItemIndexes;
@property (atomic, readwrite) NSScrubber *scrubber;
@property (atomic, readwrite, retain) NSScrubberLayout *scrubberLayout;
@property (atomic, readwrite) long long selectedIndex;
@property (atomic, readwrite, retain) NSScrubberSelectionStyle *selectionBackground;
@property (atomic, readwrite, retain) <NSScrubberSelectionLayout> *selectionLayout;
@property (atomic, readwrite, retain) NSScrubberSelectionStyle *selectionOverlay;
@property (atomic, readwrite, retain) NSMutableDictionary *selectionPairMap;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (id)keyPathsForValuesInvalidatingLayout;

- (void).cxx_destruct;
- (Class)_animatorClass;
- (id)_preferredSuperviewForAttributes:(id)arg1;
- (id)_preferredSuperviewForTransition:(id)arg1;
- (id)_presentationLayoutAttributesForItemAttributes:(id)arg1;
- (id)_presentationLayoutAttributesForLayoutAttributes:(id)arg1;
- (void)_setHighlightedIndex:(long long)arg1;
- (void)_setSelectedIndex:(long long)arg1;
- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (void)addItemView:(id)arg1 toSuperview:(id)arg2;
- (void)adjustForContentSize:(struct CGSize { double x1; double x2; })arg1 contentInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (BOOL)animatingSelections;
- (void)applyItemAttributes:(id)arg1 startingAttributes:(id)arg2 withState:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; })arg3;
- (void)applyLayoutAttributes:(id)arg1 toItemView:(id)arg2;
- (void)applyPinningConfiguration:(struct { long long x1; long long x2; double x3; })arg1;
- (void)applySelectionAttributes:(id)arg1 startingAttributes:(id)arg2 withState:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; })arg3;
- (id)attributesNearestToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)cachedAttributesForItemAtIndex:(long long)arg1;
- (struct { long long x1; long long x2; double x3; })calculatePinningConfigurationForState:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateVisibleContentRect;
- (void)cleanupAfterItemTransitions:(id)arg1;
- (void)cleanupAfterSelectionTransitions:(id)arg1;
- (void)clearPinnedItem;
- (void)clipBoundsDidChange:(id)arg1;
- (void)clipFrameDidChange:(id)arg1;
- (id)contentView;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })contentViewInsetsForContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)createItemViewForIndex:(long long)arg1;
- (id)currentItemLayoutAttributes;
- (id)currentSelectionLayoutAttributes;
- (double)endcapCornerRadius;
- (void)executePendingChanges:(id)arg1;
- (BOOL)floatsSelection;
- (long long)highlightedIndex;
- (long long)indexForItemView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateEverythingAndReload;
- (BOOL)itemAtPoint:(struct CGPoint { double x1; double x2; })arg1 index:(long long*)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (id)itemLayout;
- (BOOL)itemNearestToPoint:(struct CGPoint { double x1; double x2; })arg1 index:(long long*)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (id)itemTransitionsFromAttributes:(id)arg1 toAttributes:(id)arg2 withState:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; })arg3;
- (id)itemViewMap;
- (void)layout;
- (void)layoutScrubberContentsAnimated:(BOOL)arg1;
- (id)makeItemWithIdentifier:(id)arg1 owner:(id)arg2;
- (id)makeSelectionPairForItemView:(id)arg1 withIndex:(long long)arg2;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; })modelState;
- (long long)numberOfItems;
- (id)pendingItemLayoutAttributes;
- (id)pendingItemTransitions;
- (struct { long long x1; long long x2; double x3; })pendingScrollPin;
- (id)pendingSelectionLayoutAttributes;
- (id)pendingSelectionTransitions;
- (void)performItemTransitions:(id)arg1 withState:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; })arg2;
- (void)performPendingTransitions;
- (void)performSelectionTransitions:(id)arg1 withState:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; })arg2;
- (void)pinItemAtIndex:(long long)arg1 toAlignment:(long long)arg2;
- (id)populatedItemViews;
- (void)prepareForItemTransitions:(id)arg1;
- (void)prepareForSelectionTransitions:(id)arg1;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; })proxyState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectInClip;
- (void)recycleView:(id)arg1;
- (void)registerClass:(Class)arg1 forItemIdentifier:(id)arg2;
- (void)registerNib:(id)arg1 forItemIdentifier:(id)arg2;
- (id)registeredViewClasses;
- (id)registeredViewNibs;
- (id)requiredPopulatedItemIndexes;
- (void)resetSelectionPairs;
- (void)retargetSelectionPairsAnimatingOut;
- (void)scrollItemAtIndex:(long long)arg1 toAlignment:(long long)arg2;
- (struct CGPoint { double x1; double x2; })scrollPointAligningItemAtIndex:(long long)arg1 toAlignment:(long long)arg2;
- (struct CGPoint { double x1; double x2; })scrollPointAligningItemAtIndex:(long long)arg1 toAlignment:(long long)arg2 forSelectedIndex:(long long)arg3 approximatedScrollPoint:(struct CGPoint { double x1; double x2; })arg4;
- (struct CGPoint { double x1; double x2; })scrollPointAligningItemAtIndex:(long long)arg1 toAlignment:(long long)arg2 forState:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; })arg3;
- (id)scrubber;
- (id)scrubberLayout;
- (long long)selectedIndex;
- (id)selectionBackground;
- (id)selectionLayout;
- (id)selectionOverlay;
- (id)selectionPairForItemAtIndex:(long long)arg1 creatingIfNeeded:(BOOL)arg2;
- (id)selectionPairMap;
- (id)selectionTransitionsFromAttributes:(id)arg1 toAttributes:(id)arg2 presentationItemAttributes:(id)arg3 newItemAttributes:(id)arg4;
- (void)setAnimatingSelections:(BOOL)arg1;
- (void)setCurrentItemLayoutAttributes:(id)arg1;
- (void)setCurrentSelectionLayoutAttributes:(id)arg1;
- (void)setEndcapCornerRadius:(double)arg1;
- (void)setFloatsSelection:(BOOL)arg1;
- (void)setHighlightedIndex:(long long)arg1;
- (void)setItemLayout:(id)arg1;
- (void)setItemViewMap:(id)arg1;
- (void)setModelState:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; })arg1;
- (void)setNeedsItemLayout;
- (void)setNumberOfItems:(long long)arg1;
- (void)setPendingItemLayoutAttributes:(id)arg1;
- (void)setPendingItemTransitions:(id)arg1;
- (void)setPendingScrollPin:(struct { long long x1; long long x2; double x3; })arg1;
- (void)setPendingSelectionLayoutAttributes:(id)arg1;
- (void)setPendingSelectionTransitions:(id)arg1;
- (void)setProxyState:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; })arg1;
- (void)setRequiredPopulatedItemIndexes:(id)arg1;
- (void)setScrubber:(id)arg1;
- (void)setScrubberLayout:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)setSelectionBackground:(id)arg1;
- (void)setSelectionLayout:(id)arg1;
- (void)setSelectionOverlay:(id)arg1;
- (void)setSelectionPairMap:(id)arg1;
- (void)setSuppressScrollCorrection:(BOOL)arg1;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
- (id)snapshotForPendingChanges;
- (void)sortScrubberSubviews;
- (void)updateCornerMaskingForState:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; })arg1;
- (void)updateForTrackingPoint:(struct CGPoint { double x1; double x2; })arg1 isTrackingSelection:(BOOL)arg2;
- (void)updateItemLayoutObject;
- (void)updateSelectionForContinuousFree;
- (void)updateSelectionLayoutObject;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (id)viewForItemAtIndex:(long long)arg1 creatingIfNeeded:(BOOL)arg2;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)visibleContentRectDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRectForPinningConfiguration:(struct { long long x1; long long x2; double x3; })arg1;

@end
