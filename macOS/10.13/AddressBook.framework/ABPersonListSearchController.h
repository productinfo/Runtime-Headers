/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABPersonListSearchController : NSObject <NSSearchFieldDelegate, NSTextFieldDelegate> {
    ABAddressBook * _browsingAddressBook;
    <ABPersonListHeadlining> * _browsingHeadliner;
    unsigned long long  _countOfLocalSearchesPerformed;
    unsigned long long  _countOfServerSearchesPerformed;
    ABPersonSearchConfiguration * _currentConfiguration;
    <ABPersonSearchControllerDelegate> * _delegate;
    <ABPersonListControllerProtocol> * _personListController;
    NSString * _previousSearchString;
    NSSearchField * _searchField;
    BOOL  _shouldSelectBestEntry;
    ABPersonListSearchControllerUsageStatisticsHelper * _usageStatisticsHelper;
}

@property (atomic, readwrite, retain) ABAddressBook *browsingAddressBook;
@property (atomic, readwrite, retain) <ABPersonListHeadlining> *browsingHeadliner;
@property (atomic, readonly) unsigned long long countOfLocalSearchesPerformed;
@property (atomic, readonly) unsigned long long countOfServerSearchesPerformed;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) <ABPersonSearchControllerDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) <ABPersonListControllerProtocol> *personListController;
@property (atomic, readwrite, copy) NSString *previousSearchString;
@property (nonatomic, readwrite) NSSearchField *searchField;
@property (atomic, readwrite, copy) NSString *searchString;
@property (atomic, readonly, copy) NSArray *searchTerms;
@property (nonatomic, readwrite) BOOL shouldSelectBestEntry;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, retain) ABPersonListSearchControllerUsageStatisticsHelper *usageStatisticsHelper;

- (void)_implicitlyAdvanceTheSelection:(id)arg1;
- (void)_searchFieldAction:(id)arg1;
- (id)browsingAddressBook;
- (id)browsingHeadliner;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (unsigned long long)countOfLocalSearchesPerformed;
- (unsigned long long)countOfServerSearchesPerformed;
- (void)dealloc;
- (id)delegate;
- (void)focusSearchField:(id)arg1;
- (id)personListController;
- (id)previousSearchString;
- (void)resetCountsOfSearchesPerformed;
- (void)searchConfigurationPerformedLocalSearch;
- (void)searchConfigurationPerformedServerSearch;
- (id)searchField;
- (void)searchForString:(id)arg1;
- (id)searchString;
- (id)searchTerms;
- (void)selectBestRecordMatchingQuery:(id)arg1;
- (void)selectNext:(id)arg1;
- (void)selectPrevious:(id)arg1;
- (void)setBrowsingAddressBook:(id)arg1;
- (void)setBrowsingHeadliner:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPersonListController:(id)arg1;
- (void)setPlaceholderStringForAllContacts;
- (void)setPlaceholderStringWithGroupName:(id)arg1;
- (void)setPreviousSearchString:(id)arg1;
- (void)setSearchConfiguration:(id)arg1;
- (void)setSearchField:(id)arg1;
- (void)setSearchGroupName:(id)arg1 isAllContacts:(BOOL)arg2;
- (void)setSearchString:(id)arg1;
- (void)setShouldSelectBestEntry:(BOOL)arg1;
- (void)setUsageStatisticsHelper:(id)arg1;
- (BOOL)shouldSelectBestEntry;
- (id)usageStatisticsHelper;

@end