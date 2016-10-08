/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreText.framework/Versions/A/CoreText
 */

@interface NSMutableFontCollection : NSFontCollection

+ (id)_collectionAtURL:(id)arg1 error:(id*)arg2;
+ (id)_newFromDictionary:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)fontCollectionWithAllAvailableDescriptors;
+ (id)fontCollectionWithDescriptors:(id)arg1;
+ (id)fontCollectionWithLocale:(id)arg1;

- (void)_editQueryForDescriptor:(id)arg1 newIncludes:(id*)arg2 newExcludes:(id*)arg3;
- (void)addQueryForDescriptors:(id)arg1;
- (void)removeQueryForDescriptors:(id)arg1;
- (void)setCollectionAttributes:(id)arg1;
- (void)setExclusionDescriptors:(id)arg1;
- (void)setQueryDescriptors:(id)arg1;

@end
