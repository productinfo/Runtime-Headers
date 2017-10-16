/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSTextViewBackingLayer : _NSViewBackingLayer {
    NSTextLayer * _textLayer;
    BOOL  _wantsTextLayer;
}

@property (atomic, readwrite) BOOL wantsTextLayer;

- (void)_updateTextLayer;
- (void)display;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setWantsTextLayer:(BOOL)arg1;
- (BOOL)wantsTextLayer;

@end