/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSWrapperCellView : NSView {
    NSCell * _cell;
    BOOL  _groupRowStyle;
}

@property (nonatomic, readwrite, retain) NSCell *cell;
@property (getter=isGroupRowStyle, nonatomic, readwrite) BOOL groupRowStyle;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (Class)cellClass;

- (Class)_animatorClass;
- (id)_enclosingTableView;
- (id)_focusInto:(id)arg1 withClip:(BOOL)arg2;
- (void)_setTrackingAreasDirty:(int)arg1;
- (int)_trackingAreasDirty;
- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (BOOL)allowsVibrancy;
- (id)cell;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isGroupRowStyle;
- (BOOL)isOpaque;
- (void)mouseDown:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setCell:(id)arg1;
- (void)setGroupRowStyle:(BOOL)arg1;
- (void)setObjectValue:(id)arg1;
- (BOOL)shouldSetFontSmoothingBackgroundColor;
- (BOOL)wantsDefaultClipping;

@end