/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABAccountMigrationOperation : NSOperation {
    ABAccountRepository * _accountRepository;
    BOOL  _deleteOriginalData;
    NSString * _destinationAccountIdentifier;
    id  _errorHandler;
    BOOL  _mergeData;
    NSString * _originAccountIdentifier;
}

@property (atomic, readwrite) BOOL deleteOriginalData;
@property (atomic, readwrite, copy) id errorHandler;
@property (atomic, readwrite) BOOL mergeData;

- (void)dealloc;
- (BOOL)deleteOriginalData;
- (id)errorHandler;
- (id)initWithAccountRepository:(id)arg1 originAccountIdentifier:(id)arg2 destinationAccountIdentifier:(id)arg3;
- (void)main;
- (id)makeAddressBookWithAccounts:(id)arg1;
- (id)makePersistentStoreCoordinatorCacheWithAccounts:(id)arg1;
- (BOOL)mergeData;
- (void)setDeleteOriginalData:(BOOL)arg1;
- (void)setErrorHandler:(id)arg1;
- (void)setMergeData:(BOOL)arg1;

@end
