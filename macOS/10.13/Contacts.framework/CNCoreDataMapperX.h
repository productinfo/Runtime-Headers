/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNCoreDataMapperX : NSObject <CNDataMapper> {
    CNCDPersistenceStack * _persistenceStack;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)defaultContactsStoreDirectoryURL;
+ (BOOL)useAddressBookStack;

- (void).cxx_destruct;
- (id)_allCustomProperties;
- (id)_createInfo;
- (id)_customPropertyValuesForRecordWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)_groupsMatchingCoreDataPredicate:(id)arg1 error:(id*)arg2;
- (id)_infosForAccountsWithIdentifiers:(id)arg1 error:(id*)arg2;
- (id)_persistentStoreURLForRecordWithIdentifier:(id)arg1;
- (BOOL)_saveAddedCustomProperties:(id)arg1 deletedCustomProperties:(id)arg2 error:(id*)arg3;
- (BOOL)_saveCustomPropertyValuesForRemoteRecords:(id)arg1 error:(id*)arg2;
- (id)_smartGroupsForAccountsWithIdentifiers:(id)arg1 contactStore:(id)arg2;
- (id)_smartGroupsMatchingPredicate:(id)arg1 contactStore:(id)arg2;
- (id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2;
- (BOOL)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id*)arg3;
- (id)contactObservableForFetchRequest:(id)arg1;
- (id)containersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)defaultContainerIdentifier;
- (BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (BOOL)executeSaveRequest:(id)arg1 response:(id*)arg2 error:(id*)arg3;
- (id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)initWithPersistenceStack:(id)arg1;
- (id)meContactIdentifiers:(id*)arg1;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2;
- (BOOL)registerChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(id)arg2;
- (BOOL)requestAccessForEntityType:(long long)arg1 error:(id*)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (BOOL)setMeContact:(id)arg1 error:(id*)arg2;
- (void)setNotificationSource:(id)arg1;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2;
- (BOOL)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2;

@end