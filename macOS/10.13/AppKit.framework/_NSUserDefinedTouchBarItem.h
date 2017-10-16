/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSUserDefinedTouchBarItem : NSTouchBarItem <NSValidatedUserInterfaceItem> {
    SEL  _action;
    NSString * _actionName;
    NSButton * _button;
    NSString * _imageName;
    NSString * _keyChars;
    unsigned short  _keyCode;
    NSString * _label;
    NSString * _longPressEndKeyChars;
    unsigned long long  _modifiers;
    long long  _tag;
    NSString * _title;
}

@property (atomic, readwrite) SEL action;
@property (atomic, readwrite, copy) NSString *actionName;
@property (atomic, readonly) id effectiveTarget;
@property (atomic, readwrite, copy) NSString *imageName;
@property (atomic, readwrite, copy) NSString *label;
@property (atomic, readwrite) long long tag;

- (void)_click:(id)arg1;
- (void)_handleAction:(id)arg1;
- (void)_longPress:(id)arg1;
- (void)_validateUserDefinedTouchBarItem;
- (SEL)action;
- (id)actionName;
- (id)customizationLabel;
- (void)dealloc;
- (id)effectiveTarget;
- (id)imageName;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)label;
- (void)setAction:(SEL)arg1;
- (void)setActionName:(id)arg1;
- (void)setImageName:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setTag:(long long)arg1;
- (long long)tag;
- (id)view;

@end