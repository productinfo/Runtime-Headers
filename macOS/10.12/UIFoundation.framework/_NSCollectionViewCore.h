/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface _NSCollectionViewCore : NSObject {
    NSTimer * _autoscrollTimer;
    NSBox * _backgroundColorFillView;
    NSView * _backgroundView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    NSMutableDictionary * _cellClassDict;
    NSMutableDictionary * _cellNibDict;
    NSMutableDictionary * _cellNibExternalObjectsTables;
    NSMutableDictionary * _cellReuseQueues;
    NSMutableDictionary * _clonedCellsDict;
    NSMutableDictionary * _clonedDecorationViewsDict;
    NSMutableDictionary * _clonedSupplementaryViewsDict;
    NSCollectionViewData * _collectionViewData;
    struct { 
        unsigned int delegateShouldHighlightItemAtIndexPath : 1; 
        unsigned int delegateDidHighlightItemAtIndexPath : 1; 
        unsigned int delegateDidUnhighlightItemAtIndexPath : 1; 
        unsigned int delegateShouldSelectItemAtIndexPath : 1; 
        unsigned int delegateShouldDeselectItemAtIndexPath : 1; 
        unsigned int delegateDidSelectItemAtIndexPath : 1; 
        unsigned int delegateDidDeselectItemAtIndexPath : 1; 
        unsigned int delegateSupportsMenus : 1; 
        unsigned int delegateWillDisplayCell : 1; 
        unsigned int delegateWillDisplaySupplementaryView : 1; 
        unsigned int delegateDidEndDisplayingCell : 1; 
        unsigned int delegateDidEndDisplayingSupplementaryView : 1; 
        unsigned int delegateIndexForReferenceItemDuringLayoutTransition : 1; 
        unsigned int delegateOverrideForTransitionOffsetSize : 1; 
        unsigned int delegateTargetContentOffsetForProposedContentOffset : 1; 
        unsigned int delegateTargetIndexPathForMove : 1; 
        unsigned int delegateCanFocusItemAtIndexPath_deprecated : 1; 
        unsigned int delegateDidFocusItemAtIndexPath_deprecated : 1; 
        unsigned int delegateCanFocusItemAtIndexPath : 1; 
        unsigned int delegateDidFocusItemAtIndexPath : 1; 
        unsigned int delegateDidUnfocusItemAtIndexPath : 1; 
        unsigned int delegateShouldChangeFocusedItem : 1; 
        unsigned int dataSourceNumberOfSections : 1; 
        unsigned int dataSourceViewForSupplementaryElement : 1; 
        unsigned int dataSourceCanMoveItemAtIndexPath : 1; 
        unsigned int dataSourceMoveItemAtIndexPath : 1; 
        unsigned int reloadSkippedDuringSuspension : 1; 
        unsigned int scheduledUpdateVisibleCells : 1; 
        unsigned int scheduledUpdateVisibleCellLayoutAttributes : 1; 
        unsigned int allowsSelection : 1; 
        unsigned int allowsMultipleSelection : 1; 
        unsigned int fadeCellsForBoundsChange : 1; 
        unsigned int updatingLayout : 1; 
        unsigned int needsReload : 1; 
        unsigned int reloading : 1; 
        unsigned int skipLayoutDuringSnapshotting : 1; 
        unsigned int layoutInvalidatedSinceLastCellUpdate : 1; 
        unsigned int doneFirstLayout : 1; 
        unsigned int loadingOffscreenViews : 1; 
        unsigned int updating : 1; 
        unsigned int updatingVisibleCells : 1; 
        unsigned int preRotationBoundsSet : 1; 
        unsigned int allowsFocus : 1; 
        unsigned int updateFocusAfterItemAnimations : 1; 
        unsigned int visMode : 1; 
        unsigned int invokingDelegateDidEndDisplayingItem : 1; 
    }  _collectionViewFlags;
    struct NSEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentCenterOffset;
    double  _currentInteractiveTransitionProgress;
    double  _currentInteractiveTransitionTimeStamp;
    NSCollectionViewUpdate * _currentUpdate;
    <NSCollectionViewDataSource> * _dataSource;
    <NSCollectionViewCoreDelegate> * _delegate;
    NSMutableArray * _deleteItems;
    NSIndexPath * _dropTargetIndexPath;
    NSIndexPath * _firstResponderIndexPath;
    NSString * _firstResponderViewKind;
    long long  _firstResponderViewType;
    long long  _focusedViewType;
    NSMutableSet * _indexPathsForHighlightedItems;
    NSMutableSet * _indexPathsForSelectedItems;
    NSMutableArray * _insertItems;
    id  _interactiveCompletionHandler;
    NSMutableDictionary * _interactiveTransitionInfos;
    NSMutableDictionary * _interactiveTransitionValueTrackingDict;
    NSMutableDictionary * _invalidatedDecorationIndexPaths;
    NSMutableSet * _invalidatedItemIndexPaths;
    NSMutableSet * _invalidatedItemIndexPathsToAnimate;
    NSMutableDictionary * _invalidatedSupplementaryIndexPaths;
    id  _invalidationBlock;
    BOOL  _isInInteractiveTransition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastLayoutOffset;
    NSCollectionViewLayout * _layout;
    NSMutableArray * _moveItems;
    id  _navigationCompletion;
    NSView * _newContentView;
    NSCollectionViewLayout * _nextLayoutForInteractiveTranstion;
    NSArray * _originalDeleteItems;
    NSArray * _originalInsertItems;
    NSMutableSet * _pendingDeselectionIndexPaths;
    NSIndexPath * _pendingSelectionIndexPath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _preRotationBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousCenterOffset;
    double  _previousInteractiveTransitionProgress;
    double  _previousInteractiveTransitionTimeStamp;
    NSCollectionView * _publicCollectionView;
    NSMutableArray * _reloadItems;
    long long  _reloadingSuspendedCount;
    NSMutableArray * _reorderedItems;
    struct CGPoint { 
        double x; 
        double y; 
    }  _reorderingTargetPosition;
    long long  _rotationAnimationCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  _rotationBoundsOffset;
    BOOL  _shouldAccumulateTrackedLayoutValues;
    double  _startTimeStamp;
    NSMutableDictionary * _supplementaryViewClassDict;
    NSMutableDictionary * _supplementaryViewNibDict;
    NSMutableDictionary * _supplementaryViewNibExternalObjectsTables;
    NSMutableDictionary * _supplementaryViewReuseQueues;
    NSMutableArray * _trackedValuesKeys;
    NSCollectionViewLayoutAttributes * _transitionLayoutAttributes;
    long long  _updateAnimationCount;
    id  _updateCompletionHandler;
    long long  _updateCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleBounds;
    NSMutableDictionary * _visibleCellsDict;
    NSMutableDictionary * _visibleDecorationViewsDict;
    NSMutableDictionary * _visibleItemsDict;
    NSMutableDictionary * _visibleSupplementaryViewsDict;
}

