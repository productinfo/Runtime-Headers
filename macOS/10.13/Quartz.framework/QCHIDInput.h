/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCHIDInput : QCRunLoopPatch {
    unsigned int  _addNotification;
    struct __CFDictionary { } * _cookies;
    NSString * _deviceID;
    GFList * _elementPorts;
    BOOL  _exclusive;
    void * _hidDeviceInterface;
    struct __CFRunLoopSource { } * _hidEventSource;
    struct IONotificationPort { } * _notificationPort;
    void * _queueInterface;
    unsigned int  _removeNotification;
    BOOL  _reset;
    QCBooleanPort * outputAvailable;
}

+ (id)allElementsForDeviceID:(id)arg1;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (id)deviceIDList:(BOOL)arg1;
+ (int)executionModeWithIdentifier:(id)arg1;
+ (id)stateKeysWithIdentifier:(id)arg1;

- (void)_cleanUp;
- (void)_processEvents;
- (void)_setNeedsReset;
- (void)_setUp;
- (void)cleanup:(id)arg1;
- (void)dealloc;
- (id)deviceElements;
- (id)deviceID;
- (BOOL)exclusiveAccess;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (void)setDeviceElements:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setExclusiveAccess:(BOOL)arg1;
- (BOOL)setState:(id)arg1;
- (BOOL)setup:(id)arg1;
- (id)state;

// QCHIDInput (QCInspector)

+ (Class)inspectorClassWithIdentifier:(id)arg1;

@end