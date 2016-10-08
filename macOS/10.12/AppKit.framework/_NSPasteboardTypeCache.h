/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSPasteboardTypeCache : NSObject {
    NSMapTable * _cachedRequestOnlyTypeNames;
    NSMutableSet * _cachedTypeNameUnion;
    NSMutableArray * _cachedTypeNames;
    NSMutableSet * _conformingTypeIdentifiers;
}

@property (nonatomic, readonly, retain) NSMutableSet *_cachedTypeNameUnion;
@property (nonatomic, readwrite, retain) NSMutableArray *_cachedTypeNames;

- (void)_addRequestOnlyType:(id)arg1 forIndex:(long long)arg2;
- (id)_cachedTypeNameUnion;
- (id)_cachedTypeNames;
- (id)_conformingTypeIdentifiers;
- (id)_requestOnlyTypesForIndex:(long long)arg1;
- (void)dealloc;
- (id)init;
- (void)set_cachedTypeNames:(id)arg1;

@end
