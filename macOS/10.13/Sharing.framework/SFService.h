/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface SFService : NSObject <NSSecureCoding, SFXPCInterface> {
    BOOL  _activateCalled;
    BOOL  _activateCompleted;
    BOOL  _activateInProgress;
    long long  _advertiseRate;
    BOOL  _autoUnlockEnabled;
    BOOL  _autoUnlockWatch;
    unsigned char  _deviceActionType;
    unsigned char  _deviceClassCode;
    unsigned char  _deviceColorCode;
    unsigned char  _deviceModelCode;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id  _errorHandler;
    id  _eventMessageHandler;
    NSString * _fixedPIN;
    BOOL  _hasProblem;
    id  _hidePINHandler;
    NSString * _identifier;
    id  _interruptionHandler;
    BOOL  _invalidateCalled;
    BOOL  _invalidateDone;
    id  _invalidationHandler;
    NSString * _label;
    NSString * _myAppleID;
    CUAppleIDClient * _myAppleIDInfoClient;
    BOOL  _needsKeyboard;
    BOOL  _needsSetup;
    NSDictionary * _pairSetupACL;
    id  _pairSetupCompletionHandler;
    BOOL  _pairSetupDisabled;
    NSDictionary * _pairVerifyACL;
    NSString * _peerAppleID;
    id  _peerDisconnectedHandler;
    unsigned int  _pinType;
    id  _receivedFramePeerHandler;
    id  _receivedObjectHandler;
    id  _receivedRequestHandler;
    id  _requestMessageHandler;
    struct NSMutableDictionary { Class x1; } * _requestQueue;
    NSString * _requestSSID;
    id  _responseMessageInternalHandler;
    id  _sendFramePeerHandler;
    unsigned char  _serviceType;
    NSUUID * _serviceUUID;
    id  _sessionEndedHandler;
    unsigned int  _sessionFlags;
    id  _sessionSecuredHandler;
    id  _sessionStartedHandler;
    struct NSMutableDictionary { Class x1; } * _sessions;
    id  _showPINHandler;
    id  _showPINHandlerEx;
    BOOL  _supportsAirPlayReceiver;
    NSXPCListenerEndpoint * _testListenerEndpoint;
    int  _tlsActivateState;
    struct NSMutableDictionary { Class x1; } * _tlsBuffers;
    BOOL  _tlsEnabled;
    struct OpaqueSecIdentityRef { } * _tlsIdentity;
    NSUUID * _tlsPeer;
    NSObject<OS_dispatch_queue> * _tlsQueue;
    NSData * _tlsRecordData;
    struct NSMutableDictionary { Class x1; } * _tlsSessions;
    NSDate * _tlsStart;
    struct NSMutableSet { Class x1; } * _tlsVerifiedPeers;
    BOOL  _touchRemoteEnabled;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucatCore;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucatCrypto;
    BOOL  _wakeDevice;
    BOOL  _watchLocked;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, readwrite) long long advertiseRate;
