/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSGrabDimple : NSView {
    id  _doubleClickHandler;
    id  _dragHandler;
}

@property (atomic, readwrite, copy) id doubleClickHandler;
@property (atomic, readwrite, copy) id dragHandler;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)doubleClickHandler;
- (id)dragHandler;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (BOOL)isOpaque;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)mouseDragged:(id)arg1;
- (void)resetCursorRects;
- (void)setDoubleClickHandler:(id)arg1;
- (void)setDragHandler:(id)arg1;

@end