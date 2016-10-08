/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSSegmentedCell : NSActionCell {
    long long  _keySegment;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastBounds;
    id  _menuUniquer;
    long long  _reserved3;
    long long  _reserved4;
    struct { 
        unsigned int trackingMode : 3; 
        unsigned int trimmedLabels : 1; 
        unsigned int drawing : 1; 
        unsigned int reserved1 : 2; 
        unsigned int recalcToolTips : 1; 
        unsigned int usesWindowsStyle : 1; 
        unsigned int dontShowSelectedAndPressedAppearance : 1; 
        unsigned int menuShouldBeUniquedAgainstMain : 1; 
        unsigned int style : 8; 
        unsigned int flatMinX : 1; 
        unsigned int flatMaxX : 1; 
        unsigned int segmentedSeparated : 1; 
        unsigned int reserved : 10; 
    }  _seFlags;
    NSMutableArray * _segmentItems;
    id  _segmentTrackingInfo;
    long long  _selectedSegment;
}

@property (atomic, readwrite) long long segmentCount;
@property (atomic, readwrite) long long segmentStyle;
@property (atomic, readwrite) long long selectedSegment;
@property (atomic, readwrite) unsigned long long trackingMode;

+ (id)_labelCell;
+ (BOOL)prefersTrackingUntilMouseUp;

