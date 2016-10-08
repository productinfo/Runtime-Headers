/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSAcceleratorButtonHelper : NSObject {
    double  _accumulatedActions;
    NSCell<_NSAcceleratorCell> * _cellStorage;
    float  _currentRate;
    double  _initialDelay;
    double  _lastTime;
    float  _maxRate;
    float  _minRate;
    BOOL  _satisfiedInitialDelay;
    NSTimer * _timer;
    double  _timerTarget;
    BOOL  _weakCellHelperFlag;
}

@property (atomic, readonly) NSCell<_NSAcceleratorCell> *cell;
@property (atomic, readwrite, retain) NSTimer *timer;

+ (double)accelerationForGestureAmount:(double)arg1;
+ (float)defaultPeriodicDelay;
+ (float)defaultPeriodicInterval;

- (void)_acceleratorTimerFired:(id)arg1;
- (void)_scheduleTimer;
- (void)accelerationChanged:(double)arg1;
- (id)cell;
- (void)dealloc;
- (id)initWithCell:(id)arg1;
- (void)levelChanged:(unsigned long long)arg1 withMaximum:(unsigned long long)arg2;
- (void)pressComplete;
- (void)pressStarted:(BOOL)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;

@end
