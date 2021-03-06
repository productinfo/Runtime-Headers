/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNCDContactFetchRequestDescription : NSObject {
    id  _contactsByNameComparator;
    NSArray * _effectiveKeysToFetch;
    <CNCDContactPredicate> * _predicate;
    NSError * _predicateError;
    NSArray * _relationshipKeyPaths;
    NSArray * _sortDescriptors;
    BOOL  _unifyResults;
}

@property (atomic, readonly, copy) id contactsByNameComparator;
@property (atomic, readonly, copy) NSArray *effectiveKeysToFetch;
@property (atomic, readonly, copy) NSArray *relationshipKeyPaths;
@property (atomic, readonly, copy) NSArray *sortDescriptors;
@property (atomic, readonly) BOOL unifyResults;

+ (id)descriptionWithFetchRequest:(id)arg1;

- (void).cxx_destruct;
- (id)contactsByNameComparator;
- (id)effectiveKeysToFetch;
- (id)relationshipKeyPaths;
- (id)sortDescriptors;
- (BOOL)unifyResults;
- (id)validatedPredicateWithError:(id*)arg1;

// CNCDContactFetchRequestDescription (CNCDContactFetchRequestDescriptionBuilder)

- (id)initWithBuilder:(id)arg1;

@end
