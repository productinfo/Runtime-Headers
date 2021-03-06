/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABSuggestedEntriesFetcher : NSObject {
    ABAddressBook * _addressBook;
    NSMutableDictionary * _entries;
    NSString * _filterTerms;
    ABPersonEntry * _meEntry;
}

@property (nonatomic, readwrite, retain) ABAddressBook *addressBook;
@property (nonatomic, readwrite, retain) NSMutableDictionary *entries;
@property (nonatomic, readwrite, retain) NSString *filterTerms;
@property (nonatomic, readwrite, retain) ABPersonEntry *meEntry;

+ (id)abInstantMessageAddressFromInstantMessageAddress:(id)arg1;
+ (id)abPostalAddressDictionaryFromPosstalAddress:(id)arg1;
+ (id)abSocialProfileFromSocialProfile:(id)arg1;
+ (id)keyDescriptor;
+ (id)sanitizedLabelFromLabel:(id)arg1;

- (void).cxx_destruct;
- (id)addressBook;
- (id)entries;
- (id)entriesByUIDForContacts:(id)arg1 createMeEntry:(BOOL)arg2;
- (void)fetchEntries;
- (void)fetchMeEntry;
- (id)fetchSuggestedContacts;
- (id)fetchSuggestedMeContact;
- (id)filterTerms;
- (id)initWithAddressBook:(id)arg1 filterTerms:(id)arg2;
- (id)meEntry;
- (id)multiValueWithInstantMessageAddresses:(id)arg1;
- (id)multiValueWithLabeledValues:(id)arg1;
- (id)multiValueWithPhoneNumbers:(id)arg1;
- (id)multiValueWithPostalAddresses:(id)arg1;
- (id)multiValueWithSocialProfiles:(id)arg1;
- (id)personFromContact:(id)arg1;
- (id)resultEntriesByUID;
- (id)resultMeEntry;
- (void)setAddressBook:(id)arg1;
- (void)setEntries:(id)arg1;
- (void)setFilterTerms:(id)arg1;
- (void)setMeEntry:(id)arg1;

@end
