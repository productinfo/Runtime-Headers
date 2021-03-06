/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
 */

@interface DDTypeChecker : NSObject {
    NSMutableDictionary * _cache;
    NSDictionary * _collection;
    <DDTypeCheckerDelegate> * _delegate;
}

@property (atomic, readwrite) <DDTypeCheckerDelegate> *delegate;

- (int)_deepValidateSubComponentRec:(id)arg1;
- (int)_validateCurrent:(id)arg1;
- (int)_validateRec:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithTypeCollection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)validate:(id)arg1;
- (int)validateNamedType:(id)arg1;

@end
