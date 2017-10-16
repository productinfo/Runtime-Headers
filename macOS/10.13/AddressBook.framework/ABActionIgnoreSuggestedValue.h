/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABActionIgnoreSuggestedValue : NSObject <ABActionDelegate> {
    <ABCardCollectionViewDelegate> * _delegate;
    ABCollectionViewItem * _item;
    NSString * _property;
    id  _value;
}

@property (atomic, readonly) NSString *actionProperty;

- (id)actionProperty;
- (void)dealloc;
- (id)initWithProperty:(id)arg1 value:(id)arg2 delegate:(id)arg3 item:(id)arg4;
- (void)performActionForPerson:(id)arg1 identifier:(id)arg2;
- (id)titleForPerson:(id)arg1 identifier:(id)arg2;
- (id)unlocalizedTitle;

@end