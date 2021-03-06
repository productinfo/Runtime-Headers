/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface PFUbiquityBaseline : PFUbiquitySafeSaveFile {
    _PFZipFileArchive * _baselineArchive;
    PFUbiquityLocation * _baselineStagingLocation;
    PFUbiquityBaselineMetadata * _metadata;
    NSManagedObjectModel * _model;
    NSString * _modelVersionHash;
    NSPersistentStore * _store;
    NSString * _storeFilename;
    NSMutableDictionary * _storeFilenameToData;
    NSString * _storeName;
}

@property (atomic, readonly) _PFZipFileArchive *baselineArchive;
@property (atomic, readonly) PFUbiquityLocation *baselineArchiveLocation;
@property (atomic, readonly) PFUbiquityLocation *baselinePeerArchiveLocation;
@property (atomic, readonly) PFUbiquityLocation *baselineStagingLocation;
@property (atomic, readonly) PFUbiquityBaselineMetadata *metadata;
@property (atomic, readonly) NSString *modelVersionHash;
@property (atomic, readonly) NSPersistentStore *store;
@property (atomic, readonly) NSString *storeFilename;
@property (atomic, readonly) NSDictionary *storeFilenameToData;
@property (atomic, readonly) NSString *storeName;

+ (BOOL)checkPeerReceiptsUnderRootLocation:(id)arg1 forAgreementWithLocalPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 error:(id*)arg5;
+ (id)createArchiveWithModel:(id)arg1 metadata:(id)arg2 storeFilenameToData:(id)arg3 storeFilename:(id)arg4 error:(id*)arg5;
+ (id)createBaselineGCModelForStoreName:(id)arg1 peerID:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;
+ (id)createBaselineOptimizedModelForStoreName:(id)arg1 peerID:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;
+ (id)createModelFromBaselineModelWithModelVersionHash:(id)arg1 peerID:(id)arg2 storeName:(id)arg3 andUbiquityRootLocation:(id)arg4;
+ (id)createStringOfContentsOfBaselineFile:(id)arg1;
+ (BOOL)isPeerReceiptTooOld:(id)arg1;
+ (id)metadataFromBaselineArchive:(id)arg1;
+ (id)metadataFromCurrentBaselineForStoreWithName:(id)arg1 peerID:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4 withError:(id*)arg5;
+ (BOOL)removePeerSpecificIdentifiersFromStore:(id)arg1 withLocalPeerID:(id)arg2;

- (id)_createPersistentStoreCoordinatorForCurrentBaseline:(BOOL)arg1 error:(id*)arg2;
- (id)baselineArchive;
- (id)baselineArchiveLocation;
- (id)baselineMetadataData;
- (id)baselinePeerArchiveLocation;
- (id)baselineStagingLocation;
- (BOOL)canReplaceStoreAtKnowledgeVector:(id)arg1;
- (BOOL)clearOutStagingLocationWithError:(id*)arg1;
- (BOOL)constructBaselineArchive:(id*)arg1;
- (id)createManagedObjectModel;
- (id)createManagedObjectModelFromCurrentBaseline;
- (id)createPersistentStoreCoordinatorForCurrentBaseline:(id*)arg1;
- (id)createSetOfInUseExternalDataRefUUIDs:(id*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)gatherContentsAndConstructArchiveWithError:(id*)arg1;
- (BOOL)gatherContentsFromMigratedBaseline:(id)arg1 withStoreFileURL:(id)arg2 error:(id*)arg3;
- (id)gcModelData;
- (BOOL)haveTransactionLogsForPeer:(id)arg1 between:(long long)arg2 and:(long long)arg3;
- (BOOL)importBaselineForStoreAtURL:(id)arg1 ofType:(id)arg2 options:(id)arg3 withLocalPeerID:(id)arg4 stack:(id)arg5 andPersistentStoreCoordinator:(id)arg6 error:(id*)arg7;
- (id)init;
- (id)initWithBaselineLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 forStoreWithName:(id)arg3 andManagedObjectModel:(id)arg4;
- (BOOL)isUploaded:(id*)arg1;
- (BOOL)loadFileFromLocation:(id)arg1 error:(id*)arg2;
- (BOOL)makeCurrentBaselineWithError:(id*)arg1;
- (id)metadata;
- (BOOL)metadataMatchesCurrentMetadata:(id*)arg1;
- (id)modelVersionHash;
- (BOOL)moveToPermanentLocation:(id*)arg1;
- (id)optimizedModelData;
- (BOOL)prepareForBaselineRollOfPersistentStore:(id)arg1 andLocalPeerID:(id)arg2 error:(id*)arg3;
- (BOOL)removeUnusedExternalDataReferences:(id*)arg1;
- (BOOL)replaceLocalPersistentStoreAtURL:(id)arg1 ofType:(id)arg2 withOptions:(id)arg3 usingPersistentStoreCoordinator:(id)arg4 error:(id*)arg5;
- (void)setMetadata:(id)arg1;
- (id)store;
- (id)storeData;
- (id)storeFilename;
- (id)storeFilenameToData;
- (id)storeName;
- (BOOL)unpackStoreFilesToStagingLocation:(id*)arg1;
- (BOOL)updateCurrentStoreIdentifier:(id)arg1 error:(id*)arg2;
- (BOOL)writeFileToLocation:(id)arg1 error:(id*)arg2;

@end
