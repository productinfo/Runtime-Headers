/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSObjectDetailBinder : NSEditorBinder {
    NSResponder * _errorPresenter;
    struct __objectDetailBinderFlags { 
        unsigned int _handlesContentAsCompoundValue : 1; 
        unsigned int _deletesObjectsOnRemove : 1; 
        unsigned int _reservedObjectDetailBinder : 30; 
    }  _objectDetailBinderFlags;
}

+ (id)bindingCategory;
+ (id)bindingsForObject:(id)arg1;
+ (void)initialize;
+ (BOOL)isUsableWithObject:(id)arg1;
+ (id)objectMechanismsRequiredForObject:(id)arg1;

- (void)_connectionWasBroken;
- (void)_connectionWasEstablished;
- (void)_copyDetailsFromBinder:(id)arg1;
- (void)_init;
- (void)_notifyEditorStateChanged:(BOOL)arg1;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3;
- (id)_optionsForBinding:(id)arg1 specifyOnlyIfDifferentFromDefault:(BOOL)arg2;
- (id)_referenceBinding;
- (void)_setParameter:(id)arg1 forOption:(id)arg2 withBindingInfo:(id)arg3;
- (void)_useErrorPresenter:(id)arg1;
- (BOOL)deletesObjectsOnRemove;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)handlesContentAsCompoundValue;
- (id)initWithCoder:(id)arg1;
- (void)noteContentValueHasChanged;
- (void)refreshDetailContent;
- (void)setDeletesObjectsOnRemove:(BOOL)arg1;
- (void)setHandlesContentAsCompoundValue:(BOOL)arg1;
- (BOOL)setMasterObjectRelationship:(id)arg1;
- (BOOL)setMasterObjectRelationship:(id)arg1 refreshDetailContent:(BOOL)arg2;

@end