@property (nonatomic, readwrite) BOOL autoUnlockEnabled;
@property (nonatomic, readwrite) BOOL autoUnlockWatch;
@property (nonatomic, readwrite) unsigned char deviceActionType;
@property (nonatomic, readwrite) unsigned char deviceClassCode;
@property (nonatomic, readwrite) unsigned char deviceColorCode;
@property (nonatomic, readwrite) unsigned char deviceModelCode;
@property (nonatomic, readwrite, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readwrite, copy) id errorHandler;
@property (nonatomic, readwrite, copy) id eventMessageHandler;
@property (nonatomic, readwrite, copy) NSString *fixedPIN;
@property (nonatomic, readwrite) BOOL hasProblem;
@property (nonatomic, readwrite, copy) id hidePINHandler;
@property (nonatomic, readwrite, copy) NSString *identifier;
@property (nonatomic, readwrite, copy) id interruptionHandler;
@property (nonatomic, readwrite, copy) id invalidationHandler;
@property (nonatomic, readwrite, copy) NSString *label;
@property (nonatomic, readwrite, copy) NSString *myAppleID;
@property (nonatomic, readwrite, retain) CUAppleIDClient *myAppleIDInfoClient;
@property (nonatomic, readwrite) BOOL needsKeyboard;
@property (nonatomic, readwrite) BOOL needsSetup;
@property (nonatomic, readwrite, copy) NSDictionary *pairSetupACL;
@property (nonatomic, readwrite, copy) id pairSetupCompletionHandler;
@property (nonatomic, readwrite) BOOL pairSetupDisabled;
@property (nonatomic, readwrite, copy) NSDictionary *pairVerifyACL;
@property (nonatomic, readwrite, copy) NSString *peerAppleID;
@property (nonatomic, readwrite, copy) id peerDisconnectedHandler;
@property (nonatomic, readwrite) unsigned int pinType;
@property (nonatomic, readwrite, copy) id receivedFramePeerHandler;
@property (nonatomic, readwrite, copy) id receivedObjectHandler;
@property (nonatomic, readwrite, copy) id receivedRequestHandler;
@property (nonatomic, readwrite, copy) id requestMessageHandler;
@property (nonatomic, readwrite, copy) NSString *requestSSID;
@property (nonatomic, readwrite, copy) id responseMessageInternalHandler;
@property (nonatomic, readwrite, copy) id sendFramePeerHandler;
@property (nonatomic, readwrite) unsigned char serviceType;
@property (nonatomic, readwrite, copy) NSUUID *serviceUUID;
@property (nonatomic, readwrite, copy) id sessionEndedHandler;
@property (nonatomic, readwrite) unsigned int sessionFlags;
@property (nonatomic, readwrite, copy) id sessionSecuredHandler;
@property (nonatomic, readwrite, copy) id sessionStartedHandler;
@property (nonatomic, readwrite, copy) id showPINHandler;
@property (nonatomic, readwrite, copy) id showPINHandlerEx;
@property (nonatomic, readwrite) BOOL supportsAirPlayReceiver;
@property (nonatomic, readwrite, retain) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic, readwrite) BOOL tlsEnabled;
@property (nonatomic, readwrite) BOOL touchRemoteEnabled;
@property (nonatomic, readwrite) BOOL wakeDevice;
@property (nonatomic, readwrite) BOOL watchLocked;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id)arg1;
- (void)_activated;
- (void)_cleanup;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)_pairTLSComplete:(int)arg1 peer:(id)arg2 completion:(id)arg3;
- (void)_pairTLSSendValidationRecord;
- (void)_pairTLSWithPeer:(id)arg1 completion:(id)arg2;
- (void)_performActivateSafeChange:(id)arg1;
- (void)_sendTLSEncryptedObject:(id)arg1 toPeer:(id)arg2;
- (void)_sendToPeer:(id)arg1 type:(unsigned char)arg2 data:(id)arg3;
- (void)_sendToPeer:(id)arg1 type:(unsigned char)arg2 unencryptedObject:(id)arg3;
- (void)_tlsActivated;
- (int)_tlsEnsureConfiguredWithPeer:(id)arg1;
- (void)_tlsReceivedData:(id)arg1 type:(unsigned char)arg2 peer:(id)arg3;
- (void)_tlsReceivedObjectFromPeer:(id)arg1 length:(unsigned long long)arg2;
- (int)_tlsSetCertificatesForSession:(struct SSLContext { }*)arg1;
- (void)activateTLSWithIdentity:(struct OpaqueSecIdentityRef { }*)arg1 recordData:(id)arg2 completion:(id)arg3;
- (void)activateWithCompletion:(id)arg1;
- (long long)advertiseRate;
- (BOOL)autoUnlockEnabled;
- (BOOL)autoUnlockWatch;
- (void)clearEncryptionInfoForPeer:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned char)deviceActionType;
- (unsigned char)deviceClassCode;
- (unsigned char)deviceColorCode;
- (unsigned char)deviceModelCode;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)errorHandler;
- (id)eventMessageHandler;
- (id)fixedPIN;
- (BOOL)hasProblem;
- (id)hidePINHandler;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interruptionHandler;
- (void)invalidate;
- (id)invalidationHandler;
- (id)label;
- (id)myAppleID;
- (id)myAppleIDInfoClient;
- (BOOL)needsKeyboard;
- (BOOL)needsSetup;
- (id)pairSetupACL;
- (id)pairSetupCompletionHandler;
- (BOOL)pairSetupDisabled;
- (void)pairTLSWithPeer:(id)arg1 completion:(id)arg2;
- (id)pairVerifyACL;
- (id)peerAppleID;
- (id)peerDisconnectedHandler;
- (unsigned int)pinType;
- (id)receivedFramePeerHandler;
- (id)receivedObjectHandler;
- (id)receivedRequestHandler;
- (id)requestMessageHandler;
- (id)requestSSID;
- (id)responseMessageInternalHandler;
- (void)sendEvent:(id)arg1;
- (id)sendFramePeerHandler;
- (void)sendRequest:(id)arg1;
- (void)sendResponse:(id)arg1;
- (void)sendTLSEncryptedObject:(id)arg1 toPeer:(id)arg2;
- (void)sendToPeer:(id)arg1 flags:(unsigned int)arg2 object:(id)arg3;
- (void)sendToPeer:(id)arg1 type:(unsigned char)arg2 data:(id)arg3;
- (void)serviceError:(id)arg1;
- (void)servicePeerDisconnected:(id)arg1 error:(id)arg2;
- (void)serviceReceivedEvent:(id)arg1;
- (void)serviceReceivedFrameType:(unsigned char)arg1 data:(id)arg2 peer:(id)arg3;
- (void)serviceReceivedRequest:(id)arg1;
- (void)serviceReceivedResponse:(id)arg1;
- (void)serviceSessionFailed:(id)arg1 error:(id)arg2;
- (unsigned char)serviceType;
- (id)serviceUUID;
- (id)sessionEndedHandler;
- (unsigned int)sessionFlags;
- (id)sessionSecuredHandler;
- (id)sessionStartedHandler;
- (void)setAdvertiseRate:(long long)arg1;
- (void)setAutoUnlockEnabled:(BOOL)arg1;
- (void)setAutoUnlockWatch:(BOOL)arg1;
- (void)setDeviceActionType:(unsigned char)arg1;
- (void)setDeviceClassCode:(unsigned char)arg1;
- (void)setDeviceColorCode:(unsigned char)arg1;
- (void)setDeviceModelCode:(unsigned char)arg1;
- (void)setDispatchQueue:(id)arg1;
- (int)setEncryptionReadKey:(const char *)arg1 readKeyLen:(unsigned long long)arg2 writeKey:(const char *)arg3 writeKeyLen:(unsigned long long)arg4 peer:(id)arg5;
- (void)setErrorHandler:(id)arg1;
- (void)setEventMessageHandler:(id)arg1;
- (void)setFixedPIN:(id)arg1;
- (void)setHasProblem:(BOOL)arg1;
- (void)setHidePINHandler:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInterruptionHandler:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMyAppleID:(id)arg1;
- (void)setMyAppleIDInfoClient:(id)arg1;
- (void)setNeedsKeyboard:(BOOL)arg1;
- (void)setNeedsSetup:(BOOL)arg1;
- (void)setPairSetupACL:(id)arg1;
- (void)setPairSetupCompletionHandler:(id)arg1;
- (void)setPairSetupDisabled:(BOOL)arg1;
- (void)setPairVerifyACL:(id)arg1;
- (void)setPeerAppleID:(id)arg1;
- (void)setPeerDisconnectedHandler:(id)arg1;
- (void)setPinType:(unsigned int)arg1;
- (void)setReceivedFramePeerHandler:(id)arg1;
- (void)setReceivedObjectHandler:(id)arg1;
- (void)setReceivedRequestHandler:(id)arg1;
- (void)setRequestMessageHandler:(id)arg1;
- (void)setRequestSSID:(id)arg1;
- (void)setResponseMessageInternalHandler:(id)arg1;
- (void)setSendFramePeerHandler:(id)arg1;
- (void)setServiceType:(unsigned char)arg1;
- (void)setServiceUUID:(id)arg1;
- (void)setSessionEndedHandler:(id)arg1;
- (void)setSessionFlags:(unsigned int)arg1;
- (void)setSessionSecuredHandler:(id)arg1;
- (void)setSessionStartedHandler:(id)arg1;
- (void)setShowPINHandler:(id)arg1;
- (void)setShowPINHandlerEx:(id)arg1;
- (void)setSupportsAirPlayReceiver:(BOOL)arg1;
- (void)setTestListenerEndpoint:(id)arg1;
- (void)setTlsEnabled:(BOOL)arg1;
- (void)setTouchRemoteEnabled:(BOOL)arg1;
- (void)setWakeDevice:(BOOL)arg1;
- (void)setWatchLocked:(BOOL)arg1;
- (id)showPINHandler;
- (id)showPINHandlerEx;
- (BOOL)supportsAirPlayReceiver;
- (id)testListenerEndpoint;
- (id)tlsDataForPeer:(id)arg1;
- (BOOL)tlsEnabled;
- (void)tlsReceivedData:(id)arg1 type:(unsigned char)arg2 peer:(id)arg3;
- (void)tlsSetData:(id)arg1 forPeer:(id)arg2;
- (int)tlsState;
- (BOOL)touchRemoteEnabled;
- (void)updateWithService:(id)arg1;
- (BOOL)wakeDevice;
- (BOOL)watchLocked;

@end
