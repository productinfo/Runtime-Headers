/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSSliderCellLegacyMetrics : NSObject <NSSliderCellMetricsStrategy> {
    struct { 
        unsigned long long sliderType; 
        unsigned long long controlSize; 
        BOOL isVertical; 
        long long layoutDirection; 
        long long tickMarkPosition; 
        double normalizedValue; 
        BOOL trackTintedWithValue; 
        BOOL hasMinValueIcon; 
        BOOL hasMaxValueIcon; 
        long long controlState; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } sliderCellFrame; 
        double backingScaleFactor; 
        BOOL isFlipped; 
        NSAppearance *appearance; 
    }  _state;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) /* Warning: unhandled struct encoding: '{?=QQcqqdcccq{CGRect={CGPoint=dd}{CGSize=dd}}dc@}' */ struct { unsigned long long x1; unsigned long long x2; BOOL x3; long long x4; long long x5; double x6; BOOL x7; BOOL x8; BOOL x9; long long x10; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_11_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_11_1_2; } x11; double x12; BOOL x13; id x14; } state;
@property (atomic, readonly) Class superclass;

+ (BOOL)requiresLegacyMetricsForSlider:(id)arg1;

- (double)_knobPointOverhang;
- (double)_knobTailOverhang;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_oldGetBarBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_orthogonalTickMarkInset;
- (double)_postBarLength;
- (double)_preBarLength;
- (double)_primaryTickMarkInset;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })barRectFlipped:(BOOL)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })knobAlignmentRectInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })knobRectFlipped:(BOOL)arg1 value:(double)arg2 knobValueRangeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })knobValueRangeRect:(BOOL)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfMaxValueImageFlipped:(BOOL)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfMinValueImageFlipped:(BOOL)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfTickMarkForValue:(double)arg1 knobRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 barRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)setState:(/* Warning: unhandled struct encoding: '{?=QQcqqdcccq{CGRect={CGPoint=dd}{CGSize=dd}}dc@}' */ struct { unsigned long long x1; unsigned long long x2; BOOL x3; long long x4; long long x5; double x6; BOOL x7; BOOL x8; BOOL x9; long long x10; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_11_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_11_1_2; } x11; double x12; BOOL x13; id x14; })arg1;
- (/* Warning: unhandled struct encoding: '{?=QQcqqdcccq{CGRect={CGPoint=dd}{CGSize=dd}}dc@}' */ struct { unsigned long long x1; unsigned long long x2; BOOL x3; long long x4; long long x5; double x6; BOOL x7; BOOL x8; BOOL x9; long long x10; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_11_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_11_1_2; } x11; double x12; BOOL x13; id x14; })state;

@end
