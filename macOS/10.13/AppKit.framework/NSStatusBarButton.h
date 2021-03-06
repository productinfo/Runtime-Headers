/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSStatusBarButton : NSButton {
    id  _statusBarButtonPrivate;
}

@property (atomic, readwrite) BOOL appearsDisabled;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (void)initialize;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (BOOL)appearsDisabled;
- (SEL)doubleAction;
- (BOOL)highlightMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inStatusBar:(id)arg2;
- (BOOL)looksDisabled;
- (void)rightMouseDown:(id)arg1;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })selectionInset;
- (void)setAppearsDisabled:(BOOL)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setDoubleAction:(SEL)arg1;
- (void)setHighlightMode:(BOOL)arg1;
- (void)setLooksDisabled:(BOOL)arg1;
- (void)setSelectionInset:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setStatusMenu:(id)arg1;
- (id)statusMenu;

@end
