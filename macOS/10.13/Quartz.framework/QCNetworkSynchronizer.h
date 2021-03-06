/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCNetworkSynchronizer : QCNetworkPatch {
    QCDatagramBroadcaster * _broadcaster;
    double  _maxFrequency;
    QCDatagramReceiver * _receiver;
    BOOL  _run;
    BOOL  _transmitting;
    QCStringPort * inputString;
    QCBooleanPort * outputBroadcasting;
    QCBooleanPort * outputSignal;
    QCStringPort * outputString;
    QCNumberPort * outputTimestamp;
}

+ (int)executionModeWithIdentifier:(id)arg1;
+ (id)serializedStateKeysWithIdentifier:(id)arg1;
+ (id)stateKeysWithIdentifier:(id)arg1;
+ (unsigned long long)stateVersionWithIdentifier:(id)arg1;

- (void)_synchronizerThread:(id)arg1;
- (void)cleanup:(id)arg1;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)setState:(id)arg1;
- (BOOL)setup:(id)arg1;

// QCNetworkSynchronizer (QCInspector)

+ (Class)inspectorClassWithIdentifier:(id)arg1;

@end
