/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSColorPickerUserView : NSView {
    NSImage * _imageForLockFocusUse;
    id  colorPanel;
    id  controllingPicker;
    NSImage * currImage;
    struct CGPoint { 
        double x; 
        double y; 
    }  currentPt;
}

- (void)_clearImageForLockFocusUse;
- (void)_createImageForLockFocusUseIfNecessary;
- (id)_getColorFromImageAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)_isShowingKeyboardFocus;
- (BOOL)_pointInPicker:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)_resizeImage;
- (void)_windowChangedKeyState;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)color;
- (id)colorFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)moveCurrentPointInDirection:(struct CGPoint { double x1; double x2; })arg1;
- (void)moveDown:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveUp:(id)arg1;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)performDragOperation:(id)arg1;
- (void)registerForFilenameDragTypes;
- (BOOL)resignFirstResponder;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setKeyboardFocusRingNeedsDisplayIfNeededInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)storeColorPanel:(id)arg1;

@end
