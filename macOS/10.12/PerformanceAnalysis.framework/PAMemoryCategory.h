/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
 */

@interface PAMemoryCategory : NSObject <NSCoding> {
    NSMutableSet * _memObjects;
    NSMutableDictionary * _subCategories;
    NSString * name;
    PAProcess * process;
    long long  totalCleanSize;
    long long  totalDirtySize;
    long long  totalReclaimableSize;
    long long  totalSwappedSize;
}

@property (atomic, readonly) NSSet *memObjects;
@property (atomic, readonly) NSString *name;
@property (atomic, readonly) PAProcess *process;
@property (atomic, readonly) NSDictionary *subCategories;
@property (atomic, readonly) long long totalCleanSize;
@property (atomic, readonly) long long totalDirtySize;
@property (atomic, readonly) long long totalReclaimableSize;
@property (atomic, readonly) long long totalSwappedSize;

- (id)_sortedNonZeroSubCategoriesForFlavor:(int)arg1;
- (void)addMemoryObject:(id)arg1;
- (void)dealloc;
- (id)detailStringForFlavor:(int)arg1 andCallOutSwapped:(BOOL)arg2 andShowCategories:(BOOL)arg3 andShowRegions:(BOOL)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 forProcess:(id)arg2;
- (id)memObjects;
- (id)name;
- (id)process;
- (id)subCategories;
- (long long)totalCleanSize;
- (long long)totalDirtySize;
- (long long)totalReclaimableSize;
- (long long)totalSwappedSize;

@end