@property (nonatomic, readwrite) BOOL allowsMultipleSelection;
@property (nonatomic, readwrite) BOOL allowsSelection;
@property (nonatomic, readwrite, retain) NSView *backgroundView;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (getter=_collectionViewData, nonatomic, readonly) NSCollectionViewData *collectionViewData;
@property (nonatomic, readwrite, retain) NSCollectionViewLayout *collectionViewLayout;
@property (atomic, readwrite) struct NSEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (getter=_currentUpdate, nonatomic, readonly) NSCollectionViewUpdate *currentUpdate;
@property (nonatomic, readwrite) <NSCollectionViewDataSource> *dataSource;
@property (getter=_debugModeEnabled, setter=_setDebugModeEnabled:, atomic, readwrite) BOOL debugModeEnabled;
@property (nonatomic, readwrite) <NSCollectionViewCoreDelegate> *delegate;
@property (getter=_dropTargetIndexPath, setter=_setDropTargetIndexPath:, atomic, readwrite) NSIndexPath *dropTargetIndexPath;
@property (getter=_navigationCompletion, setter=_setNavigationCompletion:, nonatomic, readwrite, copy) id navigationCompletion;
@property (atomic, readwrite) NSCollectionView *publicCollectionView;
@property (getter=_reorderedItems, nonatomic, readonly) NSArray *reorderedItems;
@property (getter=_reorderingTargetPosition, nonatomic, readonly) struct CGPoint { double x1; double x2; } reorderingTargetPosition;
@property (getter=_visibleViews, nonatomic, readonly) NSArray *visibleViews;

