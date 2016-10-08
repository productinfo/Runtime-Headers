/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSManager : NSObject <CKDProtocolTranslatorIdentityDelegate> {
    NSMutableDictionary * _PCSIdentityWrappersByServiceName;
    CKDClientContext * _context;
    <NSObject> * _contextObserver;
    NSString * _currentAccountIdentifier;
    struct _PCSIdentityData { } * _debugIdentity;
    NSString * _liverpoolPublicKey;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_source> * _pcsUpdateSource;
    NSString * _serviceName;
    NSArray * _sharingIdentityFingerprints;
}

@property (nonatomic, retain) NSMutableDictionary *PCSIdentityWrappersByServiceName;
@property (nonatomic, readonly) CKDClientContext *context;
@property (nonatomic, retain) <NSObject> *contextObserver;
@property (retain) NSString *currentAccountIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct _PCSIdentityData { }*debugIdentity;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *liverpoolPublicKey;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *pcsUpdateSource;
@property (nonatomic, retain) NSString *serviceName;
@property (nonatomic, retain) NSArray *sharingIdentityFingerprints;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)PCSIdentityWrappersByServiceName;
- (id)_PCSServiceStringFromCKServiceType:(unsigned long long)arg1;
- (id)_addIdentity:(struct _PCSIdentitySetData { }*)arg1 withService:(unsigned long long)arg2 toPCS:(struct _OpaquePCSShareProtection { }*)arg3;
- (struct _OpaquePCSShareProtection { }*)_addPublicIdentityForService:(unsigned long long)arg1 toSharePCS:(struct _OpaquePCSShareProtection { }*)arg2 withError:(id*)arg3;
- (id)_addServiceIdentitiesOfType:(id)arg1 toSet:(struct _PCSIdentitySetData { }*)arg2 fromSet:(struct _PCSIdentitySetData { }*)arg3 markCurrent:(bool)arg4;
- (struct _PCSIdentitySetData { }*)_copyIdentityForService:(id)arg1 useCache:(bool)arg2 withError:(id*)arg3;
- (id)_copyPublicKeyDataForIdentitySet:(struct _PCSIdentitySetData { }*)arg1 withService:(unsigned long long)arg2 withError:(id*)arg3;
- (struct _PCSIdentitySetData { }*)_copyServiceIdentityWithType:(unsigned long long)arg1 useCache:(bool)arg2 withError:(id*)arg3;
- (struct _PCSIdentitySetData { }*)_copyServiceIdentityWithType:(unsigned long long)arg1 withError:(id*)arg2;
- (struct _PCSIdentitySetData { }*)_createIdentitySetByAddingLiverpoolIdentity:(id)arg1 error:(id*)arg2;
- (struct _PCSIdentitySetData { }*)_createInMemoryIdentitySetForService:(id)arg1 error:(id*)arg2;
- (id)_fingerprintsFromIdentitySet:(struct _PCSIdentitySetData { }*)arg1;
- (id)_internalServicesToCombineWithLiverpoolKey;
- (struct _PCSIdentitySetData { }*)_reallyCopyIdentityForService:(id)arg1 withError:(id*)arg2;
- (id)_serviceNameForContainerID:(id)arg1;
- (id)addIdentityBackToPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (id)addIdentityForService:(unsigned long long)arg1 toPCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (id)addPublicIdentity:(struct _PCSPublicIdentityData { }*)arg1 toSharePCS:(struct _OpaquePCSShareProtection { }*)arg2 permission:(unsigned long long)arg3;
- (bool)addSharePCS:(struct _OpaquePCSShareProtection { }*)arg1 toRecordPCS:(struct _OpaquePCSShareProtection { }*)arg2 error:(id*)arg3;
- (bool)addSharePCS:(struct _OpaquePCSShareProtection { }*)arg1 toRecordPCS:(struct _OpaquePCSShareProtection { }*)arg2 permission:(unsigned long long)arg3 error:(id*)arg4;
- (id)addSharingIdentity:(struct _PCSIdentityData { }*)arg1 toSharePCS:(struct _OpaquePCSShareProtection { }*)arg2 permission:(unsigned long long)arg3;
- (bool)canDecryptInvitedProtectionData:(id)arg1 participantProtectionInfo:(id)arg2 serviceType:(unsigned long long)arg3 error:(id*)arg4;
- (id)context;
- (id)contextObserver;
- (struct _PCSPublicIdentityData { }*)copyDiversifiedIdentityForService:(unsigned long long)arg1 withError:(id*)arg2;
- (id)copyDiversifiedPublicKeyForService:(unsigned long long)arg1 withError:(id*)arg2;
- (id)copyPublicIdentityForDSID:(id)arg1 withError:(id*)arg2;
- (id)copyPublicKeyForService:(unsigned long long)arg1 withError:(id*)arg2;
- (struct _PCSIdentitySetData { }*)copyServiceIdentityForDSID:(id)arg1 withError:(id*)arg2;
- (struct _OpaquePCSShareProtection { }*)createChainPCSWithError:(id*)arg1;
- (struct _PCSIdentityData { }*)createCombinedIdentityWithOutOfNetworkPrivateKey:(id)arg1 publicSharingIdentity:(id)arg2;
- (struct _OpaquePCSShareProtection { }*)createEmptySharePCSWithError:(id*)arg1;
- (id)createProtectionInfoFromOONPrivateKey:(id)arg1 privateToken:(id)arg2 OONProtectionInfo:(id)arg3 error:(id*)arg4;
- (struct _PCSPublicIdentityData { }*)createPublicSharingIdentityFromPublicKey:(id)arg1 error:(id*)arg2;
- (struct _PCSIdentityData { }*)createRandomSharingIdentityWithError:(id*)arg1;
- (struct _OpaquePCSShareProtection { }*)createRecordPCSFromData:(id)arg1 sharePCS:(struct _OpaquePCSShareProtection { }*)arg2 error:(id*)arg3;
- (struct _OpaquePCSShareProtection { }*)createRecordPCSFromData:(id)arg1 sharePCS:(struct _OpaquePCSShareProtection { }*)arg2 logFailure:(bool)arg3 error:(id*)arg4;
- (struct _OpaquePCSShareProtection { }*)createRecordPCSFromData:(id)arg1 zonePCS:(struct _OpaquePCSShareProtection { }*)arg2 error:(id*)arg3;
- (struct _OpaquePCSShareProtection { }*)createRecordPCSFromData:(id)arg1 zonePCS:(struct _OpaquePCSShareProtection { }*)arg2 logFailure:(bool)arg3 error:(id*)arg4;
- (struct _OpaquePCSShareProtection { }*)createRecordPCSWithEncryptedZonePCS:(struct __CFData { }*)arg1 sharePCS:(struct _OpaquePCSShareProtection { }*)arg2 createLite:(bool)arg3 error:(id*)arg4;
- (struct _OpaquePCSShareProtection { }*)createRecordPCSWithZonePCS:(struct _OpaquePCSShareProtection { }*)arg1 sharePCS:(struct _OpaquePCSShareProtection { }*)arg2 createLite:(bool)arg3 error:(id*)arg4;
- (struct _OpaquePCSShareProtection { }*)createSharePCSForService:(unsigned long long)arg1 withError:(id*)arg2;
- (struct _OpaquePCSShareProtection { }*)createSharePCSFromData:(id)arg1 sharingIdentity:(struct _PCSIdentityData { }*)arg2 error:(id*)arg3;
- (struct _OpaquePCSShareProtection { }*)createSharePCSFromData:(id)arg1 sharingIdentity:(struct _PCSIdentityData { }*)arg2 logFailure:(bool)arg3 error:(id*)arg4;
- (struct _OpaquePCSShareProtection { }*)createSharePCSFromData:(id)arg1 withService:(unsigned long long)arg2 error:(id*)arg3;
- (struct _OpaquePCSShareProtection { }*)createSharePCSFromData:(id)arg1 withService:(unsigned long long)arg2 logFailure:(bool)arg3 error:(id*)arg4;
- (struct _OpaquePCSShareProtection { }*)createSharePCSFromEncryptedData:(id)arg1 error:(id*)arg2;
- (struct _OpaquePCSShareProtection { }*)createSharePublicPCSWithIdentity:(struct _PCSIdentityData { }*)arg1 error:(id*)arg2;
- (struct _PCSIdentityData { }*)createSharingIdentityFromData:(id)arg1 error:(id*)arg2;
- (struct _OpaquePCSShareProtection { }*)createZonePCSFromData:(id)arg1 error:(id*)arg2;
- (struct _OpaquePCSShareProtection { }*)createZonePCSWithError:(id*)arg1;
- (id)currentAccountIdentifier;
- (id)dataFromRecordPCS:(struct _OpaquePCSShareProtection { }*)arg1 error:(id*)arg2;
- (id)dataFromSharePCS:(struct _OpaquePCSShareProtection { }*)arg1 error:(id*)arg2;
- (id)dataFromSharingIdentity:(struct _PCSIdentityData { }*)arg1 error:(id*)arg2;
- (id)dataFromZonePCS:(struct _OpaquePCSShareProtection { }*)arg1 error:(id*)arg2;
- (void)dealloc;
- (struct _PCSIdentityData { }*)debugIdentity;
- (struct _PCSIdentityData { }*)debugSharingIdentity;
- (id)decryptChainPCSForRecordPCS:(id)arg1;
- (id)decryptPCSDataOnSharePCS:(id)arg1;
- (id)etagFromPCSData:(id)arg1;
- (id)etagFromRecordPCS:(struct _OpaquePCSShareProtection { }*)arg1 error:(id*)arg2;
- (id)etagFromSharePCS:(struct _OpaquePCSShareProtection { }*)arg1 error:(id*)arg2;
- (id)etagFromZonePCS:(struct _OpaquePCSShareProtection { }*)arg1 error:(id*)arg2;
- (id)initWithClientContext:(id)arg1;
- (id)liverpoolPublicKey;
- (id)newAssetKeyWithError:(id*)arg1;
- (id)operationQueue;
- (id)pcsDataFromFetchedShare:(id)arg1 withServiceType:(unsigned long long)arg2 error:(id*)arg3;
- (id)pcsUpdateSource;
- (id)protectionIdentifierFromShareProtection:(struct _OpaquePCSShareProtection { }*)arg1;
- (id)publicKeyIDFromIdentity:(struct _OpaquePCSShareProtection { }*)arg1;
- (id)referenceIdentifierStringFromAssetKey:(id)arg1;
- (id)referenceSignatureFromAssetKey:(id)arg1;
- (id)removeEncryptedPCS:(id)arg1 fromSharePCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (id)removePublicIdentity:(struct _PCSPublicIdentityData { }*)arg1 fromSharePCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (id)removePublicKeyID:(id)arg1 fromPCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (void)removePublicKeys:(id)arg1 fromPCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (bool)removeSharePCS:(struct _OpaquePCSShareProtection { }*)arg1 fromRecordPCS:(struct _OpaquePCSShareProtection { }*)arg2 error:(id*)arg3;
- (id)removeSharingIdentity:(struct _PCSIdentityData { }*)arg1 fromSharePCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (id)repairZonePCSData:(id)arg1 error:(id*)arg2;
- (id)serviceName;
- (void)setContextObserver:(id)arg1;
- (void)setCurrentAccountIdentifier:(id)arg1;
- (void)setDebugIdentity:(struct _PCSIdentityData { }*)arg1;
- (void)setLiverpoolPublicKey:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setPCSIdentityWrappersByServiceName:(id)arg1;
- (void)setPcsUpdateSource:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setSharingIdentityFingerprints:(id)arg1;
- (id)sharingIdentityDataFromPCS:(struct _OpaquePCSShareProtection { }*)arg1 error:(id*)arg2;
- (id)sharingIdentityFingerprints;
- (id)unwrapAssetKey:(id)arg1 withRecordPCS:(struct _OpaquePCSShareProtection { }*)arg2 withError:(id*)arg3;
- (id)unwrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2 forField:(id)arg3;
- (id)updateServiceIdentityOnZonePCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (id)wrapAssetKey:(id)arg1 withRecordPCS:(struct _OpaquePCSShareProtection { }*)arg2 withError:(id*)arg3;
- (id)wrapEncrypedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2 forField:(id)arg3;
- (bool)zonePCSNeedsUpdate:(struct _OpaquePCSShareProtection { }*)arg1;

@end