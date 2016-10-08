/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTitlebarView : NSVisualEffectView {
    NSThemeFrame * _associatedThemeFrame;
    NSTrackingArea * _buttonGroupTrackingArea;
    BOOL  _transparent;
}

@property (atomic, readwrite) NSThemeFrame *associatedThemeFrame;
@property (atomic, readwrite) BOOL transparent;

- (void)_removeTrackingAreaIfNeeded;
- (BOOL)_shouldAddBorderLayer;
- (BOOL)_shouldBeTreatedAsInkEventInInactiveWindow:(id)arg1;
- (id)_titleTextFieldView;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)associatedThemeFrame;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)menuForEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)rightMouseDown:(id)arg1;
- (void)setAssociatedThemeFrame:(id)arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTransparent:(BOOL)arg1;
- (BOOL)shouldSetFontSmoothingBackgroundColor;
- (id)titleFont;
- (BOOL)transparent;
- (void)updateTrackingAreas;

// NSTitlebarView (NSTitlebarViewAccessibility)

- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsIgnored;

@end
