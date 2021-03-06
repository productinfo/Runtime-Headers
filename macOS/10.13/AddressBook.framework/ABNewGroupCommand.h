/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABNewGroupCommand : ABCommand {
    NSDictionary * _groupProperties;
    ABGroup * _newGroup;
    ABGroup * _parentGroup;
    NSArray * _selectedRecords;
}

- (void)dealloc;
- (BOOL)doIt;
- (void)finalize;
- (id)initWithPeople:(id)arg1 parentGroup:(id)arg2 addressBook:(id)arg3;
- (id)newGroup;
- (void)redoIt;
- (void)undoIt;

@end
