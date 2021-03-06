/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUPairingSession : NSObject {
    NSDictionary * _acl;
    NSDictionary * _additionalPeerInfo;
    NSDictionary * _additionalSelfInfo;
    id  _completionHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _fixedPIN;
    unsigned int  _flags;
    id  _hidePINHandler;
    NSString * _label;
    NSData * _mfiCertificateData;
    NSString * _mfiProductType;
    NSString * _mfiSerialNumber;
    NSData * _mfiToken;
    NSString * _myAppleID;
    CUAppleIDClient * _myAppleIDInfoClient;
    struct PairingSessionPrivate { } * _pairingSession;
    struct NSMutableDictionary { Class x1; } * _pairingStreams;
    NSString * _peerAppleID;
    NSDictionary * _peerInfo;
    unsigned int  _pinType;
    id  _promptForPINHandler;
    id  _sendDataHandler;
    unsigned int  _sessionType;
    id  _showPINHandler;
    id  _showPINHandlerEx;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic, readwrite, copy) NSDictionary *acl;
@property (nonatomic, readwrite, copy) NSDictionary *additionalPeerInfo;
@property (nonatomic, readwrite, copy) NSDictionary *additionalSelfInfo;
@property (nonatomic, readwrite, copy) id completionHandler;
@property (nonatomic, readwrite, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readwrite, copy) NSString *fixedPIN;
@property (nonatomic, readwrite) unsigned int flags;
@property (nonatomic, readwrite, copy) id hidePINHandler;
@property (nonatomic, readwrite, copy) NSString *label;
@property (nonatomic, readwrite, copy) NSData *mfiCertificateData;
@property (nonatomic, readwrite, copy) NSString *mfiProductType;
@property (nonatomic, readwrite, copy) NSString *mfiSerialNumber;
@property (nonatomic, readwrite, copy) NSData *mfiToken;
@property (nonatomic, readwrite, copy) NSString *myAppleID;
@property (nonatomic, readwrite, retain) CUAppleIDClient *myAppleIDInfoClient;
@property (nonatomic, readonly) CUPairedPeer *pairedPeer;
@property (nonatomic, readwrite, copy) NSString *peerAppleID;
@property (nonatomic, readonly, copy) NSDictionary *peerInfo;
@property (nonatomic, readwrite) unsigned int pinType;
@property (nonatomic, readwrite, copy) id promptForPINHandler;
@property (nonatomic, readwrite, copy) id sendDataHandler;
@property (nonatomic, readwrite) unsigned int sessionType;
@property (nonatomic, readwrite, copy) id showPINHandler;
@property (nonatomic, readwrite, copy) id showPINHandlerEx;

- (void).cxx_destruct;
- (void)_activate;
- (void)_cleanup;
- (void)_completed:(id)arg1;
- (void)_receivedData:(id)arg1 flags:(unsigned int)arg2;
- (void)_tryPIN:(id)arg1;
- (id)acl;
- (void)activate;
- (id)additionalPeerInfo;
- (id)additionalSelfInfo;
- (void)closeStream:(id)arg1;
- (id)completionHandler;
- (void)dealloc;
- (int)deriveKeyWithSaltPtr:(const void*)arg1 saltLen:(unsigned long long)arg2 infoPtr:(const void*)arg3 infoLen:(unsigned long long)arg4 keyLen:(unsigned long long)arg5 outputKeyPtr:(void*)arg6;
- (id)dispatchQueue;
- (id)fixedPIN;
- (unsigned int)flags;
- (id)hidePINHandler;
- (id)init;
- (void)invalidate;
- (id)label;
- (id)mfiCertificateData;
- (id)mfiProductType;
- (id)mfiSerialNumber;
- (id)mfiToken;
- (id)myAppleID;
- (id)myAppleIDInfoClient;
- (id)openStreamWithName:(id)arg1 error:(id*)arg2;
- (id)pairedPeer;
- (id)peerAppleID;
- (id)peerInfo;
- (unsigned int)pinType;
- (id)promptForPINHandler;
- (void)receivedData:(id)arg1;
- (id)sendDataHandler;
- (unsigned int)sessionType;
- (void)setAcl:(id)arg1;
- (void)setAdditionalPeerInfo:(id)arg1;
- (void)setAdditionalSelfInfo:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFixedPIN:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHidePINHandler:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMfiCertificateData:(id)arg1;
- (void)setMfiProductType:(id)arg1;
- (void)setMfiSerialNumber:(id)arg1;
- (void)setMfiToken:(id)arg1;
- (void)setMyAppleID:(id)arg1;
- (void)setMyAppleIDInfoClient:(id)arg1;
- (void)setPeerAppleID:(id)arg1;
- (void)setPinType:(unsigned int)arg1;
- (void)setPromptForPINHandler:(id)arg1;
- (void)setSendDataHandler:(id)arg1;
- (void)setSessionType:(unsigned int)arg1;
- (void)setShowPINHandler:(id)arg1;
- (void)setShowPINHandlerEx:(id)arg1;
- (id)showPINHandler;
- (id)showPINHandlerEx;
- (void)tryPIN:(id)arg1;

@end
