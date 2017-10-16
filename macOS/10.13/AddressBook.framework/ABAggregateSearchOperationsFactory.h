/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABAggregateSearchOperationsFactory : NSObject <ABSearchOperationsFactory> {
    NSArray * _searchOperationsFactories;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)dealloc;
- (id)initWithSearchOperationsFactories:(id)arg1;
- (id)searchOperationsForString:(id)arg1 addressBook:(id)arg2 delegate:(id)arg3;

@end