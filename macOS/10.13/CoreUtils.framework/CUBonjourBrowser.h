/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUBonjourBrowser : NSObject {
    struct BonjourBrowser { } * _bonjourBrowser;
    unsigned long long  _browseFlags;
    unsigned int  _changeFlags;
    id  _deviceChangedHandler;
    id  _deviceFoundHandler;
    id  _deviceLostHandler;
    struct NSMutableDictionary { Class x1; } * _devices;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id  _interruptionHandler;
    BOOL  _invalidateCalled;
    BOOL  _invalidateDone;
    id  _invalidationHandler;
    NSString * _label;
    NSString * _serviceType;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic, readwrite) unsigned long long browseFlags;
@property (nonatomic, readwrite) unsigned int changeFlags;
@property (nonatomic, readwrite, copy) id deviceChangedHandler;
@property (nonatomic, readwrite, copy) id deviceFoundHandler;
@property (nonatomic, readwrite, copy) id deviceLostHandler;
@property (nonatomic, readwrite, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readwrite, copy) id interruptionHandler;
@property (nonatomic, readwrite, copy) id invalidationHandler;
@property (nonatomic, readwrite, copy) NSString *label;
@property (nonatomic, readwrite, copy) NSString *serviceType;

- (void).cxx_destruct;
- (void)_bonjourHandleAddOrUpdateDevice:(id)arg1;
- (void)_bonjourHandleEventType:(unsigned int)arg1 info:(id)arg2;
- (void)_bonjourHandleRemoveDevice:(id)arg1;
- (int)_bonjourStart;
- (void)_interrupted;
- (void)_invalidated;
- (void)_lostAllDevices;
- (void)activate;
- (unsigned long long)browseFlags;
- (unsigned int)changeFlags;
- (void)dealloc;
- (id)description;
- (id)detailedDescription;
- (id)deviceChangedHandler;
- (id)deviceFoundHandler;
- (id)deviceLostHandler;
- (id)dispatchQueue;
- (id)init;
- (id)interruptionHandler;
- (void)invalidate;
- (id)invalidationHandler;
- (id)label;
- (id)serviceType;
- (void)setBrowseFlags:(unsigned long long)arg1;
- (void)setChangeFlags:(unsigned int)arg1;
- (void)setDeviceChangedHandler:(id)arg1;
- (void)setDeviceFoundHandler:(id)arg1;
- (void)setDeviceLostHandler:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setServiceType:(id)arg1;

@end
