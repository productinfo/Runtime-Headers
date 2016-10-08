/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface PFUbiquityStoreMetadataMedic : NSObject {
    NSSQLiteConnection * _connection;
    NSString * _localPeerID;
    NSPersistentStore * _store;
    NSString * _storeName;
    PFUbiquityLocation * _ubiquityRootLocation;
}

@property (nonatomic, readonly) NSSQLiteConnection *connection;
@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) NSPersistentStore *store;
@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, readonly) PFUbiquityLocation *ubiquityRootLocation;

- (BOOL)addTransactionHistoryEntriesForObjectIDs:(id)arg1 withImportContext:(id)arg2 error:(id*)arg3;
- (BOOL)cacheMetadataForTransactionLog:(id)arg1 withImportContext:(id)arg2 error:(id*)arg3;
- (id)connection;
- (void)dealloc;
- (id)initWithStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)localPeerID;
- (BOOL)recoverBaselineMetadataWithImportContext:(id)arg1 error:(id*)arg2;
- (BOOL)recoverMetadataWithError:(id*)arg1;
- (BOOL)recoverTransactionLogMetadataWithImportContext:(id)arg1 error:(id*)arg2;
- (id)store;
- (id)storeName;
- (id)ubiquityRootLocation;

@end