- (void)_acceleratorTimerFired;
- (void)_addNSSegmentItemViewsToControlView:(id)arg1;
- (void)_addSegmentItemCount:(long long)arg1;
- (void)_adjustRectForR2L:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (BOOL)_allowsVibrancyForControlView:(id)arg1;
- (BOOL)_anySegmentShowsBadge;
- (long long)_applicableSegmentedCellStyle;
- (unsigned long long)_applicableTrackingModeForSegment:(long long)arg1;
- (id)_auxiliaryStorage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_badgeRectForImage:(id)arg1 inSegment:(long long)arg2 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4 isFlipped:(BOOL)arg5 drawFlags:(unsigned long long)arg6;
- (long long)_badgeValueForSegment:(long long)arg1;
- (long long)_baseStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_calculateSelectedSegmentForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_cleanupTracking;
- (void)_clearMouseTracking;
- (void)_configureLabelCell:(id)arg1 forItem:(id)arg2 controlView:(id)arg3 imageState:(unsigned long long)arg4 backgroundStyle:(long long)arg5;
- (BOOL)_controlOrCellhasDrawingOverrides:(id)arg1;
- (struct __CFDictionary { }*)_copyCoreUIBackgroundDrawOptionsForSegment:(long long)arg1 inView:(id)arg2 drawFlags:(unsigned long long*)arg3;
- (BOOL)_coreUIDrawSegmentBackground:(long long)arg1 withCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3 maskOnly:(BOOL)arg4;
- (void)_deselectAllButFirstSelectedSegment;
- (void)_deselectAllSegments;
- (void)_displayDelayedMenu;
- (BOOL)_dontShowSelectedAndPressedAppearance;
- (void)_drawBackgroundWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)_drawMenuIndicatorForSegment:(long long)arg1 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_drawingRectForSegment:(long long)arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)_edgeInset;
- (BOOL)_funkyOptOutLogicThatShouldGoAwayForView:(id)arg1 semanticContext:(int)arg2;
- (unsigned long long)_getVisualStateForSegment:(unsigned long long)arg1 andTrackingMode:(unsigned long long*)arg2 forApplicableStyle:(long long)arg3;
- (BOOL)_hasItemTooltips;
- (BOOL)_haveSegmentAtIndex:(long long)arg1;
- (double)_imagePositionVerticalAdjustmentForSegmentStyle:(long long)arg1 controlSize:(unsigned long long)arg2 scale:(double)arg3 isFlipped:(BOOL)arg4;
- (double)_imageTextGap;
- (BOOL)_inactiveStateShowsRolloversForSegment:(long long)arg1;
- (long long)_indexOfHilightedSegment;
- (long long)_indexOfSelectedSegment;
- (long long)_initialBackgroundStyleCompatibilityGuessIgnoringExternalContext;
- (BOOL)_isFlatOnEdge:(unsigned long long)arg1;
- (BOOL)_itemAtIndexIsSelected:(long long)arg1;
- (id)_keyEquivalentUniquerCreatingIfNecessary:(BOOL)arg1;
- (long long)_keySegment;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_labelRectForSegment:(long long)arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withView:(id)arg3;
- (void)_makeSegmentItemsPerformSelector:(SEL)arg1;
- (double)_menuDelayTimeForSegment:(long long)arg1;
- (BOOL)_mouseIsInsideSegmentAtIndex:(long long)arg1;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (BOOL)_needsGasPedalConfiguration;
- (BOOL)_needsRolloverTracking;
- (BOOL)_needsToolTipRecalc;
- (void)_performClick:(id)arg1 ignoreMenus:(BOOL)arg2;
- (void)_performClick:(id)arg1 onSegment:(long long)arg2 ignoreMenus:(BOOL)arg3;
- (BOOL)_performKeyEquivalent:(id)arg1 conditionally:(BOOL)arg2;
- (void)_postRolloverNotification;
- (id)_pressureConfigurationIfNeeded;
- (BOOL)_proRecalcToolTips;
- (void)_proSetRecalcToolTips:(BOOL)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectAdjustedForR2LForSegment:(long long)arg1 cellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 drawFlags:(unsigned long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForSegment:(long long)arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_removeAllToolTips;
- (void)_removeNSSegmentItemViewsFromControlView:(id)arg1;
- (BOOL)_resizeSegmentsForCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)_segmentHighlightState:(long long)arg1;
- (id)_segmentItemAtIndex:(long long)arg1;
- (id)_segmentItems;
- (long long)_segmentShowingRollover;
- (long long)_segmentedCellStyle;
- (double)_segmentedMenuDelayTime;
- (double)_segmentedMenuDragSlopRect;
- (BOOL)_segmentedSeparatedStyle;
- (id)_segmentsDeselectedBySegment:(long long)arg1;
- (void)_selectHighlightedSegment;
- (BOOL)_sendActionFrom:(id)arg1;
- (void)_setBadgeValue:(long long)arg1 forSegment:(long long)arg2 inView:(id)arg3;
- (void)_setBaseStyle:(long long)arg1;
- (void)_setDontShowSelectedAndPressedAppearance:(BOOL)arg1;
- (void)_setFlagsForStyle:(long long)arg1;
- (void)_setInactiveStateShowsRollovers:(BOOL)arg1 forSegment:(long long)arg2;
- (void)_setIndexOfHilightedSegment:(long long)arg1;
- (void)_setIsFlat:(BOOL)arg1 onEdge:(unsigned long long)arg2;
- (void)_setItemAtIndex:(long long)arg1 isSelected:(BOOL)arg2;
- (void)_setKeySegment:(long long)arg1;
- (void)_setMenuShouldBeUniquedAgainstMainMenu:(BOOL)arg1;
- (void)_setMouseTrackingInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ofView:(id)arg2 withConfiguration:(id)arg3;
- (void)_setNeedsToolTipRecalc:(BOOL)arg1;
- (void)_setSegmentItems:(id)arg1 updateSegmentItemViews:(BOOL)arg2;
- (void)_setSegmentedCellStyle:(long long)arg1;
- (void)_setSegmentedSeparated:(BOOL)arg1;
- (void)_setShowsBadge:(BOOL)arg1 forSegment:(long long)arg2 inView:(id)arg3;
- (void)_setSpringLoadingHighlightForSegment:(long long)arg1 toValue:(long long)arg2;
- (void)_setSpringLoadingSegment:(long long)arg1;
- (void)_setTrackingMode:(unsigned int)arg1;
- (void)_setUsesWindowsStyle:(BOOL)arg1;
- (BOOL)_setupForTackingAtLocation:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3 latchingToSingleSegment:(BOOL)arg4;
- (BOOL)_shouldUseAlternateImageForSegment:(long long)arg1;
- (BOOL)_showsBadgeForSegment:(long long)arg1;
- (void)_springLoadSegment:(BOOL)arg1;
- (long long)_springLoadingHighlightForSegment:(long long)arg1;
- (long long)_springLoadingSegment;
- (void)_subtractSegmentItemCount:(long long)arg1;
- (BOOL)_trackMouse:(id)arg1 forSegment:(long long)arg2 inRects:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 count:(unsigned long long)arg4 inCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 ofView:(id)arg6 untilMouseUp:(BOOL)arg7;
- (void)_trackSelectedItemMenu;
- (unsigned int)_trackingMode;
- (long long)_trackingSegment;
- (void)_updateLabelViewForSegmentItem:(id)arg1 segmentContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 imageState:(unsigned long long)arg3 controlView:(id)arg4;
- (void)_updateMouseTracking;
- (void)_updateNSSegmentItemViewFramesForCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)_usesWindowsStyle;
- (int)_vibrancyBlendModeForControlView:(id)arg1;
- (id)_vibrancyFilterForControlView:(id)arg1;
- (BOOL)_wantsMenuIndicatorForSegment:(long long)arg1;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityLabelForSegment:(long long)arg1;
- (id)alternateImageForSegment:(long long)arg1;
- (BOOL)canSmoothFontsInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forLayerBackedView:(id)arg2;
- (struct CGSize { double x1; double x2; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)continueTracking:(struct CGPoint { double x1; double x2; })arg1 at:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3;
- (BOOL)continueTrackingGesture:(id)arg1 inView:(id)arg2;
- (void)continueTrackingPeriodicEvent:(id)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)doubleValue;
- (void)drawFocusRingMaskWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)drawSegment:(long long)arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withView:(id)arg3;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (float)floatValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focusRingMaskBoundsForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3;
- (id)imageForSegment:(long long)arg1;
- (unsigned long long)imageScalingForSegment:(long long)arg1;
- (long long)indexOfSegmentContainingPoint:(struct CGPoint { double x1; double x2; })arg1 inCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)indexOfSelectedItem;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (int)intValue;
- (long long)integerValue;
- (long long)interiorBackgroundStyleForSegment:(long long)arg1;
- (BOOL)isEnabledForSegment:(long long)arg1;
- (BOOL)isMenuIndicatorShownForSegment:(long long)arg1;
- (BOOL)isOpaque;
- (BOOL)isSelectedForSegment:(long long)arg1;
- (id)labelForSegment:(long long)arg1;
- (void)makeNextSegmentKey;
- (void)makePreviousSegmentKey;
- (id)menuForSegment:(long long)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (id)objectValue;
- (void)performClick:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSegment:(long long)arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)segmentCount;
- (long long)segmentStyle;
- (BOOL)selectSegmentWithTag:(long long)arg1;
- (long long)selectedSegment;
- (void)setAccessibilityLabel:(id)arg1 forSegment:(long long)arg2;
- (void)setAlternateImage:(id)arg1 forSegment:(long long)arg2;
- (void)setContinuous:(BOOL)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (void)setControlView:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setEnabled:(BOOL)arg1 forSegment:(long long)arg2;
- (void)setFloatValue:(float)arg1;
- (void)setFont:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1 forSegment:(long long)arg2;
- (void)setImageScaling:(unsigned long long)arg1 forSegment:(long long)arg2;
- (void)setIntValue:(int)arg1;
- (void)setIntegerValue:(long long)arg1;
- (void)setLabel:(id)arg1 forSegment:(long long)arg2;
- (void)setMenu:(id)arg1 forSegment:(long long)arg2;
- (void)setMenuIndicatorShown:(BOOL)arg1 forSegment:(long long)arg2;
- (void)setObjectValue:(id)arg1;
- (void)setSegmentCount:(long long)arg1;
- (void)setSegmentStyle:(long long)arg1;
- (void)setSegmentStyle:(long long)arg1 forceRecalc:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 forSegment:(long long)arg2;
- (void)setSelectedSegment:(long long)arg1;
- (void)setTag:(long long)arg1 forSegment:(long long)arg2;
- (void)setToolTip:(id)arg1 forSegment:(long long)arg2;
- (void)setTrackingMode:(unsigned long long)arg1;
- (void)setWidth:(double)arg1 forSegment:(long long)arg2;
- (void)springLoadingActivated:(BOOL)arg1 draggingInfo:(id)arg2;
- (unsigned long long)springLoadingEntered:(id)arg1;
- (void)springLoadingExited:(id)arg1;
- (void)springLoadingHighlightChanged:(id)arg1;
- (unsigned long long)springLoadingUpdated:(id)arg1;
- (BOOL)startTrackingAt:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (void)stopTracking:(struct CGPoint { double x1; double x2; })arg1 at:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (long long)tagForSegment:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)toolTipForSegment:(long long)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (unsigned long long)trackingMode;
- (void)updateTrackingAreaWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (double)widthForSegment:(long long)arg1;

