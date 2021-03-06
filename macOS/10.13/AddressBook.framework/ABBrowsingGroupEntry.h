/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABBrowsingGroupEntry : ABGroupEntry

@property (atomic, readonly, retain) ABAccount *account;
@property (atomic, readonly, retain) ABAddressBook *addressBook;

- (id)account;
- (id)actionScope;
- (id)addressBook;
- (BOOL)canDrag;
- (BOOL)canSelect;
- (id)importFilesHelperWithFactory:(id)arg1 filenames:(id)arg2 showConfirmation:(BOOL)arg3;
- (id)pasteHelperWithFactory:(id)arg1;
- (id)selectHelperWithFactory:(id)arg1;
- (BOOL)shouldImportToDefaultAccount;

@end
