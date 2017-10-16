/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCAppleRemote : QCRunLoopPatch {
    unsigned char  _buttonsState;
    struct __CFDictionary { } * _cookies;
    BOOL  _exclusive;
    void * _hidDeviceInterface;
    struct __CFRunLoopSource { } * _hidEventSource;
    void * _queueInterface;
    QCBooleanPort * outputAvailable;
    QCBooleanPort * outputDownSignal;
    QCBooleanPort * outputMenuSignal;
    QCBooleanPort * outputNextSignal;
    QCBooleanPort * outputPlaySignal;
    QCBooleanPort * outputPreviousSignal;
    QCBooleanPort * outputSelectSignal;
    QCBooleanPort * outputUpSignal;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (int)executionModeWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (id)stateKeysWithIdentifier:(id)arg1;

- (void)_cleanUp;
- (void)_processEvents;
- (void)_setUp;
- (void)cleanup:(id)arg1;
- (BOOL)exclusiveAccess;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (void)setExclusiveAccess:(BOOL)arg1;
- (BOOL)setup:(id)arg1;

// QCAppleRemote (QCInspector)

+ (id)inspectorNibNameWithIdentifier:(id)arg1;

@end