/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSPopover : NSResponder <NSAccessibility, NSAccessibilityElement, _NSTransientUIElement> {
    long long  _appearance;
    long long  _behavior;
    id  _bindingAdaptor;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSViewController * _contentViewController;
    id  _delegate;
    struct { 
        unsigned int animates : 1; 
        unsigned int positioningRectIsBounds : 1; 
        unsigned int registeredAsTransient : 1; 
        unsigned int registeredAsSemitransient : 1; 
        unsigned int shown : 1; 
        unsigned int toolbarHidesAnchor : 1; 
        unsigned int closing : 1; 
        unsigned int registeredForGeometryInWindowDidChange : 1; 
        unsigned int keepTopStable : 1; 
        unsigned int implicitlyDetached : 1; 
        unsigned int hidesDetachedWindowOnDeactivate : 1; 
        unsigned int requiresCorrectContentAppearance : 1; 
        unsigned int reserved : 20; 
    }  _flags;
    id  _popoverPrivateData;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _positioningRect;
    NSView * _positioningView;
    NSWindow * _positioningWindow;
    id  _postCloseBlock;
    unsigned long long  _preferredEdge;
    id  _visualRepresentation;
}

@property (setter=_setRegisteredTransientBehavior:, atomic, readwrite) long long _registeredTransientBehavior;
@property (atomic, readonly) long long _transientBehavior;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } accessibilityActivationPoint;
@property (atomic, readwrite, copy) NSArray *accessibilityAllowedValues;
@property (getter=isAccessibilityAlternateUIVisible, atomic, readwrite) BOOL accessibilityAlternateUIVisible;
@property (atomic, readwrite, retain) id accessibilityApplicationFocusedUIElement;
@property (atomic, readwrite, retain) id accessibilityCancelButton;
@property (atomic, readwrite, copy) NSArray *accessibilityChildren;
@property (atomic, readwrite, retain) id accessibilityClearButton;
@property (atomic, readwrite, retain) id accessibilityCloseButton;
@property (atomic, readwrite) long long accessibilityColumnCount;
@property (atomic, readwrite, copy) NSArray *accessibilityColumnHeaderUIElements;
@property (atomic, readwrite) struct _NSRange { unsigned long long x1; unsigned long long x2; } accessibilityColumnIndexRange;
@property (atomic, readwrite, copy) NSArray *accessibilityColumnTitles;
@property (atomic, readwrite, copy) NSArray *accessibilityColumns;
@property (atomic, readwrite, copy) NSArray *accessibilityContents;
@property (atomic, readwrite, retain) id accessibilityCriticalValue;
@property (atomic, readwrite, retain) id accessibilityDecrementButton;
@property (atomic, readwrite, retain) id accessibilityDefaultButton;
@property (getter=isAccessibilityDisclosed, atomic, readwrite) BOOL accessibilityDisclosed;
@property (atomic, readwrite) id accessibilityDisclosedByRow;
@property (atomic, readwrite, retain) id accessibilityDisclosedRows;
@property (atomic, readwrite) long long accessibilityDisclosureLevel;
@property (atomic, readwrite, copy) NSString *accessibilityDocument;
@property (getter=isAccessibilityEdited, atomic, readwrite) BOOL accessibilityEdited;
@property (getter=isAccessibilityElement, atomic, readwrite) BOOL accessibilityElement;
@property (getter=isAccessibilityEnabled, atomic, readwrite) BOOL accessibilityEnabled;
@property (getter=isAccessibilityExpanded, atomic, readwrite) BOOL accessibilityExpanded;
@property (atomic, readwrite) id accessibilityExtrasMenuBar;
@property (atomic, readwrite, copy) NSString *accessibilityFilename;
@property (getter=isAccessibilityFocused, atomic, readwrite) BOOL accessibilityFocused;
@property (atomic, readwrite, retain) id accessibilityFocusedWindow;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } accessibilityFrame;
@property (getter=isAccessibilityFrontmost, atomic, readwrite) BOOL accessibilityFrontmost;
@property (atomic, readwrite, retain) id accessibilityFullScreenButton;
@property (atomic, readwrite, retain) id accessibilityGrowArea;
@property (atomic, readwrite, copy) NSArray *accessibilityHandles;
@property (atomic, readwrite, retain) id accessibilityHeader;
@property (atomic, readwrite, copy) NSString *accessibilityHelp;
@property (getter=isAccessibilityHidden, atomic, readwrite) BOOL accessibilityHidden;
@property (atomic, readwrite, retain) id accessibilityHorizontalScrollBar;
@property (atomic, readwrite, copy) NSString *accessibilityHorizontalUnitDescription;
@property (atomic, readwrite) long long accessibilityHorizontalUnits;
@property (atomic, readwrite, copy) NSString *accessibilityIdentifier;
@property (atomic, readwrite, retain) id accessibilityIncrementButton;
@property (atomic, readwrite) long long accessibilityIndex;
@property (atomic, readwrite) long long accessibilityInsertionPointLineNumber;
@property (atomic, readwrite, copy) NSString *accessibilityLabel;
@property (atomic, readwrite, copy) NSArray *accessibilityLabelUIElements;
@property (atomic, readwrite) float accessibilityLabelValue;
@property (atomic, readwrite, copy) NSArray *accessibilityLinkedUIElements;
@property (getter=isAccessibilityMain, atomic, readwrite) BOOL accessibilityMain;
@property (atomic, readwrite, retain) id accessibilityMainWindow;
@property (atomic, readwrite, retain) id accessibilityMarkerGroupUIElement;
@property (atomic, readwrite, copy) NSString *accessibilityMarkerTypeDescription;
@property (atomic, readwrite, copy) NSArray *accessibilityMarkerUIElements;
@property (atomic, readwrite, retain) id accessibilityMarkerValues;
@property (atomic, readwrite, retain) id accessibilityMaxValue;
@property (atomic, readwrite) id accessibilityMenuBar;
@property (atomic, readwrite, retain) id accessibilityMinValue;
@property (atomic, readwrite, retain) id accessibilityMinimizeButton;
@property (getter=isAccessibilityMinimized, atomic, readwrite) BOOL accessibilityMinimized;
@property (getter=isAccessibilityModal, atomic, readwrite) BOOL accessibilityModal;
@property (atomic, readwrite, copy) NSArray *accessibilityNextContents;
@property (atomic, readwrite) long long accessibilityNumberOfCharacters;
@property (getter=isAccessibilityOrderedByRow, atomic, readwrite) BOOL accessibilityOrderedByRow;
@property (atomic, readwrite) long long accessibilityOrientation;
@property (atomic, readwrite, retain) id accessibilityOverflowButton;
@property (atomic, readwrite) id accessibilityParent;
@property (atomic, readwrite, copy) NSString *accessibilityPlaceholderValue;
@property (atomic, readwrite, copy) NSArray *accessibilityPreviousContents;
@property (getter=isAccessibilityProtectedContent, atomic, readwrite) BOOL accessibilityProtectedContent;
@property (atomic, readwrite, retain) id accessibilityProxy;
@property (getter=isAccessibilityRequired, atomic, readwrite) BOOL accessibilityRequired;
@property (atomic, readwrite, copy) NSString *accessibilityRole;
@property (atomic, readwrite, copy) NSString *accessibilityRoleDescription;
@property (atomic, readwrite) long long accessibilityRowCount;
@property (atomic, readwrite, copy) NSArray *accessibilityRowHeaderUIElements;
@property (atomic, readwrite) struct _NSRange { unsigned long long x1; unsigned long long x2; } accessibilityRowIndexRange;
@property (atomic, readwrite, copy) NSArray *accessibilityRows;
@property (atomic, readwrite) long long accessibilityRulerMarkerType;
@property (atomic, readwrite, retain) id accessibilitySearchButton;
@property (atomic, readwrite, retain) id accessibilitySearchMenu;
@property (getter=isAccessibilitySelected, atomic, readwrite) BOOL accessibilitySelected;
@property (atomic, readwrite, copy) NSArray *accessibilitySelectedCells;
@property (atomic, readwrite, copy) NSArray *accessibilitySelectedChildren;
@property (atomic, readwrite, copy) NSArray *accessibilitySelectedColumns;
@property (atomic, readwrite, copy) NSArray *accessibilitySelectedRows;
@property (atomic, readwrite, copy) NSString *accessibilitySelectedText;
@property (atomic, readwrite) struct _NSRange { unsigned long long x1; unsigned long long x2; } accessibilitySelectedTextRange;
@property (atomic, readwrite, copy) NSArray *accessibilitySelectedTextRanges;
@property (atomic, readwrite, copy) NSArray *accessibilityServesAsTitleForUIElements;
@property (atomic, readwrite) struct _NSRange { unsigned long long x1; unsigned long long x2; } accessibilitySharedCharacterRange;
@property (atomic, readwrite, copy) NSArray *accessibilitySharedFocusElements;
@property (atomic, readwrite, copy) NSArray *accessibilitySharedTextUIElements;
@property (atomic, readwrite, retain) id accessibilityShownMenu;
@property (atomic, readwrite) long long accessibilitySortDirection;
@property (atomic, readwrite, copy) NSArray *accessibilitySplitters;
@property (atomic, readwrite, copy) NSString *accessibilitySubrole;
@property (atomic, readwrite, copy) NSArray *accessibilityTabs;
@property (atomic, readwrite, copy) NSString *accessibilityTitle;
@property (atomic, readwrite) id accessibilityTitleUIElement;
@property (atomic, readwrite, retain) id accessibilityToolbarButton;
@property (atomic, readwrite) id accessibilityTopLevelUIElement;
@property (atomic, readwrite, copy) NSURL *accessibilityURL;
@property (atomic, readwrite, copy) NSString *accessibilityUnitDescription;
@property (atomic, readwrite) long long accessibilityUnits;
@property (atomic, readwrite, retain) id accessibilityValue;
@property (atomic, readwrite, copy) NSString *accessibilityValueDescription;
@property (atomic, readwrite, retain) id accessibilityVerticalScrollBar;
@property (atomic, readwrite, copy) NSString *accessibilityVerticalUnitDescription;
@property (atomic, readwrite) long long accessibilityVerticalUnits;
@property (atomic, readwrite, copy) NSArray *accessibilityVisibleCells;
@property (atomic, readwrite) struct _NSRange { unsigned long long x1; unsigned long long x2; } accessibilityVisibleCharacterRange;
@property (atomic, readwrite, copy) NSArray *accessibilityVisibleChildren;
@property (atomic, readwrite, copy) NSArray *accessibilityVisibleColumns;
@property (atomic, readwrite, copy) NSArray *accessibilityVisibleRows;
@property (atomic, readwrite, retain) id accessibilityWarningValue;
@property (atomic, readwrite) id accessibilityWindow;
@property (atomic, readwrite, copy) NSArray *accessibilityWindows;
@property (atomic, readwrite, retain) id accessibilityZoomButton;
@property (atomic, readwrite) BOOL animates;
@property (atomic, readwrite) long long appearance;
@property (atomic, readwrite) long long behavior;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } contentSize;
@property (atomic, readwrite, retain) NSViewController *contentViewController;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) <NSPopoverDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (getter=isDetached, atomic, readonly) BOOL detached;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } positioningRect;
@property (atomic, readwrite, retain) NSView *positioningView;
@property (getter=isShown, atomic, readwrite) BOOL shown;
@property (atomic, readonly) Class superclass;

