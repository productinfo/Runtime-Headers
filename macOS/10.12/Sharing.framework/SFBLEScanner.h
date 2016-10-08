/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface SFBLEScanner : NSObject <CBCentralManagerDelegate, WPAWDLDelegate, WPNearbyDelegate> {
    BOOL  _activateCalled;
    id  _bluetoothStateChangedHandler;
    CBCentralManager * _centralManager;
    unsigned int  _changeFlags;
    id  _deviceChangedHandler;
    NSArray * _deviceFilter;
    id  _deviceFoundHandler;
    id  _deviceLostHandler;
    struct NSMutableDictionary { Class x1; } * _devices;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    BOOL  _invalidateCalled;
    id  _invalidationHandler;
    BOOL  _needDups;
    CUBitCoder * _payloadCoder;
    NSData * _payloadFilterData;
    NSData * _payloadFilterMask;
    long long  _payloadType;
    double  _rescanInterval;
    NSObject<OS_dispatch_source> * _rescanTimer;
    long long  _rssiThreshold;
    BOOL  _scanCache;
    long long  _scanInterval;
    long long  _scanRate;
    BOOL  _scanStarted;
    long long  _scanWindow;
    CURetrier * _startRetrier;
    double  _timeout;
    BOOL  _timeoutFired;
    id  _timeoutHandler;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    WPAWDL * _wpAirDrop;
    WPNearby * _wpNearby;
    long long  _wpNearbyType;
    WPPairing * _wpPairing;
}

@property (nonatomic, readwrite, copy) id bluetoothStateChangedHandler;
@property (nonatomic, readwrite) unsigned int changeFlags;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite, copy) id deviceChangedHandler;
@property (nonatomic, readwrite, copy) NSArray *deviceFilter;
@property (nonatomic, readwrite, copy) id deviceFoundHandler;
@property (nonatomic, readwrite, copy) id deviceLostHandler;
@property (nonatomic, readwrite, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, copy) id invalidationHandler;
@property (nonatomic, readwrite, retain) CUBitCoder *payloadCoder;
@property (nonatomic, readwrite) double rescanInterval;
@property (nonatomic, readwrite) long long rssiThreshold;
@property (nonatomic, readwrite) BOOL scanCache;
@property (nonatomic, readwrite) long long scanInterval;
@property (nonatomic, readwrite) long long scanRate;
@property (nonatomic, readwrite) long long scanWindow;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) double timeout;
@property (nonatomic, readwrite, copy) id timeoutHandler;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id)arg1;
- (void)_foundDevice:(id)arg1 advertisementData:(id)arg2 rssi:(long long)arg3 fields:(id)arg4;
- (void)_invalidate;
- (void)_invokeBlockActivateSafe:(id)arg1;
- (BOOL)_needDups;
- (void)_poweredOff;
- (void)_rescanTimerFired;
- (void)_restartIfNeeded;
- (void)_startTimeoutIfNeeded;
- (void)_timeoutTimerFired;
- (BOOL)_updateCounterpart:(id)arg1;
- (void)_updateRescanTimer;
- (void)activateWithCompletion:(id)arg1;
- (void)awdl:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)awdl:(id)arg1 foundDevice:(id)arg2 rssi:(id)arg3;
- (void)awdlDidUpdateState:(id)arg1;
- (void)awdlStartedScanning:(id)arg1;
- (id)bluetoothStateChangedHandler;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (unsigned int)changeFlags;
- (void)dealloc;
- (id)description;
- (id)deviceChangedHandler;
- (id)deviceFilter;
- (id)deviceFoundHandler;
- (id)deviceLostHandler;
- (id)dispatchQueue;
- (id)init;
- (id)initWithType:(long long)arg1;
- (void)invalidate;
- (id)invalidationHandler;
- (void)nearby:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4 peerInfo:(id)arg5;
- (void)nearby:(id)arg1 didFailToStartScanningForType:(long long)arg2 WithError:(id)arg3;
- (void)nearby:(id)arg1 didLosePeer:(id)arg2 type:(long long)arg3;
- (void)nearby:(id)arg1 didStartScanningForType:(long long)arg2;
- (void)nearbyDidUpdateState:(id)arg1;
- (void)pairing:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)pairing:(id)arg1 foundDevice:(id)arg2 payload:(id)arg3 rssi:(id)arg4 peerInfo:(id)arg5;
- (void)pairingDidUpdateState:(id)arg1;
- (id)pairingParsePayload:(id)arg1 identifier:(id)arg2 bleDevice:(id)arg3;
- (void)pairingStartedScanning:(id)arg1;
- (BOOL)pairingUpdatePairedInfo:(id)arg1 fields:(id)arg2 bleDevice:(id)arg3;
- (id)payloadCoder;
- (double)rescanInterval;
- (long long)rssiThreshold;
- (BOOL)scanCache;
- (long long)scanInterval;
- (long long)scanRate;
- (long long)scanWindow;
- (void)setBluetoothStateChangedHandler:(id)arg1;
- (void)setChangeFlags:(unsigned int)arg1;
- (void)setDeviceChangedHandler:(id)arg1;
- (void)setDeviceFilter:(id)arg1;
- (void)setDeviceFoundHandler:(id)arg1;
- (void)setDeviceLostHandler:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setPayloadCoder:(id)arg1;
- (void)setPayloadFilterData:(id)arg1 mask:(id)arg2;
- (void)setRescanInterval:(double)arg1;
- (void)setRssiThreshold:(long long)arg1;
- (void)setScanCache:(BOOL)arg1;
- (void)setScanInterval:(long long)arg1;
- (void)setScanRate:(long long)arg1;
- (void)setScanWindow:(long long)arg1;
- (void)setTimeout:(double)arg1;
- (void)setTimeoutHandler:(id)arg1;
- (unsigned int)statusToHeadsetStatus:(unsigned char)arg1;
- (double)timeout;
- (id)timeoutHandler;

@end
