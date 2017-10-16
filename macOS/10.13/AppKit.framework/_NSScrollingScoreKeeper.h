/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSScrollingScoreKeeper : NSWindowController {
    NSDictionary * _currentOperationResults;
    double  _durationInSec;
    double  _frameVariation;
    double  _gestureEndTime;
    double  _gestureStartTime;
    long long  _holdCount;
    NSString * _perfCategory;
    NSString * _scoreString;
    double  _scrollDelayInMs;
    _NSScrollingScore * _scrollingScore;
    long long  _slipCount;
    double  _userFPS;
    long long  _zeroDeltaCount;
}

@property (atomic, readwrite) double durationInSec;
@property (atomic, readwrite) double frameRate;
@property (atomic, readwrite) long long holdCount;
@property (atomic, readwrite) double normalizedFrameDurationVariation;
@property (atomic, readwrite, copy) NSString *perfCategory;
@property (atomic, readwrite, retain) NSString *scoreString;
@property (atomic, readwrite) double scrollDelayInMs;
@property (atomic, readwrite) long long slipCount;
@property (atomic, readwrite) long long zeroDeltaCount;

+ (void)beginScrollGesture:(id)arg1;
+ (void)endScrollGesture;
+ (void)playScrollRecordingData:(id)arg1 atWindow:(id)arg2 location:(struct CGPoint { double x1; double x2; })arg3 completionHandler:(id)arg4;
+ (id)scrollRecordingDataFromEventArray:(id)arg1;
+ (id)sharedScrollingScoreKeeper;

- (void)beginBackgroundThreadFrame:(id)arg1;
- (void)beginBackgroundThreadLayerMove;
- (void)beginIdlePrefetch;
- (void)beginScrollFrame;
- (void)beginScrollGesture:(id)arg1;
- (void)dealloc;
- (double)durationInSec;
- (void)endBackgroundThreadFrame;
- (void)endBackgroundThreadLayerMove;
- (void)endIdlePrefetch;
- (void)endScrollFrame;
- (void)endScrollGesture;
- (void)exportTimeLine:(id)arg1;
- (double)frameRate;
- (long long)holdCount;
- (id)init;
- (void)markBackgroundThreadLayerHold;
- (void)markPointOfInterest:(id)arg1;
- (void)markRemovePresentationProperties;
- (void)markScrollDelta:(struct CGPoint { double x1; double x2; })arg1;
- (void)markScrollEventDelta:(struct CGPoint { double x1; double x2; })arg1 phase:(unsigned long long)arg2 momentumPhase:(unsigned long long)arg3;
- (double)normalizedFrameDurationVariation;
- (id)perfCategory;
- (id)scoreString;
- (double)scrollDelayInMs;
- (void)setDurationInSec:(double)arg1;
- (void)setFrameRate:(double)arg1;
- (void)setHoldCount:(long long)arg1;
- (void)setNormalizedFrameDurationVariation:(double)arg1;
- (void)setPerfCategory:(id)arg1;
- (void)setScoreString:(id)arg1;
- (void)setScrollDelayInMs:(double)arg1;
- (void)setSlipCount:(long long)arg1;
- (void)setZeroDeltaCount:(long long)arg1;
- (void)showScoreWindow;
- (long long)slipCount;
- (BOOL)writeTimelineFileToURL:(id)arg1 error:(id*)arg2;
- (long long)zeroDeltaCount;

@end