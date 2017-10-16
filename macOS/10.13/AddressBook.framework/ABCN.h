/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCN : NSObject

// ABCN (ABCNMultiValueDiff)

+ (id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2;

// ABCN (ContactDiff)

+ (id)diffContact:(id)arg1 to:(id)arg2;

// ABCN (ContactNameOrder)

+ (id)joinNonEmptyKeys:(id)arg1 onContact:(id)arg2;
+ (id)joinNonEmptyKeys:(id)arg1 onContact:(id)arg2 withDelimiter:(id)arg3;

// ABCN (ContactSource)

+ (id)_accountCollectionForPersistenceURL:(id)arg1;
+ (id)accountForContact:(id)arg1 inAddressBook:(id)arg2;
+ (id)accountForContactWithIdentifier:(id)arg1 inAddressBook:(id)arg2;
+ (id)accountsForContactsWithIdentifiers:(id)arg1 inAddressBook:(id)arg2;
+ (id)fetchAllContactInAddressBookViaAPI:(id)arg1 error:(id*)arg2;
+ (id)fetchContactWithIdentifier:(id)arg1 inAddressBook:(id)arg2 error:(id*)arg3;
+ (id)fetchContactsMatchingPredicate:(id)arg1 addressBook:(id)arg2 error:(id*)arg3;
+ (id)fetchContactsMatchingPredicate:(id)arg1 inAddressBookViaCoreData:(id)arg2 error:(id*)arg3;
+ (id)fetchContactsWithCoreDataRequest:(id)arg1 inAddressBook:(id)arg2 error:(id*)arg3;
+ (id)fetchContactsWithIdentifiers:(id)arg1 inAddressBook:(id)arg2 error:(id*)arg3;
+ (id)fetchContactsWithIdentifiers:(id)arg1 unify:(BOOL)arg2 inAddressBook:(id)arg3 error:(id*)arg4;
+ (id)fetchContactsWithLinkIdentifier:(id)arg1 inAddressBook:(id)arg2 error:(id*)arg3;
+ (id)fetchRequestForContacts;
+ (BOOL)isContactReadOnly:(id)arg1 inAddressBook:(id)arg2;
+ (void)logFetchTimesWithStopWatch:(id)arg1 resultCount:(unsigned long long)arg2;
+ (id)nts_fetchContactsWithCoreDataRequest:(id)arg1 inContext:(id)arg2 addressBook:(id)arg3 error:(id*)arg4;
+ (void)performBlockAndWaitWithManagedObjectContext:(id)arg1 addressBook:(id)arg2;
+ (id)performResultBlockWithManagedObjectContext:(id)arg1 addressBook:(id)arg2;
+ (id)photoForContact:(id)arg1 inAddressBook:(id)arg2;
+ (id)photoForContacts:(id)arg1 inAddressBook:(id)arg2;
+ (BOOL)setImageData:(id)arg1 onContact:(id)arg2 inAddressBook:(id)arg3 error:(id*)arg4;
+ (BOOL)setImageData:(id)arg1 onLinkedContacts:(id)arg2 inAddressBook:(id)arg3 error:(id*)arg4;
+ (BOOL)setImageData:(id)arg1 onNonUnifiedContact:(id)arg2 inAddressBook:(id)arg3 error:(id*)arg4;
+ (id)sortContactsByName:(id)arg1;
+ (id)stopWatch;
+ (id)unifyContacts:(id)arg1 inAddressBook:(id)arg2;

// ABCN (FromABConversions)

+ (id)abcnContactFromABCDContact:(id)arg1;
+ (id)abcnContactFromABPerson:(id)arg1;
+ (id)abcnGroupFromABCDGroup:(id)arg1;
+ (id)abcnGroupFromABGroup:(id)arg1;
+ (id)abcnMultiValueFromABMultiValue:(id)arg1 transform:(id)arg2;

// ABCN (MultiValueTransforms)

+ (id)instantMessageAddressFromDictionaryTransform;
+ (id)instantMessageAddressToDictionaryTransform;
+ (id)nullTransform;
+ (id)postalAddressFromDictionaryTransform;
+ (id)postalAddressToDictionaryTransform;
+ (id)socialProfileFromDictionaryTransform;
+ (id)socialProfileToDictionaryTransform;

// ABCN (PropertyDescription)

+ (id)alertTonesDescription;
+ (id)allContactProperties;
+ (id)alternateBirthdayComponentsDescription;
+ (id)birthdayComponentsDescription;
+ (id)companyNameDescription;
+ (id)contactPropertiesByAddressBookProperty;
+ (id)contactPropertiesByKey;
+ (id)contactRelationshipKeyPathsForPrefetching;
+ (id)creationDateDescription;
+ (id)departmentDescription;
+ (id)displayStyleDescription;
+ (id)emailAddressesDescription;
+ (id)firstNameDescription;
+ (id)identifierDescription;
+ (id)instantMessagAddressesDescription;
+ (id)jobTitleDescription;
+ (id)lastNameDescription;
+ (id)linkIdentifierDescription;
+ (id)maidenNameDescription;
+ (id)makeAllContactProperties;
+ (id)makeContactPropertiesByAddressBookProperty;
+ (id)makeContactPropertiesByKey;
+ (id)makeContactRelationshipKeyPathsForPrefetching;
+ (id)middleNameDescription;
+ (id)multiValueContactProperties;
+ (id)nameOrderDescription;
+ (id)nameSuffixDescription;
+ (id)nameTitleDescription;
+ (id)nicknameDescription;
+ (id)noteDescription;
+ (id)otherDateComponentsDescription;
+ (id)otherDatesDescription;
+ (id)phoneNumbersDescription;
+ (id)phonemeDataDescription;
+ (id)phoneticCompanyNameDescription;
+ (id)phoneticFirstNameDescription;
+ (id)phoneticLastNameDescription;
+ (id)phoneticMiddleNameDescription;
+ (id)postalAddressesDescription;
+ (id)preferredApplePersonaIdentifierDescription;
+ (id)preferredForNameDescription;
+ (id)preferredForPhotoDescription;
+ (id)preferredLikenessSourceDescription;
+ (id)relatedNamesDescription;
+ (id)ringtoneDescription;
+ (id)singleValueContactProperties;
+ (id)socialProfilesDescription;
+ (id)sortingFirstNameDescription;
+ (id)sortingLastNameDescription;
+ (id)texttoneDescription;
+ (id)urlAddressesDescription;
+ (id)writableContactProperties;
+ (id)writableMultiValueContactProperties;
+ (id)writableSingleValueContactProperties;

// ABCN (SaveRequestExecutor)

+ (void)addOrUpdateContact:(id)arg1 toSaveRequest:(id)arg2;
+ (BOOL)executeSaveRequest:(id)arg1 withDataMapper:(id)arg2 error:(id*)arg3;

// ABCN (ToABConversions)

+ (id)abMultiValueFromABCNMultiValue:(id)arg1 transform:(id)arg2;

// ABCN (UnifiedContacts)

+ (id)groupIdentifiersByLabeledValue:(id)arg1 forProperty:(id)arg2;
+ (id)identifierMapForUnifiedContact:(id)arg1 backingContacts:(id)arg2;
+ (id)identifierMapForUnifiedMultiValue:(id)arg1 backingMultiValues:(id)arg2 forProperty:(id)arg3;
+ (unsigned long long)indexOfPreferredContactsForUnifying:(id)arg1;
+ (unsigned long long)indexOfUnifiedIdentifier:(id)arg1 onNonUnifiedMultiValue:(id)arg2 withIdentifierMap:(id)arg3;
+ (id)unifyContacts:(id)arg1;
+ (id)unifyContacts:(id)arg1 withIndexOfPreferredContact:(unsigned long long)arg2;
+ (id)unifyMultivalues:(id)arg1 forProperty:(id)arg2;

@end