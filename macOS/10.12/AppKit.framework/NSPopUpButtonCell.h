/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSPopUpButtonCell : NSMenuItemCell {
    NSMenu * _menu;
    struct __pbcFlags { 
        unsigned int pullsDown : 1; 
        unsigned int preferredEdge : 3; 
        unsigned int menuIsAttached : 1; 
        unsigned int usesItemFromMenu : 1; 
        unsigned int altersStateOfSelectedItem : 1; 
        unsigned int decoding : 1; 
        unsigned int arrowPosition : 2; 
        unsigned int ignoreMenuLayout : 1; 
        unsigned int drawing : 1; 
        unsigned int menuShouldBeUniquedAgainstMain : 1; 
        unsigned int RESERVED : 19; 
    }  _pbcFlags;
    id  _popupReserved;
    int  _selectedIndex;
}

@property (atomic, readwrite) BOOL altersStateOfSelectedItem;
@property (atomic, readwrite) unsigned long long arrowPosition;
@property (atomic, readwrite) BOOL autoenablesItems;
@property (atomic, readonly) long long indexOfSelectedItem;
@property (atomic, readonly, copy) NSArray *itemArray;
@property (atomic, readonly, copy) NSArray *itemTitles;
@property (atomic, readonly) NSMenuItem *lastItem;
@property (atomic, readwrite, retain) NSMenu *menu;
@property (atomic, readonly) long long numberOfItems;
@property (atomic, readwrite) unsigned long long preferredEdge;
@property (atomic, readwrite) BOOL pullsDown;
@property (atomic, readonly) NSMenuItem *selectedItem;
@property (atomic, readonly, copy) NSString *titleOfSelectedItem;
@property (atomic, readwrite) BOOL usesItemFromMenu;

+ (id)_attachedCell;
+ (void)initialize;

