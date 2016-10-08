/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTextField : NSControl <NSAccessibilityNavigableStaticText, NSUserInterfaceValidations> {
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedIntrinsicContentSize;
    NSNumber * _cachedLayoutEngineWidth;
    id  _delegate;
    SEL  _errorAction;
    BOOL  _finishedFirstConstraintsPass;
    NSNumber * _layoutEngineWidth;
    double  _maxLayoutWidth;
    long long  _maximumNumberOfLines;
    unsigned long long  _textAlignmentPolicy;
}

@property (atomic, readonly) BOOL acceptsFirstResponder;
@property (atomic, readwrite) BOOL allowsDefaultTighteningForTruncation;
@property (atomic, readwrite, copy) NSColor *backgroundColor;
@property (atomic, readwrite) unsigned long long bezelStyle;
@property (getter=isBezeled, atomic, readwrite) BOOL bezeled;
@property (getter=isBordered, atomic, readwrite) BOOL bordered;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) <NSTextFieldDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite) BOOL drawsBackground;
@property (getter=isEditable, atomic, readwrite) BOOL editable;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) long long maximumNumberOfLines;
@property (atomic, readwrite, copy) NSAttributedString *placeholderAttributedString;
@property (atomic, readwrite, copy) NSString *placeholderString;
@property (atomic, readwrite) double preferredMaxLayoutWidth;
@property (getter=isSelectable, atomic, readwrite) BOOL selectable;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, copy) NSColor *textColor;

+ (id)_fieldsContainingString:(id)arg1;
+ (void)initialize;
+ (BOOL)requiresConstraintBasedLayout;

- (struct __NSBaselineOffsets { double x1; double x2; })_baselineOffsets;
- (void)_commonTextFieldInit;
- (void)_deriveLineBreakModeFromAttributedString:(id)arg1;
- (BOOL)_hasExtra10_11BordersInToolbars;
- (BOOL)_hasLayoutEngine;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (BOOL)_performMultiPassIntrinsicSize;
- (BOOL)_shouldPrintByCallingDrawRect;
- (void)_updateLayoutDependentMetricsIfNeeded;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrameForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (long long)accessibilityLineForIndex:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityRangeForLine:(long long)arg1;
- (id)accessibilityStringForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)accessibilityValue;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (BOOL)allowsDefaultTighteningForTruncation;
- (BOOL)allowsEditingTextAttributes;
- (id)backgroundColor;
- (double)baselineOffsetFromBottom;
- (BOOL)becomeFirstResponder;
- (unsigned long long)bezelStyle;
- (void)dealloc;
- (id)delegate;
- (BOOL)drawsBackground;
- (void)encodeWithCoder:(id)arg1;
- (double)firstBaselineOffsetFromTop;
- (BOOL)importsGraphics;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (BOOL)isBezeled;
- (BOOL)isBordered;
- (BOOL)isEditable;
- (BOOL)isFlipped;
- (BOOL)isSelectable;
- (long long)maximumNumberOfLines;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (id)nextText;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (id)placeholderAttributedString;
- (id)placeholderString;
- (double)preferredMaxLayoutWidth;
- (id)previousText;
- (void)selectText:(id)arg1;
- (void)setAllowsDefaultTighteningForTruncation:(BOOL)arg1;
- (void)setAllowsEditingTextAttributes:(BOOL)arg1;
- (void)setAttributedStringValue:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBezelStyle:(unsigned long long)arg1;
- (void)setBezeled:(BOOL)arg1;
- (void)setBordered:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImportsGraphics:(BOOL)arg1;
- (void)setMaximumNumberOfLines:(long long)arg1;
- (void)setNextText:(id)arg1;
- (void)setPlaceholderAttributedString:(id)arg1;
- (void)setPlaceholderString:(id)arg1;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)setPreviousText:(id)arg1;
- (void)setSelectable:(BOOL)arg1;
- (void)setStyleEffectConfiguration:(id)arg1;
- (void)setTextAlignmentPolicy:(unsigned long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTitleWithMnemonic:(id)arg1;
- (BOOL)shouldBeTreatedAsInkEvent:(id)arg1;
- (BOOL)shouldSetFontSmoothingBackgroundColor;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startSpeaking:(id)arg1;
- (void)stopSpeaking:(id)arg1;
- (id)styleEffectConfiguration;
- (unsigned long long)textAlignmentPolicy;
- (id)textColor;
- (void)textDidBeginEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)textShouldBeginEditing:(id)arg1;
- (BOOL)textShouldEndEditing:(id)arg1;
- (id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 indexOfSelectedItem:(long long*)arg4;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)textView:(id)arg1 prepareMenu:(id)arg2 forCharacterAtIndex:(unsigned long long)arg3 withEvent:(id)arg4;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)updateConstraints;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;

// NSTextField (NSIBTextFieldIntegration)

- (id)ns_widgetType;

// NSTextField (NSTextFieldConvenience)

+ (id)_newBaseLabelWithoutTitle;
+ (id)editableTextFieldWithString:(id)arg1;
+ (id)labelWithAttributedString:(id)arg1;
+ (id)labelWithString:(id)arg1;
+ (id)textFieldWithAttributedString:(id)arg1;
+ (id)textFieldWithString:(id)arg1;
+ (id)wrappingLabelWithString:(id)arg1;
+ (id)wrappingTextFieldWithString:(id)arg1 preferredMaxLayoutWidth:(double)arg2;

// NSTextField (NSTextFieldObsolete)

- (SEL)errorAction;
- (void)setErrorAction:(SEL)arg1;

@end
