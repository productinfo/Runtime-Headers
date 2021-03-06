/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCustomLabelController : NSObject {
    NSView<ABCardCollectionRowView> * mDatumView;
    NSPanel * mEditPanel;
    NSTextField * mLabelField;
    NSButton * mOkayButton;
}

+ (void)addCustomLabelToDatumView:(id)arg1;

- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)commit:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)help:(id)arg1;
- (id)initWithDatumView:(id)arg1;
- (void)runLabelSheet;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3;

@end
