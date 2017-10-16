/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABMetadataAddOperation : ABMetadataOperation {
    ABAddressBook * _addressBookForReading;
    NSArray * _uniqueIds;
}

- (void)_doMain;
- (void)_writeMetaDataForPeople:(id)arg1 withLock:(BOOL)arg2;
- (void)dealloc;
- (id)initWithMetadataManager:(id)arg1 recordUniqueIds:(id)arg2;
- (void)main;
- (int)metadataJobType;

@end