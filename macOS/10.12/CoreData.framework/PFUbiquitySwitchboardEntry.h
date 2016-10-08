/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface PFUbiquitySwitchboardEntry : NSObject {
    unsigned long long  _activeStoreCount;
    int  _finishLock;
    BOOL  _finishedInitializingForStore;
    BOOL  _finishedSetupForStore;
    PFUbiquitySetupAssistant * _finishingSetupAssistant;
    PFUbiquityFilePresenter * _fp;
    BOOL  _hasScheduledFinishBlock;
    PFUbiquityFilePresenter * _localFP;
    NSString * _localPeerID;
    PFUbiquityLocation * _localRootLocation;
    PFUbiquitySwitchboardEntryMetadata * _metadata;
    PFUbiquityContainerMonitor * _monitor;
    NSObject<OS_dispatch_queue> * _privateQueue;
    NSMutableDictionary * _registeredCoordinators;
    NSString * _storeName;
    NSURL * _storeURL;
    PFUbiquityLocation * _ubiquityRootLocation;
}

@property (atomic, readwrite) unsigned long long activeStoreCount;
@property (atomic, readonly) PFUbiquityFilePresenter *filePresenter;
@property (atomic, readonly) PFUbiquitySetupAssistant *finishingSetupAssistant;
@property (atomic, readonly) PFUbiquityFilePresenter *localFilePresenter;
@property (nonatomic, readonly) NSString *localPeerID;
@property (atomic, readonly) PFUbiquityLocation *localRootLocation;
@property (nonatomic, readwrite, retain) PFUbiquitySwitchboardEntryMetadata *metadata;
@property (atomic, readonly) PFUbiquityContainerMonitor *monitor;
@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, readwrite, retain) PFUbiquityLocation *ubiquityRootLocation;

- (unsigned long long)activeStoreCount;
- (void)afterDelay:(double)arg1 executeBlockOnGlobalConcurrentQueue:(id)arg2;
- (void)afterDelay:(double)arg1 executeBlockOnPrivateQueue:(id)arg2;
- (id)cacheWrapperForStoreName:(id)arg1;
- (void)containerIdentifierChanged:(id)arg1;
- (void)containerStateChanged:(id)arg1;
- (id)createSetOfActiveStoreNames;
- (id)createSetOfPersistentStoreCoordinatorsRegisteredForStoreName:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)entryWillBeRemovedFromSwitchboard;
- (void)executeBlockOnPrivateQueue:(id)arg1;
- (id)filePresenter;
- (void)filePresenterNoticedBaselineFileChange:(id)arg1;
- (void)filePresenterWasNotifiedTransactionLogs:(id)arg1;
- (BOOL)finishSetupForStore:(id)arg1 withSetupAssistant:(id)arg2 synchronously:(BOOL)arg3 error:(id*)arg4 finishBlock:(id)arg5;
- (id)finishingSetupAssistant;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 withURL:(id)arg3 ubiquityRootLocation:(id)arg4 andLocalRootLocation:(id)arg5;
- (id)localFilePresenter;
- (id)localPeerID;
- (id)localRootLocation;
- (id)metaForStoreName:(id)arg1;
- (id)metadata;
- (id)monitor;
- (void)monitorStateChanged:(id)arg1;
- (void)registerPersistentStore:(id)arg1 withStoreName:(id)arg2;
- (void)setActiveStoreCount:(unsigned long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setUbiquityRootLocation:(id)arg1;
- (void)setupFinished;
- (id)storeName;
- (void)synchronouslyExecuteBlockOnPrivateQueue:(id)arg1;
- (id)ubiquityRootLocation;
- (void)unregisterPersistentStore:(id)arg1;
- (void)unregisterPersistentStoreCoordinator:(id)arg1;

@end