- (void)_addForbiddenRectForBoundsOfView:(id)arg1;
- (void)_applicationDidBecomeActive_detachedWindow:(id)arg1;
- (void)_applicationDidResignActive_detachedWindow:(id)arg1;
- (id)_bindingAdaptor;
- (long long)_closeReason;
- (void)_commonInit;
- (void)_completeShow;
- (struct CGPoint { double x1; double x2; })_computeAnchorPointForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_delegate;
- (void)_dragWithEvent:(id)arg1;
- (void)_executeClosingBlock;
- (unsigned long long)_externalRectEdgeToInternalAnchorEdge:(unsigned long long)arg1 ofView:(id)arg2;
- (void)_finalizeImplicitWindowDetach;
- (void)_finishClosingAndShouldNotify:(BOOL)arg1;
- (void)_geometryInWindowDidChangeForView:(id)arg1;
- (long long)_legacyAppearance;
- (id)_makePopoverWindowIfNeeded;
- (void)_observeFullscreenChanges:(BOOL)arg1;
- (void)_popoverDidEnterFullscreen:(id)arg1;
- (void)_popoverDidExitFullscreen:(id)arg1;
- (id)_popoverFrame;
- (id)_popoverWindow;
- (BOOL)_popoverWindow:(id)arg1 fromConstraintsSetWindowFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)_popoverWindowLevel;
- (long long)_popoverWindowSubLevel;
- (id)_positioningView;
- (void)_prepareToShowRelativeToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (void)_queueClosingBlock:(id)arg1;
- (void)_removeAllForbiddenRects;
- (void)_repositionRelativeToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (BOOL)_requiresCorrectContentAppearance;
- (void)_resetImplicitWindowDetach;
- (void)_setBindingAdaptor:(id)arg1;
- (void)_setCloseReason:(long long)arg1;
- (void)_setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setContentView:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 canAnimate:(BOOL)arg3;
- (void)_setLegacyAppearance:(long long)arg1;
- (void)_setListenToViewGeometryInWindowDidChange:(BOOL)arg1;
- (void)_setPopoverWindow:(id)arg1;
- (void)_setRequiresCorrectContentAppearance:(BOOL)arg1;
- (BOOL)_shouldStillBeVisibleRelativeToView:(id)arg1;
- (BOOL)_shouldUseAquaAppearanceForContentView:(id)arg1;
- (void)_updateAnchorPoint;
- (void)_updateAnchorPointForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 reshape:(BOOL)arg2;
- (void)_updateContentViewAndSizeFromViewController;
- (void)_updatePopoverWindowLevels;
- (void)_updateWindow:(id)arg1 withContentViewController:(id)arg2;
- (void)_updateWindowProperties;
- (BOOL)_validatePopoverFirstResponder:(id)arg1;
- (BOOL)_validatePopoverWindowFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityParent;
- (unsigned long long)anchorEdge;
- (struct CGSize { double x1; double x2; })anchorSize;
- (BOOL)animates;
- (long long)appearance;
- (long long)behavior;
- (void)cancel:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)close;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentViewController;
- (id)customAppearance;
- (void)dealloc;
- (id)delegate;
- (void)detach;
- (id)detachableWindowForPopover:(id)arg1;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ofView:(id)arg2 anchorEdge:(unsigned long long)arg3 anchorPoint:(struct CGPoint { double x1; double x2; })arg4;
- (id)effectiveAppearance;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hidesDetachedWindowOnDeactivate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDetached;
- (BOOL)isShown;
- (void)performClose:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)popoverDidDetach:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (BOOL)popoverShouldClose:(id)arg1;
- (BOOL)popoverShouldDetach:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (unsigned long long)positioningOptions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })positioningRect;
- (id)positioningView;
- (void)positioningViewGeometryInWindowDidChange:(id)arg1;
- (void)setAnchorEdge:(unsigned long long)arg1;
- (void)setAnimates:(BOOL)arg1;
- (void)setAppearance:(long long)arg1;
- (void)setBehavior:(long long)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentViewController:(id)arg1;
- (void)setCustomAppearance:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHidesDetachedWindowOnDeactivate:(BOOL)arg1;
- (void)setPositioningOptions:(unsigned long long)arg1;
- (void)setPositioningRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPositioningView:(id)arg1;
- (void)setShouldHideAnchor:(BOOL)arg1;
- (void)setShown:(BOOL)arg1;
- (BOOL)shouldHideAnchor;
- (void)showFrom:(id)arg1;
- (void)showRelativeToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;

