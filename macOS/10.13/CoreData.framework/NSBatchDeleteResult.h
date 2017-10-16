/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSBatchDeleteResult : NSPersistentStoreResult {
    id  _aggregatedResult;
    unsigned long long  _resultType;
}

@property (atomic, readonly) id result;
@property (atomic, readonly) unsigned long long resultType;

- (void)dealloc;
- (id)initWithResultType:(unsigned long long)arg1 andObject:(id)arg2;
- (id)initWithSubresults:(id)arg1;
- (id)result;
- (unsigned long long)resultType;

@end