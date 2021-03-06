/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKSingleImageEffect : NSView {
    IKImageEffectsView * _effectsView;
    NSTextField * _label;
    CALayer * _mylayer;
}

- (void)dealloc;
- (void)finalize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)mouseDown:(id)arg1;
- (void)setImage:(struct CGImage { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setupWithOptions:(id)arg1;
- (void)viewWillBecomeInActive;

@end
