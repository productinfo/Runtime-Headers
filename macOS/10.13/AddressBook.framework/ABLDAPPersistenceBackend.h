/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABLDAPPersistenceBackend : NSObject <ABAccountPersistenceBackend> {
    NSString * _uid;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id)acAccountIdentifier;
- (id)accountTypeIdentifier;
- (id)addressBookDomainName;
- (void)dealloc;
- (void)deletePersistentValuesWithAddressBook:(id)arg1;
- (id)initWithUID:(id)arg1;
- (id)loadPersistentValues;
- (id)parentAccountTypeIdentifier;
- (void)rediscoverPersistentValuesWithCompletionHandler:(id)arg1;
- (BOOL)savePersistentValues:(id)arg1;
- (BOOL)savePersistentValues:(id)arg1 postNotifications:(BOOL)arg2;
- (id)uid;
- (id)userDefaultKeyToKeyPathMapping;

@end
