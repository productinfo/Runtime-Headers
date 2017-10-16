/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCPhysicsEffect : QCPatch {
    NSMutableArray * _inputValues;
    NSMutableArray * _outputValues;
    QCArray * _savedOutputValues;
    QCArray * _times;
    QCArray * _value;
    QCBooleanPort * inputSampling;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (id)stateArrays;
+ (id)stateKeysWithIdentifier:(id)arg1;
+ (unsigned long long)stateVersionWithIdentifier:(id)arg1;
+ (int)timeModeWithIdentifier:(id)arg1;

- (void)dealloc;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (unsigned long long)numberOfInputs;
- (void)setNumberOfInputs:(unsigned long long)arg1;
- (BOOL)setState:(id)arg1;
- (BOOL)setup:(id)arg1;
- (id)state;

// QCPhysicsEffect (QCInspector)

+ (id)inspectorNibNameWithIdentifier:(id)arg1;

@end