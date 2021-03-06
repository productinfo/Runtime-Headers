/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
 */

@interface SCNUIVector4TextField : SCNUIBindableView {
    NSTextField * tw;
    NSTextField * tx;
    NSTextField * ty;
    NSTextField * tz;
}

@property (nonatomic, readwrite) struct SCNVector4 { double x1; double x2; double x3; double x4; } vector4;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVector4:(struct SCNVector4 { double x1; double x2; double x3; double x4; })arg1;
- (id)value;
- (struct SCNVector4 { double x1; double x2; double x3; double x4; })vector4;

@end
