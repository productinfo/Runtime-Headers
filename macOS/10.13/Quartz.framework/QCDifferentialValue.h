/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCDifferentialValue : QCPatch {
    BOOL  _integrate;
    BOOL  _lastResetSignal;
    double  _lastTime;
    double  _lastValue;
    QCBooleanPort * inputResetSignal;
    QCNumberPort * inputValue;
    QCNumberPort * outputValue;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (int)timeModeWithIdentifier:(id)arg1;

- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)setup:(id)arg1;

@end