/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCWatcher : QCPatch {
    QCPort * _inPort;
    unsigned long long  _lastTimestamp;
    QCBooleanPort * outputSignal;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (id)serializedStateKeysWithIdentifier:(id)arg1;
+ (id)stateKeysWithIdentifier:(id)arg1;

- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (Class)portClass;
- (void)setPortClass:(Class)arg1;
- (BOOL)setState:(id)arg1;
- (BOOL)setup:(id)arg1;
- (id)state;
- (void)updateTimebase:(int)arg1;

// QCWatcher (QCInspector)

+ (Class)inspectorClassWithIdentifier:(id)arg1;

@end
