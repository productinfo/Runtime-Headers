/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSButton : NSControl <NSAccessibilityButton, NSUserInterfaceValidations>

@property (atomic, readwrite) BOOL allowsMixedState;
@property (atomic, readwrite, retain) NSImage *alternateImage;
@property (atomic, readwrite, copy) NSString *alternateTitle;
@property (atomic, readwrite) unsigned long long bezelStyle;
@property (getter=isBordered, atomic, readwrite) BOOL bordered;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) NSImage *image;
@property (atomic, readwrite) BOOL imageHugsTitle;
@property (atomic, readwrite) unsigned long long imagePosition;
@property (atomic, readwrite) unsigned long long imageScaling;
@property (atomic, readwrite, copy) NSString *keyEquivalent;
@property (atomic, readwrite) unsigned long long keyEquivalentModifierMask;
@property (atomic, readwrite) long long maxAcceleratorLevel;
@property (atomic, readwrite) BOOL showsBorderOnlyWhileMouseInside;
@property (getter=isSpringLoaded, atomic, readwrite) BOOL springLoaded;
@property (atomic, readwrite) long long state;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, copy) NSString *title;
@property (getter=isTransparent, atomic, readwrite) BOOL transparent;

+ (void)initialize;

- (BOOL)_canBecomeDefaultButton;
- (BOOL)_canDisableBaseVibrancy;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (id)_focusRingBleedRegion;
- (BOOL)_hasExtra10_11BordersInToolbars;
- (BOOL)_inToolbar;
- (BOOL)_keyEquivalentModifierMaskMatchesModifierFlags:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_opaqueRectForWindowMoveWhenInTitlebar;
- (id)_popupToSubstituteInInit;
- (id)_recursiveFindDefaultButtonCell;
- (void)_setSound:(id)arg1;
- (void)_setWindow:(id)arg1;
- (id)_sound;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)altModifySelection:(id)arg1;
- (SEL)alternateAction;
- (id)alternateImage;
- (id)alternateTitle;
- (BOOL)alwaysEnablesRadioButtonExclusivity;
- (id)attributedAlternateTitle;
- (id)attributedTitle;
- (double)baselineOffsetFromBottom;
- (BOOL)becomeFirstResponder;
- (void)getPeriodicDelay:(float*)arg1 interval:(float*)arg2;
- (void)highlight:(BOOL)arg1;
- (id)image;
- (BOOL)imageHugsTitle;
- (unsigned long long)imagePosition;
- (unsigned long long)imageScaling;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (BOOL)isBordered;
- (BOOL)isFlipped;
- (BOOL)isSpringLoaded;
- (BOOL)isTransparent;
- (id)keyEquivalent;
- (unsigned long long)keyEquivalentModifierMask;
- (long long)maxAcceleratorLevel;
- (long long)maxState;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)performMnemonic:(id)arg1;
- (double)periodicDelay;
- (double)periodicInterval;
- (BOOL)resignFirstResponder;
- (void)setAlternateAction:(SEL)arg1;
- (void)setAlternateImage:(id)arg1;
- (void)setAlternateTitle:(id)arg1;
- (void)setAlwaysEnablesRadioButtonExclusivity:(BOOL)arg1;
- (void)setAttributedAlternateTitle:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setBordered:(BOOL)arg1;
- (void)setButtonType:(unsigned long long)arg1;
- (void)setImage:(id)arg1;
- (void)setImageHugsTitle:(BOOL)arg1;
- (void)setImagePosition:(unsigned long long)arg1;
- (void)setImageScaling:(unsigned long long)arg1;
- (void)setKeyEquivalent:(id)arg1;
- (void)setKeyEquivalentModifierMask:(unsigned long long)arg1;
- (void)setMaxAcceleratorLevel:(long long)arg1;
- (void)setMaxState:(long long)arg1;
- (void)setPeriodicDelay:(double)arg1;
- (void)setPeriodicDelay:(float)arg1 interval:(float)arg2;
- (void)setPeriodicInterval:(double)arg1;
- (void)setSound:(id)arg1;
- (void)setSpringLoaded:(BOOL)arg1;
- (void)setState:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleWithMnemonic:(id)arg1;
- (void)setTransparent:(BOOL)arg1;
- (void)shiftModifySelection:(id)arg1;
- (id)sound;
- (void)springLoadingActivated:(BOOL)arg1 draggingInfo:(id)arg2;
- (unsigned long long)springLoadingEntered:(id)arg1;
- (void)springLoadingHighlightChanged:(id)arg1;
- (void)startSpeaking:(id)arg1;
- (long long)state;
- (void)stopSpeaking:(id)arg1;
- (id)title;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)viewDidMoveToWindow;

// NSButton (NSButtonBezelStyles)

- (unsigned long long)bezelStyle;
- (void)setBezelStyle:(unsigned long long)arg1;

// NSButton (NSButtonBorder)

- (void)_clearMouseTrackingForCell:(id)arg1;
- (void)_setMouseTrackingForCell:(id)arg1;
- (void)setShowsBorderOnlyWhileMouseInside:(BOOL)arg1;
- (BOOL)showsBorderOnlyWhileMouseInside;

// NSButton (NSButtonConvenience)

+ (id)_buttonWithTitle:(id)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)buttonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)buttonWithTitle:(id)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)buttonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)checkboxWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)radioButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;

// NSButton (NSButtonMixedState)

- (BOOL)allowsMixedState;
- (void)setAllowsMixedState:(BOOL)arg1;
- (void)setNextState;

// NSButton (NSIBButtonIntegration)

- (id)ns_widgetType;

@end
