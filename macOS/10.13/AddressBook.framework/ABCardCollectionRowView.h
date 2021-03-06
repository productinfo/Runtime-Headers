/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCardCollectionRowView : NSView <ABCardCollectionRowView, ABPopUpButtonDelegate, CNCollectionViewTouchBarDelegate, NSTextFieldDelegate> {
    NSView * _accessoryView;
    NSArray * _actionGlyphButtons;
    NSButton * _addValueButton;
    ABCardCollectionView * _cardCollectionView;
    ABCollectionViewItem * _collectionItem;
    CNCollectionViewTouchBar * _collectionViewTouchBar;
    NSArray * _constraints;
    BOOL  _cursorInTrackingArea;
    <CNCancelable> * _firstResponderChangedToken;
    ABOverlayView * _focusRingView;
    ABImmediateActionGestureAdapter * _immediateActionGestureAdapter;
    NSTrackingArea * _labelTrackingArea;
    NSView * _labelView;
    BOOL  _loaded;
    NSButton * _privacyCheckbox;
    NSButton * _removeValueButton;
    NSTrackingArea * _rowTrackingArea;
    ABThrottledTrackingAreaMonitor * _rowTrackingAreaMonitor;
    BOOL  _shouldHideAddButton;
    BOOL  _shouldHideMinusButton;
    BOOL  _shouldHideSuggestedButton;
    BOOL  _shouldHighlightLabel;
    NSStackView * _stackView;
    ABCardViewStyleProvider * _styleProvider;
    NSButton * _suggestedButton;
    BOOL  _textHadContentBeforeEditing;
    NSTrackingArea * _valueTrackingArea;
    NSView * _valueView;
}

@property (nonatomic, readwrite, retain) NSView *accessoryView;
@property (atomic, readwrite, retain) NSArray *actionGlyphButtons;
@property (atomic, readwrite, retain) NSButton *addValueButton;
@property (atomic, readwrite) ABCardCollectionView *cardCollectionView;
@property (atomic, readwrite) ABCollectionViewItem *collectionItem;
@property (atomic, readwrite, retain) CNCollectionViewTouchBar *collectionViewTouchBar;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite, retain) ABOverlayView *focusRingView;
@property (getter=isFocused, atomic, readonly) BOOL focused;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) NSView *labelView;
@property (getter=isLoaded, atomic, readwrite) BOOL loaded;
@property (atomic, readwrite, retain) NSPopUpButton *messagingServiceChooserPopup;
@property (atomic, readwrite, retain) NSView *messagingServiceLabel;
@property (atomic, readwrite, retain) NSButton *privacyCheckbox;
@property (atomic, readwrite, retain) NSButton *removeValueButton;
@property (atomic, readwrite) BOOL shouldHideAddButton;
@property (atomic, readwrite) BOOL shouldHideMinusButton;
@property (atomic, readwrite) BOOL shouldHideSuggestedButton;
@property (atomic, readwrite) BOOL shouldHighlightLabel;
@property (atomic, readwrite, retain) NSStackView *stackView;
@property (nonatomic, readwrite, retain) ABCardViewStyleProvider *styleProvider;
@property (atomic, readwrite, retain) NSButton *suggestedButton;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite) BOOL valueIsPrivate;
@property (atomic, readwrite, retain) NSView *valueView;

