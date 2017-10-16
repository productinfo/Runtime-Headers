/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABPeoplePickerGroupHelperFactory : NSObject <ABGroupHelperFactory> {
    ABPeoplePickerScope * _pickerScope;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)dealloc;
- (id)initWithPickerScope:(id)arg1;
- (id)makeBrowsingSelectHelper:(id)arg1;
- (id)makeCopyHelper:(id)arg1;
- (id)makeCreateHelper:(id)arg1;
- (id)makeCreateSmartGroupFromSearchHelper;
- (id)makeCreateSmartGroupHelper;
- (id)makeCutHelper:(id)arg1;
- (id)makeDeleteHelper:(id)arg1;
- (id)makeDragHelper:(id)arg1;
- (id)makeDropHelper:(id)arg1;
- (id)makeEditSmartGroupHelper:(id)arg1;
- (id)makeImportFilesHelper:(id)arg1 showImportConfirmation:(BOOL)arg2;
- (id)makePasteHelper:(id)arg1;
- (id)makeRenameHelper:(id)arg1;
- (id)makeSearchingSelectHelper:(id)arg1;
- (id)makeSectionSelectHelperWithIdentifier:(id)arg1;

@end