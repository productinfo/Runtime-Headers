/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTextValueBinder : NSValueBinder {
    NSColor * _multipleValuesSelectionColor;
    NSColor * _noSelectionColor;
    NSColor * _notApplicableColor;
    NSColor * _nullColor;
    NSColor * _originalColor;
    struct __textBinderFlags { 
        unsigned int _objectSupportsTextColor : 1; 
        unsigned int _hasRequestedTextColor : 1; 
        unsigned int _reservedTextBinder : 30; 
    }  _textBinderFlags;
    id  _textColorBinder;
}

+ (id)binderClassesSuperseded;
+ (id)defaultTextColorWhenObjectValueIsUsed:(id)arg1;
+ (void)setDefaultTextColor:(id)arg1 whenObjectValueIsUsed:(id)arg2;

- (void)_adjustTextColorOfObject:(id)arg1 mode:(/* Warning: unhandled struct encoding: '{__NSKeyValueCodingControllerModeType=qQ@}' */ struct __NSKeyValueCodingControllerModeType { long long x1; unsigned long long x2; id x3; })arg2;
- (void)_clearDependenciesWithAllPeerBinders;
- (void)_connectionWasEstablished;
- (void)_copyDetailsFromBinder:(id)arg1;
- (void)_dealloc;
- (void)_endChanging;
- (void)_init;
- (void)_noticeTextColorPeerBinder:(id)arg1;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3;
- (void)_setObject:(id)arg1;
- (void)_startChanging;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTextColor:(id)arg1 whenObjectValueIsUsed:(id)arg2;
- (id)textColorWhenObjectValueIsUsed:(id)arg1;
- (void)updateOutlineColumnDataCell:(id)arg1 forDisplayAtIndexPath:(id)arg2;
- (void)updateTableColumnDataCell:(id)arg1 forDisplayAtIndex:(unsigned long long)arg2;

@end