- (void).cxx_destruct;
- (BOOL)_showTouchBar;
- (BOOL)accessibilityPerformPress;
- (id)accessoryView;
- (id)actionGlyphButtons;
- (void)addField:(id)arg1;
- (id)addValueButton;
- (BOOL)allowsVibrancy;
- (void)applyDisplayAttributes;
- (void)applyLabelTextColor:(id)arg1;
- (void)applyValueTextColor:(id)arg1;
- (void)attachOverlayViewToFocusedView;
- (void)beginEditing:(id)arg1;
- (id)cardCollectionView;
- (id)cardViewProperty;
- (void)clearValue;
- (id)collectionItem;
- (id)collectionViewTouchBar;
- (BOOL)commitEditing;
- (void)configureClickToEdit;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRegionForView:(id)arg1 margin:(double)arg2;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)dealloc;
- (void)didChangeLabelForCollection:(id)arg1;
- (void)didInsertIntoCollectionView:(id)arg1;
- (void)didRemoveFromCollection:(id)arg1;
- (void)drawLabelHighlightRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawValueHighlightRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 labelRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)editWithFocus:(id)arg1;
- (void)focus;
- (id)focusRingView;
- (void)generateConstraints;
- (void)glyphButtonPressed:(id)arg1;
- (BOOL)hasValue;
- (void)hideGlyphButtonsIfNeeded;
- (BOOL)hideRemoveButton;
- (void)highlightSearchTerms:(id)arg1;
- (id)init;
- (void)invalidateClickToEdit;
- (BOOL)isEditView;
- (BOOL)isFocused;
- (BOOL)isLoaded;
- (BOOL)isLoadedAsynchronously;
- (BOOL)isVibrantDarkAppearance;
- (id)labelContextualMenu;
- (id)labelFontNameKey;
- (id)labelFontSizeKey;
- (void)labelFrameDidChange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelHighlightRect;
- (id)labelMenuItems;
- (id)labelMouseOverLabelTextColor;
- (id)labelMouseOverValueHighlightColor;
- (id)labelMouseOverValueTextColor;
- (id)labelTextColor;
- (id)labelTextColorKey;
- (id)labelTextField;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelTrackingRect;
- (id)labelView;
- (id)makeTouchBar;
- (id)messagingServiceChooserPopup;
- (id)messagingServiceLabel;
- (void)mouseDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseEnteredLabelTrackingArea;
- (void)mouseEnteredValueTrackingArea;
- (void)mouseExited:(id)arg1;
- (void)mouseExitedLabelTrackingArea;
- (void)mouseExitedValueTrackingArea;
- (void)ownFrameDidChange:(id)arg1;
- (void)performCollectionAction:(id)arg1 withSender:(id)arg2 item:(id)arg3;
- (void)popUpButtonWillResignFirstResponder:(id)arg1;
- (void)prepareForDrawingWithoutRolloverHilight;
- (id)privacyCheckbox;
- (void)privacyCheckboxClicked:(id)arg1;
- (void)processControlTextDidChange:(id)arg1;
- (void)processControlTextDidEndEditing:(id)arg1;
- (id)property;
- (void)removeFromCollection:(id)arg1;
- (id)removeValueButton;
- (void)resetFocusRingView;
- (void)resetLabelTrackingArea;
- (void)resetRowTrackingArea;
- (void)resetValueTrackingArea;
- (void)reviewSuggestion:(id)arg1;
- (id)scope;
- (id)selectedLabel;
- (void)setAccessoryView:(id)arg1;
- (void)setActionGlyphButtons:(id)arg1;
- (void)setAddValueButton:(id)arg1;
- (void)setCardCollectionView:(id)arg1;
- (void)setCollectionItem:(id)arg1;
- (void)setCollectionViewTouchBar:(id)arg1;
- (void)setFocusRingView:(id)arg1;
- (void)setGlyphsButtonsVisible:(BOOL)arg1;
- (void)setLabelView:(id)arg1;
- (void)setLoaded:(BOOL)arg1;
- (void)setMessagingServiceChooserPopup:(id)arg1;
- (void)setMessagingServiceLabel:(id)arg1;
- (void)setPrivacyCheckbox:(id)arg1;
- (void)setPrivateMeEnabled:(BOOL)arg1;
- (void)setRemoveValueButton:(id)arg1;
- (void)setShouldHideAddButton:(BOOL)arg1;
- (void)setShouldHideMinusButton:(BOOL)arg1;
- (void)setShouldHideSuggestedButton:(BOOL)arg1;
- (void)setShouldHighlightLabel:(BOOL)arg1;
- (void)setStackView:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setSuggestedButton:(id)arg1;
- (void)setValueIsPrivate:(BOOL)arg1;
- (void)setValueSelectable:(BOOL)arg1;
- (void)setValueView:(id)arg1;
- (void)setupLabelTrackingArea;
- (void)setupRowTrackingArea;
- (void)setupRowTrackingAreaMonitor;
- (void)setupTrackingAreas;
- (void)setupValueTrackingArea;
- (BOOL)shouldDrawRolloverHilight;
- (BOOL)shouldHideAddButton;
- (BOOL)shouldHideMinusButton;
- (BOOL)shouldHideSuggestedButton;
- (BOOL)shouldHighlightLabel;
- (void)showGlyphsButtonsIfNeeded;
- (void)showLabelPopupMenuWithEvent:(id)arg1;
- (id)stackView;
- (id)styleProvider;
- (id)suggestedButton;
- (id)suggestedColor;
- (void)tearDownLabelTrackingArea;
- (void)tearDownRowTrackingArea;
- (void)tearDownTrackingAreas;
- (void)tearDownValueTrackingArea;
- (void)textFieldWillResignFirstResponder:(id)arg1;
- (void)updateAddButton;
- (void)updateFonts;
- (id)updateKeyViewLoop;
- (void)updateLabelFont;
- (void)updateMultiValueControls;
- (void)updateRemoveButton;
- (void)updateTextColors;
- (void)updateValueFont;
- (void)updateValueFontWithFont:(id)arg1;
- (id)valueFontNameKey;
- (id)valueFontSizeKey;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })valueHighlightRect;
- (BOOL)valueIsPrivate;
- (id)valueMouseoverValueTextColorKey;
- (id)valueTextColor;
- (id)valueTextColorKey;
- (id)valueTextField;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })valueTrackingRect;
- (id)valueView;
- (void)valueViewFrameDidChange:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;

@end
