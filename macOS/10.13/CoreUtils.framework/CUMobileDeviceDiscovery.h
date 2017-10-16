/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUMobileDeviceDiscovery : NSObject {
    BOOL  _activateCalled;
    unsigned int  _changeFlags;
    id  _deviceChangedHandler;
    id  _deviceFoundHandler;
    id  _deviceLostHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    BOOL  _invalidateCalled;
    id  _invalidationHandler;
    struct NSMutableDictionary { Class x1; } * _mdDevices;
    struct _AMDeviceNotificationContext { } * _mdNotification;
    CURunLoopThread * _mdRunLoopThread;
}

@property (nonatomic, readwrite) unsigned int changeFlags;
@property (nonatomic, readwrite, copy) id deviceChangedHandler;
@property (nonatomic, readwrite, copy) id deviceFoundHandler;
@property (nonatomic, readwrite, copy) id deviceLostHandler;
@property (nonatomic, readwrite, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readwrite, copy) id invalidationHandler;

+ (void)getDevicesWithQueue:(id)arg1 completion:(id)arg2;

- (void).cxx_destruct;
- (void)_invalidated;
- (void)_mdThreadFinalize;
- (void)_mdThreadHandleDeviceAttached:(struct _AMDevice { }*)arg1;
- (void)_mdThreadHandleDeviceDetached:(struct _AMDevice { }*)arg1;
- (void)_mdThreadHandlePropertiesChanged:(id)arg1;
- (void)_mdThreadHandleSubscriberStopped;
- (void)_mdThreadInitialize;
- (void)_mdThreadStartMonitoringDevice:(id)arg1;
- (void)_mdThreadStopMonitoringDevice:(id)arg1;
- (void)activate;
- (unsigned int)changeFlags;
- (id)deviceChangedHandler;
- (id)deviceFoundHandler;
- (id)deviceLostHandler;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id)invalidationHandler;
- (void)setChangeFlags:(unsigned int)arg1;
- (void)setDeviceChangedHandler:(id)arg1;
- (void)setDeviceFoundHandler:(id)arg1;
- (void)setDeviceLostHandler:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;

@end