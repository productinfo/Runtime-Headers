/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABGroupSearchingContext : NSObject {
    BOOL  _canCreateGroups;
    NSString * _groupLabel;
    <ABContactSearching> * _searchNode;
}

@property (atomic, readonly) BOOL canCreateGroups;
@property (atomic, readonly, copy) NSString *groupLabel;
@property (atomic, readonly, retain) <ABContactSearching> *searchNode;

- (BOOL)canCreateGroups;
- (void)dealloc;
- (id)groupLabel;
- (id)initWithSearchNode:(id)arg1 groupLabel:(id)arg2 canCreateGroups:(BOOL)arg3;
- (id)searchNode;

@end