// NSPopover (NSMenuItemForceReactiveTarget)

- (void)_beginPredeepAnimationAgainstPoint:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (void)_beginPredeepAnimationRelativeToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (void)_cancelPredeepAnimation;
- (void)_completeDeepAnimation;
- (void)_doPredeepAnimationWithProgress:(double)arg1;
- (SEL)_reactiveAction;
- (void)_releaseDeepAnimation;
- (void)recognizerDidCancelAnimation:(id)arg1;
- (void)recognizerDidCompleteAnimation:(id)arg1;
- (void)recognizerDidDismissAnimation:(id)arg1;
- (void)recognizerDidUpdateAnimation:(id)arg1;
- (void)recognizerWillBeginAnimation:(id)arg1;

// NSPopover (NSPopoverAccessibility)

- (BOOL)_accessibilityShouldReportCancelAction;
- (BOOL)accessibilityAllowsOverriddenAttributesWhenIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAuditIssuesAttribute;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilitySectionsAttribute;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilitySupportsOverriddenAttributes;

// NSPopover (NSTransientUIElement)

- (void)_closeForKeyDownEvent:(id)arg1;
- (void)_closeForNonDragOrResizeClickWithEvent:(id)arg1;
- (void)_closeForSheetPresentingOnWindow:(id)arg1;
- (void)_closeForToolbarPresentingOnWindow:(id)arg1;
- (BOOL)_isAffectedByEventsInWindow:(id)arg1;
- (long long)_registeredTransientBehavior;
- (void)_setRegisteredTransientBehavior:(long long)arg1;
- (long long)_transientBehavior;

@end
