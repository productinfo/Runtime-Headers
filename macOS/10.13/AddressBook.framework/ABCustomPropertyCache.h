/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCustomPropertyCache : NSObject {
    NSMutableDictionary * _propertiesByNameByRecordTypeByPersistentStore;
}

+ (id)storeIdentifierForStore:(id)arg1;

- (void)accountRepositoryDidChange:(id)arg1;
- (void)cacheCustomProperties:(id)arg1 withRecordType:(id)arg2;
- (id)cachedCustomPropertiesByNameForRecordType:(id)arg1 persistentStore:(id)arg2;
- (void)clearCustomPropertyCaches;
- (id)customPropertyDescriptionWithName:(id)arg1 recordType:(id)arg2 inContext:(id)arg3 persistentStore:(id)arg4;
- (id)customPropertyDescriptionsByNameWithRecordType:(id)arg1 inManagedObjectContext:(id)arg2 persistentStore:(id)arg3;
- (id)customPropertyDescriptionsWithRecordType:(id)arg1 inContext:(id)arg2 persistentStore:(id)arg3;
- (id)customPropertyWithName:(id)arg1 recordType:(id)arg2 inContext:(id)arg3 persistentStore:(id)arg4;
- (void)dealloc;
- (id)init;
- (void)nts_cacheCustomProperty:(id)arg1 forPropertyName:(id)arg2 recordType:(id)arg3 persistentStoreIdentifier:(id)arg4;
- (id)nts_propertiesByNameByRecordTypeForstoreIdentifier:(id)arg1;
- (id)nts_propertiesByNameForRecordType:(id)arg1 inPropertiesByNameByRecordType:(id)arg2;

@end
