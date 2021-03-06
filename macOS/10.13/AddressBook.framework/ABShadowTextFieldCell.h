/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABShadowTextFieldCell : NSTextFieldCell {
    NSAttributedString * _alternatePlaceholder;
    BOOL  _displaysAlternatePlaceholder;
    NSTextView * _fieldEditor;
    BOOL  _ignoredByAccessibility;
    NSAttributedString * _originalPlaceholder;
}

@property (atomic, readwrite, copy) NSAttributedString *alternatePlaceholder;
@property (nonatomic, readwrite) BOOL displaysAlternatePlaceholder;
@property (getter=accessibilityIsIgnored, atomic, readwrite) BOOL ignoredByAccessibility;
@property (atomic, readwrite, copy) NSAttributedString *originalPlaceholder;

- (void).cxx_destruct;
- (BOOL)accessibilityIsIgnored;
- (id)alternatePlaceholder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)displaysAlternatePlaceholder;
- (id)fieldEditorForView:(id)arg1;
- (id)originalPlaceholder;
- (void)setAlternatePlaceholder:(id)arg1;
- (void)setDisplaysAlternatePlaceholder:(BOOL)arg1;
- (void)setIgnoredByAccessibility:(BOOL)arg1;
- (void)setOriginalPlaceholder:(id)arg1;

@end