// NSSegmentedCell (NSSegmentedCellAccessibility)

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityScreenRectForSegment:(long long)arg1;
- (id)_accessibilitySegmentAtIndex:(long long)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFocusRingBounds;
- (id)accessibilityFocusedAttribute;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (id)accessibilityPositionOfChild:(id)arg1;
- (id)accessibilityRoleAttribute;
- (void)accessibilitySetFocus:(id)arg1 forChild:(id)arg2;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityValueAttribute;

// NSSegmentedCell (PrivatePressure)

- (double)doubleValueForSelectedSegment;
- (void)getPeriodicDelay:(float*)arg1 interval:(float*)arg2;

// NSSegmentedCell (StaticMethods)

+ (double)_additionalContentOffsetForStyle:(long long)arg1 controlSize:(unsigned long long)arg2;
+ (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })_alignmentRectInsetsForStyle:(long long)arg1 size:(unsigned long long)arg2 semanticContext:(int)arg3;
+ (long long)_applicableStyleForBaseStyle:(long long)arg1 automaticStyle:(BOOL)arg2 usesWindowsStyle:(BOOL)arg3 segmentedSeparatedStyle:(BOOL)arg4 shouldUseTexturedToolbarStyle:(BOOL)arg5;
+ (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })_bezelToDrawingRectInsetsForStyle:(long long)arg1 controlSize:(unsigned long long)arg2 scale:(double)arg3 semanticContext:(int)arg4;
+ (struct __CFString { }*)_coreUISizeForSegmentStyle:(long long)arg1 controlSize:(unsigned long long)arg2;
+ (double)_cuiPixelHeightForStyle:(long long)arg1 size:(unsigned long long)arg2 scale:(double)arg3 currentAppearance:(id)arg4 semanticContext:(int)arg5;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cuiRectForProposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2 controlSize:(unsigned long long)arg3 scale:(double)arg4 currentAppearance:(id)arg5 controlView:(id)arg6;
+ (void)_debugDrawOnePixelFrameRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2 draw:(BOOL)arg3;
+ (double)_endCapWidthForStyle:(long long)arg1 controlSize:(unsigned long long)arg2;
+ (BOOL)_givenState:(unsigned long long)arg1 hasState:(unsigned long long)arg2;
+ (unsigned long long)_image_state_for_visual_state:(unsigned long long)arg1 style:(long long)arg2 trackingMode:(unsigned long long)arg3;
+ (BOOL)_isStyleAutomatic:(long long)arg1;
+ (BOOL)_isStyleSeparated:(long long)arg1;
+ (BOOL)_isTexturedStyle:(long long)arg1;
+ (double)_menuIndicatorAdjustForStyle:(long long)arg1 size:(unsigned long long)arg2;
+ (double)_preferredHeightForStyle:(long long)arg1 controlSize:(unsigned long long)arg2 controlView:(id)arg3;
+ (BOOL)_segmentStyleIsFakedWithButtonArt:(long long)arg1;
+ (BOOL)_segmentStyleShowsSelectedInBezelWithTracking:(long long)arg1 tracking:(unsigned long long)arg2;
+ (BOOL)_segmentStyleWantsOnStateWhenPressedWithMomentaryTracking:(long long)arg1;
+ (BOOL)_styleNeedsRolloverTracking:(long long)arg1;
+ (double)_textVerticalAdjustForStyle:(long long)arg1 controlSize:(unsigned long long)arg2 font:(id)arg3;
+ (unsigned long long)_validateControlSize:(unsigned long long)arg1;
+ (double)_verticalScaleForControlView:(id)arg1;
+ (struct __CFString { }*)_widgetTypeForSegmentStyle:(long long)arg1 semanticContext:(int)arg2;
+ (struct __CFString { }*)_widgetTypeForSegmentStyleFull:(long long)arg1 semanticContext:(int)arg2;
+ (struct __CFString { }*)_widgetTypeStyleCommon:(long long)arg1 semanticContext:(int)arg2;

@end
