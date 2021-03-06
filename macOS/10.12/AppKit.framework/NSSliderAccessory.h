/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSSliderAccessory : NSObject <NSAccessibility, NSAccessibilityElement, NSCoding> {
    NSSliderAccessoryBehavior * _behavior;
    id  _content;
    unsigned int  _enabled;
    NSSlider * _enclosingSlider;
    unsigned int  _reserved;
}

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
@property (atomic, readwrite, copy) NSSliderAccessoryBehavior *behavior;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (getter=isEnabled, atomic, readwrite) BOOL enabled;
@property (atomic, readwrite) NSSlider *enclosingSlider;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)accessoryWithImage:(id)arg1;

- (id)_accessibilityLabel;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityAllowedValues;
- (id)accessibilityApplicationFocusedUIElement;
- (id)accessibilityAttributedStringForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)accessibilityAuditIssues;
- (id)accessibilityCancelButton;
- (id)accessibilityCellForColumn:(long long)arg1 row:(long long)arg2;
- (id)accessibilityChildren;
- (id)accessibilityChildrenInNavigationOrder;
- (id)accessibilityClearButton;
- (id)accessibilityCloseButton;
- (long long)accessibilityColumnCount;
- (id)accessibilityColumnHeaderUIElements;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityColumnIndexRange;
- (id)accessibilityColumnTitles;
- (id)accessibilityColumns;
- (id)accessibilityContentSiblingAbove;
- (id)accessibilityContentSiblingBelow;
- (id)accessibilityContents;
- (id)accessibilityCriticalValue;
- (id)accessibilityCustomChoosers;
- (id)accessibilityDecrementButton;
- (id)accessibilityDefaultButton;
- (id)accessibilityDisclosedByRow;
- (id)accessibilityDisclosedRows;
- (long long)accessibilityDisclosureLevel;
- (id)accessibilityDocument;
- (id)accessibilityExtrasMenuBar;
- (id)accessibilityFilename;
- (id)accessibilityFocusedWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrameForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrameInParentSpace;
- (id)accessibilityFullScreenButton;
- (id)accessibilityGrowArea;
- (id)accessibilityHandles;
- (id)accessibilityHeader;
- (id)accessibilityHeaderGroup;
- (id)accessibilityHelp;
- (id)accessibilityHorizontalScrollBar;
- (id)accessibilityHorizontalUnitDescription;
- (long long)accessibilityHorizontalUnits;
- (id)accessibilityIdentifier;
- (id)accessibilityIncrementButton;
- (long long)accessibilityIndex;
- (long long)accessibilityInsertionPointLineNumber;
- (id)accessibilityLabel;
- (id)accessibilityLabelUIElements;
- (float)accessibilityLabelValue;
- (struct CGPoint { double x1; double x2; })accessibilityLayoutPointForScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })accessibilityLayoutSizeForScreenSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)accessibilityLineForIndex:(long long)arg1;
- (id)accessibilityLinkedUIElements;
- (id)accessibilityMainWindow;
- (id)accessibilityMarkerGroupUIElement;
- (id)accessibilityMarkerTypeDescription;
- (id)accessibilityMarkerUIElements;
- (id)accessibilityMarkerValues;
- (id)accessibilityMaxValue;
- (id)accessibilityMenuBar;
- (id)accessibilityMinValue;
- (id)accessibilityMinimizeButton;
- (id)accessibilityNextContentSibling;
- (id)accessibilityNextContents;
- (long long)accessibilityNumberOfCharacters;
- (long long)accessibilityOrientation;
- (id)accessibilityOverflowButton;
- (id)accessibilityParent;
- (BOOL)accessibilityPerformCancel;
- (BOOL)accessibilityPerformConfirm;
- (BOOL)accessibilityPerformDecrement;
- (BOOL)accessibilityPerformDelete;
- (BOOL)accessibilityPerformIncrement;
- (BOOL)accessibilityPerformPick;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityPerformRaise;
- (BOOL)accessibilityPerformShowAlternateUI;
- (BOOL)accessibilityPerformShowDefaultUI;
- (BOOL)accessibilityPerformShowMenu;
- (id)accessibilityPlaceholderValue;
- (id)accessibilityPreviousContentSibling;
- (id)accessibilityPreviousContents;
- (id)accessibilityProxy;
- (id)accessibilityRTFForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityRangeForIndex:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityRangeForLine:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityRangeForPosition:(struct CGPoint { double x1; double x2; })arg1;
- (id)accessibilityResultsForSearchPredicate:(id)arg1;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (long long)accessibilityRowCount;
- (id)accessibilityRowHeaderUIElements;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityRowIndexRange;
- (id)accessibilityRows;
- (long long)accessibilityRulerMarkerType;
- (struct CGPoint { double x1; double x2; })accessibilityScreenPointForLayoutPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })accessibilityScreenSizeForLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (id)accessibilitySearchButton;
- (id)accessibilitySearchMenu;
- (id)accessibilitySections;
- (id)accessibilitySelectedCells;
- (id)accessibilitySelectedChildren;
- (id)accessibilitySelectedColumns;
- (id)accessibilitySelectedRows;
- (id)accessibilitySelectedText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilitySelectedTextRange;
- (id)accessibilitySelectedTextRanges;
- (id)accessibilityServesAsTitleForUIElements;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilitySharedCharacterRange;
- (id)accessibilitySharedFocusElements;
- (id)accessibilitySharedTextUIElements;
- (id)accessibilityShownMenu;
- (long long)accessibilitySortDirection;
- (id)accessibilitySplitters;
- (id)accessibilityStringForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityStyleRangeForIndex:(long long)arg1;
- (id)accessibilitySubrole;
- (id)accessibilityTabs;
- (id)accessibilityTitle;
- (id)accessibilityTitleUIElement;
- (id)accessibilityToolbarButton;
- (id)accessibilityTopLevelUIElement;
- (id)accessibilityURL;
- (id)accessibilityUnitDescription;
- (long long)accessibilityUnits;
- (id)accessibilityValue;
- (id)accessibilityValueDescription;
- (id)accessibilityVerticalScrollBar;
- (id)accessibilityVerticalUnitDescription;
- (long long)accessibilityVerticalUnits;
- (id)accessibilityVisibleCells;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityVisibleCharacterRange;
- (id)accessibilityVisibleChildren;
- (id)accessibilityVisibleColumns;
- (id)accessibilityVisibleRows;
- (id)accessibilityWarningValue;
- (id)accessibilityWindow;
- (id)accessibilityWindows;
- (id)accessibilityZoomButton;
- (id)behavior;
- (void)dealloc;
- (id)enclosingSlider;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;
- (BOOL)isAccessibilityAlternateUIVisible;
- (BOOL)isAccessibilityDisclosed;
- (BOOL)isAccessibilityEdited;
- (BOOL)isAccessibilityElement;
- (BOOL)isAccessibilityEnabled;
- (BOOL)isAccessibilityEnhancedUserInterface;
- (BOOL)isAccessibilityExpanded;
- (BOOL)isAccessibilityFocused;
- (BOOL)isAccessibilityFrontmost;
- (BOOL)isAccessibilityHidden;
- (BOOL)isAccessibilityMain;
- (BOOL)isAccessibilityMimicNativeView;
- (BOOL)isAccessibilityMinimized;
- (BOOL)isAccessibilityModal;
- (BOOL)isAccessibilityOrderedByRow;
- (BOOL)isAccessibilityProtectedContent;
- (BOOL)isAccessibilityRequired;
- (BOOL)isAccessibilitySelected;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)arg1;
- (BOOL)isEnabled;
- (void)setAccessibilityActivationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAccessibilityAllowedValues:(id)arg1;
- (void)setAccessibilityAlternateUIVisible:(BOOL)arg1;
- (void)setAccessibilityApplicationFocusedUIElement:(id)arg1;
- (void)setAccessibilityAuditIssues:(id)arg1;
- (void)setAccessibilityCancelButton:(id)arg1;
- (void)setAccessibilityChildren:(id)arg1;
- (void)setAccessibilityChildrenInNavigationOrder:(id)arg1;
- (void)setAccessibilityClearButton:(id)arg1;
- (void)setAccessibilityCloseButton:(id)arg1;
- (void)setAccessibilityColumnCount:(long long)arg1;
- (void)setAccessibilityColumnHeaderUIElements:(id)arg1;
- (void)setAccessibilityColumnIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAccessibilityColumnTitles:(id)arg1;
- (void)setAccessibilityColumns:(id)arg1;
- (void)setAccessibilityContentSiblingAbove:(id)arg1;
- (void)setAccessibilityContentSiblingBelow:(id)arg1;
- (void)setAccessibilityContents:(id)arg1;
- (void)setAccessibilityCriticalValue:(id)arg1;
- (void)setAccessibilityCustomChoosers:(id)arg1;
- (void)setAccessibilityDecrementButton:(id)arg1;
- (void)setAccessibilityDefaultButton:(id)arg1;
- (void)setAccessibilityDisclosed:(BOOL)arg1;
- (void)setAccessibilityDisclosedByRow:(id)arg1;
- (void)setAccessibilityDisclosedRows:(id)arg1;
- (void)setAccessibilityDisclosureLevel:(long long)arg1;
- (void)setAccessibilityDocument:(id)arg1;
- (void)setAccessibilityEdited:(BOOL)arg1;
- (void)setAccessibilityElement:(BOOL)arg1;
- (void)setAccessibilityEnabled:(BOOL)arg1;
- (void)setAccessibilityEnhancedUserInterface:(BOOL)arg1;
- (void)setAccessibilityExpanded:(BOOL)arg1;
- (void)setAccessibilityExtrasMenuBar:(id)arg1;
- (void)setAccessibilityFilename:(id)arg1;
- (void)setAccessibilityFocused:(BOOL)arg1;
- (void)setAccessibilityFocusedWindow:(id)arg1;
- (void)setAccessibilityFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityFrameInParentSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityFrontmost:(BOOL)arg1;
- (void)setAccessibilityFullScreenButton:(id)arg1;
- (void)setAccessibilityGrowArea:(id)arg1;
- (void)setAccessibilityHandles:(id)arg1;
- (void)setAccessibilityHeader:(id)arg1;
- (void)setAccessibilityHeaderGroup:(id)arg1;
- (void)setAccessibilityHelp:(id)arg1;
- (void)setAccessibilityHidden:(BOOL)arg1;
- (void)setAccessibilityHorizontalScrollBar:(id)arg1;
- (void)setAccessibilityHorizontalUnitDescription:(id)arg1;
- (void)setAccessibilityHorizontalUnits:(long long)arg1;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAccessibilityIncrementButton:(id)arg1;
- (void)setAccessibilityIndex:(long long)arg1;
- (void)setAccessibilityInsertionPointLineNumber:(long long)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityLabelUIElements:(id)arg1;
- (void)setAccessibilityLabelValue:(float)arg1;
- (void)setAccessibilityLinkedUIElements:(id)arg1;
- (void)setAccessibilityMain:(BOOL)arg1;
- (void)setAccessibilityMainWindow:(id)arg1;
- (void)setAccessibilityMarkerGroupUIElement:(id)arg1;
- (void)setAccessibilityMarkerTypeDescription:(id)arg1;
- (void)setAccessibilityMarkerUIElements:(id)arg1;
- (void)setAccessibilityMarkerValues:(id)arg1;
- (void)setAccessibilityMaxValue:(id)arg1;
- (void)setAccessibilityMenuBar:(id)arg1;
- (void)setAccessibilityMimicNativeView:(BOOL)arg1;
- (void)setAccessibilityMinValue:(id)arg1;
- (void)setAccessibilityMinimizeButton:(id)arg1;
- (void)setAccessibilityMinimized:(BOOL)arg1;
- (void)setAccessibilityModal:(BOOL)arg1;
- (void)setAccessibilityNextContents:(id)arg1;
- (void)setAccessibilityNumberOfCharacters:(long long)arg1;
- (void)setAccessibilityOrderedByRow:(BOOL)arg1;
- (void)setAccessibilityOrientation:(long long)arg1;
- (void)setAccessibilityOverflowButton:(id)arg1;
- (void)setAccessibilityParent:(id)arg1;
- (void)setAccessibilityPlaceholderValue:(id)arg1;
- (void)setAccessibilityPreviousContents:(id)arg1;
- (void)setAccessibilityProtectedContent:(BOOL)arg1;
- (void)setAccessibilityProxy:(id)arg1;
- (void)setAccessibilityRequired:(BOOL)arg1;
- (void)setAccessibilityRole:(id)arg1;
- (void)setAccessibilityRoleDescription:(id)arg1;
- (void)setAccessibilityRowCount:(long long)arg1;
- (void)setAccessibilityRowHeaderUIElements:(id)arg1;
- (void)setAccessibilityRowIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAccessibilityRows:(id)arg1;
- (void)setAccessibilityRulerMarkerType:(long long)arg1;
- (void)setAccessibilitySearchButton:(id)arg1;
- (void)setAccessibilitySearchMenu:(id)arg1;
- (void)setAccessibilitySections:(id)arg1;
- (void)setAccessibilitySelected:(BOOL)arg1;
- (void)setAccessibilitySelectedCells:(id)arg1;
- (void)setAccessibilitySelectedChildren:(id)arg1;
- (void)setAccessibilitySelectedColumns:(id)arg1;
- (void)setAccessibilitySelectedRows:(id)arg1;
- (void)setAccessibilitySelectedText:(id)arg1;
- (void)setAccessibilitySelectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAccessibilitySelectedTextRanges:(id)arg1;
- (void)setAccessibilityServesAsTitleForUIElements:(id)arg1;
- (void)setAccessibilitySharedCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAccessibilitySharedFocusElements:(id)arg1;
- (void)setAccessibilitySharedTextUIElements:(id)arg1;
- (void)setAccessibilityShownMenu:(id)arg1;
- (void)setAccessibilitySortDirection:(long long)arg1;
- (void)setAccessibilitySplitters:(id)arg1;
- (void)setAccessibilitySubrole:(id)arg1;
- (void)setAccessibilityTabs:(id)arg1;
- (void)setAccessibilityTitle:(id)arg1;
- (void)setAccessibilityTitleUIElement:(id)arg1;
- (void)setAccessibilityToolbarButton:(id)arg1;
- (void)setAccessibilityTopLevelUIElement:(id)arg1;
- (void)setAccessibilityURL:(id)arg1;
- (void)setAccessibilityUnitDescription:(id)arg1;
- (void)setAccessibilityUnits:(long long)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAccessibilityValueDescription:(id)arg1;
- (void)setAccessibilityVerticalScrollBar:(id)arg1;
- (void)setAccessibilityVerticalUnitDescription:(id)arg1;
- (void)setAccessibilityVerticalUnits:(long long)arg1;
- (void)setAccessibilityVisibleCells:(id)arg1;
- (void)setAccessibilityVisibleCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAccessibilityVisibleChildren:(id)arg1;
- (void)setAccessibilityVisibleColumns:(id)arg1;
- (void)setAccessibilityVisibleRows:(id)arg1;
- (void)setAccessibilityWarningValue:(id)arg1;
- (void)setAccessibilityWindow:(id)arg1;
- (void)setAccessibilityWindows:(id)arg1;
- (void)setAccessibilityZoomButton:(id)arg1;
- (void)setBehavior:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setEnclosingSlider:(id)arg1;
- (void)setNextContentSibling:(id)arg1;
- (void)setPreviousContentSibling:(id)arg1;

// NSSliderAccessory (NSInternal)

- (id)_image;

@end