- (void)_allItemsRemoved:(id)arg1;
- (BOOL)_allowsContextMenus;
- (BOOL)_alwaysShowBezelForCurrentBezelStyleAndState;
- (unsigned long long)_applicableArrowLocation;
- (struct CGSize { double x1; double x2; })_autolayout_cellSize;
- (double)_autolayout_preferredPopupHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_availableContentRectForCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isFlipped:(BOOL)arg2;
- (double)_bezelBottomOffset;
- (double)_bezelBottomPadding;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })_bezelToIndicatorInsets;
- (struct CGPoint { double x1; double x2; })_bezelToIndicatorOffsets;
- (double)_bezelTopOffset;
- (double)_bezelTopPadding;
- (BOOL)_canBecomeDefaultButtonCell;
- (Class)_classForOverrideCheck;
- (void)_clearTargetsFromMenuPointingAtSelf:(id)arg1;
- (id)_copyWithoutMenu;
- (struct __CFDictionary { }*)_coreUIBezelDrawOptionsWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (id)_coreUIDefaultIndicatorImage;
- (void)_createAndPopulateKeyEquivalentUniquerIfNecessary;
- (id)_defaultIndicatorImage;
- (struct CGSize { double x1; double x2; })_defaultIndicatorSize;
- (void)_doPopupSearchString;
- (void)_drawIndicatorWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)_drawStandardPopUpBorderWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (unsigned long long)_effectiveAlignment;
- (int)_effectiveBackgroundStyleInView:(id)arg1;
- (unsigned long long)_effectiveImagePosition;
- (double)_extraWidthForCellHeight:(double)arg1;
- (void)_fixTargetsForMenu:(id)arg1;
- (void)_handleWillPopUpNotification;
- (id)_highlightColor;
- (id)_highlightTextColor;
- (double)_horzOffsetForTitleInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAlignment:(unsigned long long)arg2 direction:(long long)arg3 font:(id)arg4;
- (double)_imageToBezelOrIndicatorPadding;
- (double)_imageToTitleHorizontalOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_indicatorFrameForCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_indicatorFrameForCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isFlipped:(BOOL)arg2;
- (id)_indicatorImage;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })_indicatorInsets;
- (void)_itemAdded:(id)arg1;
- (void)_itemChanged:(id)arg1;
- (void)_itemRemoved:(id)arg1;
- (id)_keyEquivalentUniquerCreatingIfNecessary:(BOOL)arg1;
- (struct CGSize { double x1; double x2; })_labelOffsetInCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ofView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_locationForPopUpMenuWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)_maxItemsToMeasureForCellSize;
- (void)_menuItemSelected:(id)arg1;
- (struct CGPoint { double x1; double x2; })_menuLocationForEvent:(id)arg1 inCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3;
- (double)_menuLocationHorizontalOffset;
- (double)_menuMinimumWidthForEvent:(id)arg1 inCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3;
- (void)_menuWillSendAction:(id)arg1;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (BOOL)_obeysHiddenBit;
- (BOOL)_performKeyEquivalent:(id)arg1 conditionally:(BOOL)arg2;
- (void)_popUpItemAction:(id)arg1;
- (unsigned long long)_popUpMenuFlags:(BOOL)arg1;
- (id)_popUpMenuOptionsForFlags:(unsigned long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })_popupBezelInsets;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })_popupBezelInsetsForCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_popupBezelToContentPaddingOffset;
- (BOOL)_popupHeightIsFlexible;
- (struct CGSize { double x1; double x2; })_popupImageSizeForCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_popupIndicatorToContentPaddingOffset;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })_popupPaddingInsets;
- (BOOL)_popupStyleDrawsIndicator;
- (BOOL)_positionsMenuAsPullDown;
- (BOOL)_positionsMenuRelativeToRightEdge;
- (unsigned long long)_preferredFocusLocationMask;
- (double)_preferredPopupHeight;
- (long long)_previousItemIfExists;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })_pulldownExtraBezelInsets;
- (void)_rawSetSelectedIndex:(long long)arg1;
- (void)_removePreviousItem;
- (void)_selectItemAtIndex:(long long)arg1 alteringState:(BOOL)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_separatorRectForCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isFlipped:(BOOL)arg2;
- (void)_setMenuShouldBeUniquedAgainstMainMenu:(BOOL)arg1;
- (void)_setPreviousItem:(long long)arg1;
- (BOOL)_shouldDrawIndicatorOnlyForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)_shouldDrawTextWithDisabledAppearance;
- (BOOL)_shouldTweakRoundingBehaviorWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)_subscribeToNotificationsForMenu:(id)arg1;
- (void)_unsubscribeFromNotificationsForMenu:(id)arg1;
- (BOOL)_useTigerMetricsForHorizontalUnborderedOffset;
- (void)addItemWithTitle:(id)arg1;
- (void)addItemsWithTitles:(id)arg1;
- (BOOL)altersStateOfSelectedItem;
- (unsigned long long)arrowPosition;
- (void)attachPopUpWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (id)attributedTitle;
- (BOOL)autoenablesItems;
- (BOOL)canSmoothFontsInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forLayerBackedView:(id)arg2;
- (struct CGSize { double x1; double x2; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)dismissPopUp;
- (void)drawBorderAndBackgroundWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawTitle:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)indexOfItem:(id)arg1;
- (long long)indexOfItemWithRepresentedObject:(id)arg1;
- (long long)indexOfItemWithTag:(long long)arg1;
- (long long)indexOfItemWithTarget:(id)arg1 andAction:(SEL)arg2;
- (long long)indexOfItemWithTitle:(id)arg1;
- (long long)indexOfSelectedItem;
- (id)initTextCell:(id)arg1;
- (id)initTextCell:(id)arg1 pullsDown:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (void)insertItemWithTitle:(id)arg1 atIndex:(long long)arg2;
- (long long)interiorBackgroundStyle;
- (BOOL)isOpaque;
- (id)itemArray;
- (id)itemAtIndex:(long long)arg1;
- (id)itemTitleAtIndex:(long long)arg1;
- (id)itemTitles;
- (id)itemWithTitle:(id)arg1;
- (BOOL)keyDown:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyEquivalentRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lastItem;
- (id)menu;
- (id)menuView;
- (long long)numberOfItems;
- (id)objectValue;
- (void)performClickWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (unsigned long long)preferredEdge;
- (BOOL)pullsDown;
- (void)removeAllItems;
- (void)removeItemAtIndex:(long long)arg1;
- (void)removeItemWithTitle:(id)arg1;
- (void)selectItem:(id)arg1;
- (void)selectItemAtIndex:(long long)arg1;
- (BOOL)selectItemWithTag:(long long)arg1;
- (void)selectItemWithTitle:(id)arg1;
- (id)selectedItem;
- (void)setAltersStateOfSelectedItem:(BOOL)arg1;
- (void)setArrowPosition:(unsigned long long)arg1;
- (void)setAutoenablesItems:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMenu:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setPreferredEdge:(unsigned long long)arg1;
- (void)setPullsDown:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setUsesItemFromMenu:(BOOL)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stateImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)synchronizeTitleAndSelectedItem;
- (id)titleOfSelectedItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (BOOL)usesItemFromMenu;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)wantsUpdateLayerInView:(id)arg1;

// NSPopUpButtonCell (NSPopUpButtonCellAccessibility)

- (void)_accessibilityPressAction:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityRoleAttribute;
- (id)accessibilityValueAttribute;

@end
