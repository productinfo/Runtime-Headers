/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTHUDRemoteIndicatorView : NSView {
    struct QTHUDRemoteIndicatorViewInternal { id x1; id x2; id x3; id x4; id x5; double x6; double x7; double x8; unsigned long long x9; double x10[3]; } * _internal;
}

@property (atomic, readwrite, copy) NSString *chapterName;
@property (atomic, readwrite) double duration;
@property (atomic, readwrite) double rate;
@property (atomic, readwrite) double time;
@property (atomic, readwrite, copy) NSFormatter *timeFormatter;
@property (getter=_trackMagnitude, setter=_setTrackMagnitude:, atomic, readwrite) double trackMagnitude;
@property (atomic, readonly) double updateInterval;

+ (id)_imageNamed:(id)arg1;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingUpdateInterval;

- (void)_setTrackMagnitude:(double)arg1;
- (double)_trackMagnitude;
- (id)chapterName;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (double)duration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)rate;
- (void)setChapterName:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setRate:(double)arg1;
- (void)setRateThresholds:(const double*)arg1 count:(unsigned long long)arg2;
- (void)setTime:(double)arg1;
- (void)setTimeFormatter:(id)arg1;
- (double)time;
- (id)timeFormatter;
- (double)updateInterval;
- (Class)valueClassForBinding:(id)arg1;

@end