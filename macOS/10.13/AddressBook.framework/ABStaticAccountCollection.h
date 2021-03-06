/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABStaticAccountCollection : NSObject <ABAccountCollection> {
    NSArray * _accounts;
    NSString * _basePath;
    unsigned long long  _indexOfDefaultAccount;
    NSString * _tag;
}

@property (atomic, readonly, copy) NSArray *allAccounts;
@property (atomic, readonly, copy) NSString *basePath;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly) ABAccount *defaultAccount;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly, copy) NSArray *enabledAccounts;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly, copy) NSArray *persistentAccounts;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, copy) NSString *tag;

+ (id)collectionWithBasePath:(id)arg1 accounts:(id)arg2;

- (id)accountWithIdentifier:(id)arg1;
- (id)allAccounts;
- (id)basePath;
- (void)dealloc;
- (id)defaultAccount;
- (id)enabledAccounts;
- (id)initWithBasePath:(id)arg1 accounts:(id)arg2 indexOfDefaultAccount:(unsigned long long)arg3;
- (id)persistentAccounts;
- (void)setTag:(id)arg1;
- (id)tag;

@end
