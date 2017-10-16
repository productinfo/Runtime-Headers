/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABAddressBookCommandExecutionPolicy : ABCommandExecutionPolicy {
    ABAddressBook * _addressBook;
    SEL  _saveHook;
}

- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 saveOnExecute:(BOOL)arg2;
- (void)nullSaveHook;
- (void)runWithBlock:(id)arg1;
- (void)saveHook;

@end