+ (id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2;

- (void)_addControlledSubview:(id)arg1 atZIndex:(long long)arg2;
- (void)_applyLayoutAttributes:(id)arg1 toView:(id)arg2;
- (id)_arrayForUpdateAction:(int)arg1;
- (void)_beginUpdates;
- (id)_collectionViewData;
- (struct CGPoint { double x1; double x2; })_contentOffsetForNewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 oldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 newContentSize:(struct CGSize { double x1; double x2; })arg3 andOldContentSize:(struct CGSize { double x1; double x2; })arg4;
- (id)_createPreparedCellForItemAtIndexPath:(id)arg1 withLayoutAttributes:(id)arg2 applyAttributes:(BOOL)arg3;
- (id)_createPreparedSupplementaryViewForElementOfKind:(id)arg1 atIndexPath:(id)arg2 withLayoutAttributes:(id)arg3 applyAttributes:(BOOL)arg4;
- (id)_currentUpdate;
- (BOOL)_dataSourceImplementsNumberOfSections;
- (BOOL)_debugModeEnabled;
- (id)_dequeueReusableViewOfKind:(id)arg1 withIdentifier:(id)arg2 forIndexPath:(id)arg3 viewCategory:(unsigned long long)arg4;
- (id)_deselectItemsAtIndexPaths:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (id)_doubleSidedAnimationsForView:(id)arg1 withStartingLayoutAttributes:(id)arg2 startingLayout:(id)arg3 endingLayoutAttributes:(id)arg4 endingLayout:(id)arg5 withAnimationSetup:(id)arg6 animationCompletion:(id)arg7 enableCustomAnimations:(BOOL)arg8 customAnimationsType:(unsigned long long)arg9;
- (id)_dropTargetIndexPath;
- (void)_endItemAnimationsWithInvalidationContext:(id)arg1;
- (void)_endItemAnimationsWithInvalidationContext:(id)arg1 tentativelyForReordering:(BOOL)arg2;
- (void)_endUpdatesWithInvalidationContext:(id)arg1 tentativelyForReordering:(BOOL)arg2;
- (void)_getOriginalReorderingIndexPaths:(id*)arg1 targetIndexPaths:(id*)arg2;
- (BOOL)_highlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3;
- (BOOL)_highlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 notifyDelegate:(BOOL)arg4;
- (id)_indexPathsForHighlightedItems;
- (id)_indexPathsForVisibleDecorationViewsOfKind:(id)arg1;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(BOOL)arg2;
- (void)_invalidateLayoutIfNecessary;
- (void)_invalidateLayoutWithContext:(id)arg1;
- (void)_invalidateWithBlock:(id)arg1;
- (BOOL)_itemIndexPathIsReordered:(id)arg1;
- (void)_layoutItems;
- (id)_navigationCompletion;
- (void)_performBatchUpdates:(id)arg1 completion:(id)arg2 invalidationContext:(id)arg3;
- (void)_performBatchUpdates:(id)arg1 completion:(id)arg2 invalidationContext:(id)arg3 tentativelyForReordering:(BOOL)arg4;
- (void)_prepareLayoutForUpdates;
- (id)_publicCollectionViewDebugDescription;
- (id)_registeredCellClassesByReuseIdentifier;
- (id)_registeredCellNibsByReuseIdentifier;
- (void)_reloadDataIfNeeded;
- (id)_reorderedItemForView:(id)arg1;
- (id)_reorderedItems;
- (struct CGPoint { double x1; double x2; })_reorderingTargetPosition;
- (void)_resumeReloads;
- (void)_reuseAllItems;
- (void)_reuseAllSupplementaryOrDecorationViews:(id)arg1;
- (void)_reuseAllViews;
- (void)_reuseCell:(id)arg1;
- (void)_reuseSupplementaryView:(id)arg1;
- (id)_selectItemsAtIndexPaths:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)_setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 isInteractive:(BOOL)arg3 completion:(id)arg4;
- (void)_setDebugModeEnabled:(BOOL)arg1;
- (void)_setDropTargetIndexPath:(id)arg1;
- (void)_setNavigationCompletion:(id)arg1;
- (void)_setNeedsVisibleCellsUpdate:(BOOL)arg1 withLayoutAttributes:(BOOL)arg2;
- (void)_setVisibleView:(id)arg1 forLayoutAttributes:(id)arg2;
- (void)_setupCellAnimations;
- (void)_stopAutoscrollTimer;
- (id)_subviewAtIndex:(unsigned long long)arg1;
- (void)_suspendReloads;
- (void)_trackLayoutValue:(double)arg1 forKey:(id)arg2;
- (double)_trackedLayoutValueForKey:(id)arg1;
- (void)_unhighlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)_unhighlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)_updateAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_updateBackgroundView;
- (void)_updateRowsAtIndexPaths:(id)arg1 updateAction:(int)arg2;
- (void)_updateSections:(id)arg1 updateAction:(int)arg2;
- (void)_updateVisibleCellsNow:(BOOL)arg1;
- (void)_updateWithItems:(id)arg1 tentativelyForReordering:(BOOL)arg2;
- (id)_viewAnimationsForCurrentUpdate;
- (BOOL)_viewIsReorderedCell:(id)arg1;
- (BOOL)_visible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleBounds;
- (id)_visibleCellForIndexPath:(id)arg1;
- (id)_visibleDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_visibleDecorationViewsOfKind:(id)arg1;
- (id)_visibleItemForIndexPath:(id)arg1;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 isDecorationView:(BOOL)arg3;
- (id)_visibleSupplementaryViews;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(BOOL)arg2;
- (id)_visibleViewDictForElementCategory:(unsigned long long)arg1 elementKind:(id)arg2;
- (id)_visibleViewForLayoutAttributes:(id)arg1;
- (id)_visibleViews;
- (void)addSubview:(id)arg1;
- (BOOL)allowsMultipleSelection;
- (BOOL)allowsSelection;
- (id)backgroundView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)collectionViewLayout;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)deleteSections:(id)arg1;
- (id)dequeueReusableItemWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)indexPathsForSelectedItems;
- (id)indexPathsForVisibleItems;
- (id)indexPathsForVisibleSupplementaryElementsOfKind:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)insertSections:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)layoutIfNeeded;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)performBatchUpdates:(id)arg1 completion:(id)arg2;
- (id)publicCollectionView;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerNib:(id)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)reloadData;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)reloadSections:(id)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)setAllowsSelection:(BOOL)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCollectionViewLayout:(id)arg1;
- (void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2;
- (void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)setContentInset:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsLayout;
- (void)setPublicCollectionView:(id)arg1;
- (id)supplementaryViewForElementKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;
- (id)visibleItems;
- (id)visibleSupplementaryViewsOfKind:(id)arg1;

@end